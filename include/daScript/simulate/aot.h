
#include "daScript/simulate/runtime_profile.h"
#include "daScript/simulate/debug_print.h"
#include "daScript/simulate/sim_policy.h"
#include "daScript/simulate/aot_builtin.h"
#include "daScript/simulate/aot_builtin_math.h"
#include "daScript/simulate/aot_builtin_matrix.h"
#include "daScript/simulate/aot_builtin_random.h"
#include "daScript/simulate/aot_builtin_time.h"
#include "daScript/simulate/aot_builtin_string.h"
#include "daScript/simulate/bin_serializer.h"

namespace das {

    #define DAS_MAKE_ANNOTATION(name)   ((TypeAnnotation*)(intptr_t(name)|1))

    template <typename TT>
    __forceinline void das_zero ( TT & a ) {
        memset(&a, 0, sizeof(TT));
    }

    template <typename TT>
    __forceinline void das_move ( TT & a, TT & b ) {
        a = b;
        memset(&b, 0, sizeof(TT));
    }
    

    template <typename TT, int offset>
    __forceinline TT & das_global ( Context * __context__ ) {
        return *(TT *)(__context__->globals + offset);
    }

    template <typename TT, int offset>
    __forceinline void das_global_zero ( Context * __context__ ) {
        memset(__context__->globals + offset, 0, sizeof(TT));
    }

    template <typename TT>
    struct das_arg {
        static __forceinline TT & pass ( TT && a ) {
            return *((TT *)&a);
        }
        static __forceinline TT & pass ( TT & a ) {
            return a;
        }
    };

    template <typename ResT,typename VecT, int index>
    struct das_swizzle_ref {
        static ResT & swizzle ( VecT & val ) {
            return  *((ResT *)((&val.x) + index));
        }
    };

    template <typename ResT,typename VecT, int index>
    struct das_swizzle_seq {
        static const ResT & swizzle ( const VecT & val ) {
            return  *((const ResT *)((&val.x) + index));
        }
    };

    template <typename TT>
    struct cast_vec_ref {
        static __forceinline TT & to(vec4f & x) {
            return *(TT *)(&x);
        }
        static __forceinline TT & to(TT & x) {
            return x;
        }
        static __forceinline const TT & to(const vec4f & x) {
            return *(TT *)(&x);
        }
        static __forceinline const TT & to(const TT & x) {
            return x;
        }
    };

    template <typename TT>
    struct das_cast {
        template <typename QQ>
        static __forceinline TT & cast ( QQ & expr ) {
            return reinterpret_cast<TT&>(expr);
        }
    };

    template <typename TT>
    struct das_cast<TT *> {
        template <typename QQ>
        static __forceinline TT * cast ( QQ * expr ) {
            return reinterpret_cast<TT *>(expr);
        }
    };

    template <typename TT>
    struct das_upcast {
        template <typename QQ>
        static __forceinline TT & cast ( QQ & expr ) {
            return expr;
        }
    };

    template <typename TT>
    struct das_upcast<TT *> {
        template <typename QQ>
        static __forceinline TT * cast ( QQ * expr ) {
            return static_cast<TT *>(expr);
        }
    };

    template <typename TT>
    struct das_index;

    template <typename TT, typename VecT, uint32_t size>
    struct das_vec_index {
        static __forceinline TT & at ( VecT & value, int32_t index, Context * __context__ ) {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return (&value.x)[idx];
        }
        static __forceinline const TT & at ( const VecT & value, int32_t index, Context * __context__ ) {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return (&value.x)[idx];
        }
        static __forceinline TT & at ( VecT & value, uint32_t idx, Context * __context__ ) {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return (&value.x)[idx];
        }
        static __forceinline const TT & at ( const VecT & value, uint32_t idx, Context * __context__ ) {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return (&value.x)[idx];
        }
    };

