
.. _stdlib__builtin:

================
Built-in runtime
================

.. include:: detail/builtin.rst

Builtin module is automatically required by any other das file. It includes basic language infrastructure,
support for containers, heap, miscellaneous iterators, profiler, and interaction with host application.

++++++++++++
Type aliases
++++++++++++

.. _alias-print_flags:

.. das:attribute:: print_flags is a bitfield

+------------------+---+-----+
+field             +bit+value+
+==================+===+=====+
+escapeString      +0  +1    +
+------------------+---+-----+
+namesAndDimensions+1  +2    +
+------------------+---+-----+
+typeQualifiers    +2  +4    +
+------------------+---+-----+
+refAddresses      +3  +8    +
+------------------+---+-----+
+humanReadable     +4  +16   +
+------------------+---+-----+


|typedef-builtin-print_flags|

+++++++++
Constants
+++++++++

.. _global-builtin-DBL_MAX:

.. das:attribute:: DBL_MAX = 1.79769e+308lf

|variable-builtin-DBL_MAX|

.. _global-builtin-DBL_MIN:

.. das:attribute:: DBL_MIN = 2.22507e-308lf

|variable-builtin-DBL_MIN|

.. _global-builtin-FLT_MAX:

.. das:attribute:: FLT_MAX = 3.40282e+38f

|variable-builtin-FLT_MAX|

.. _global-builtin-FLT_MIN:

.. das:attribute:: FLT_MIN = 1.17549e-38f

|variable-builtin-FLT_MIN|

.. _global-builtin-INT_MAX:

.. das:attribute:: INT_MAX = 2147483647

|variable-builtin-INT_MAX|

.. _global-builtin-INT_MIN:

.. das:attribute:: INT_MIN = -2147483648

|variable-builtin-INT_MIN|

.. _global-builtin-LONG_MAX:

.. das:attribute:: LONG_MAX = 2147483647

|variable-builtin-LONG_MAX|

.. _global-builtin-LONG_MIN:

.. das:attribute:: LONG_MIN = -2147483648

|variable-builtin-LONG_MIN|

.. _global-builtin-UINT_MAX:

.. das:attribute:: UINT_MAX = 0xffffffff

|variable-builtin-UINT_MAX|

.. _global-builtin-ULONG_MAX:

.. das:attribute:: ULONG_MAX = 0xffffffff

|variable-builtin-ULONG_MAX|

.. _global-builtin-print_flags_debugger:

.. das:attribute:: print_flags_debugger = bitfield(0x1f)

|variable-builtin-print_flags_debugger|

++++++++++++++++++++
Function annotations
++++++++++++++++++++

.. _handle-builtin-_macro:

.. das:attribute:: _macro

|function_annotation-builtin-_macro|

.. _handle-builtin-builtin_array_sort:

.. das:attribute:: builtin_array_sort

|function_annotation-builtin-builtin_array_sort|

.. _handle-builtin-expect_any_vector:

.. das:attribute:: expect_any_vector

|function_annotation-builtin-expect_any_vector|

.. _handle-builtin-export:

.. das:attribute:: export

|function_annotation-builtin-export|

.. _handle-builtin-finalize:

.. das:attribute:: finalize

|function_annotation-builtin-finalize|

.. _handle-builtin-generic:

.. das:attribute:: generic

|function_annotation-builtin-generic|

.. _handle-builtin-hybrid:

.. das:attribute:: hybrid

|function_annotation-builtin-hybrid|

.. _handle-builtin-init:

.. das:attribute:: init

|function_annotation-builtin-init|

.. _handle-builtin-local_only:

.. das:attribute:: local_only

|function_annotation-builtin-local_only|

.. _handle-builtin-marker:

.. das:attribute:: marker

|function_annotation-builtin-marker|

.. _handle-builtin-no_aot:

.. das:attribute:: no_aot

|function_annotation-builtin-no_aot|

.. _handle-builtin-run:

.. das:attribute:: run

|function_annotation-builtin-run|

.. _handle-builtin-sideeffects:

.. das:attribute:: sideeffects

|function_annotation-builtin-sideeffects|

.. _handle-builtin-unsafe_deref:

.. das:attribute:: unsafe_deref

|function_annotation-builtin-unsafe_deref|

.. _handle-builtin-unsafe_operation:

.. das:attribute:: unsafe_operation

|function_annotation-builtin-unsafe_operation|

.. _handle-builtin-unused_argument:

.. das:attribute:: unused_argument

|function_annotation-builtin-unused_argument|

+++++++++++
Call macros
+++++++++++

.. _call-macro-builtin-concept_assert:

.. das:attribute:: concept_assert

|function_annotation-builtin-concept_assert|

.. _call-macro-builtin-__builtin_table_key_exists:

.. das:attribute:: __builtin_table_key_exists

|function_annotation-builtin-__builtin_table_key_exists|

.. _call-macro-builtin-static_assert:

.. das:attribute:: static_assert

|function_annotation-builtin-static_assert|

.. _call-macro-builtin-verify:

.. das:attribute:: verify

|function_annotation-builtin-verify|

.. _call-macro-builtin-debug:

.. das:attribute:: debug

|function_annotation-builtin-debug|

.. _call-macro-builtin-assert:

.. das:attribute:: assert

|function_annotation-builtin-assert|

.. _call-macro-builtin-memzero:

.. das:attribute:: memzero

|function_annotation-builtin-memzero|

.. _call-macro-builtin-__builtin_table_find:

.. das:attribute:: __builtin_table_find

|function_annotation-builtin-__builtin_table_find|

.. _call-macro-builtin-invoke:

.. das:attribute:: invoke

|function_annotation-builtin-invoke|

.. _call-macro-builtin-__builtin_table_erase:

.. das:attribute:: __builtin_table_erase

|function_annotation-builtin-__builtin_table_erase|

+++++++++++++
Handled types
+++++++++++++

.. _handle-builtin-clock:

.. das:attribute:: clock

|any_annotation-builtin-clock|

.. _handle-builtin-das_string:

.. das:attribute:: das_string

|any_annotation-builtin-das_string|

++++++++++++++++++++++++++
Internal builtin functions
++++++++++++++++++++++++++

.. warning:: 
  This group of functions is hidden. It will not be in the final documentation.

  *  :ref:`builtin_get_command_line_arguments (arg0:array implicit) : void <function-_at__builtin__c__c_builtin_get_command_line_arguments__hh_implicit_hh__hh_array>` 

.. _function-_at__builtin__c__c_builtin_get_command_line_arguments__hh_implicit_hh__hh_array:

.. das:function:: builtin_get_command_line_arguments(arg0: array implicit)

+--------+--------------+
+argument+argument type +
+========+==============+
+arg0    +array implicit+
+--------+--------------+


|function-builtin-builtin_get_command_line_arguments|

++++++++++++++++++++++++++++
Internal pointer arithmetics
++++++++++++++++++++++++++++

.. warning:: 
  This group of functions is hidden. It will not be in the final documentation.

  *  :ref:`i_das_ptr_add (arg0:void? const implicit;arg1:int const;arg2:int const) : void? <function-_at__builtin__c__c_i_das_ptr_add__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int>` 
  *  :ref:`i_das_ptr_dec (arg0:void?& implicit;arg1:int const) : void <function-_at__builtin__c__c_i_das_ptr_dec__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int>` 
  *  :ref:`i_das_ptr_diff (arg0:void? const implicit;arg1:void? const implicit;arg2:int const) : int64 <function-_at__builtin__c__c_i_das_ptr_diff__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int>` 
  *  :ref:`i_das_ptr_inc (arg0:void?& implicit;arg1:int const) : void <function-_at__builtin__c__c_i_das_ptr_inc__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int>` 
  *  :ref:`i_das_ptr_set_add (arg0:void?& implicit;arg1:int const;arg2:int const) : void <function-_at__builtin__c__c_i_das_ptr_set_add__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int>` 
  *  :ref:`i_das_ptr_set_sub (arg0:void?& implicit;arg1:int const;arg2:int const) : void <function-_at__builtin__c__c_i_das_ptr_set_sub__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int>` 
  *  :ref:`i_das_ptr_sub (arg0:void?& implicit;arg1:int const;arg2:int const) : void? <function-_at__builtin__c__c_i_das_ptr_sub__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int>` 

.. _function-_at__builtin__c__c_i_das_ptr_add__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int:

.. das:function:: i_das_ptr_add(arg0: void? const implicit; arg1: int const; arg2: int const)

i_das_ptr_add returns void?

.. warning:: 
  This is unsafe operation.

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +void? const implicit+
+--------+--------------------+
+arg1    +int const           +
+--------+--------------------+
+arg2    +int const           +
+--------+--------------------+


|function-builtin-i_das_ptr_add|

.. _function-_at__builtin__c__c_i_das_ptr_dec__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int:

.. das:function:: i_das_ptr_dec(arg0: void?& implicit; arg1: int const)

.. warning:: 
  This is unsafe operation.

+--------+---------------+
+argument+argument type  +
+========+===============+
+arg0    +void?& implicit+
+--------+---------------+
+arg1    +int const      +
+--------+---------------+


|function-builtin-i_das_ptr_dec|

.. _function-_at__builtin__c__c_i_das_ptr_diff__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int:

.. das:function:: i_das_ptr_diff(arg0: void? const implicit; arg1: void? const implicit; arg2: int const)

i_das_ptr_diff returns int64

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +void? const implicit+
+--------+--------------------+
+arg1    +void? const implicit+
+--------+--------------------+
+arg2    +int const           +
+--------+--------------------+


|function-builtin-i_das_ptr_diff|

.. _function-_at__builtin__c__c_i_das_ptr_inc__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int:

.. das:function:: i_das_ptr_inc(arg0: void?& implicit; arg1: int const)

.. warning:: 
  This is unsafe operation.

+--------+---------------+
+argument+argument type  +
+========+===============+
+arg0    +void?& implicit+
+--------+---------------+
+arg1    +int const      +
+--------+---------------+


|function-builtin-i_das_ptr_inc|

.. _function-_at__builtin__c__c_i_das_ptr_set_add__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int:

.. das:function:: i_das_ptr_set_add(arg0: void?& implicit; arg1: int const; arg2: int const)

.. warning:: 
  This is unsafe operation.

+--------+---------------+
+argument+argument type  +
+========+===============+
+arg0    +void?& implicit+
+--------+---------------+
+arg1    +int const      +
+--------+---------------+
+arg2    +int const      +
+--------+---------------+


|function-builtin-i_das_ptr_set_add|

.. _function-_at__builtin__c__c_i_das_ptr_set_sub__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int:

.. das:function:: i_das_ptr_set_sub(arg0: void?& implicit; arg1: int const; arg2: int const)

.. warning:: 
  This is unsafe operation.

+--------+---------------+
+argument+argument type  +
+========+===============+
+arg0    +void?& implicit+
+--------+---------------+
+arg1    +int const      +
+--------+---------------+
+arg2    +int const      +
+--------+---------------+


|function-builtin-i_das_ptr_set_sub|

.. _function-_at__builtin__c__c_i_das_ptr_sub__hh_ref_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int__hh_const_hh_int:

.. das:function:: i_das_ptr_sub(arg0: void?& implicit; arg1: int const; arg2: int const)

i_das_ptr_sub returns void?

.. warning:: 
  This is unsafe operation.

+--------+---------------+
+argument+argument type  +
+========+===============+
+arg0    +void?& implicit+
+--------+---------------+
+arg1    +int const      +
+--------+---------------+
+arg2    +int const      +
+--------+---------------+


|function-builtin-i_das_ptr_sub|

+++++++++++++++++++++++++++++
Internal clone infrastructure
+++++++++++++++++++++++++++++

.. warning:: 
  This group of functions is hidden. It will not be in the final documentation.

  *  :ref:`clone (arg0:$::das_string implicit;arg1:string const implicit) : void <function-_at__builtin__c__c_clone__hh_implicit_hh__hh_handle_hh_das_string__hh_const_hh__hh_implicit_hh_string>` 
  *  :ref:`clone_string (arg0:string const implicit;arg1:__context const) : string <function-_at__builtin__c__c_clone_string__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context>` 
  *  :ref:`clone (a:array\<auto(TT)\> -const;b:array\<TT\> const) : auto <function-_at__builtin__c__c_clone__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_array_hh__hh_alias_hh_TT>` 
  *  :ref:`clone (a:array\<auto(TT)\> -const;b:array\<TT\> const#) : auto <function-_at__builtin__c__c_clone__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_temporary_hh__hh_array_hh__hh_alias_hh_TT>` 
  *  :ref:`clone (a:table\<auto(KT);auto(VT)\> -const;b:table\<KT;VT\> const) : auto <function-_at__builtin__c__c_clone__hh_table_hh__hh_auto_hh_KT_hh__hh_auto_hh_VT__hh_const_hh__hh_table_hh__hh_alias_hh_KT_hh__hh_alias_hh_VT>` 
  *  :ref:`clone (a:table\<auto(KT);auto(VT)\> -const;b:table\<KT;VT\> const#) : auto <function-_at__builtin__c__c_clone__hh_table_hh__hh_auto_hh_KT_hh__hh_auto_hh_VT__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_alias_hh_KT_hh__hh_alias_hh_VT>` 
  *  :ref:`clone_dim (a:auto -const;b:auto const implicit) : auto <function-_at__builtin__c__c_clone_dim__hh_auto__hh_const_hh__hh_implicit_hh__hh_auto>` 
  *  :ref:`clone_to_move (clone_src:auto(TT) const implicit) : TT -const -# <function-_at__builtin__c__c_clone_to_move__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT>` 

.. _function-_at__builtin__c__c_clone__hh_implicit_hh__hh_handle_hh_das_string__hh_const_hh__hh_implicit_hh_string:

.. das:function:: clone(arg0: das_string implicit; arg1: string const implicit)

+--------+-----------------------------------------------------------------+
+argument+argument type                                                    +
+========+=================================================================+
+arg0    + :ref:`builtin::das_string <handle-builtin-das_string>`  implicit+
+--------+-----------------------------------------------------------------+
+arg1    +string const implicit                                            +
+--------+-----------------------------------------------------------------+


|function-builtin-clone|

.. _function-_at__builtin__c__c_clone_string__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context:

.. das:function:: clone_string(arg0: string const implicit)

clone_string returns string

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+arg0    +string const implicit+
+--------+---------------------+


|function-builtin-clone_string|

.. _function-_at__builtin__c__c_clone__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_array_hh__hh_alias_hh_TT:

.. das:function:: clone(a: array<auto(TT)>; b: array<TT> const)

clone returns auto

+--------+---------------+
+argument+argument type  +
+========+===============+
+a       +array<auto(TT)>+
+--------+---------------+
+b       +array<TT> const+
+--------+---------------+


|function-builtin-clone|

.. _function-_at__builtin__c__c_clone__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_temporary_hh__hh_array_hh__hh_alias_hh_TT:

.. das:function:: clone(a: array<auto(TT)>; b: array<TT> const#)

clone returns auto

+--------+----------------+
+argument+argument type   +
+========+================+
+a       +array<auto(TT)> +
+--------+----------------+
+b       +array<TT> const#+
+--------+----------------+


|function-builtin-clone|

.. _function-_at__builtin__c__c_clone__hh_table_hh__hh_auto_hh_KT_hh__hh_auto_hh_VT__hh_const_hh__hh_table_hh__hh_alias_hh_KT_hh__hh_alias_hh_VT:

.. das:function:: clone(a: table<auto(KT);auto(VT)>; b: table<KT;VT> const)

clone returns auto

+--------+------------------------+
+argument+argument type           +
+========+========================+
+a       +table<auto(KT);auto(VT)>+
+--------+------------------------+
+b       +table<KT;VT> const      +
+--------+------------------------+


|function-builtin-clone|

.. _function-_at__builtin__c__c_clone__hh_table_hh__hh_auto_hh_KT_hh__hh_auto_hh_VT__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_alias_hh_KT_hh__hh_alias_hh_VT:

.. das:function:: clone(a: table<auto(KT);auto(VT)>; b: table<KT;VT> const#)

clone returns auto

+--------+------------------------+
+argument+argument type           +
+========+========================+
+a       +table<auto(KT);auto(VT)>+
+--------+------------------------+
+b       +table<KT;VT> const#     +
+--------+------------------------+


|function-builtin-clone|

.. _function-_at__builtin__c__c_clone_dim__hh_auto__hh_const_hh__hh_implicit_hh__hh_auto:

.. das:function:: clone_dim(a: auto; b: auto const implicit)

clone_dim returns auto

+--------+-------------------+
+argument+argument type      +
+========+===================+
+a       +auto               +
+--------+-------------------+
+b       +auto const implicit+
+--------+-------------------+


|function-builtin-clone_dim|

.. _function-_at__builtin__c__c_clone_to_move__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT:

.. das:function:: clone_to_move(clone_src: auto(TT) const implicit)

clone_to_move returns TT

+---------+-----------------------+
+argument +argument type          +
+=========+=======================+
+clone_src+auto(TT) const implicit+
+---------+-----------------------+


|function-builtin-clone_to_move|

++++++++++++++++++++++++++++++++
Internal finalize infrastructure
++++++++++++++++++++++++++++++++

.. warning:: 
  This group of functions is hidden. It will not be in the final documentation.

  *  :ref:`finalize (a:array\<auto(TT)\> -const) : auto <function-_at__builtin__c__c_finalize__hh_array_hh__hh_auto_hh_TT>` 
  *  :ref:`finalize (a:table\<auto(TK);auto(TV)\> -const) : auto <function-_at__builtin__c__c_finalize__hh_table_hh__hh_auto_hh_TK_hh__hh_auto_hh_TV>` 
  *  :ref:`finalize_dim (a:auto(TT)[-1] -const) : auto <function-_at__builtin__c__c_finalize_dim__hh_auto_hh_TT_hh_-1>` 

.. _function-_at__builtin__c__c_finalize__hh_array_hh__hh_auto_hh_TT:

.. das:function:: finalize(a: array<auto(TT)>)

finalize returns auto

+--------+---------------+
+argument+argument type  +
+========+===============+
+a       +array<auto(TT)>+
+--------+---------------+


|function-builtin-finalize|

.. _function-_at__builtin__c__c_finalize__hh_table_hh__hh_auto_hh_TK_hh__hh_auto_hh_TV:

.. das:function:: finalize(a: table<auto(TK);auto(TV)>)

finalize returns auto

+--------+------------------------+
+argument+argument type           +
+========+========================+
+a       +table<auto(TK);auto(TV)>+
+--------+------------------------+


|function-builtin-finalize|

.. _function-_at__builtin__c__c_finalize_dim__hh_auto_hh_TT_hh_-1:

.. das:function:: finalize_dim(a: auto(TT)[-1])

finalize_dim returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+a       +auto(TT)[-1] +
+--------+-------------+


|function-builtin-finalize_dim|

++++++++++
Containers
++++++++++

  *  :ref:`capacity (arg0:array const implicit) : int <function-_at__builtin__c__c_capacity__hh_const_hh__hh_implicit_hh__hh_array>` 
  *  :ref:`capacity (arg0:table const implicit) : int <function-_at__builtin__c__c_capacity__hh_const_hh__hh_implicit_hh__hh_table>` 
  *  :ref:`clear (arg0:array implicit;arg1:__context const) : void <function-_at__builtin__c__c_clear__hh_implicit_hh__hh_array__hh_const_hh___context>` 
  *  :ref:`clear (arg0:table implicit;arg1:__context const) : void <function-_at__builtin__c__c_clear__hh_implicit_hh__hh_table__hh_const_hh___context>` 
  *  :ref:`empty (arg0:iterator const implicit) : bool <function-_at__builtin__c__c_empty__hh_const_hh__hh_implicit_hh__hh_iterator>` 
  *  :ref:`length (arg0:array const implicit) : int <function-_at__builtin__c__c_length__hh_const_hh__hh_implicit_hh__hh_array>` 
  *  :ref:`length (arg0:table const implicit) : int <function-_at__builtin__c__c_length__hh_const_hh__hh_implicit_hh__hh_table>` 
  *  :ref:`each (a:array\<auto(TT)\> const) : iterator\<TT&\> <function-_at__builtin__c__c_each__hh_const_hh__hh_array_hh__hh_auto_hh_TT>` 
  *  :ref:`each (a:auto(TT) const[-1]) : iterator\<TT&\> <function-_at__builtin__c__c_each__hh_const_hh__hh_auto_hh_TT_hh_-1>` 
  *  :ref:`each (lam:lambda\<(arg:auto(argT) -const):bool\> const) : iterator\<argT -&\> <function-_at__builtin__c__c_each__hh_const_hh__hh_lambda_hh__hh_auto_hh_argT_hh__rq_arg_hh__c_bool>` 
  *  :ref:`each (rng:range const) : iterator\<int\> <function-_at__builtin__c__c_each__hh_const_hh_range>` 
  *  :ref:`each (str:string const) : iterator\<int\> <function-_at__builtin__c__c_each__hh_const_hh_string>` 
  *  :ref:`each_enum (tt:auto(TT) const) : iterator\<TT -const -&\> <function-_at__builtin__c__c_each_enum__hh_const_hh__hh_auto_hh_TT>` 
  *  :ref:`each_ref (lam:lambda\<(arg:auto(argT)? -const):bool\> const) : iterator\<argT&\> <function-_at__builtin__c__c_each_ref__hh_const_hh__hh_lambda_hh__hh_ptr_hh__hh_auto_hh_argT_hh__rq_arg_hh__c_bool>` 
  *  :ref:`emplace (Arr:array\<auto(numT)\> -const;value:numT -const) : auto <function-_at__builtin__c__c_emplace__hh_array_hh__hh_auto_hh_numT__hh_alias_hh_numT>` 
  *  :ref:`emplace (Arr:array\<auto(numT)\> -const;value:numT -const;at:int const) : auto <function-_at__builtin__c__c_emplace__hh_array_hh__hh_auto_hh_numT__hh_alias_hh_numT__hh_const_hh_int>` 
  *  :ref:`empty (a:array\<auto\> const) : bool <function-_at__builtin__c__c_empty__hh_const_hh__hh_array_hh__hh_auto>` 
  *  :ref:`erase (Arr:array\<auto(numT)\> -const;at:int const) : auto <function-_at__builtin__c__c_erase__hh_array_hh__hh_auto_hh_numT__hh_const_hh_int>` 
  *  :ref:`erase (Tab:table\<auto(keyT);auto(valT)\> -const;at:keyT const) : bool <function-_at__builtin__c__c_erase__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT>` 
  *  :ref:`find (Tab:table\<auto(keyT);auto(valT)\> const;at:keyT const) : valT const? <function-_at__builtin__c__c_find__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT>` 
  *  :ref:`find (Tab:table\<auto(keyT);auto(valT)\> const;at:keyT const;blk:block\<(p:valT? const):void\> const) : auto <function-_at__builtin__c__c_find__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_const_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void>` 
  *  :ref:`find (Tab:table\<auto(keyT);auto(valT)\> const#;at:keyT const) : valT const?# <function-_at__builtin__c__c_find__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT>` 
  *  :ref:`find_for_edit (Tab:table\<auto(keyT);auto(valT)\> -const;at:keyT const) : valT? <function-_at__builtin__c__c_find_for_edit__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT>` 
  *  :ref:`find_for_edit (Tab:table\<auto(keyT);auto(valT)\> -const;at:keyT const;blk:block\<(p:valT? -const):void\> const) : auto <function-_at__builtin__c__c_find_for_edit__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void>` 
  *  :ref:`find_for_edit_if_exists (Tab:table\<auto(keyT);auto(valT)\> -const;at:keyT const;blk:block\<(p:valT? -const):void\> const) : auto <function-_at__builtin__c__c_find_for_edit_if_exists__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void>` 
  *  :ref:`find_if_exists (Tab:table\<auto(keyT);auto(valT)\> const;at:keyT const;blk:block\<(p:valT? const):void\> const) : auto <function-_at__builtin__c__c_find_if_exists__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_const_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void>` 
  *  :ref:`find_index (arr:array\<auto(TT)\> const implicit;key:TT const) : auto <function-_at__builtin__c__c_find_index__hh_const_hh__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_alias_hh_TT>` 
  *  :ref:`find_index (arr:auto(TT) const[-1] implicit;key:TT const) : auto <function-_at__builtin__c__c_find_index__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT_hh_-1__hh_const_hh__hh_alias_hh_TT>` 
  *  :ref:`find_index (arr:iterator\<auto(TT)\> const;key:TT const -&) : auto <function-_at__builtin__c__c_find_index__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT__hh_const_hh__hh_alias_hh_TT>` 
  *  :ref:`find_index_if (arr:array\<auto(TT)\> const implicit;blk:block\<(key:TT const):bool\> const) : auto <function-_at__builtin__c__c_find_index_if__hh_const_hh__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_key_hh__c_bool>` 
  *  :ref:`find_index_if (arr:auto(TT) const[-1] implicit;blk:block\<(key:TT const):bool\> const) : auto <function-_at__builtin__c__c_find_index_if__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT_hh_-1__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_key_hh__c_bool>` 
  *  :ref:`find_index_if (arr:iterator\<auto(TT)\> const;blk:block\<(key:TT const -&):bool\> const) : auto <function-_at__builtin__c__c_find_index_if__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_key_hh__c_bool>` 
  *  :ref:`has_value (a:auto const;key:auto const) : auto <function-_at__builtin__c__c_has_value__hh_const_hh__hh_auto__hh_const_hh__hh_auto>` 
  *  :ref:`key_exists (Tab:table\<auto(keyT);auto(valT)\> const;at:keyT const) : bool <function-_at__builtin__c__c_key_exists__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT>` 
  *  :ref:`keys (a:table\<auto(keyT);auto(valT)\> const implicit) : iterator\<keyT const&\> <function-_at__builtin__c__c_keys__hh_const_hh__hh_implicit_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT>` 
  *  :ref:`length (vec:auto const) : auto <function-_at__builtin__c__c_length__hh_const_hh__hh_auto>` 
  *  :ref:`length (a:auto const[-1]) : int <function-_at__builtin__c__c_length__hh_const_hh__hh_auto_hh_-1>` 
  *  :ref:`lock (a:array\<auto(TT)\> const =const;blk:block\<(x:array\<TT\> const# implicit):auto\> const) : auto <function-_at__builtin__c__c_lock__hh_const_hh__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_implicit_hh__hh_array_hh__hh_alias_hh_TT_hh__rq_x_hh__c__hh_auto>` 
  *  :ref:`lock (Tab:table\<auto(keyT);auto(valT)\> const;blk:block\<(t:table\<keyT;valT\> const#):void\> const) : auto <function-_at__builtin__c__c_lock__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_alias_hh_keyT_hh__hh_alias_hh_valT_hh__rq_t_hh__c_void>` 
  *  :ref:`lock (Tab:table\<auto(keyT);auto(valT)\> const#;blk:block\<(t:table\<keyT;valT\> const#):void\> const) : auto <function-_at__builtin__c__c_lock__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_alias_hh_keyT_hh__hh_alias_hh_valT_hh__rq_t_hh__c_void>` 
  *  :ref:`lock (a:array\<auto(TT)\> =const -const;blk:block\<(x:array\<TT\># implicit -const):auto\> const) : auto <function-_at__builtin__c__c_lock__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_temporary_hh__hh_implicit_hh__hh_array_hh__hh_alias_hh_TT_hh__rq_x_hh__c__hh_auto>` 
  *  :ref:`lock_forever (Tab:table\<auto(keyT);auto(valT)\> -const) : table\<keyT;valT\># <function-_at__builtin__c__c_lock_forever__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT>` 
  *  :ref:`next (it:iterator\<auto(TT)\> const;value:TT& -const) : bool <function-_at__builtin__c__c_next__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT__hh_ref_hh__hh_alias_hh_TT>` 
  *  :ref:`nothing (it:iterator\<auto(TT)\> -const) : iterator\<TT\> <function-_at__builtin__c__c_nothing__hh_iterator_hh__hh_auto_hh_TT>` 
  *  :ref:`pop (Arr:array\<auto(numT)\> -const) : auto <function-_at__builtin__c__c_pop__hh_array_hh__hh_auto_hh_numT>` 
  *  :ref:`push (Arr:array\<auto(numT)\> -const;value:numT const) : auto <function-_at__builtin__c__c_push__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_alias_hh_numT>` 
  *  :ref:`push (Arr:array\<auto(numT)\> -const;value:numT const;at:int const) : auto <function-_at__builtin__c__c_push__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_alias_hh_numT__hh_const_hh_int>` 
  *  :ref:`push_clone (Arr:array\<auto(numT)\> -const;value:numT const implicit) : auto <function-_at__builtin__c__c_push_clone__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_implicit_hh__hh_alias_hh_numT>` 
  *  :ref:`push_clone (Arr:array\<auto(numT)\> -const;value:numT const implicit;at:int const) : auto <function-_at__builtin__c__c_push_clone__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_implicit_hh__hh_alias_hh_numT__hh_const_hh_int>` 
  *  :ref:`push_clone (A:auto(CT) -const -#;b:auto(TT) const implicit) : auto <function-_at__builtin__c__c_push_clone__hh_auto_hh_CT__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT>` 
  *  :ref:`reserve (Arr:array\<auto(numT)\> -const;newSize:int const) : auto <function-_at__builtin__c__c_reserve__hh_array_hh__hh_auto_hh_numT__hh_const_hh_int>` 
  *  :ref:`resize (Arr:array\<auto(numT)\> -const;newSize:int const) : auto <function-_at__builtin__c__c_resize__hh_array_hh__hh_auto_hh_numT__hh_const_hh_int>` 
  *  :ref:`sort (a:array\<auto(TT)\> implicit -const) : auto <function-_at__builtin__c__c_sort__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT>` 
  *  :ref:`sort (a:array\<auto(TT)\> implicit -const;cmp:block\<(x:TT const;y:TT const):bool\> const) : auto <function-_at__builtin__c__c_sort__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_x_hh__rq_y_hh__c_bool>` 
  *  :ref:`sort (a:auto(TT)[-1] implicit -const) : auto <function-_at__builtin__c__c_sort__hh_implicit_hh__hh_auto_hh_TT_hh_-1>` 
  *  :ref:`sort (a:auto(TT)[-1] implicit -const;cmp:block\<(x:TT const;y:TT const):bool\> const) : auto <function-_at__builtin__c__c_sort__hh_implicit_hh__hh_auto_hh_TT_hh_-1__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_x_hh__rq_y_hh__c_bool>` 
  *  :ref:`to_array (a:auto(TT) const[-1]) : array\<TT -const\> <function-_at__builtin__c__c_to_array__hh_const_hh__hh_auto_hh_TT_hh_-1>` 
  *  :ref:`to_array (it:iterator\<auto(TT)\> const) : array\<TT -const -&\> <function-_at__builtin__c__c_to_array__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT>` 
  *  :ref:`to_array_move (a:auto(TT) -const) : array\<TT -const\> <function-_at__builtin__c__c_to_array_move__hh_auto_hh_TT>` 
  *  :ref:`to_array_move (a:auto(TT)[-1] -const) : array\<TT -const\> <function-_at__builtin__c__c_to_array_move__hh_auto_hh_TT_hh_-1>` 
  *  :ref:`to_table (a:tuple\<auto(keyT);auto(valT)\> const[-1]) : table\<keyT -const;valT\> <function-_at__builtin__c__c_to_table__hh_const_hh__hh_tuple_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT_hh_-1>` 
  *  :ref:`to_table_move (a:tuple\<auto(keyT);auto(valT)\>[-1] -const) : table\<keyT -const;valT\> <function-_at__builtin__c__c_to_table_move__hh_tuple_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT_hh_-1>` 
  *  :ref:`values (a:table\<auto(keyT);auto(valT)\> const implicit =const) : iterator\<valT const&\> <function-_at__builtin__c__c_values__hh_const_hh__hh_implicit_hh__hh_explicitconst_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT>` 
  *  :ref:`values (a:table\<auto(keyT);auto(valT)\> implicit =const -const) : iterator\<valT&\> <function-_at__builtin__c__c_values__hh_implicit_hh__hh_explicitconst_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT>` 

.. _function-_at__builtin__c__c_capacity__hh_const_hh__hh_implicit_hh__hh_array:

.. das:function:: capacity(arg0: array const implicit)

capacity returns int

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +array const implicit+
+--------+--------------------+


|function-builtin-capacity|

.. _function-_at__builtin__c__c_capacity__hh_const_hh__hh_implicit_hh__hh_table:

.. das:function:: capacity(arg0: table const implicit)

capacity returns int

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +table const implicit+
+--------+--------------------+


|function-builtin-capacity|

.. _function-_at__builtin__c__c_clear__hh_implicit_hh__hh_array__hh_const_hh___context:

.. das:function:: clear(arg0: array implicit)

+--------+--------------+
+argument+argument type +
+========+==============+
+arg0    +array implicit+
+--------+--------------+


|function-builtin-clear|

.. _function-_at__builtin__c__c_clear__hh_implicit_hh__hh_table__hh_const_hh___context:

.. das:function:: clear(arg0: table implicit)

+--------+--------------+
+argument+argument type +
+========+==============+
+arg0    +table implicit+
+--------+--------------+


|function-builtin-clear|

.. _function-_at__builtin__c__c_empty__hh_const_hh__hh_implicit_hh__hh_iterator:

.. das:function:: empty(arg0: iterator const implicit)

empty returns bool

+--------+-----------------------+
+argument+argument type          +
+========+=======================+
+arg0    +iterator const implicit+
+--------+-----------------------+


|function-builtin-empty|

.. _function-_at__builtin__c__c_length__hh_const_hh__hh_implicit_hh__hh_array:

.. das:function:: length(arg0: array const implicit)

length returns int

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +array const implicit+
+--------+--------------------+


|function-builtin-length|

.. _function-_at__builtin__c__c_length__hh_const_hh__hh_implicit_hh__hh_table:

.. das:function:: length(arg0: table const implicit)

length returns int

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +table const implicit+
+--------+--------------------+


|function-builtin-length|

.. _function-_at__builtin__c__c_each__hh_const_hh__hh_array_hh__hh_auto_hh_TT:

.. das:function:: each(a: array<auto(TT)> const)

each returns iterator<TT&>

.. warning:: 
  This is unsafe operation.

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+a       +array<auto(TT)> const+
+--------+---------------------+


|function-builtin-each|

.. _function-_at__builtin__c__c_each__hh_const_hh__hh_auto_hh_TT_hh_-1:

.. das:function:: each(a: auto(TT) const[-1])

each returns iterator<TT&>

.. warning:: 
  This is unsafe operation.

+--------+------------------+
+argument+argument type     +
+========+==================+
+a       +auto(TT) const[-1]+
+--------+------------------+


|function-builtin-each|

.. _function-_at__builtin__c__c_each__hh_const_hh__hh_lambda_hh__hh_auto_hh_argT_hh__rq_arg_hh__c_bool:

.. das:function:: each(lam: lambda<(arg:auto(argT) -const):bool> const)

each returns iterator<argT>

+--------+-----------------------------------+
+argument+argument type                      +
+========+===================================+
+lam     +lambda<(arg:auto(argT)):bool> const+
+--------+-----------------------------------+


|function-builtin-each|

.. _function-_at__builtin__c__c_each__hh_const_hh_range:

.. das:function:: each(rng: range const)

each returns iterator<int>

+--------+-------------+
+argument+argument type+
+========+=============+
+rng     +range const  +
+--------+-------------+


|function-builtin-each|

.. _function-_at__builtin__c__c_each__hh_const_hh_string:

.. das:function:: each(str: string const)

each returns iterator<int>

.. warning:: 
  This is unsafe operation.

+--------+-------------+
+argument+argument type+
+========+=============+
+str     +string const +
+--------+-------------+


|function-builtin-each|

.. _function-_at__builtin__c__c_each_enum__hh_const_hh__hh_auto_hh_TT:

.. das:function:: each_enum(tt: auto(TT) const)

each_enum returns iterator<TT>

+--------+--------------+
+argument+argument type +
+========+==============+
+tt      +auto(TT) const+
+--------+--------------+


|function-builtin-each_enum|

.. _function-_at__builtin__c__c_each_ref__hh_const_hh__hh_lambda_hh__hh_ptr_hh__hh_auto_hh_argT_hh__rq_arg_hh__c_bool:

.. das:function:: each_ref(lam: lambda<(arg:auto(argT)? -const):bool> const)

each_ref returns iterator<argT&>

+--------+------------------------------------+
+argument+argument type                       +
+========+====================================+
+lam     +lambda<(arg:auto(argT)?):bool> const+
+--------+------------------------------------+


|function-builtin-each_ref|

.. _function-_at__builtin__c__c_emplace__hh_array_hh__hh_auto_hh_numT__hh_alias_hh_numT:

.. das:function:: emplace(Arr: array<auto(numT)>; value: numT)

emplace returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+
+value   +numT             +
+--------+-----------------+


|function-builtin-emplace|

.. _function-_at__builtin__c__c_emplace__hh_array_hh__hh_auto_hh_numT__hh_alias_hh_numT__hh_const_hh_int:

.. das:function:: emplace(Arr: array<auto(numT)>; value: numT; at: int const)

emplace returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+
+value   +numT             +
+--------+-----------------+
+at      +int const        +
+--------+-----------------+


|function-builtin-emplace|

.. _function-_at__builtin__c__c_empty__hh_const_hh__hh_array_hh__hh_auto:

.. das:function:: empty(a: array<auto> const)

empty returns bool

+--------+-----------------+
+argument+argument type    +
+========+=================+
+a       +array<auto> const+
+--------+-----------------+


|function-builtin-empty|

.. _function-_at__builtin__c__c_erase__hh_array_hh__hh_auto_hh_numT__hh_const_hh_int:

.. das:function:: erase(Arr: array<auto(numT)>; at: int const)

erase returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+
+at      +int const        +
+--------+-----------------+


|function-builtin-erase|

.. _function-_at__builtin__c__c_erase__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT:

.. das:function:: erase(Tab: table<auto(keyT);auto(valT)>; at: keyT const)

erase returns bool

+--------+----------------------------+
+argument+argument type               +
+========+============================+
+Tab     +table<auto(keyT);auto(valT)>+
+--------+----------------------------+
+at      +keyT const                  +
+--------+----------------------------+


|function-builtin-erase|

.. _function-_at__builtin__c__c_find__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT:

.. das:function:: find(Tab: table<auto(keyT);auto(valT)> const; at: keyT const)

find returns valT const?

+--------+----------------------------------+
+argument+argument type                     +
+========+==================================+
+Tab     +table<auto(keyT);auto(valT)> const+
+--------+----------------------------------+
+at      +keyT const                        +
+--------+----------------------------------+


|function-builtin-find|

.. _function-_at__builtin__c__c_find__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_const_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void:

.. das:function:: find(Tab: table<auto(keyT);auto(valT)> const; at: keyT const; blk: block<(p:valT? const):void> const)

find returns auto

+--------+----------------------------------+
+argument+argument type                     +
+========+==================================+
+Tab     +table<auto(keyT);auto(valT)> const+
+--------+----------------------------------+
+at      +keyT const                        +
+--------+----------------------------------+
+blk     +block<(p:valT? const):void> const +
+--------+----------------------------------+


|function-builtin-find|

.. _function-_at__builtin__c__c_find__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT:

.. das:function:: find(Tab: table<auto(keyT);auto(valT)> const#; at: keyT const)

find returns valT const?#

+--------+-----------------------------------+
+argument+argument type                      +
+========+===================================+
+Tab     +table<auto(keyT);auto(valT)> const#+
+--------+-----------------------------------+
+at      +keyT const                         +
+--------+-----------------------------------+


|function-builtin-find|

.. _function-_at__builtin__c__c_find_for_edit__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT:

.. das:function:: find_for_edit(Tab: table<auto(keyT);auto(valT)>; at: keyT const)

find_for_edit returns valT?

.. warning:: 
  This is unsafe operation.

+--------+----------------------------+
+argument+argument type               +
+========+============================+
+Tab     +table<auto(keyT);auto(valT)>+
+--------+----------------------------+
+at      +keyT const                  +
+--------+----------------------------+


|function-builtin-find_for_edit|

.. _function-_at__builtin__c__c_find_for_edit__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void:

.. das:function:: find_for_edit(Tab: table<auto(keyT);auto(valT)>; at: keyT const; blk: block<(p:valT? -const):void> const)

find_for_edit returns auto

+--------+----------------------------+
+argument+argument type               +
+========+============================+
+Tab     +table<auto(keyT);auto(valT)>+
+--------+----------------------------+
+at      +keyT const                  +
+--------+----------------------------+
+blk     +block<(p:valT?):void> const +
+--------+----------------------------+


|function-builtin-find_for_edit|

.. _function-_at__builtin__c__c_find_for_edit_if_exists__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void:

.. das:function:: find_for_edit_if_exists(Tab: table<auto(keyT);auto(valT)>; at: keyT const; blk: block<(p:valT? -const):void> const)

find_for_edit_if_exists returns auto

+--------+----------------------------+
+argument+argument type               +
+========+============================+
+Tab     +table<auto(keyT);auto(valT)>+
+--------+----------------------------+
+at      +keyT const                  +
+--------+----------------------------+
+blk     +block<(p:valT?):void> const +
+--------+----------------------------+


|function-builtin-find_for_edit_if_exists|

.. _function-_at__builtin__c__c_find_if_exists__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT__hh_const_hh__hh_block_hh__hh_const_hh__hh_ptr_hh__hh_alias_hh_valT_hh__rq_p_hh__c_void:

.. das:function:: find_if_exists(Tab: table<auto(keyT);auto(valT)> const; at: keyT const; blk: block<(p:valT? const):void> const)

find_if_exists returns auto

+--------+----------------------------------+
+argument+argument type                     +
+========+==================================+
+Tab     +table<auto(keyT);auto(valT)> const+
+--------+----------------------------------+
+at      +keyT const                        +
+--------+----------------------------------+
+blk     +block<(p:valT? const):void> const +
+--------+----------------------------------+


|function-builtin-find_if_exists|

.. _function-_at__builtin__c__c_find_index__hh_const_hh__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_alias_hh_TT:

.. das:function:: find_index(arr: array<auto(TT)> const implicit; key: TT const)

find_index returns auto

+--------+------------------------------+
+argument+argument type                 +
+========+==============================+
+arr     +array<auto(TT)> const implicit+
+--------+------------------------------+
+key     +TT const                      +
+--------+------------------------------+


|function-builtin-find_index|

.. _function-_at__builtin__c__c_find_index__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT_hh_-1__hh_const_hh__hh_alias_hh_TT:

.. das:function:: find_index(arr: auto(TT) const[-1] implicit; key: TT const)

find_index returns auto

+--------+---------------------------+
+argument+argument type              +
+========+===========================+
+arr     +auto(TT) const[-1] implicit+
+--------+---------------------------+
+key     +TT const                   +
+--------+---------------------------+


|function-builtin-find_index|

.. _function-_at__builtin__c__c_find_index__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT__hh_const_hh__hh_alias_hh_TT:

.. das:function:: find_index(arr: iterator<auto(TT)> const; key: TT const)

find_index returns auto

+--------+------------------------+
+argument+argument type           +
+========+========================+
+arr     +iterator<auto(TT)> const+
+--------+------------------------+
+key     +TT const                +
+--------+------------------------+


|function-builtin-find_index|

.. _function-_at__builtin__c__c_find_index_if__hh_const_hh__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_key_hh__c_bool:

.. das:function:: find_index_if(arr: array<auto(TT)> const implicit; blk: block<(key:TT const):bool> const)

find_index_if returns auto

+--------+--------------------------------+
+argument+argument type                   +
+========+================================+
+arr     +array<auto(TT)> const implicit  +
+--------+--------------------------------+
+blk     +block<(key:TT const):bool> const+
+--------+--------------------------------+


|function-builtin-find_index_if|

.. _function-_at__builtin__c__c_find_index_if__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT_hh_-1__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_key_hh__c_bool:

.. das:function:: find_index_if(arr: auto(TT) const[-1] implicit; blk: block<(key:TT const):bool> const)

find_index_if returns auto

+--------+--------------------------------+
+argument+argument type                   +
+========+================================+
+arr     +auto(TT) const[-1] implicit     +
+--------+--------------------------------+
+blk     +block<(key:TT const):bool> const+
+--------+--------------------------------+


|function-builtin-find_index_if|

.. _function-_at__builtin__c__c_find_index_if__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_key_hh__c_bool:

.. das:function:: find_index_if(arr: iterator<auto(TT)> const; blk: block<(key:TT const -&):bool> const)

find_index_if returns auto

+--------+--------------------------------+
+argument+argument type                   +
+========+================================+
+arr     +iterator<auto(TT)> const        +
+--------+--------------------------------+
+blk     +block<(key:TT const):bool> const+
+--------+--------------------------------+


|function-builtin-find_index_if|

.. _function-_at__builtin__c__c_has_value__hh_const_hh__hh_auto__hh_const_hh__hh_auto:

.. das:function:: has_value(a: auto const; key: auto const)

has_value returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+a       +auto const   +
+--------+-------------+
+key     +auto const   +
+--------+-------------+


|function-builtin-has_value|

.. _function-_at__builtin__c__c_key_exists__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_alias_hh_keyT:

.. das:function:: key_exists(Tab: table<auto(keyT);auto(valT)> const; at: keyT const)

key_exists returns bool

+--------+----------------------------------+
+argument+argument type                     +
+========+==================================+
+Tab     +table<auto(keyT);auto(valT)> const+
+--------+----------------------------------+
+at      +keyT const                        +
+--------+----------------------------------+


|function-builtin-key_exists|

.. _function-_at__builtin__c__c_keys__hh_const_hh__hh_implicit_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT:

.. das:function:: keys(a: table<auto(keyT);auto(valT)> const implicit)

keys returns iterator<keyT const&>

+--------+-------------------------------------------+
+argument+argument type                              +
+========+===========================================+
+a       +table<auto(keyT);auto(valT)> const implicit+
+--------+-------------------------------------------+


|function-builtin-keys|

.. _function-_at__builtin__c__c_length__hh_const_hh__hh_auto:

.. das:function:: length(vec: auto const)

length returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+vec     +auto const   +
+--------+-------------+


|function-builtin-length|

.. _function-_at__builtin__c__c_length__hh_const_hh__hh_auto_hh_-1:

.. das:function:: length(a: auto const[-1])

length returns int

+--------+--------------+
+argument+argument type +
+========+==============+
+a       +auto const[-1]+
+--------+--------------+


|function-builtin-length|

.. _function-_at__builtin__c__c_lock__hh_const_hh__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_implicit_hh__hh_array_hh__hh_alias_hh_TT_hh__rq_x_hh__c__hh_auto:

.. das:function:: lock(a: array<auto(TT)> const =const; blk: block<(x:array<TT> const# implicit):auto> const)

lock returns auto

+--------+-----------------------------------------------+
+argument+argument type                                  +
+========+===============================================+
+a       +array<auto(TT)> const!                         +
+--------+-----------------------------------------------+
+blk     +block<(x:array<TT> const# implicit):auto> const+
+--------+-----------------------------------------------+


|function-builtin-lock|

.. _function-_at__builtin__c__c_lock__hh_const_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_alias_hh_keyT_hh__hh_alias_hh_valT_hh__rq_t_hh__c_void:

.. das:function:: lock(Tab: table<auto(keyT);auto(valT)> const; blk: block<(t:table<keyT;valT> const#):void> const)

lock returns auto

+--------+---------------------------------------------+
+argument+argument type                                +
+========+=============================================+
+Tab     +table<auto(keyT);auto(valT)> const           +
+--------+---------------------------------------------+
+blk     +block<(t:table<keyT;valT> const#):void> const+
+--------+---------------------------------------------+


|function-builtin-lock|

.. _function-_at__builtin__c__c_lock__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_table_hh__hh_alias_hh_keyT_hh__hh_alias_hh_valT_hh__rq_t_hh__c_void:

.. das:function:: lock(Tab: table<auto(keyT);auto(valT)> const#; blk: block<(t:table<keyT;valT> const#):void> const)

lock returns auto

+--------+---------------------------------------------+
+argument+argument type                                +
+========+=============================================+
+Tab     +table<auto(keyT);auto(valT)> const#          +
+--------+---------------------------------------------+
+blk     +block<(t:table<keyT;valT> const#):void> const+
+--------+---------------------------------------------+


|function-builtin-lock|

.. _function-_at__builtin__c__c_lock__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_temporary_hh__hh_implicit_hh__hh_array_hh__hh_alias_hh_TT_hh__rq_x_hh__c__hh_auto:

.. das:function:: lock(a: array<auto(TT)> =const; blk: block<(x:array<TT># implicit -const):auto> const)

lock returns auto

+--------+-----------------------------------------+
+argument+argument type                            +
+========+=========================================+
+a       +array<auto(TT)>!                         +
+--------+-----------------------------------------+
+blk     +block<(x:array<TT># implicit):auto> const+
+--------+-----------------------------------------+


|function-builtin-lock|

.. _function-_at__builtin__c__c_lock_forever__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT:

.. das:function:: lock_forever(Tab: table<auto(keyT);auto(valT)>)

lock_forever returns table<keyT;valT>#

+--------+----------------------------+
+argument+argument type               +
+========+============================+
+Tab     +table<auto(keyT);auto(valT)>+
+--------+----------------------------+


|function-builtin-lock_forever|

.. _function-_at__builtin__c__c_next__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT__hh_ref_hh__hh_alias_hh_TT:

.. das:function:: next(it: iterator<auto(TT)> const; value: TT&)

next returns bool

+--------+------------------------+
+argument+argument type           +
+========+========================+
+it      +iterator<auto(TT)> const+
+--------+------------------------+
+value   +TT&                     +
+--------+------------------------+


|function-builtin-next|

.. _function-_at__builtin__c__c_nothing__hh_iterator_hh__hh_auto_hh_TT:

.. das:function:: nothing(it: iterator<auto(TT)>)

nothing returns iterator<TT>

+--------+------------------+
+argument+argument type     +
+========+==================+
+it      +iterator<auto(TT)>+
+--------+------------------+


|function-builtin-nothing|

.. _function-_at__builtin__c__c_pop__hh_array_hh__hh_auto_hh_numT:

.. das:function:: pop(Arr: array<auto(numT)>)

pop returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+


|function-builtin-pop|

.. _function-_at__builtin__c__c_push__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_alias_hh_numT:

.. das:function:: push(Arr: array<auto(numT)>; value: numT const)

push returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+
+value   +numT const       +
+--------+-----------------+


|function-builtin-push|

.. _function-_at__builtin__c__c_push__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_alias_hh_numT__hh_const_hh_int:

.. das:function:: push(Arr: array<auto(numT)>; value: numT const; at: int const)

push returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+
+value   +numT const       +
+--------+-----------------+
+at      +int const        +
+--------+-----------------+


|function-builtin-push|

.. _function-_at__builtin__c__c_push_clone__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_implicit_hh__hh_alias_hh_numT:

.. das:function:: push_clone(Arr: array<auto(numT)>; value: numT const implicit)

push_clone returns auto

+--------+-------------------+
+argument+argument type      +
+========+===================+
+Arr     +array<auto(numT)>  +
+--------+-------------------+
+value   +numT const implicit+
+--------+-------------------+


|function-builtin-push_clone|

.. _function-_at__builtin__c__c_push_clone__hh_array_hh__hh_auto_hh_numT__hh_const_hh__hh_implicit_hh__hh_alias_hh_numT__hh_const_hh_int:

.. das:function:: push_clone(Arr: array<auto(numT)>; value: numT const implicit; at: int const)

push_clone returns auto

+--------+-------------------+
+argument+argument type      +
+========+===================+
+Arr     +array<auto(numT)>  +
+--------+-------------------+
+value   +numT const implicit+
+--------+-------------------+
+at      +int const          +
+--------+-------------------+


|function-builtin-push_clone|

.. _function-_at__builtin__c__c_push_clone__hh_auto_hh_CT__hh_const_hh__hh_implicit_hh__hh_auto_hh_TT:

.. das:function:: push_clone(A: auto(CT); b: auto(TT) const implicit)

push_clone returns auto

+--------+-----------------------+
+argument+argument type          +
+========+=======================+
+A       +auto(CT)               +
+--------+-----------------------+
+b       +auto(TT) const implicit+
+--------+-----------------------+


|function-builtin-push_clone|

.. _function-_at__builtin__c__c_reserve__hh_array_hh__hh_auto_hh_numT__hh_const_hh_int:

.. das:function:: reserve(Arr: array<auto(numT)>; newSize: int const)

reserve returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+
+newSize +int const        +
+--------+-----------------+


|function-builtin-reserve|

.. _function-_at__builtin__c__c_resize__hh_array_hh__hh_auto_hh_numT__hh_const_hh_int:

.. das:function:: resize(Arr: array<auto(numT)>; newSize: int const)

resize returns auto

+--------+-----------------+
+argument+argument type    +
+========+=================+
+Arr     +array<auto(numT)>+
+--------+-----------------+
+newSize +int const        +
+--------+-----------------+


|function-builtin-resize|

.. _function-_at__builtin__c__c_sort__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT:

.. das:function:: sort(a: array<auto(TT)> implicit)

sort returns auto

+--------+------------------------+
+argument+argument type           +
+========+========================+
+a       +array<auto(TT)> implicit+
+--------+------------------------+


|function-builtin-sort|

.. _function-_at__builtin__c__c_sort__hh_implicit_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_x_hh__rq_y_hh__c_bool:

.. das:function:: sort(a: array<auto(TT)> implicit; cmp: block<(x:TT const;y:TT const):bool> const)

sort returns auto

+--------+-----------------------------------------+
+argument+argument type                            +
+========+=========================================+
+a       +array<auto(TT)> implicit                 +
+--------+-----------------------------------------+
+cmp     +block<(x:TT const;y:TT const):bool> const+
+--------+-----------------------------------------+


|function-builtin-sort|

.. _function-_at__builtin__c__c_sort__hh_implicit_hh__hh_auto_hh_TT_hh_-1:

.. das:function:: sort(a: auto(TT)[-1] implicit)

sort returns auto

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+a       +auto(TT)[-1] implicit+
+--------+---------------------+


|function-builtin-sort|

.. _function-_at__builtin__c__c_sort__hh_implicit_hh__hh_auto_hh_TT_hh_-1__hh_const_hh__hh_block_hh__hh_const_hh__hh_alias_hh_TT_hh__hh_const_hh__hh_alias_hh_TT_hh__rq_x_hh__rq_y_hh__c_bool:

.. das:function:: sort(a: auto(TT)[-1] implicit; cmp: block<(x:TT const;y:TT const):bool> const)

sort returns auto

+--------+-----------------------------------------+
+argument+argument type                            +
+========+=========================================+
+a       +auto(TT)[-1] implicit                    +
+--------+-----------------------------------------+
+cmp     +block<(x:TT const;y:TT const):bool> const+
+--------+-----------------------------------------+


|function-builtin-sort|

.. _function-_at__builtin__c__c_to_array__hh_const_hh__hh_auto_hh_TT_hh_-1:

.. das:function:: to_array(a: auto(TT) const[-1])

to_array returns array<TT>

+--------+------------------+
+argument+argument type     +
+========+==================+
+a       +auto(TT) const[-1]+
+--------+------------------+


|function-builtin-to_array|

.. _function-_at__builtin__c__c_to_array__hh_const_hh__hh_iterator_hh__hh_auto_hh_TT:

.. das:function:: to_array(it: iterator<auto(TT)> const)

to_array returns array<TT>

+--------+------------------------+
+argument+argument type           +
+========+========================+
+it      +iterator<auto(TT)> const+
+--------+------------------------+


|function-builtin-to_array|

.. _function-_at__builtin__c__c_to_array_move__hh_auto_hh_TT:

.. das:function:: to_array_move(a: auto(TT))

to_array_move returns array<TT>

+--------+-------------+
+argument+argument type+
+========+=============+
+a       +auto(TT)     +
+--------+-------------+


|function-builtin-to_array_move|

.. _function-_at__builtin__c__c_to_array_move__hh_auto_hh_TT_hh_-1:

.. das:function:: to_array_move(a: auto(TT)[-1])

to_array_move returns array<TT>

+--------+-------------+
+argument+argument type+
+========+=============+
+a       +auto(TT)[-1] +
+--------+-------------+


|function-builtin-to_array_move|

.. _function-_at__builtin__c__c_to_table__hh_const_hh__hh_tuple_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT_hh_-1:

.. das:function:: to_table(a: tuple<auto(keyT);auto(valT)> const[-1])

to_table returns table<keyT;valT>

+--------+--------------------------------------+
+argument+argument type                         +
+========+======================================+
+a       +tuple<auto(keyT);auto(valT)> const[-1]+
+--------+--------------------------------------+


|function-builtin-to_table|

.. _function-_at__builtin__c__c_to_table_move__hh_tuple_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT_hh_-1:

.. das:function:: to_table_move(a: tuple<auto(keyT);auto(valT)>[-1])

to_table_move returns table<keyT;valT>

+--------+--------------------------------+
+argument+argument type                   +
+========+================================+
+a       +tuple<auto(keyT);auto(valT)>[-1]+
+--------+--------------------------------+


|function-builtin-to_table_move|

.. _function-_at__builtin__c__c_values__hh_const_hh__hh_implicit_hh__hh_explicitconst_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT:

.. das:function:: values(a: table<auto(keyT);auto(valT)> const implicit =const)

values returns iterator<valT const&>

+--------+--------------------------------------------+
+argument+argument type                               +
+========+============================================+
+a       +table<auto(keyT);auto(valT)> const implicit!+
+--------+--------------------------------------------+


|function-builtin-values|

.. _function-_at__builtin__c__c_values__hh_implicit_hh__hh_explicitconst_hh__hh_table_hh__hh_auto_hh_keyT_hh__hh_auto_hh_valT:

.. das:function:: values(a: table<auto(keyT);auto(valT)> implicit =const)

values returns iterator<valT&>

+--------+--------------------------------------+
+argument+argument type                         +
+========+======================================+
+a       +table<auto(keyT);auto(valT)> implicit!+
+--------+--------------------------------------+


|function-builtin-values|

++++++++++++++++++++++++
das::string manipulation
++++++++++++++++++++++++

  *  :ref:`peek (arg0:$::das_string const implicit;arg1:block\<(string const#):void\> const implicit;arg2:__context const) : void <function-_at__builtin__c__c_peek__hh_const_hh__hh_implicit_hh__hh_handle_hh_das_string__hh_const_hh__hh_implicit_hh__hh_block_hh__hh_const_hh__hh_temporary_hh_string_hh__c_void__hh_const_hh___context>` 

.. _function-_at__builtin__c__c_peek__hh_const_hh__hh_implicit_hh__hh_handle_hh_das_string__hh_const_hh__hh_implicit_hh__hh_block_hh__hh_const_hh__hh_temporary_hh_string_hh__c_void__hh_const_hh___context:

.. das:function:: peek(arg0: das_string const implicit; arg1: block<(string const#):void> const implicit)

+--------+-----------------------------------------------------------------------+
+argument+argument type                                                          +
+========+=======================================================================+
+arg0    + :ref:`builtin::das_string <handle-builtin-das_string>`  const implicit+
+--------+-----------------------------------------------------------------------+
+arg1    +block<(string const#):void> const implicit                             +
+--------+-----------------------------------------------------------------------+


|function-builtin-peek|

++++++++++++++
Heap reporting
++++++++++++++

  *  :ref:`heap_bytes_allocated (arg0:__context const) : uint64 <function-_at__builtin__c__c_heap_bytes_allocated__hh_const_hh___context>` 
  *  :ref:`heap_depth (arg0:__context const) : int <function-_at__builtin__c__c_heap_depth__hh_const_hh___context>` 
  *  :ref:`heap_report (arg0:__context const) : void <function-_at__builtin__c__c_heap_report__hh_const_hh___context>` 
  *  :ref:`string_heap_bytes_allocated (arg0:__context const) : uint64 <function-_at__builtin__c__c_string_heap_bytes_allocated__hh_const_hh___context>` 
  *  :ref:`string_heap_collect (arg0:__context const;arg1:__lineInfo const) : void <function-_at__builtin__c__c_string_heap_collect__hh_const_hh___context__hh_const_hh___lineInfo>` 
  *  :ref:`string_heap_depth (arg0:__context const) : int <function-_at__builtin__c__c_string_heap_depth__hh_const_hh___context>` 
  *  :ref:`string_heap_report (arg0:__context const) : void <function-_at__builtin__c__c_string_heap_report__hh_const_hh___context>` 

.. _function-_at__builtin__c__c_heap_bytes_allocated__hh_const_hh___context:

.. das:function:: heap_bytes_allocated()

heap_bytes_allocated returns uint64

|function-builtin-heap_bytes_allocated|

.. _function-_at__builtin__c__c_heap_depth__hh_const_hh___context:

.. das:function:: heap_depth()

heap_depth returns int

|function-builtin-heap_depth|

.. _function-_at__builtin__c__c_heap_report__hh_const_hh___context:

.. das:function:: heap_report()

|function-builtin-heap_report|

.. _function-_at__builtin__c__c_string_heap_bytes_allocated__hh_const_hh___context:

.. das:function:: string_heap_bytes_allocated()

string_heap_bytes_allocated returns uint64

|function-builtin-string_heap_bytes_allocated|

.. _function-_at__builtin__c__c_string_heap_collect__hh_const_hh___context__hh_const_hh___lineInfo:

.. das:function:: string_heap_collect()

.. warning:: 
  This is unsafe operation.

|function-builtin-string_heap_collect|

.. _function-_at__builtin__c__c_string_heap_depth__hh_const_hh___context:

.. das:function:: string_heap_depth()

string_heap_depth returns int

|function-builtin-string_heap_depth|

.. _function-_at__builtin__c__c_string_heap_report__hh_const_hh___context:

.. das:function:: string_heap_report()

|function-builtin-string_heap_report|

++++++++++++++++++
GC0 infrastructure
++++++++++++++++++

  *  :ref:`gc0_reset () : void <function-_at__builtin__c__c_gc0_reset>` 
  *  :ref:`gc0_restore_ptr (arg0:string const implicit;arg1:__context const) : void? <function-_at__builtin__c__c_gc0_restore_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context>` 
  *  :ref:`gc0_restore_smart_ptr (arg0:string const implicit;arg1:__context const) : smart_ptr\<void\> <function-_at__builtin__c__c_gc0_restore_smart_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context>` 
  *  :ref:`gc0_save_ptr (arg0:string const implicit;arg1:void? const implicit;arg2:__context const;arg3:__lineInfo const) : void <function-_at__builtin__c__c_gc0_save_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh___context__hh_const_hh___lineInfo>` 
  *  :ref:`gc0_save_smart_ptr (arg0:string const implicit;arg1:smart_ptr\<void\> const implicit;arg2:__context const;arg3:__lineInfo const) : void <function-_at__builtin__c__c_gc0_save_smart_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh__hh_implicit_hh__hh_smart_ptr_hh_void__hh_const_hh___context__hh_const_hh___lineInfo>` 

.. _function-_at__builtin__c__c_gc0_reset:

.. das:function:: gc0_reset()

|function-builtin-gc0_reset|

.. _function-_at__builtin__c__c_gc0_restore_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context:

.. das:function:: gc0_restore_ptr(arg0: string const implicit)

gc0_restore_ptr returns void?

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+arg0    +string const implicit+
+--------+---------------------+


|function-builtin-gc0_restore_ptr|

.. _function-_at__builtin__c__c_gc0_restore_smart_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context:

.. das:function:: gc0_restore_smart_ptr(arg0: string const implicit)

gc0_restore_smart_ptr returns smart_ptr<void>

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+arg0    +string const implicit+
+--------+---------------------+


|function-builtin-gc0_restore_smart_ptr|

.. _function-_at__builtin__c__c_gc0_save_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh___context__hh_const_hh___lineInfo:

.. das:function:: gc0_save_ptr(arg0: string const implicit; arg1: void? const implicit)

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+arg0    +string const implicit+
+--------+---------------------+
+arg1    +void? const implicit +
+--------+---------------------+


|function-builtin-gc0_save_ptr|

.. _function-_at__builtin__c__c_gc0_save_smart_ptr__hh_const_hh__hh_implicit_hh_string__hh_const_hh__hh_implicit_hh__hh_smart_ptr_hh_void__hh_const_hh___context__hh_const_hh___lineInfo:

.. das:function:: gc0_save_smart_ptr(arg0: string const implicit; arg1: smart_ptr<void> const implicit)

+--------+------------------------------+
+argument+argument type                 +
+========+==============================+
+arg0    +string const implicit         +
+--------+------------------------------+
+arg1    +smart_ptr<void> const implicit+
+--------+------------------------------+


|function-builtin-gc0_save_smart_ptr|

++++++++++++++++++++++++
Smart ptr infrastructure
++++++++++++++++++++++++

  *  :ref:`smart_ptr_clone (arg0:smart_ptr\<void\>& implicit;arg1:void? const implicit) : void <function-_at__builtin__c__c_smart_ptr_clone__hh_ref_hh__hh_implicit_hh__hh_smart_ptr_hh_void__hh_const_hh__hh_implicit_hh__hh_ptr>` 
  *  :ref:`smart_ptr_clone (arg0:smart_ptr\<void\>& implicit;arg1:smart_ptr\<void\> const implicit) : void <function-_at__builtin__c__c_smart_ptr_clone__hh_ref_hh__hh_implicit_hh__hh_smart_ptr_hh_void__hh_const_hh__hh_implicit_hh__hh_smart_ptr_hh_void>` 
  *  :ref:`smart_ptr_use_count (arg0:smart_ptr\<void\> const implicit) : uint <function-_at__builtin__c__c_smart_ptr_use_count__hh_const_hh__hh_implicit_hh__hh_smart_ptr_hh_void>` 
  *  :ref:`get_ptr (src:smart_ptr\<auto(TT)\> const) : TT? <function-_at__builtin__c__c_get_ptr__hh_const_hh__hh_smart_ptr_hh__hh_auto_hh_TT>` 

.. _function-_at__builtin__c__c_smart_ptr_clone__hh_ref_hh__hh_implicit_hh__hh_smart_ptr_hh_void__hh_const_hh__hh_implicit_hh__hh_ptr:

.. das:function:: smart_ptr_clone(arg0: smart_ptr<void>& implicit; arg1: void? const implicit)

+--------+-------------------------+
+argument+argument type            +
+========+=========================+
+arg0    +smart_ptr<void>& implicit+
+--------+-------------------------+
+arg1    +void? const implicit     +
+--------+-------------------------+


|function-builtin-smart_ptr_clone|

.. _function-_at__builtin__c__c_smart_ptr_clone__hh_ref_hh__hh_implicit_hh__hh_smart_ptr_hh_void__hh_const_hh__hh_implicit_hh__hh_smart_ptr_hh_void:

.. das:function:: smart_ptr_clone(arg0: smart_ptr<void>& implicit; arg1: smart_ptr<void> const implicit)

+--------+------------------------------+
+argument+argument type                 +
+========+==============================+
+arg0    +smart_ptr<void>& implicit     +
+--------+------------------------------+
+arg1    +smart_ptr<void> const implicit+
+--------+------------------------------+


|function-builtin-smart_ptr_clone|

.. _function-_at__builtin__c__c_smart_ptr_use_count__hh_const_hh__hh_implicit_hh__hh_smart_ptr_hh_void:

.. das:function:: smart_ptr_use_count(arg0: smart_ptr<void> const implicit)

smart_ptr_use_count returns uint

+--------+------------------------------+
+argument+argument type                 +
+========+==============================+
+arg0    +smart_ptr<void> const implicit+
+--------+------------------------------+


|function-builtin-smart_ptr_use_count|

.. _function-_at__builtin__c__c_get_ptr__hh_const_hh__hh_smart_ptr_hh__hh_auto_hh_TT:

.. das:function:: get_ptr(src: smart_ptr<auto(TT)> const)

get_ptr returns TT?

+--------+-------------------------+
+argument+argument type            +
+========+=========================+
+src     +smart_ptr<auto(TT)> const+
+--------+-------------------------+


|function-builtin-get_ptr|

++++++++++++++++++++
Macro infrastructure
++++++++++++++++++++

  *  :ref:`is_compiling (arg0:__context const) : bool <function-_at__builtin__c__c_is_compiling__hh_const_hh___context>` 
  *  :ref:`is_compiling_macros (arg0:__context const) : bool <function-_at__builtin__c__c_is_compiling_macros__hh_const_hh___context>` 
  *  :ref:`is_compiling_macros_in_module (arg0:string const implicit;arg1:__context const) : bool <function-_at__builtin__c__c_is_compiling_macros_in_module__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context>` 

.. _function-_at__builtin__c__c_is_compiling__hh_const_hh___context:

.. das:function:: is_compiling()

is_compiling returns bool

|function-builtin-is_compiling|

.. _function-_at__builtin__c__c_is_compiling_macros__hh_const_hh___context:

.. das:function:: is_compiling_macros()

is_compiling_macros returns bool

|function-builtin-is_compiling_macros|

.. _function-_at__builtin__c__c_is_compiling_macros_in_module__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context:

.. das:function:: is_compiling_macros_in_module(arg0: string const implicit)

is_compiling_macros_in_module returns bool

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+arg0    +string const implicit+
+--------+---------------------+


|function-builtin-is_compiling_macros_in_module|

++++++++
Profiler
++++++++

  *  :ref:`collect_profile_info (arg0:__context const) : string <function-_at__builtin__c__c_collect_profile_info__hh_const_hh___context>` 
  *  :ref:`dump_profile_info (arg0:__context const) : void <function-_at__builtin__c__c_dump_profile_info__hh_const_hh___context>` 
  *  :ref:`profile (arg0:int const;arg1:string const implicit;arg2:block\<\> const implicit;arg3:__context const) : float <function-_at__builtin__c__c_profile__hh_const_hh_int__hh_const_hh__hh_implicit_hh_string__hh_const_hh__hh_implicit_hh__hh_block__hh_const_hh___context>` 
  *  :ref:`reset_profiler (arg0:__context const) : void <function-_at__builtin__c__c_reset_profiler__hh_const_hh___context>` 

.. _function-_at__builtin__c__c_collect_profile_info__hh_const_hh___context:

.. das:function:: collect_profile_info()

collect_profile_info returns string

|function-builtin-collect_profile_info|

.. _function-_at__builtin__c__c_dump_profile_info__hh_const_hh___context:

.. das:function:: dump_profile_info()

|function-builtin-dump_profile_info|

.. _function-_at__builtin__c__c_profile__hh_const_hh_int__hh_const_hh__hh_implicit_hh_string__hh_const_hh__hh_implicit_hh__hh_block__hh_const_hh___context:

.. das:function:: profile(arg0: int const; arg1: string const implicit; arg2: block<> const implicit)

profile returns float

+--------+----------------------+
+argument+argument type         +
+========+======================+
+arg0    +int const             +
+--------+----------------------+
+arg1    +string const implicit +
+--------+----------------------+
+arg2    +block<> const implicit+
+--------+----------------------+


|function-builtin-profile|

.. _function-_at__builtin__c__c_reset_profiler__hh_const_hh___context:

.. das:function:: reset_profiler()

|function-builtin-reset_profiler|

++++++++++++++++++++
System infastructure
++++++++++++++++++++

  *  :ref:`breakpoint () : void <function-_at__builtin__c__c_breakpoint>` 
  *  :ref:`get_das_root (arg0:__context const) : string <function-_at__builtin__c__c_get_das_root__hh_const_hh___context>` 
  *  :ref:`is_in_aot () : bool <function-_at__builtin__c__c_is_in_aot>` 
  *  :ref:`panic (arg0:string const implicit;arg1:__context const) : void <function-_at__builtin__c__c_panic__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context>` 
  *  :ref:`print (arg0:string const implicit;arg1:__context const) : void <function-_at__builtin__c__c_print__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context>` 
  *  :ref:`sprint (arg0:any const;arg1:bitfield\<escapeString;namesAndDimensions;typeQualifiers;refAddresses;humanReadable\> const) : string <function-_at__builtin__c__c_sprint__hh_const_hh_any__hh_const_hh__hh_bitfield_hh__rq_escapeString_hh__rq_namesAndDimensions_hh__rq_typeQualifiers_hh__rq_refAddresses_hh__rq_humanReadable>` 
  *  :ref:`stackwalk (arg0:bool const;arg1:bool const;arg2:__context const;arg3:__lineInfo const) : void <function-_at__builtin__c__c_stackwalk__hh_const_hh_bool__hh_const_hh_bool__hh_const_hh___context__hh_const_hh___lineInfo>` 
  *  :ref:`terminate (arg0:__context const) : void <function-_at__builtin__c__c_terminate__hh_const_hh___context>` 

.. _function-_at__builtin__c__c_breakpoint:

.. das:function:: breakpoint()

|function-builtin-breakpoint|

.. _function-_at__builtin__c__c_get_das_root__hh_const_hh___context:

.. das:function:: get_das_root()

get_das_root returns string

|function-builtin-get_das_root|

.. _function-_at__builtin__c__c_is_in_aot:

.. das:function:: is_in_aot()

is_in_aot returns bool

|function-builtin-is_in_aot|

.. _function-_at__builtin__c__c_panic__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context:

.. das:function:: panic(arg0: string const implicit)

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+arg0    +string const implicit+
+--------+---------------------+


|function-builtin-panic|

.. _function-_at__builtin__c__c_print__hh_const_hh__hh_implicit_hh_string__hh_const_hh___context:

.. das:function:: print(arg0: string const implicit)

+--------+---------------------+
+argument+argument type        +
+========+=====================+
+arg0    +string const implicit+
+--------+---------------------+


|function-builtin-print|

.. _function-_at__builtin__c__c_sprint__hh_const_hh_any__hh_const_hh__hh_bitfield_hh__rq_escapeString_hh__rq_namesAndDimensions_hh__rq_typeQualifiers_hh__rq_refAddresses_hh__rq_humanReadable:

.. das:function:: sprint(arg0: any const; arg1: print_flags)

sprint returns string

+--------+----------------------------------------+
+argument+argument type                           +
+========+========================================+
+arg0    +any const                               +
+--------+----------------------------------------+
+arg1    + :ref:`print_flags <alias-print_flags>` +
+--------+----------------------------------------+


|function-builtin-sprint|

.. _function-_at__builtin__c__c_stackwalk__hh_const_hh_bool__hh_const_hh_bool__hh_const_hh___context__hh_const_hh___lineInfo:

.. das:function:: stackwalk(arg0: bool const; arg1: bool const)

+--------+-------------+
+argument+argument type+
+========+=============+
+arg0    +bool const   +
+--------+-------------+
+arg1    +bool const   +
+--------+-------------+


|function-builtin-stackwalk|

.. _function-_at__builtin__c__c_terminate__hh_const_hh___context:

.. das:function:: terminate()

|function-builtin-terminate|

+++++++++++++++++++
Memory manipulation
+++++++++++++++++++

  *  :ref:`hash (arg0:any const) : uint <function-_at__builtin__c__c_hash__hh_const_hh_any>` 
  *  :ref:`memcmp (arg0:void? const implicit;arg1:void? const implicit;arg2:int const) : int <function-_at__builtin__c__c_memcmp__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int>` 
  *  :ref:`memcpy (arg0:void? const implicit;arg1:void? const implicit;arg2:int const) : void <function-_at__builtin__c__c_memcpy__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int>` 
  *  :ref:`set_variant_index (arg0:variant\<\> implicit;arg1:int const) : void <function-_at__builtin__c__c_set_variant_index__hh_implicit_hh__hh_variant__hh_const_hh_int>` 
  *  :ref:`variant_index (arg0:variant\<\> const implicit) : int <function-_at__builtin__c__c_variant_index__hh_const_hh__hh_implicit_hh__hh_variant>` 
  *  :ref:`intptr (p:void? const) : uint64 <function-_at__builtin__c__c_intptr__hh_const_hh__hh_ptr_hh_void>` 
  *  :ref:`lock_data (a:array\<auto(TT)\> const =const;blk:block\<(p:TT const? const# implicit;s:int const):auto\> const) : auto <function-_at__builtin__c__c_lock_data__hh_const_hh__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_implicit_hh__hh_ptr_hh__hh_const_hh__hh_alias_hh_TT_hh__hh_const_hh_int_hh__rq_p_hh__rq_s_hh__c__hh_auto>` 
  *  :ref:`lock_data (a:array\<auto(TT)\> =const -const;blk:block\<(p:TT?# implicit -const;s:int const):auto\> const) : auto <function-_at__builtin__c__c_lock_data__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_temporary_hh__hh_implicit_hh__hh_ptr_hh__hh_alias_hh_TT_hh__hh_const_hh_int_hh__rq_p_hh__rq_s_hh__c__hh_auto>` 
  *  :ref:`map_to_array (data:void? const;len:int const;blk:block\<(arg:array\<auto(TT)\># -const):auto\> const) : auto <function-_at__builtin__c__c_map_to_array__hh_const_hh__hh_ptr_hh_void__hh_const_hh_int__hh_const_hh__hh_block_hh__hh_temporary_hh__hh_array_hh__hh_auto_hh_TT_hh__rq_arg_hh__c__hh_auto>` 
  *  :ref:`map_to_ro_array (data:void? const;len:int const;blk:block\<(arg:array\<auto(TT)\> const#):auto\> const) : auto <function-_at__builtin__c__c_map_to_ro_array__hh_const_hh__hh_ptr_hh_void__hh_const_hh_int__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_array_hh__hh_auto_hh_TT_hh__rq_arg_hh__c__hh_auto>` 

.. _function-_at__builtin__c__c_hash__hh_const_hh_any:

.. das:function:: hash(arg0: any const)

hash returns uint

+--------+-------------+
+argument+argument type+
+========+=============+
+arg0    +any const    +
+--------+-------------+


|function-builtin-hash|

.. _function-_at__builtin__c__c_memcmp__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int:

.. das:function:: memcmp(arg0: void? const implicit; arg1: void? const implicit; arg2: int const)

memcmp returns int

.. warning:: 
  This is unsafe operation.

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +void? const implicit+
+--------+--------------------+
+arg1    +void? const implicit+
+--------+--------------------+
+arg2    +int const           +
+--------+--------------------+


|function-builtin-memcmp|

.. _function-_at__builtin__c__c_memcpy__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh__hh_implicit_hh__hh_ptr__hh_const_hh_int:

.. das:function:: memcpy(arg0: void? const implicit; arg1: void? const implicit; arg2: int const)

.. warning:: 
  This is unsafe operation.

+--------+--------------------+
+argument+argument type       +
+========+====================+
+arg0    +void? const implicit+
+--------+--------------------+
+arg1    +void? const implicit+
+--------+--------------------+
+arg2    +int const           +
+--------+--------------------+


|function-builtin-memcpy|

.. _function-_at__builtin__c__c_set_variant_index__hh_implicit_hh__hh_variant__hh_const_hh_int:

.. das:function:: set_variant_index(arg0: variant<> implicit; arg1: int const)

.. warning:: 
  This is unsafe operation.

+--------+------------------+
+argument+argument type     +
+========+==================+
+arg0    +variant<> implicit+
+--------+------------------+
+arg1    +int const         +
+--------+------------------+


|function-builtin-set_variant_index|

.. _function-_at__builtin__c__c_variant_index__hh_const_hh__hh_implicit_hh__hh_variant:

.. das:function:: variant_index(arg0: variant<> const implicit)

variant_index returns int

+--------+------------------------+
+argument+argument type           +
+========+========================+
+arg0    +variant<> const implicit+
+--------+------------------------+


|function-builtin-variant_index|

.. _function-_at__builtin__c__c_intptr__hh_const_hh__hh_ptr_hh_void:

.. das:function:: intptr(p: void? const)

intptr returns uint64

+--------+-------------+
+argument+argument type+
+========+=============+
+p       +void? const  +
+--------+-------------+


|function-builtin-intptr|

.. _function-_at__builtin__c__c_lock_data__hh_const_hh__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_implicit_hh__hh_ptr_hh__hh_const_hh__hh_alias_hh_TT_hh__hh_const_hh_int_hh__rq_p_hh__rq_s_hh__c__hh_auto:

.. das:function:: lock_data(a: array<auto(TT)> const =const; blk: block<(p:TT const? const# implicit;s:int const):auto> const)

lock_data returns auto

+--------+-----------------------------------------------------------+
+argument+argument type                                              +
+========+===========================================================+
+a       +array<auto(TT)> const!                                     +
+--------+-----------------------------------------------------------+
+blk     +block<(p:TT const? const# implicit;s:int const):auto> const+
+--------+-----------------------------------------------------------+


|function-builtin-lock_data|

.. _function-_at__builtin__c__c_lock_data__hh_explicitconst_hh__hh_array_hh__hh_auto_hh_TT__hh_const_hh__hh_block_hh__hh_temporary_hh__hh_implicit_hh__hh_ptr_hh__hh_alias_hh_TT_hh__hh_const_hh_int_hh__rq_p_hh__rq_s_hh__c__hh_auto:

.. das:function:: lock_data(a: array<auto(TT)> =const; blk: block<(p:TT?# implicit -const;s:int const):auto> const)

lock_data returns auto

+--------+-----------------------------------------------+
+argument+argument type                                  +
+========+===============================================+
+a       +array<auto(TT)>!                               +
+--------+-----------------------------------------------+
+blk     +block<(p:TT?# implicit;s:int const):auto> const+
+--------+-----------------------------------------------+


|function-builtin-lock_data|

.. _function-_at__builtin__c__c_map_to_array__hh_const_hh__hh_ptr_hh_void__hh_const_hh_int__hh_const_hh__hh_block_hh__hh_temporary_hh__hh_array_hh__hh_auto_hh_TT_hh__rq_arg_hh__c__hh_auto:

.. das:function:: map_to_array(data: void? const; len: int const; blk: block<(arg:array<auto(TT)># -const):auto> const)

map_to_array returns auto

.. warning:: 
  This is unsafe operation.

+--------+----------------------------------------+
+argument+argument type                           +
+========+========================================+
+data    +void? const                             +
+--------+----------------------------------------+
+len     +int const                               +
+--------+----------------------------------------+
+blk     +block<(arg:array<auto(TT)>#):auto> const+
+--------+----------------------------------------+


|function-builtin-map_to_array|

.. _function-_at__builtin__c__c_map_to_ro_array__hh_const_hh__hh_ptr_hh_void__hh_const_hh_int__hh_const_hh__hh_block_hh__hh_const_hh__hh_temporary_hh__hh_array_hh__hh_auto_hh_TT_hh__rq_arg_hh__c__hh_auto:

.. das:function:: map_to_ro_array(data: void? const; len: int const; blk: block<(arg:array<auto(TT)> const#):auto> const)

map_to_ro_array returns auto

.. warning:: 
  This is unsafe operation.

+--------+----------------------------------------------+
+argument+argument type                                 +
+========+==============================================+
+data    +void? const                                   +
+--------+----------------------------------------------+
+len     +int const                                     +
+--------+----------------------------------------------+
+blk     +block<(arg:array<auto(TT)> const#):auto> const+
+--------+----------------------------------------------+


|function-builtin-map_to_ro_array|

+++++++++++++++++
Binary serializer
+++++++++++++++++

  *  :ref:`binary_load (obj:auto -const;data:array\<uint8\> const) : auto <function-_at__builtin__c__c_binary_load__hh_auto__hh_const_hh__hh_array_hh_uint8>` 
  *  :ref:`binary_save (obj:auto const;subexpr:block\<(data:array\<uint8\> const):void\> const) : auto <function-_at__builtin__c__c_binary_save__hh_const_hh__hh_auto__hh_const_hh__hh_block_hh__hh_const_hh__hh_array_hh_uint8_hh__rq_data_hh__c_void>` 

.. _function-_at__builtin__c__c_binary_load__hh_auto__hh_const_hh__hh_array_hh_uint8:

.. das:function:: binary_load(obj: auto; data: array<uint8> const)

binary_load returns auto

+--------+------------------+
+argument+argument type     +
+========+==================+
+obj     +auto              +
+--------+------------------+
+data    +array<uint8> const+
+--------+------------------+


|function-builtin-binary_load|

.. _function-_at__builtin__c__c_binary_save__hh_const_hh__hh_auto__hh_const_hh__hh_block_hh__hh_const_hh__hh_array_hh_uint8_hh__rq_data_hh__c_void:

.. das:function:: binary_save(obj: auto const; subexpr: block<(data:array<uint8> const):void> const)

binary_save returns auto

+--------+-------------------------------------------+
+argument+argument type                              +
+========+===========================================+
+obj     +auto const                                 +
+--------+-------------------------------------------+
+subexpr +block<(data:array<uint8> const):void> const+
+--------+-------------------------------------------+


|function-builtin-binary_save|

+++++++++++++++++++++
Path and command line
+++++++++++++++++++++

  *  :ref:`get_command_line_arguments () : array\<string\> <function-_at__builtin__c__c_get_command_line_arguments>` 

.. _function-_at__builtin__c__c_get_command_line_arguments:

.. das:function:: get_command_line_arguments()

get_command_line_arguments returns array<string>

|function-builtin-get_command_line_arguments|

+++++++++++++
Time and date
+++++++++++++

  *  :ref:`get_clock () : $::clock <function-_at__builtin__c__c_get_clock>` 
  *  :ref:`get_time_usec (arg0:int64 const) : int <function-_at__builtin__c__c_get_time_usec__hh_const_hh_int64>` 
  *  :ref:`ref_time_ticks () : int64 <function-_at__builtin__c__c_ref_time_ticks>` 

.. _function-_at__builtin__c__c_get_clock:

.. das:function:: get_clock()

get_clock returns  :ref:`builtin::clock <handle-builtin-clock>` 

|function-builtin-get_clock|

.. _function-_at__builtin__c__c_get_time_usec__hh_const_hh_int64:

.. das:function:: get_time_usec(arg0: int64 const)

get_time_usec returns int

+--------+-------------+
+argument+argument type+
+========+=============+
+arg0    +int64 const  +
+--------+-------------+


|function-builtin-get_time_usec|

.. _function-_at__builtin__c__c_ref_time_ticks:

.. das:function:: ref_time_ticks()

ref_time_ticks returns int64

|function-builtin-ref_time_ticks|

++++++++++
Algorithms
++++++++++

  *  :ref:`iter_range (foo:auto const) : auto <function-_at__builtin__c__c_iter_range__hh_const_hh__hh_auto>` 
  *  :ref:`swap (a:auto(TT)& -const;b:auto(TT)& -const) : auto <function-_at__builtin__c__c_swap__hh_ref_hh__hh_auto_hh_TT__hh_ref_hh__hh_auto_hh_TT>` 

.. _function-_at__builtin__c__c_iter_range__hh_const_hh__hh_auto:

.. das:function:: iter_range(foo: auto const)

iter_range returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+foo     +auto const   +
+--------+-------------+


|function-builtin-iter_range|

.. _function-_at__builtin__c__c_swap__hh_ref_hh__hh_auto_hh_TT__hh_ref_hh__hh_auto_hh_TT:

.. das:function:: swap(a: auto(TT)&; b: auto(TT)&)

swap returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+a       +auto(TT)&    +
+--------+-------------+
+b       +auto(TT)&    +
+--------+-------------+


|function-builtin-swap|