    template <typename TT> struct das_index<vec2<TT>> : das_vec_index<TT, vec2<TT>, 2> {};
    template <typename TT> struct das_index<vec3<TT>> : das_vec_index<TT, vec3<TT>, 3> {};
    template <typename TT> struct das_index<vec4<TT>> : das_vec_index<TT, vec4<TT>, 4> {};

    template <typename VecT, uint32_t size>
    struct das_index<Matrix<VecT,size>> {
        using MatT = Matrix<VecT,size>;
        static __forceinline VecT & at ( MatT & value, int32_t index, Context * __context__ ) {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return value.m[idx];
        }
        static __forceinline const VecT & at ( const MatT & value, int32_t index, Context * __context__ ) {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return value.m[idx];
        }
        static __forceinline VecT & at ( MatT & value, uint32_t idx, Context * __context__ ) {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return value.m[idx];
        }
        static __forceinline const VecT & at ( const MatT & value, uint32_t idx, Context * __context__ ) {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return value.m[idx];
        }
    };

    template <typename TT, uint32_t size>
    struct TDim {
        enum { capacity = size };
        TT  data[size];
        __forceinline TT & operator [] ( int32_t index ) {
            return data[index];
        }
        __forceinline const TT & operator [] ( int32_t index ) const {
            return data[index];
        }
        __forceinline TT & operator () ( int32_t index, Context * __context__ ) {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return data[index];
        }
        __forceinline const TT & operator () ( int32_t index, Context * __context__ ) const {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return data[index];
        }
        __forceinline TT & operator () ( uint32_t idx, Context * __context__ ) {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return data[index];
        }
        __forceinline const TT & operator () ( uint32_t idx, Context * __context__ ) const {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return data[index];
        }
    };

    template <typename TT>
    struct TArray : Array {
        TArray() = default;
        TArray(TArray & arr) { moveA(arr); }
        TArray(TArray && arr ) { moveA(arr); }
        TArray & operator = ( TArray & arr ) { moveA(arr); return *this; }
        TArray & operator = ( TArray && arr ) { moveA(arr); return *this; }
        __forceinline void moveA ( Array & arr ) {
            data = arr.data; arr.data = 0;
            size = arr.size; arr.size = 0;
            capacity = arr.capacity; arr.capacity = 0;
            lock = arr.lock; arr.lock = 0;
        }
        __forceinline TT & operator [] ( int32_t index ) {
            return ((TT *)data)[index];
        }
        __forceinline const TT & operator [] ( int32_t index ) const {
            return ((TT *)data)[index];
        }
        __forceinline TT & operator () ( int32_t index, Context * __context__ ) {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return ((TT *)data)[index];
        }
        __forceinline const TT & operator () ( int32_t index, Context * __context__ ) const {
            uint32_t idx = uint32_t(index);
            if ( idx>=size ) __context__->throw_error("index out of range");
            return ((TT *)data)[index];
        }
        __forceinline TT & operator () ( uint32_t idx, Context * __context__ ) {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return ((TT *)data)[index];
        }
        __forceinline const TT & operator () ( uint32_t idx, Context * __context__ ) const {
            if ( idx>=size ) __context__->throw_error("index out of range");
            return ((TT *)data)[index];
        }
    };

    template <typename TK, typename TV>
    struct TTable : Table {
        TTable() = default;
        TTable(TTable & arr) { moveT(arr); }
        TTable(TTable && arr ) { moveT(arr); }
        TTable & operator = ( TTable & arr ) { moveT(arr); return *this; }
        TTable & operator = ( TTable && arr ) { moveT(arr); return *this; }
        __forceinline void moveT ( Table & arr ) {
            data = arr.data; arr.data = 0;
            size = arr.size; arr.size = 0;
            capacity = arr.capacity; arr.capacity = 0;
            lock = arr.lock; arr.lock = 0;
            keys = arr.keys; arr.keys = 0;
            hashes = arr.hashes; arr.hashes = 0;
            maxLookups = arr.maxLookups; arr.maxLookups = 0;
            shift = arr.shift; arr.shift = 0;
        }
        __forceinline TV & operator () ( const TK & key, Context * __context__ ) {
            TableHash<TK> thh(__context__,sizeof(TV));
            auto hfn = hash_function(*__context__, key);
            int index = thh.reserve(*this, key, hfn);
            return ((TV *)data)[index];
        }
    };

    template <typename TT>
    struct das_iterator;

    template <>
    struct das_iterator <range> {
        __forceinline das_iterator(const range & r) : that(r) {}
        __forceinline bool first ( Context *, int32_t & i ) { i = that.from; return i!=that.to; }
        __forceinline bool next  ( Context *, int32_t & i ) { i++; return i!=that.to; }
        __forceinline void close ( Context *, int32_t &   ) {}
        range that;
    };

    template <typename TT>
    struct das_iterator<TArray<TT>> {
        __forceinline das_iterator(TArray<TT> & r) : that(&r) {
            array_end = (TT *)(r.data + r.size*sizeof(TT));
        }
        __forceinline bool first ( Context * __context__, TT * & i ) {
            array_lock(*__context__, *that);
            i = (TT *) that->data;
            return i!=array_end;
        }
        __forceinline bool next  ( Context *, TT * & i ) {
            i++;
            return i!=array_end;
        }
        __forceinline void close ( Context * __context__, TT * & i ) {
            array_unlock(*__context__, *that);
            i = nullptr;
        }
        Array * that;
        TT * array_end;
    };

    template <typename TT, uint32_t size>
    struct das_iterator<TDim<TT,size>> {
        __forceinline das_iterator(TDim<TT,size> & r) : that(&r) {
            array_end = r.data + size;
        }
        __forceinline bool first ( Context *, TT * & i ) {
            i = (TT *) that->data;
            return i!=array_end;
        }
        __forceinline bool next  ( Context *, TT * & i ) {
            i++;
            return i!=array_end;
        }
        __forceinline void close ( Context *, TT * & i ) {
            i = nullptr;
        }
        TDim<TT,size> * that;
        TT *            array_end;
    };

    template <typename TT>
    struct das_iterator<vector<TT>> {
        __forceinline das_iterator(vector<TT> & r) {
            array_start = r.data();
            array_end = array_start + r.size();
        }
        __forceinline bool first ( Context *, TT * & i ) {
            i = array_start;
            return i!=array_end;
        }
        __forceinline bool next  ( Context *, TT * & i ) {
            i++;
            return i!=array_end;
        }
        __forceinline void close ( Context *, TT * & i ) {
            i = nullptr;
        }
        TT *            array_start;
        TT *            array_end;
    };

    template <typename TT>
    struct das_new {
        static __forceinline TT * make ( Context * __context__ ) {
            char * data = __context__->heap.allocate( sizeof(TT) );
            memset ( data, 0, sizeof(TT) );
            return (TT *) data;
        }
    };

    template <typename TT, int d0 = 0, int d1 = 0, int d2 = 0>
    struct das_new_dim;

    template <typename TT, int d>
    struct das_new_dim<TT,d,0,0> {
        static __forceinline TDim<TT *,d> make ( Context * __context__ ) {
            TDim<TT *,d> res;
            for ( int i=0; i!=d; ++i ) {
                res[i] = das_new<TT>::make(__context__);
            }
            return res;
        }
    };

    template <typename TT>
    struct das_delete_ptr;

    template <typename TT>
    struct das_delete_ptr<TT *> {
        static __forceinline void clear ( Context * __context__, TT * ptr ) {
            __context__->heap.free((char *)ptr, sizeof(TT));
        }
    };

    template <>
    struct das_delete_ptr<char *> {
        static __forceinline void clear ( Context * __context__, char * string ) {
            if ( __context__->heap.isHeapPtr(string) ) {
                auto header = ((StringHeader *) string) - 1;
                const uint32_t size = header->length + sizeof(StringHeader) + 1;
                __context__->heap.free((char *)header, size);
            }
        }
    };

    template <typename TT>
    struct das_delete;

    template <typename TT>
    struct das_delete<TT *> {
        static __forceinline void clear ( Context * __context__, TT * & ptr ) {
            das_delete_ptr<TT *>::clear(__context__,ptr);
            ptr = nullptr;
        }
    };

    template <typename TT, uint32_t size>
    struct das_delete<TDim<TT,size>> {
        static __forceinline void clear ( Context * __context__, TDim<TT,size> & dim ) {
            for ( uint32_t i=size; i!=0; --i ) {
                das_delete<TT>::clear(__context__,dim[i-1]);
            }
        }
    };

    template <typename TT>
    struct das_delete<TArray<TT>> {
        static __forceinline void clear ( Context * __context__, TArray<TT> & dim ) {
            if ( dim.data ) {
                if ( !dim.lock ) {
                    uint32_t oldSize = dim.capacity*sizeof(TT);
                    __context__->heap.free(dim.data, oldSize);
                } else {
                    __context__->throw_error("deleting locked array");
                }
            }
            memset ( &dim, 0, sizeof(TArray<TT>) );
        }
    };

    template <typename TKey, typename TVal>
    struct das_delete<TTable<TKey,TVal>> {
        static __forceinline void clear ( Context * __context__, TTable<TKey,TVal> & tab ) {
            if ( tab.data ) {
                if ( !tab.lock ) {
                    uint32_t oldSize = tab.capacity*(sizeof(TKey)+sizeof(TVal)+sizeof(uint32_t));
                    __context__->heap.free(tab.data, oldSize);
                } else {
                    __context__->throw_error("deleting locked table");
                }
            }
            memset ( &tab, 0, sizeof(TTable<TKey,TVal>) );
        }
    };

    template <typename TT>
    struct das_final_call {
        TT finalizer;
        das_final_call() = delete;
        das_final_call(das_final_call &) = delete;
        das_final_call & operator = (das_final_call &) = delete;
        __forceinline das_final_call ( TT && fn ) : finalizer(fn) {}
        __forceinline ~das_final_call () { finalizer(); }
    };

    template <typename TT>
    __forceinline das_final_call<TT> das_finally(TT && fn) {
        return das_final_call<TT>(move(fn));
    }

    template <typename TT>
    TT & das_deref ( Context * __context__, TT * ptr ) {
        if ( !ptr ) __context__->throw_error("dereferencing null pointer");
        return *ptr;
    }

    template <typename TT, typename AT, bool moveIt = false>
    struct das_ascend {
        static __forceinline TT * make(Context * __context__,const AT & init) {
            if ( char * ptr = (char *)__context__->heap.allocate(sizeof(AT)) ) {
                memcpy(ptr, &init, sizeof(AT));
                if (moveIt) {
                    memset((char *)&init, 0, sizeof(AT));
                }
                return (TT *) ptr;
            } else {
                __context__->throw_error("out of heap");
                return nullptr;
            }
        }
    };

    template <typename AT>
    struct das_ascend<Lambda,AT,false> {
        static __forceinline Lambda make(Context * __context__,const AT & init) {
            if ( char * ptr = (char *)__context__->heap.allocate(sizeof(AT)) ) {
                memcpy(ptr, &init, sizeof(AT));
                return Lambda(ptr);
            } else {
                __context__->throw_error("out of heap");
                return Lambda(nullptr);
            }
        }
    };

    template <typename TT>
    struct cast_aot_arg {
        static __forceinline TT to ( Context &, vec4f x ) {
            return cast<TT>::to(x);
        }
    };

    template <>
    struct cast_aot_arg<Context *> {
        static __forceinline Context * to ( Context & ctx, vec4f ) {
            return &ctx;
        }
    };

    template <>
    struct cast_aot_arg<vec4f> {
        static __forceinline vec4f to ( Context &, vec4f x ) {
            return x;
        }
    };

    template <typename Result>
    struct ImplAotStaticFunction {
        template <typename FunctionType, typename ArgumentsType, size_t... I>
        static __forceinline vec4f call(FunctionType && fn, Context & ctx, index_sequence<I...> ) {
            return cast<Result>::from(
            fn( cast_aot_arg< typename tuple_element<I, ArgumentsType>::type  >::to ( ctx, ctx.abiArguments()[ I ? I-1 : 0 ] )... ) );
        }
    };

    template <>
    struct ImplAotStaticFunction<void> {
        template <typename FunctionType, typename ArgumentsType, size_t... I>
        static __forceinline vec4f call(FunctionType && fn, Context & ctx, index_sequence<I...> ) {
            fn( cast_aot_arg< typename tuple_element<I, ArgumentsType>::type  >::to ( ctx, ctx.abiArguments()[ I ? I-1 : 0 ] )... );
            return v_zero();
        }
    };

    template <typename FuncT, FuncT fn>
    struct SimNode_Aot : SimNode_CallBase {
        const char * extFnName = nullptr;
        __forceinline SimNode_Aot ( ) : SimNode_CallBase(LineInfo()) {}
        virtual vec4f eval ( Context & context ) override {
            using FunctionTrait = function_traits<FuncT>;
            using Result = typename FunctionTrait::return_type;
            using Arguments = typename FunctionTrait::arguments;
            const int nargs = tuple_size<Arguments>::value;
            using Indices = make_index_sequence<nargs>;
            // TODO: sort out interop
            vec4f * aa = context.abiArg;
            vec4f stub[1];
            if ( !aa ) context.abiArg = stub;
            auto res = ImplAotStaticFunction<Result>::template
                call<FuncT,Arguments>(*fn, context, Indices());
            context.abiArg = aa;
            context.abiResult() = res;
            return res;
        }
    };

    template <typename Result>
    struct ImplAotStaticFunctionCMRES {
        template <typename FunctionType, typename ArgumentsType, size_t... I>
        static __forceinline Result call(FunctionType && fn, Context & ctx, index_sequence<I...> ) {
            return fn( cast_aot_arg< typename tuple_element<I, ArgumentsType>::type  >::to ( ctx, ctx.abiArguments()[ I ? I-1 : 0 ] )... );
        }
    };

    template <typename FuncT, FuncT fn>
    struct SimNode_AotCMRES : SimNode_CallBase {
        const char * extFnName = nullptr;
        __forceinline SimNode_AotCMRES ( ) : SimNode_CallBase(LineInfo()) {}
        virtual vec4f eval ( Context & context ) override {
            using FunctionTrait = function_traits<FuncT>;
            using Result = typename FunctionTrait::return_type;
            using Arguments = typename FunctionTrait::arguments;
            const int nargs = tuple_size<Arguments>::value;
            using Indices = make_index_sequence<nargs>;
            vec4f * aa = context.abiArg;
            vec4f stub[1];
            if ( !aa ) context.abiArg = stub;
            *((Result *)context.abiCMRES) = ImplAotStaticFunctionCMRES<Result>::template
                call<FuncT,Arguments>(*fn, context, Indices());
            context.abiArg = aa;
            context.abiResult() = cast<void *>::from(context.abiCMRES);
            return context.abiResult();
        }
    };

    struct SimNode_AotInteropBase : SimNode_CallBase {
        __forceinline SimNode_AotInteropBase() : SimNode_CallBase(LineInfo()) {}
        virtual vec4f eval ( Context & ) override {
            return v_zero();
        };
        vec4f *     argumentValues;
    };

    template <int argumentCount>
    struct SimNode_AotInterop : SimNode_AotInteropBase {
        template <typename ...VI>
        __forceinline SimNode_AotInterop ( TypeInfo ** tinfo, VI... args ) {
            nArguments = argumentCount;
            types = tinfo;
            argumentValues = argValues;
            vec4f argsE[argumentCount] = { args... };
            for ( int i=0; i!=argumentCount; ++i ) {
                argumentValues[i] = argsE[i];
            }
        };
        vec4f       argValues[argumentCount];
    };

    template <>
    struct SimNode_AotInterop<0> : SimNode_AotInteropBase {
        __forceinline SimNode_AotInterop () {
            nArguments = 0;
            types = nullptr;
            argumentValues = nullptr;
        }
    };

    __forceinline char * das_string_builder ( Context * __context__, const SimNode_AotInteropBase & node ) {
        StringBuilderWriter writer(__context__->heap);
        DebugDataWalker<StringBuilderWriter> walker(writer, PrintFlags::string_builder);
        for ( int i = 0; i!=node.nArguments; ++i ) {
            walker.walk(node.argumentValues[i], node.types[i]);
        }
        auto pStr = writer.c_str();
        if ( !pStr ) {
            __context__->throw_error("can't allocate string builder result, out of heap");
        }
        return pStr;
    }

    struct das_stack_prologue {
        __forceinline das_stack_prologue ( Context * __context__, uint32_t stackSize, int32_t line )
            : context(__context__) {
            if (!context->stack.push(stackSize, EP, SP)) {
                context->throw_error("stack overflow");
            }
#if DAS_ENABLE_STACK_WALK
            Prologue * pp = (Prologue *)context->stack.sp();
            pp->arguments = nullptr;    // arguments
            pp->info = nullptr;         // FunctionDebugInfo
            pp->line = line;
#endif
        }
        __forceinline ~das_stack_prologue () {
            context->stack.pop(EP, SP);
        }
        Context * context;
        char * EP, * SP;
    };

    template <typename resType, typename ...argType>
    struct das_make_block : Block, SimNode_ClosureBlock {
        typedef function < resType ( argType... ) > BlockFn;
        __forceinline das_make_block ( Context * context, uint32_t argStackTop, uint64_t ann, BlockFn && func )
                : SimNode_ClosureBlock(LineInfo(),false,ann), blockFunction(func) {
            stackOffset = context->stack.spi();
            argumentsOffset = argStackTop ? (context->stack.spi() + argStackTop) : 0;
            body = this;
            functionArguments = context->abiArguments();
        };
        virtual vec4f eval ( Context & context ) override {
            vec4f ** arguments = (vec4f **)(context.stack.bottom() + argumentsOffset);
            vec4f * arg = *arguments;
            return cast<resType>::from ( blockFunction ( cast<argType>::to(*arg++)... ) );
        }
        BlockFn blockFunction;
    };

    template <typename ...argType>
    struct das_make_block<void,argType...> : Block, SimNode_ClosureBlock {
        typedef function < void ( argType... ) > BlockFn;
        __forceinline das_make_block ( Context * context, uint32_t argStackTop, uint64_t ann, BlockFn && func )
                : SimNode_ClosureBlock(LineInfo(),false,ann), blockFunction(func) {
            stackOffset = context->stack.spi();
            argumentsOffset = argStackTop ? (context->stack.spi() + argStackTop) : 0;
            body = this;
            functionArguments = context->abiArguments();
        };
        virtual vec4f eval ( Context & context ) override {
            vec4f ** arguments = (vec4f **)(context.stack.bottom() + argumentsOffset);
            vec4f * arg = *arguments;
            blockFunction ( cast<argType>::to(*arg++)... );
            return v_zero();
        }
        BlockFn blockFunction;
    };

    template <>
    struct das_make_block<void> : Block, SimNode_ClosureBlock {
        typedef function < void () > BlockFn;
        __forceinline das_make_block ( Context * context, uint32_t argStackTop, uint64_t ann, BlockFn && func )
                : SimNode_ClosureBlock(LineInfo(),false,ann), blockFunction(func) {
            stackOffset = context->stack.spi();
            argumentsOffset = argStackTop ? (context->stack.spi() + argStackTop) : 0;
            body = this;
            functionArguments = context->abiArguments();
        };
        virtual vec4f eval ( Context & ) override {
            blockFunction ( );
            return v_zero();
        }
        BlockFn blockFunction;
    };

    template <typename resType, typename ...argType>
    struct das_make_block_cmres : Block, SimNode_ClosureBlock {
        typedef function < resType ( argType... ) > BlockFn;
        __forceinline das_make_block_cmres ( Context * context, uint32_t argStackTop, uint64_t ann, BlockFn && func )
            : SimNode_ClosureBlock(LineInfo(),false,ann), blockFunction(func) {
            stackOffset = context->stack.spi();
            argumentsOffset = argStackTop ? (context->stack.spi() + argStackTop) : 0;
            body = this;
            functionArguments = context->abiArguments();
        };
        virtual vec4f eval ( Context & context ) override {
            auto ba = (BlockArguments *) ( context.stack.bottom() + argumentsOffset );
            vec4f * arg = ba->arguments;
            resType * result = (resType *) ba->copyOrMoveResult;
            *result = blockFunction ( cast<argType>::to(*arg++)... );
            return cast<void *>::from(result);
        }
        BlockFn blockFunction;
    };

    template <typename ResType>
    struct das_invoke {
        // vector cast
        static __forceinline ResType invoke ( Context * __context__, const Block & blk ) {
            vec4f result = __context__->invoke(blk, nullptr, nullptr);
            return cast<ResType>::to(result);
        }
        template <typename ...ArgType>
        static __forceinline ResType invoke ( Context * __context__, const Block & blk, ArgType ...arg ) {
            vec4f arguments [] = { cast<ArgType>::from(arg)... };
            vec4f result = __context__->invoke(blk, arguments, nullptr);
            return cast<ResType>::to(result);
        }
        // cmres
        static __forceinline ResType invoke_cmres ( Context * __context__, const Block & blk ) {
            ResType result;
            __context__->invoke(blk, nullptr, &result);
            return result;
        }
        template <typename ...ArgType>
        static __forceinline ResType invoke_cmres ( Context * __context__, const Block & blk, ArgType ...arg ) {
            vec4f arguments [] = { cast<ArgType>::from(arg)... };
            ResType result;
            __context__->invoke(blk, arguments, &result);
            return result;
        }
    };

    template <>
    struct das_invoke<void> {
        static __forceinline void invoke ( Context * __context__, const Block & blk ) {
            __context__->invoke(blk, nullptr, nullptr);
        }
        template <typename ...ArgType>
        static __forceinline void invoke ( Context * __context__, const Block & blk, ArgType ...arg ) {
            vec4f arguments [] = { cast<ArgType>::from(arg)... };
            __context__->invoke(blk, arguments, nullptr);
        }
    };

    template <typename ResType>
    struct das_invoke_function {
        static __forceinline ResType invoke ( Context * __context__, const Func & blk ) {
            SimFunction * simFunc = __context__->getFunction(blk.index-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            vec4f result = __context__->call(simFunc, nullptr, 0);
            return cast<ResType>::to(result);
        }
        template <typename ...ArgType>
        static __forceinline ResType invoke ( Context * __context__, const Func & blk, ArgType ...arg ) {
            vec4f arguments [] = { cast<ArgType>::from(arg)... };
            SimFunction * simFunc = __context__->getFunction(blk.index-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            vec4f result = __context__->call(simFunc, arguments, 0);
            return cast<ResType>::to(result);
        }
    };

    template <>
    struct das_invoke_function<void> {
        static __forceinline void invoke ( Context * __context__, const Func & blk ) {
            SimFunction * simFunc = __context__->getFunction(blk.index-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            __context__->call(simFunc, nullptr, 0);
        }
        template <typename ...ArgType>
        static __forceinline void invoke ( Context * __context__, const Func & blk, ArgType ...arg ) {
            vec4f arguments [] = { cast<ArgType>::from(arg)... };
            SimFunction * simFunc = __context__->getFunction(blk.index-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            __context__->call(simFunc, arguments, 0);
        }
    };

    template <typename ResType>
    struct das_invoke_lambda {
        static __forceinline ResType invoke ( Context * __context__, const Lambda & blk ) {
            int32_t * fnIndex = (int32_t *)blk.capture;
            if (!fnIndex) __context__->throw_error("invoke null lambda");
            SimFunction * simFunc = __context__->getFunction(*fnIndex-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            vec4f result = __context__->call(simFunc, nullptr, 0);
            return cast<ResType>::to(result);
        }
        template <typename ...ArgType>
        static __forceinline ResType invoke ( Context * __context__, const Lambda & blk, ArgType ...arg ) {
            vec4f arguments [] = { cast<void *>::from(blk.capture), (cast<ArgType>::from(arg))... };
            int32_t * fnIndex = (int32_t *)blk.capture;
            if (!fnIndex) __context__->throw_error("invoke null lambda");
            SimFunction * simFunc = __context__->getFunction(*fnIndex-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            vec4f result = __context__->call(simFunc, arguments, 0);
            return cast<ResType>::to(result);
        }
    };

    template <>
    struct das_invoke_lambda<void> {
        static __forceinline void invoke ( Context * __context__, const Lambda & blk ) {
            int32_t * fnIndex = (int32_t *)blk.capture;
            if (!fnIndex) __context__->throw_error("invoke null lambda");
            SimFunction * simFunc = __context__->getFunction(*fnIndex-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            __context__->call(simFunc, nullptr, 0);
        }
        template <typename ...ArgType>
        static __forceinline void invoke ( Context * __context__, const Lambda & blk, ArgType ...arg ) {
            vec4f arguments [] = { cast<void *>::from(blk.capture), (cast<ArgType>::from(arg))... };
            int32_t * fnIndex = (int32_t *)blk.capture;
            if (!fnIndex) __context__->throw_error("invoke null lambda");
            SimFunction * simFunc = __context__->getFunction(*fnIndex-1);
            if (!simFunc) __context__->throw_error("invoke null function");
            __context__->call(simFunc, arguments, 0);
        }
    };


    template <typename TA, typename TB>
    __forceinline void das_try_recover ( Context * __context__, TA && try_block, TB && catch_block ) {
        auto aa = __context__->abiArg; auto acm = __context__->abiCMRES;
        char * EP, * SP;
        __context__->stack.watermark(EP,SP);
#if DAS_ENABLE_EXCEPTIONS
        try {
            try_block();
        } catch ( const dasException & ) {
            __context__->abiArg = aa;
            __context__->abiCMRES = acm;
            __context__->stack.pop(EP,SP);
            __context__->stopFlags &= ~(EvalFlags::stopForThrow | EvalFlags::stopForReturn | EvalFlags::stopForBreak);
            catch_block();
        }
#else
        jmp_buf ev;
        jmp_buf * JB = __context__->throwBuf;
        __context__->throwBuf = &ev;
        if ( !setjmp(ev) ) {
            try_block();
        } else {
            __context__->throwBuf = JB;
            __context__->abiArg = aa;
            __context__->abiCMRES = acm;
            __context__->stack.pop(EP,SP);
            __context__->stopFlags &= ~(EvalFlags::stopForReturn | EvalFlags::stopForBreak);
            __context__->exception = nullptr;
            catch_block();
        }
        __context__->throwBuf = JB;
#endif
    }

    template <typename TT>
    struct das_call_interop {
        static __forceinline TT call ( InteropFunction * func, Context * __context__, const SimNode_AotInteropBase & node ) {
            vec4f result = (*func) ( *__context__, (SimNode_CallBase *)&node, node.argumentValues );
            return cast<TT>::to(result);
        }
    };

    template<>
    struct das_call_interop<void> {
        static __forceinline void call ( InteropFunction * func, Context * __context__, const SimNode_AotInteropBase & node ) {
            (*func) ( *__context__, (SimNode_CallBase *)&node, node.argumentValues );
        }
    };
}

