/* Generated code for Python module 'numpy.core._methods'
 * created by Nuitka version 0.6.5
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_numpy$core$_methods" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_methods;
PyDictObject *moduledict_numpy$core$_methods;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_clip;
extern PyObject *const_str_plain_unsafe;
extern PyObject *const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple;
extern PyObject *const_str_plain_umath;
static PyObject *const_str_plain_rcount;
extern PyObject *const_tuple_str_plain_a_str_plain_ndim_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_os_fspath;
static PyObject *const_tuple_str_plain_f8_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_protocol;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_where;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
static PyObject *const_str_plain__clip;
extern PyObject *const_str_plain_minimum;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain__amin;
extern PyObject *const_str_plain_from_;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_plain__any;
extern PyObject *const_str_plain__std;
static PyObject *const_tuple_str_plain_asanyarray_tuple;
static PyObject *const_tuple_38378a805f8bc12d40dc19d611459d40_tuple;
static PyObject *const_str_plain_umr_all;
extern PyObject *const_str_plain_contextlib_nullcontext;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_subtract;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_dict_4bdb372cd460d175d93baa70bea55974;
extern PyObject *const_str_plain__var;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_wb;
static PyObject *const_str_plain__amax;
static PyObject *const_str_plain__all;
extern PyObject *const_str_digest_fef7e379d8b29f70158a022afa317baa;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain__UFuncOutputCastingError;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_0eb7ee514b0cf98ac5f14749a356a892;
extern PyObject *const_str_plain_true_divide;
static PyObject *const_str_plain_arrmean;
static PyObject *const_tuple_str_plain__exceptions_tuple;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_umr_any;
extern PyObject *const_dict_59e37d231bc1f549a9bff6ecc16f6241;
extern PyObject *const_str_plain_isnative;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain_isnan;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple;
static PyObject *const_str_plain_umr_maximum;
extern PyObject *const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple;
static PyObject *const_tuple_str_plain_f4_tuple;
static PyObject *const_str_digest_de5187093df4d185107972d56e11a75e;
extern PyObject *const_str_plain_e;
static PyObject *const_tuple_none_none_none_int_0_false_tuple;
static PyObject *const_str_digest_c264d6c7c6a577cf11f1d443b80eb75b;
extern PyObject *const_str_plain_um;
extern PyObject *const_tuple_str_plain_umath_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_casting;
extern PyObject *const_str_plain_arr;
extern PyObject *const_tuple_str_plain_numerictypes_tuple;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain__mean;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_dump;
extern PyObject *const_tuple_str_plain__NoValue_tuple;
static PyObject *const_tuple_20077b482c1efba97d3763a827d3784e_tuple;
extern PyObject *const_str_plain_pickle;
extern PyObject *const_str_plain_numerictypes;
static PyObject *const_str_digest_2ba7f2eeb7e112a32c8268083faa8ce7;
extern PyObject *const_str_plain_RuntimeWarning;
static PyObject *const_str_digest_31cedbf3b1df683195e1ac1eec4bdd47;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_mu;
static PyObject *const_tuple_f123bc675f0c699860fde9efcb75decc_tuple;
extern PyObject *const_str_plain__ptp;
extern PyObject *const_str_plain_ufunc;
static PyObject *const_str_plain__count_reduce_items;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_float_inf;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_str_plain_ndim_tuple;
static PyObject *const_tuple_35087e572db7f12556349316b3e4a5c7_tuple;
extern PyObject *const_str_plain_f;
extern PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_plain__clip_dep_is_byte_swapped;
extern PyObject *const_tuple_str_plain_multiarray_tuple;
extern PyObject *const_str_plain_logical_or;
extern PyObject *const_tuple_none_none_none_false_tuple;
extern PyObject *const_str_plain_multiarray;
extern PyObject *const_str_plain_dumps;
static PyObject *const_str_digest_afcfd11ee3df3c947f27eb372797c73c;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_digest_79842a9c986864f65f8648fa2c43393c;
static PyObject *const_str_plain_using_deprecated_nan;
extern PyObject *const_str_plain_logical_and;
static PyObject *const_str_plain_is_float16_result;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple;
static PyObject *const_str_digest_440efe2ff434bf8727a08b8d6b49461b;
extern PyObject *const_float_minus_inf;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain__sum;
static PyObject *const_str_plain_umr_minimum;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_str_plain_self_str_plain_protocol_tuple;
extern PyObject *const_str_plain_to;
extern PyObject *const_str_plain__NoValue;
static PyObject *const_tuple_2906568dcc7263904efd02cbb093697c_tuple;
extern PyObject *const_str_plain_subok;
static PyObject *const_str_plain_umr_sum;
static PyObject *const_str_plain__dump;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_initial;
static PyObject *const_str_plain_umr_prod;
extern PyObject *const_str_plain_reduce;
static PyObject *const_dict_7e21d40f9e55a5ec5a77630814412feb;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_plain__clip_dep_is_scalar_nan;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_str_plain__exceptions;
extern PyObject *const_str_plain__prod;
extern PyObject *const_str_plain_keepdims;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ddof;
extern PyObject *const_str_plain_write;
extern PyObject *const_tuple_str_plain_a_tuple;
extern PyObject *const_tuple_none_none_false_tuple;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_438a8d9ba1582b1ebf08e55dfd20d322;
static PyObject *const_str_plain__dumps;
extern PyObject *const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831;
extern PyObject *const_str_plain_floating;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_f4;
static PyObject *const_str_plain__clip_dep_invoke_with_casting;
extern PyObject *const_str_plain_multiply;
extern PyObject *const_str_plain_float16;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_digest_9e9eca8947418183630fd19f8c915a83;
extern PyObject *const_str_plain_ax;
extern PyObject *const_str_plain_f8;
extern PyObject *const_str_plain_file;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_rcount = UNSTREAM_STRING_ASCII( &constant_bin[ 937125 ], 6, 1 );
    const_tuple_str_plain_f8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f8_tuple, 0, const_str_plain_f8 ); Py_INCREF( const_str_plain_f8 );
    const_str_plain__clip = UNSTREAM_STRING_ASCII( &constant_bin[ 937131 ], 5, 1 );
    const_str_plain__amin = UNSTREAM_STRING_ASCII( &constant_bin[ 937136 ], 5, 1 );
    const_str_plain__any = UNSTREAM_STRING_ASCII( &constant_bin[ 8129 ], 4, 1 );
    const_tuple_str_plain_asanyarray_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_asanyarray_tuple, 0, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    const_tuple_38378a805f8bc12d40dc19d611459d40_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 6, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_umr_all = UNSTREAM_STRING_ASCII( &constant_bin[ 937141 ], 7, 1 );
    const_dict_4bdb372cd460d175d93baa70bea55974 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_4bdb372cd460d175d93baa70bea55974, const_str_plain_out, Py_None );
    PyDict_SetItem( const_dict_4bdb372cd460d175d93baa70bea55974, const_str_plain_casting, Py_None );
    assert( PyDict_Size( const_dict_4bdb372cd460d175d93baa70bea55974 ) == 2 );
    const_str_plain__amax = UNSTREAM_STRING_ASCII( &constant_bin[ 937148 ], 5, 1 );
    const_str_plain__all = UNSTREAM_STRING_ASCII( &constant_bin[ 47958 ], 4, 1 );
    const_str_digest_0eb7ee514b0cf98ac5f14749a356a892 = UNSTREAM_STRING_ASCII( &constant_bin[ 937153 ], 20, 0 );
    const_str_plain_arrmean = UNSTREAM_STRING_ASCII( &constant_bin[ 937173 ], 7, 1 );
    const_tuple_str_plain__exceptions_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__exceptions_tuple, 0, const_str_plain__exceptions ); Py_INCREF( const_str_plain__exceptions );
    const_str_plain_umr_any = UNSTREAM_STRING_ASCII( &constant_bin[ 937180 ], 7, 1 );
    const_str_plain_umr_maximum = UNSTREAM_STRING_ASCII( &constant_bin[ 937187 ], 11, 1 );
    const_tuple_str_plain_f4_tuple = PyTuple_New( 1 );
    const_str_plain_f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 889106 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f4_tuple, 0, const_str_plain_f4 ); Py_INCREF( const_str_plain_f4 );
    const_str_digest_de5187093df4d185107972d56e11a75e = UNSTREAM_STRING_ASCII( &constant_bin[ 937198 ], 50, 0 );
    const_tuple_none_none_none_int_0_false_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_false_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_false_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_int_0_false_tuple, 4, Py_False ); Py_INCREF( Py_False );
    const_str_digest_c264d6c7c6a577cf11f1d443b80eb75b = UNSTREAM_STRING_ASCII( &constant_bin[ 937248 ], 19, 0 );
    const_tuple_20077b482c1efba97d3763a827d3784e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_20077b482c1efba97d3763a827d3784e_tuple, 0, const_str_plain_ufunc ); Py_INCREF( const_str_plain_ufunc );
    PyTuple_SET_ITEM( const_tuple_20077b482c1efba97d3763a827d3784e_tuple, 1, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_20077b482c1efba97d3763a827d3784e_tuple, 2, const_str_plain_casting ); Py_INCREF( const_str_plain_casting );
    PyTuple_SET_ITEM( const_tuple_20077b482c1efba97d3763a827d3784e_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_20077b482c1efba97d3763a827d3784e_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_20077b482c1efba97d3763a827d3784e_tuple, 5, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_2ba7f2eeb7e112a32c8268083faa8ce7 = UNSTREAM_STRING_ASCII( &constant_bin[ 892892 ], 31, 0 );
    const_str_digest_31cedbf3b1df683195e1ac1eec4bdd47 = UNSTREAM_STRING_ASCII( &constant_bin[ 937267 ], 275, 0 );
    const_tuple_f123bc675f0c699860fde9efcb75decc_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 6, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 7, const_str_plain_rcount ); Py_INCREF( const_str_plain_rcount );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 8, const_str_plain_arrmean ); Py_INCREF( const_str_plain_arrmean );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 9, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 10, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain__count_reduce_items = UNSTREAM_STRING_ASCII( &constant_bin[ 937542 ], 19, 1 );
    const_tuple_str_plain_ndim_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ndim_tuple, 0, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    const_tuple_35087e572db7f12556349316b3e4a5c7_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_35087e572db7f12556349316b3e4a5c7_tuple, 0, const_str_plain_pickle ); Py_INCREF( const_str_plain_pickle );
    PyTuple_SET_ITEM( const_tuple_35087e572db7f12556349316b3e4a5c7_tuple, 1, const_str_plain_os_fspath ); Py_INCREF( const_str_plain_os_fspath );
    PyTuple_SET_ITEM( const_tuple_35087e572db7f12556349316b3e4a5c7_tuple, 2, const_str_plain_contextlib_nullcontext ); Py_INCREF( const_str_plain_contextlib_nullcontext );
    const_str_plain__clip_dep_is_byte_swapped = UNSTREAM_STRING_ASCII( &constant_bin[ 937561 ], 25, 1 );
    const_str_digest_afcfd11ee3df3c947f27eb372797c73c = UNSTREAM_STRING_ASCII( &constant_bin[ 937586 ], 120, 0 );
    const_str_digest_79842a9c986864f65f8648fa2c43393c = UNSTREAM_STRING_ASCII( &constant_bin[ 937706 ], 28, 0 );
    const_str_plain_using_deprecated_nan = UNSTREAM_STRING_ASCII( &constant_bin[ 937734 ], 20, 1 );
    const_str_plain_is_float16_result = UNSTREAM_STRING_ASCII( &constant_bin[ 937754 ], 17, 1 );
    const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 1, const_str_plain_min ); Py_INCREF( const_str_plain_min );
    PyTuple_SET_ITEM( const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 2, const_str_plain_max ); Py_INCREF( const_str_plain_max );
    PyTuple_SET_ITEM( const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 4, const_str_plain_casting ); Py_INCREF( const_str_plain_casting );
    PyTuple_SET_ITEM( const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 6, const_str_plain_using_deprecated_nan ); Py_INCREF( const_str_plain_using_deprecated_nan );
    const_str_digest_440efe2ff434bf8727a08b8d6b49461b = UNSTREAM_STRING_ASCII( &constant_bin[ 937771 ], 160, 0 );
    const_str_plain__sum = UNSTREAM_STRING_ASCII( &constant_bin[ 687643 ], 4, 1 );
    const_str_plain_umr_minimum = UNSTREAM_STRING_ASCII( &constant_bin[ 937931 ], 11, 1 );
    const_tuple_2906568dcc7263904efd02cbb093697c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_2906568dcc7263904efd02cbb093697c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2906568dcc7263904efd02cbb093697c_tuple, 1, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    PyTuple_SET_ITEM( const_tuple_2906568dcc7263904efd02cbb093697c_tuple, 2, const_str_plain_protocol ); Py_INCREF( const_str_plain_protocol );
    PyTuple_SET_ITEM( const_tuple_2906568dcc7263904efd02cbb093697c_tuple, 3, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_2906568dcc7263904efd02cbb093697c_tuple, 4, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_plain_umr_sum = UNSTREAM_STRING_ASCII( &constant_bin[ 937942 ], 7, 1 );
    const_str_plain__dump = UNSTREAM_STRING_ASCII( &constant_bin[ 937949 ], 5, 1 );
    const_str_plain_umr_prod = UNSTREAM_STRING_ASCII( &constant_bin[ 937954 ], 8, 1 );
    const_dict_7e21d40f9e55a5ec5a77630814412feb = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_7e21d40f9e55a5ec5a77630814412feb, const_str_plain_casting, Py_None );
    assert( PyDict_Size( const_dict_7e21d40f9e55a5ec5a77630814412feb ) == 1 );
    const_str_plain__clip_dep_is_scalar_nan = UNSTREAM_STRING_ASCII( &constant_bin[ 937962 ], 23, 1 );
    const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 5, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 6, const_str_plain_is_float16_result ); Py_INCREF( const_str_plain_is_float16_result );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 7, const_str_plain_rcount ); Py_INCREF( const_str_plain_rcount );
    PyTuple_SET_ITEM( const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 8, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 2, const_str_plain_items ); Py_INCREF( const_str_plain_items );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 3, const_str_plain_ax ); Py_INCREF( const_str_plain_ax );
    const_str_plain__dumps = UNSTREAM_STRING_ASCII( &constant_bin[ 937985 ], 6, 1 );
    const_str_plain__clip_dep_invoke_with_casting = UNSTREAM_STRING_ASCII( &constant_bin[ 937991 ], 29, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$_methods( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_53a39f86f3b878aa60981752df460152;
static PyCodeObject *codeobj_edea61d8ad6779f867cd4ef8ee4bd0d5;
static PyCodeObject *codeobj_fde47fed8a5f41d53a38b73cf0b8005c;
static PyCodeObject *codeobj_43142fbddb533a03aad8abd9b9a86ed6;
static PyCodeObject *codeobj_9aabc5a1154fdafd999933f071b242a1;
static PyCodeObject *codeobj_e09f39a2f46de3c1a1b7db06a37386db;
static PyCodeObject *codeobj_9e95c0fafbfaa6f7e6ac21b3f3256949;
static PyCodeObject *codeobj_1f9474fc5339edde23e46b8111cc9734;
static PyCodeObject *codeobj_a6506650536cf3b2101d0cc7db9c4867;
static PyCodeObject *codeobj_e1eceb682892b85ffe23d488f5510ec3;
static PyCodeObject *codeobj_6217490c59c4ac0c60be915bcc1ebdb7;
static PyCodeObject *codeobj_3631212f5cdaa03b6ac623ae1cdbe5ab;
static PyCodeObject *codeobj_e9a4181288f7219ec8e41b1da14a1f06;
static PyCodeObject *codeobj_3fa9512f8b8382f2eb3968344bd0cc7e;
static PyCodeObject *codeobj_59a6d51c51ebce831bc1e864fb45a8ce;
static PyCodeObject *codeobj_d61ab005c5e048fe0db35eaa79e49be5;
static PyCodeObject *codeobj_4c860ed18cd6d45f3530c3e2b8b10be3;
static PyCodeObject *codeobj_a0b7fee604a5a0cc0aba1366f35f9765;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_de5187093df4d185107972d56e11a75e;
    codeobj_53a39f86f3b878aa60981752df460152 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_79842a9c986864f65f8648fa2c43393c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_edea61d8ad6779f867cd4ef8ee4bd0d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__all, 47, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fde47fed8a5f41d53a38b73cf0b8005c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__amax, 28, const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_43142fbddb533a03aad8abd9b9a86ed6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__amin, 32, const_tuple_d21b3cd2f1ca6768491412b659c74e86_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9aabc5a1154fdafd999933f071b242a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__any, 44, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e09f39a2f46de3c1a1b7db06a37386db = MAKE_CODEOBJ( module_filename_obj, const_str_plain__clip, 97, const_tuple_b2bf01734523252dd47e41c2c98227a4_tuple, 4, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_9e95c0fafbfaa6f7e6ac21b3f3256949 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__clip_dep_invoke_with_casting, 78, const_tuple_20077b482c1efba97d3763a827d3784e_tuple, 1, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_1f9474fc5339edde23e46b8111cc9734 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__clip_dep_is_byte_swapped, 73, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a6506650536cf3b2101d0cc7db9c4867 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__clip_dep_is_scalar_nan, 63, const_tuple_str_plain_a_str_plain_ndim_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1eceb682892b85ffe23d488f5510ec3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__count_reduce_items, 50, const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6217490c59c4ac0c60be915bcc1ebdb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dump, 235, const_tuple_2906568dcc7263904efd02cbb093697c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3631212f5cdaa03b6ac623ae1cdbe5ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dumps, 243, const_tuple_str_plain_self_str_plain_protocol_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9a4181288f7219ec8e41b1da14a1f06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__mean, 134, const_tuple_66f594c3091f46ff6f7e1f187f414503_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3fa9512f8b8382f2eb3968344bd0cc7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__prod, 40, const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59a6d51c51ebce831bc1e864fb45a8ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ptp, 228, const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d61ab005c5e048fe0db35eaa79e49be5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__std, 215, const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c860ed18cd6d45f3530c3e2b8b10be3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sum, 36, const_tuple_bb3cad9c178300e7e3cde9d9028cddb8_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a0b7fee604a5a0cc0aba1366f35f9765 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__var, 167, const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_12_complex_call_helper_keywords_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting( PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_11__clip( PyObject *defaults, PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_12__mean( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_13__var( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_14__std( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_15__ptp( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_16__dump( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_17__dumps( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_5__any( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_6__all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items(  );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan(  );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped(  );


// The module function definitions.
static PyObject *impl_numpy$core$_methods$$$function_1__amax( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *par_initial = python_pars[ 4 ];
    PyObject *par_where = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_fde47fed8a5f41d53a38b73cf0b8005c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fde47fed8a5f41d53a38b73cf0b8005c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fde47fed8a5f41d53a38b73cf0b8005c, codeobj_fde47fed8a5f41d53a38b73cf0b8005c, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fde47fed8a5f41d53a38b73cf0b8005c = cache_frame_fde47fed8a5f41d53a38b73cf0b8005c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fde47fed8a5f41d53a38b73cf0b8005c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fde47fed8a5f41d53a38b73cf0b8005c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_maximum );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_maximum );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_maximum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        tmp_args_element_name_3 = Py_None;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT( par_initial );
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT( par_where );
        tmp_args_element_name_7 = par_where;
        frame_fde47fed8a5f41d53a38b73cf0b8005c->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fde47fed8a5f41d53a38b73cf0b8005c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fde47fed8a5f41d53a38b73cf0b8005c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fde47fed8a5f41d53a38b73cf0b8005c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fde47fed8a5f41d53a38b73cf0b8005c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fde47fed8a5f41d53a38b73cf0b8005c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fde47fed8a5f41d53a38b73cf0b8005c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fde47fed8a5f41d53a38b73cf0b8005c,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame.
    if ( frame_fde47fed8a5f41d53a38b73cf0b8005c == cache_frame_fde47fed8a5f41d53a38b73cf0b8005c )
    {
        Py_DECREF( frame_fde47fed8a5f41d53a38b73cf0b8005c );
    }
    cache_frame_fde47fed8a5f41d53a38b73cf0b8005c = NULL;

    assertFrameObject( frame_fde47fed8a5f41d53a38b73cf0b8005c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_1__amax );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_1__amax );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_2__amin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *par_initial = python_pars[ 4 ];
    PyObject *par_where = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_43142fbddb533a03aad8abd9b9a86ed6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43142fbddb533a03aad8abd9b9a86ed6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43142fbddb533a03aad8abd9b9a86ed6, codeobj_43142fbddb533a03aad8abd9b9a86ed6, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_43142fbddb533a03aad8abd9b9a86ed6 = cache_frame_43142fbddb533a03aad8abd9b9a86ed6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43142fbddb533a03aad8abd9b9a86ed6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43142fbddb533a03aad8abd9b9a86ed6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_minimum );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_minimum );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_minimum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        tmp_args_element_name_3 = Py_None;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT( par_initial );
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT( par_where );
        tmp_args_element_name_7 = par_where;
        frame_43142fbddb533a03aad8abd9b9a86ed6->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43142fbddb533a03aad8abd9b9a86ed6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_43142fbddb533a03aad8abd9b9a86ed6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43142fbddb533a03aad8abd9b9a86ed6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43142fbddb533a03aad8abd9b9a86ed6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43142fbddb533a03aad8abd9b9a86ed6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43142fbddb533a03aad8abd9b9a86ed6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43142fbddb533a03aad8abd9b9a86ed6,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame.
    if ( frame_43142fbddb533a03aad8abd9b9a86ed6 == cache_frame_43142fbddb533a03aad8abd9b9a86ed6 )
    {
        Py_DECREF( frame_43142fbddb533a03aad8abd9b9a86ed6 );
    }
    cache_frame_43142fbddb533a03aad8abd9b9a86ed6 = NULL;

    assertFrameObject( frame_43142fbddb533a03aad8abd9b9a86ed6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_2__amin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_2__amin );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_3__sum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *par_initial = python_pars[ 5 ];
    PyObject *par_where = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_4c860ed18cd6d45f3530c3e2b8b10be3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c860ed18cd6d45f3530c3e2b8b10be3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c860ed18cd6d45f3530c3e2b8b10be3, codeobj_4c860ed18cd6d45f3530c3e2b8b10be3, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4c860ed18cd6d45f3530c3e2b8b10be3 = cache_frame_4c860ed18cd6d45f3530c3e2b8b10be3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c860ed18cd6d45f3530c3e2b8b10be3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c860ed18cd6d45f3530c3e2b8b10be3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_sum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT( par_initial );
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT( par_where );
        tmp_args_element_name_7 = par_where;
        frame_4c860ed18cd6d45f3530c3e2b8b10be3->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c860ed18cd6d45f3530c3e2b8b10be3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c860ed18cd6d45f3530c3e2b8b10be3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c860ed18cd6d45f3530c3e2b8b10be3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c860ed18cd6d45f3530c3e2b8b10be3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c860ed18cd6d45f3530c3e2b8b10be3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c860ed18cd6d45f3530c3e2b8b10be3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c860ed18cd6d45f3530c3e2b8b10be3,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame.
    if ( frame_4c860ed18cd6d45f3530c3e2b8b10be3 == cache_frame_4c860ed18cd6d45f3530c3e2b8b10be3 )
    {
        Py_DECREF( frame_4c860ed18cd6d45f3530c3e2b8b10be3 );
    }
    cache_frame_4c860ed18cd6d45f3530c3e2b8b10be3 = NULL;

    assertFrameObject( frame_4c860ed18cd6d45f3530c3e2b8b10be3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_3__sum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_3__sum );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_4__prod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *par_initial = python_pars[ 5 ];
    PyObject *par_where = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_3fa9512f8b8382f2eb3968344bd0cc7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3fa9512f8b8382f2eb3968344bd0cc7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fa9512f8b8382f2eb3968344bd0cc7e, codeobj_3fa9512f8b8382f2eb3968344bd0cc7e, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fa9512f8b8382f2eb3968344bd0cc7e = cache_frame_3fa9512f8b8382f2eb3968344bd0cc7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fa9512f8b8382f2eb3968344bd0cc7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fa9512f8b8382f2eb3968344bd0cc7e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_prod );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_prod );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_prod" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_5 = par_keepdims;
        CHECK_OBJECT( par_initial );
        tmp_args_element_name_6 = par_initial;
        CHECK_OBJECT( par_where );
        tmp_args_element_name_7 = par_where;
        frame_3fa9512f8b8382f2eb3968344bd0cc7e->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa9512f8b8382f2eb3968344bd0cc7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa9512f8b8382f2eb3968344bd0cc7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa9512f8b8382f2eb3968344bd0cc7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fa9512f8b8382f2eb3968344bd0cc7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fa9512f8b8382f2eb3968344bd0cc7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fa9512f8b8382f2eb3968344bd0cc7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fa9512f8b8382f2eb3968344bd0cc7e,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        par_initial,
        par_where
    );


    // Release cached frame.
    if ( frame_3fa9512f8b8382f2eb3968344bd0cc7e == cache_frame_3fa9512f8b8382f2eb3968344bd0cc7e )
    {
        Py_DECREF( frame_3fa9512f8b8382f2eb3968344bd0cc7e );
    }
    cache_frame_3fa9512f8b8382f2eb3968344bd0cc7e = NULL;

    assertFrameObject( frame_3fa9512f8b8382f2eb3968344bd0cc7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_4__prod );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)par_initial );
    Py_DECREF( par_initial );
    par_initial = NULL;

    CHECK_OBJECT( (PyObject *)par_where );
    Py_DECREF( par_where );
    par_where = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_4__prod );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_5__any( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_9aabc5a1154fdafd999933f071b242a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9aabc5a1154fdafd999933f071b242a1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9aabc5a1154fdafd999933f071b242a1, codeobj_9aabc5a1154fdafd999933f071b242a1, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9aabc5a1154fdafd999933f071b242a1 = cache_frame_9aabc5a1154fdafd999933f071b242a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9aabc5a1154fdafd999933f071b242a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9aabc5a1154fdafd999933f071b242a1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_any );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_any );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_any" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 45;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_5 = par_keepdims;
        frame_9aabc5a1154fdafd999933f071b242a1->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aabc5a1154fdafd999933f071b242a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aabc5a1154fdafd999933f071b242a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aabc5a1154fdafd999933f071b242a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9aabc5a1154fdafd999933f071b242a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9aabc5a1154fdafd999933f071b242a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9aabc5a1154fdafd999933f071b242a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9aabc5a1154fdafd999933f071b242a1,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims
    );


    // Release cached frame.
    if ( frame_9aabc5a1154fdafd999933f071b242a1 == cache_frame_9aabc5a1154fdafd999933f071b242a1 )
    {
        Py_DECREF( frame_9aabc5a1154fdafd999933f071b242a1 );
    }
    cache_frame_9aabc5a1154fdafd999933f071b242a1 = NULL;

    assertFrameObject( frame_9aabc5a1154fdafd999933f071b242a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_5__any );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_5__any );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_6__all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_edea61d8ad6779f867cd4ef8ee4bd0d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_edea61d8ad6779f867cd4ef8ee4bd0d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_edea61d8ad6779f867cd4ef8ee4bd0d5, codeobj_edea61d8ad6779f867cd4ef8ee4bd0d5, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_edea61d8ad6779f867cd4ef8ee4bd0d5 = cache_frame_edea61d8ad6779f867cd4ef8ee4bd0d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_all );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_all );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_all" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_3 = par_dtype;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_4 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_5 = par_keepdims;
        frame_edea61d8ad6779f867cd4ef8ee4bd0d5->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_edea61d8ad6779f867cd4ef8ee4bd0d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_edea61d8ad6779f867cd4ef8ee4bd0d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_edea61d8ad6779f867cd4ef8ee4bd0d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_edea61d8ad6779f867cd4ef8ee4bd0d5,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims
    );


    // Release cached frame.
    if ( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 == cache_frame_edea61d8ad6779f867cd4ef8ee4bd0d5 )
    {
        Py_DECREF( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 );
    }
    cache_frame_edea61d8ad6779f867cd4ef8ee4bd0d5 = NULL;

    assertFrameObject( frame_edea61d8ad6779f867cd4ef8ee4bd0d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_6__all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_6__all );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_7__count_reduce_items( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *var_items = NULL;
    PyObject *var_ax = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e1eceb682892b85ffe23d488f5510ec3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e1eceb682892b85ffe23d488f5510ec3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1eceb682892b85ffe23d488f5510ec3, codeobj_e1eceb682892b85ffe23d488f5510ec3, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e1eceb682892b85ffe23d488f5510ec3 = cache_frame_e1eceb682892b85ffe23d488f5510ec3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1eceb682892b85ffe23d488f5510ec3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1eceb682892b85ffe23d488f5510ec3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_tuple_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_arr );
            tmp_source_name_1 = par_arr;
            tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_tuple_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
            Py_DECREF( tmp_tuple_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_axis );
        tmp_isinstance_inst_1 = par_axis;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_axis );
            tmp_tuple_element_1 = par_axis;
            tmp_assign_source_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_pos_1;
        assert( var_items == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_items = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        if ( par_axis == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "axis" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = par_axis;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 56;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ax;
            var_ax = tmp_assign_source_6;
            Py_INCREF( var_ax );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_items );
        tmp_left_name_1 = var_items;
        CHECK_OBJECT( par_arr );
        tmp_source_name_2 = par_arr;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_ax );
        tmp_subscript_name_1 = var_ax;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_left_name_1;
        var_items = tmp_assign_source_7;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1eceb682892b85ffe23d488f5510ec3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1eceb682892b85ffe23d488f5510ec3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1eceb682892b85ffe23d488f5510ec3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1eceb682892b85ffe23d488f5510ec3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1eceb682892b85ffe23d488f5510ec3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1eceb682892b85ffe23d488f5510ec3,
        type_description_1,
        par_arr,
        par_axis,
        var_items,
        var_ax
    );


    // Release cached frame.
    if ( frame_e1eceb682892b85ffe23d488f5510ec3 == cache_frame_e1eceb682892b85ffe23d488f5510ec3 )
    {
        Py_DECREF( frame_e1eceb682892b85ffe23d488f5510ec3 );
    }
    cache_frame_e1eceb682892b85ffe23d488f5510ec3 = NULL;

    assertFrameObject( frame_e1eceb682892b85ffe23d488f5510ec3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_items );
    tmp_return_value = var_items;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_7__count_reduce_items );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_items );
    Py_DECREF( var_items );
    var_items = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_items );
    var_items = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_7__count_reduce_items );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *var_ndim = NULL;
    struct Nuitka_FrameObject *frame_a6506650536cf3b2101d0cc7db9c4867;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_a6506650536cf3b2101d0cc7db9c4867 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a6506650536cf3b2101d0cc7db9c4867, codeobj_a6506650536cf3b2101d0cc7db9c4867, module_numpy$core$_methods, sizeof(void *)+sizeof(void *) );
    frame_a6506650536cf3b2101d0cc7db9c4867 = cache_frame_a6506650536cf3b2101d0cc7db9c4867;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a6506650536cf3b2101d0cc7db9c4867 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a6506650536cf3b2101d0cc7db9c4867 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_fef7e379d8b29f70158a022afa317baa;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_ndim_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a6506650536cf3b2101d0cc7db9c4867->m_frame.f_lineno = 65;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ndim );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_ndim == NULL );
        var_ndim = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_ndim );
        tmp_called_name_1 = var_ndim;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_a6506650536cf3b2101d0cc7db9c4867->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        frame_a6506650536cf3b2101d0cc7db9c4867->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isnan, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan );
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a6506650536cf3b2101d0cc7db9c4867, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a6506650536cf3b2101d0cc7db9c4867, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 68;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_a6506650536cf3b2101d0cc7db9c4867->m_frame) frame_a6506650536cf3b2101d0cc7db9c4867->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6506650536cf3b2101d0cc7db9c4867 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6506650536cf3b2101d0cc7db9c4867 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6506650536cf3b2101d0cc7db9c4867 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a6506650536cf3b2101d0cc7db9c4867, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a6506650536cf3b2101d0cc7db9c4867->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a6506650536cf3b2101d0cc7db9c4867, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6506650536cf3b2101d0cc7db9c4867,
        type_description_1,
        par_a,
        var_ndim
    );


    // Release cached frame.
    if ( frame_a6506650536cf3b2101d0cc7db9c4867 == cache_frame_a6506650536cf3b2101d0cc7db9c4867 )
    {
        Py_DECREF( frame_a6506650536cf3b2101d0cc7db9c4867 );
    }
    cache_frame_a6506650536cf3b2101d0cc7db9c4867 = NULL;

    assertFrameObject( frame_a6506650536cf3b2101d0cc7db9c4867 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_ndim );
    Py_DECREF( var_ndim );
    var_ndim = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_ndim );
    var_ndim = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1f9474fc5339edde23e46b8111cc9734;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1f9474fc5339edde23e46b8111cc9734 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f9474fc5339edde23e46b8111cc9734, codeobj_1f9474fc5339edde23e46b8111cc9734, module_numpy$core$_methods, sizeof(void *) );
    frame_1f9474fc5339edde23e46b8111cc9734 = cache_frame_1f9474fc5339edde23e46b8111cc9734;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f9474fc5339edde23e46b8111cc9734 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f9474fc5339edde23e46b8111cc9734 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_isinstance_inst_1 = par_a;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_a );
            tmp_source_name_3 = par_a;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_isnative );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = ( tmp_res == 0 ) ? Py_True : Py_False;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9474fc5339edde23e46b8111cc9734 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9474fc5339edde23e46b8111cc9734 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f9474fc5339edde23e46b8111cc9734 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f9474fc5339edde23e46b8111cc9734, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f9474fc5339edde23e46b8111cc9734->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f9474fc5339edde23e46b8111cc9734, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f9474fc5339edde23e46b8111cc9734,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_1f9474fc5339edde23e46b8111cc9734 == cache_frame_1f9474fc5339edde23e46b8111cc9734 )
    {
        Py_DECREF( frame_1f9474fc5339edde23e46b8111cc9734 );
    }
    cache_frame_1f9474fc5339edde23e46b8111cc9734 = NULL;

    assertFrameObject( frame_1f9474fc5339edde23e46b8111cc9734 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ufunc = python_pars[ 0 ];
    PyObject *par_out = python_pars[ 1 ];
    PyObject *par_casting = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_9e95c0fafbfaa6f7e6ac21b3f3256949;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_9e95c0fafbfaa6f7e6ac21b3f3256949 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e95c0fafbfaa6f7e6ac21b3f3256949, codeobj_9e95c0fafbfaa6f7e6ac21b3f3256949, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e95c0fafbfaa6f7e6ac21b3f3256949 = cache_frame_9e95c0fafbfaa6f7e6ac21b3f3256949;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_casting );
        tmp_compexpr_left_1 = par_casting;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dircall_arg4_1;
            CHECK_OBJECT( par_ufunc );
            tmp_dircall_arg1_1 = par_ufunc;
            CHECK_OBJECT( par_args );
            tmp_dircall_arg2_1 = par_args;
            tmp_dict_key_1 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_1 = par_out;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_casting;
            CHECK_OBJECT( par_casting );
            tmp_dict_value_2 = par_casting;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg4_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg2_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_return_value = impl___internal__$$$function_12_complex_call_helper_keywords_star_list_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg4_2;
        CHECK_OBJECT( par_ufunc );
        tmp_dircall_arg1_2 = par_ufunc;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_2 = par_args;
        tmp_dict_key_3 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_3 = par_out;
        tmp_dircall_arg3_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg2_2 );
        Py_INCREF( tmp_dircall_arg4_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_return_value = impl___internal__$$$function_12_complex_call_helper_keywords_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting );
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9e95c0fafbfaa6f7e6ac21b3f3256949, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9e95c0fafbfaa6f7e6ac21b3f3256949, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__exceptions );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__exceptions );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_exceptions" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__UFuncOutputCastingError );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_e = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            tmp_source_name_3 = const_str_digest_440efe2ff434bf8727a08b8d6b49461b;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_2 == NULL) );
            CHECK_OBJECT( var_e );
            tmp_source_name_4 = var_e;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_from_ );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 91;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_e );
            tmp_source_name_5 = var_e;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_to );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 91;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            frame_9e95c0fafbfaa6f7e6ac21b3f3256949->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            tmp_args_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }

            tmp_tuple_element_1 = tmp_mvar_value_3;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_9e95c0fafbfaa6f7e6ac21b3f3256949->m_frame.f_lineno = 88;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_dircall_arg1_3;
            PyObject *tmp_dircall_arg2_3;
            PyObject *tmp_dircall_arg3_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dircall_arg4_3;
            CHECK_OBJECT( par_ufunc );
            tmp_dircall_arg1_3 = par_ufunc;
            CHECK_OBJECT( par_args );
            tmp_dircall_arg2_3 = par_args;
            tmp_dict_key_4 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_4 = par_out;
            tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_casting;
            tmp_dict_value_5 = const_str_plain_unsafe;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg4_3 = par_kwargs;
            Py_INCREF( tmp_dircall_arg1_3 );
            Py_INCREF( tmp_dircall_arg2_3 );
            Py_INCREF( tmp_dircall_arg4_3 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
                tmp_return_value = impl___internal__$$$function_12_complex_call_helper_keywords_star_list_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "oooooo";
                goto try_except_handler_4;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( var_e );
        var_e = NULL;

        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( var_e );
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 84;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_9e95c0fafbfaa6f7e6ac21b3f3256949->m_frame) frame_9e95c0fafbfaa6f7e6ac21b3f3256949->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e95c0fafbfaa6f7e6ac21b3f3256949, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e95c0fafbfaa6f7e6ac21b3f3256949->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e95c0fafbfaa6f7e6ac21b3f3256949, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e95c0fafbfaa6f7e6ac21b3f3256949,
        type_description_1,
        par_ufunc,
        par_out,
        par_casting,
        par_args,
        par_kwargs,
        var_e
    );


    // Release cached frame.
    if ( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 == cache_frame_9e95c0fafbfaa6f7e6ac21b3f3256949 )
    {
        Py_DECREF( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 );
    }
    cache_frame_9e95c0fafbfaa6f7e6ac21b3f3256949 = NULL;

    assertFrameObject( frame_9e95c0fafbfaa6f7e6ac21b3f3256949 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_casting );
    Py_DECREF( par_casting );
    par_casting = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_casting );
    Py_DECREF( par_casting );
    par_casting = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_11__clip( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_min = python_pars[ 1 ];
    PyObject *par_max = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_casting = python_pars[ 4 ];
    PyObject *par_kwargs = python_pars[ 5 ];
    nuitka_bool var_using_deprecated_nan = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_e09f39a2f46de3c1a1b7db06a37386db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e09f39a2f46de3c1a1b7db06a37386db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e09f39a2f46de3c1a1b7db06a37386db, codeobj_e09f39a2f46de3c1a1b7db06a37386db, module_numpy$core$_methods, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e09f39a2f46de3c1a1b7db06a37386db = cache_frame_e09f39a2f46de3c1a1b7db06a37386db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e09f39a2f46de3c1a1b7db06a37386db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e09f39a2f46de3c1a1b7db06a37386db ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_min );
        tmp_compexpr_left_1 = par_min;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_max );
        tmp_compexpr_left_2 = par_max;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_2ba7f2eeb7e112a32c8268083faa8ce7;
            frame_e09f39a2f46de3c1a1b7db06a37386db->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 99;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_is_byte_swapped );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clip_dep_is_byte_swapped );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clip_dep_is_byte_swapped" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_e09f39a2f46de3c1a1b7db06a37386db->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_is_byte_swapped );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clip_dep_is_byte_swapped );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clip_dep_is_byte_swapped" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_2 = par_out;
        frame_e09f39a2f46de3c1a1b7db06a37386db->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_assign_source_1;
            tmp_assign_source_1 = NUITKA_BOOL_FALSE;
            var_using_deprecated_nan = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            int tmp_truth_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_is_scalar_nan );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clip_dep_is_scalar_nan );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clip_dep_is_scalar_nan" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 106;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_min );
            tmp_args_element_name_3 = par_min;
            frame_e09f39a2f46de3c1a1b7db06a37386db->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 106;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_2;
                tmp_assign_source_2 = const_float_minus_inf;
                {
                    PyObject *old = par_min;
                    assert( old != NULL );
                    par_min = tmp_assign_source_2;
                    Py_INCREF( par_min );
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_assign_source_3;
                tmp_assign_source_3 = NUITKA_BOOL_TRUE;
                var_using_deprecated_nan = tmp_assign_source_3;
            }
            branch_no_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            int tmp_truth_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_is_scalar_nan );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clip_dep_is_scalar_nan );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clip_dep_is_scalar_nan" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 109;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( par_max );
            tmp_args_element_name_4 = par_max;
            frame_e09f39a2f46de3c1a1b7db06a37386db->m_frame.f_lineno = 109;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 109;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_float_inf;
                {
                    PyObject *old = par_max;
                    assert( old != NULL );
                    par_max = tmp_assign_source_4;
                    Py_INCREF( par_max );
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_assign_source_5;
                tmp_assign_source_5 = NUITKA_BOOL_TRUE;
                var_using_deprecated_nan = tmp_assign_source_5;
            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            if ( var_using_deprecated_nan == NUITKA_BOOL_UNASSIGNED )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "using_deprecated_nan" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 112;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }

            tmp_condition_result_5 = var_using_deprecated_nan;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 113;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_5;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_1 = const_str_digest_31cedbf3b1df683195e1ac1eec4bdd47;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    Py_DECREF( tmp_args_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 120;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_1 = tmp_mvar_value_6;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
                frame_e09f39a2f46de3c1a1b7db06a37386db->m_frame.f_lineno = 113;
                tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            branch_no_5:;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if ( par_min == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = par_min;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dircall_arg4_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_invoke_with_casting );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clip_dep_invoke_with_casting );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clip_dep_invoke_with_casting" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 125;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_7;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 126;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_8;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_minimum );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg2_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_a );
            tmp_tuple_element_2 = par_a;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
            if ( par_max == NULL )
            {
                Py_DECREF( tmp_dircall_arg2_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "max" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 126;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = par_max;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_1 = par_out;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_casting;
            CHECK_OBJECT( par_casting );
            tmp_dict_value_2 = par_casting;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg4_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            if ( par_max == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "max" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 127;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_4 = par_max;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_7 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_10;
                PyObject *tmp_dircall_arg3_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_dircall_arg4_2;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_invoke_with_casting );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clip_dep_invoke_with_casting );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clip_dep_invoke_with_casting" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 128;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_2 = tmp_mvar_value_9;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 129;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_10;
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_maximum );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 129;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }
                tmp_dircall_arg2_2 = PyTuple_New( 3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_a );
                tmp_tuple_element_3 = par_a;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_3 );
                if ( par_min == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 129;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_3 = par_min;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_3 );
                tmp_dict_key_3 = const_str_plain_out;
                CHECK_OBJECT( par_out );
                tmp_dict_value_3 = par_out;
                tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_4 = const_str_plain_casting;
                CHECK_OBJECT( par_casting );
                tmp_dict_value_4 = par_casting;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_kwargs );
                tmp_dircall_arg4_2 = par_kwargs;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg4_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                    tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                }
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 128;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_dircall_arg1_3;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_dircall_arg2_3;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_dircall_arg3_3;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_dircall_arg4_3;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_invoke_with_casting );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clip_dep_invoke_with_casting );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_clip_dep_invoke_with_casting" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 131;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_3 = tmp_mvar_value_11;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 132;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_12;
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_clip );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 132;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }
                tmp_dircall_arg2_3 = PyTuple_New( 4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( par_a );
                tmp_tuple_element_4 = par_a;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_4 );
                if ( par_min == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "min" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 132;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_4 = par_min;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_3, 2, tmp_tuple_element_4 );
                if ( par_max == NULL )
                {
                    Py_DECREF( tmp_dircall_arg2_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "max" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 132;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_4 = par_max;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_3, 3, tmp_tuple_element_4 );
                tmp_dict_key_5 = const_str_plain_out;
                CHECK_OBJECT( par_out );
                tmp_dict_value_5 = par_out;
                tmp_dircall_arg3_3 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_casting;
                CHECK_OBJECT( par_casting );
                tmp_dict_value_6 = par_casting;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_6, tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_kwargs );
                tmp_dircall_arg4_3 = par_kwargs;
                Py_INCREF( tmp_dircall_arg1_3 );
                Py_INCREF( tmp_dircall_arg4_3 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
                    tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                }
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 131;
                    type_description_1 = "oooooob";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_7:;
        }
        branch_end_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e09f39a2f46de3c1a1b7db06a37386db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e09f39a2f46de3c1a1b7db06a37386db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e09f39a2f46de3c1a1b7db06a37386db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e09f39a2f46de3c1a1b7db06a37386db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e09f39a2f46de3c1a1b7db06a37386db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e09f39a2f46de3c1a1b7db06a37386db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e09f39a2f46de3c1a1b7db06a37386db,
        type_description_1,
        par_a,
        par_min,
        par_max,
        par_out,
        par_casting,
        par_kwargs,
        (int)var_using_deprecated_nan
    );


    // Release cached frame.
    if ( frame_e09f39a2f46de3c1a1b7db06a37386db == cache_frame_e09f39a2f46de3c1a1b7db06a37386db )
    {
        Py_DECREF( frame_e09f39a2f46de3c1a1b7db06a37386db );
    }
    cache_frame_e09f39a2f46de3c1a1b7db06a37386db = NULL;

    assertFrameObject( frame_e09f39a2f46de3c1a1b7db06a37386db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_11__clip );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_min );
    par_min = NULL;

    Py_XDECREF( par_max );
    par_max = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_casting );
    Py_DECREF( par_casting );
    par_casting = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_min );
    par_min = NULL;

    Py_XDECREF( par_max );
    par_max = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_casting );
    Py_DECREF( par_casting );
    par_casting = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_11__clip );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_12__mean( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *var_arr = NULL;
    nuitka_bool var_is_float16_result = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_rcount = NULL;
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_e9a4181288f7219ec8e41b1da14a1f06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e9a4181288f7219ec8e41b1da14a1f06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9a4181288f7219ec8e41b1da14a1f06, codeobj_e9a4181288f7219ec8e41b1da14a1f06, module_numpy$core$_methods, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e9a4181288f7219ec8e41b1da14a1f06 = cache_frame_e9a4181288f7219ec8e41b1da14a1f06;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9a4181288f7219ec8e41b1da14a1f06 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9a4181288f7219ec8e41b1da14a1f06 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        assert( var_arr == NULL );
        var_arr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_FALSE;
        var_is_float16_result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__count_reduce_items );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__count_reduce_items );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_count_reduce_items" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_arr );
        tmp_args_element_name_2 = var_arr;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_3 = par_axis;
        frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        assert( var_rcount == NULL );
        var_rcount = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_rcount );
        tmp_compexpr_left_1 = var_rcount;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 141;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_digest_0eb7ee514b0cf98ac5f14749a356a892;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 141;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_4;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 141;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_dtype );
        tmp_compexpr_left_2 = par_dtype;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_6;
            int tmp_truth_name_1;
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_issubclass );
            assert( tmp_called_name_4 != NULL );
            CHECK_OBJECT( var_arr );
            tmp_source_name_3 = var_arr;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_args_element_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_5;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_integer );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_4 );

                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_5 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_2 );
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_args_element_name_4 );
                Py_DECREF( tmp_args_element_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_6;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bool_ );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_4 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_2 );
            frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 145;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_7;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 146;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_7;
                frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 146;
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_str_plain_f8_tuple, 0 ) );

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 146;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_dtype;
                    assert( old != NULL );
                    par_dtype = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_called_name_5;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_6;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_8;
                int tmp_truth_name_2;
                tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_issubclass );
                assert( tmp_called_name_5 != NULL );
                CHECK_OBJECT( var_arr );
                tmp_source_name_7 = var_arr;
                tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
                if ( tmp_source_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 147;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_type );
                Py_DECREF( tmp_source_name_6 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 147;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_args_element_name_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 147;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_8;
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_float16 );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_6 );

                    exception_lineno = 147;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 147;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 147;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 147;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_4;
                }
                else
                {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_mvar_value_9;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

                    if (unlikely( tmp_mvar_value_9 == NULL ))
                    {
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
                    }

                    if ( tmp_mvar_value_9 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 148;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_2 = tmp_mvar_value_9;
                    frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 148;
                    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_str_plain_f4_tuple, 0 ) );

                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 148;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_dtype;
                        assert( old != NULL );
                        par_dtype = tmp_assign_source_5;
                        Py_DECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_assign_source_6;
                    tmp_assign_source_6 = NUITKA_BOOL_TRUE;
                    var_is_float16_result = tmp_assign_source_6;
                }
                branch_no_4:;
            }
            branch_end_3:;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_sum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_10;
        CHECK_OBJECT( var_arr );
        tmp_args_element_name_8 = var_arr;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_9 = par_axis;
        if ( par_dtype == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = par_dtype;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_11 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_12 = par_keepdims;
        frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        assert( var_ret == NULL );
        var_ret = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_11;
        CHECK_OBJECT( var_ret );
        tmp_isinstance_inst_1 = var_ret;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_11;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooboo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 153;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_12;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_true_divide );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ret );
            tmp_tuple_element_3 = var_ret;
            tmp_args_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_rcount );
            tmp_tuple_element_3 = var_rcount;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_dict_key_1 = const_str_plain_out;
            CHECK_OBJECT( var_ret );
            tmp_dict_value_1 = var_ret;
            tmp_kw_name_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_casting;
            tmp_dict_value_2 = const_str_plain_unsafe;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_subok;
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 153;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ret;
                assert( old != NULL );
                var_ret = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            if ( var_is_float16_result == NUITKA_BOOL_UNASSIGNED )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_float16_result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 155;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }

            tmp_and_left_value_1 = var_is_float16_result;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_1 == 1 )
            {
                goto and_right_1;
            }
            else
            {
                goto and_left_1;
            }
            and_right_1:;
            CHECK_OBJECT( par_out );
            tmp_compexpr_left_3 = par_out;
            tmp_compexpr_right_3 = Py_None;
            tmp_and_right_value_1 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_6 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_args_element_name_13;
                CHECK_OBJECT( var_arr );
                tmp_source_name_11 = var_arr;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_ret );
                tmp_args_element_name_13 = var_ret;
                frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 156;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_type, call_args );
                }

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ret;
                    assert( old != NULL );
                    var_ret = tmp_assign_source_9;
                    Py_DECREF( old );
                }

            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_source_name_12;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_ret );
            tmp_source_name_12 = var_ret;
            tmp_attribute_name_1 = const_str_plain_dtype;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_12, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooboo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                nuitka_bool tmp_condition_result_8;
                if ( var_is_float16_result == NUITKA_BOOL_UNASSIGNED )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_float16_result" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 158;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }

                tmp_condition_result_8 = var_is_float16_result;
                if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_8;
                }
                else
                {
                    goto branch_no_8;
                }
                branch_yes_8:;
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_args_element_name_14;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    CHECK_OBJECT( var_arr );
                    tmp_source_name_14 = var_arr;
                    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
                    if ( tmp_source_name_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 159;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_type );
                    Py_DECREF( tmp_source_name_13 );
                    if ( tmp_called_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 159;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_ret );
                    tmp_left_name_1 = var_ret;
                    CHECK_OBJECT( var_rcount );
                    tmp_right_name_1 = var_rcount;
                    tmp_args_element_name_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                    if ( tmp_args_element_name_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_8 );

                        exception_lineno = 159;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 159;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_14 };
                        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_args_element_name_14 );
                    if ( tmp_assign_source_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 159;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_ret;
                        assert( old != NULL );
                        var_ret = tmp_assign_source_10;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_8;
                branch_no_8:;
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_args_element_name_15;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    CHECK_OBJECT( var_ret );
                    tmp_source_name_16 = var_ret;
                    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_dtype );
                    if ( tmp_source_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_type );
                    Py_DECREF( tmp_source_name_15 );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_ret );
                    tmp_left_name_2 = var_ret;
                    CHECK_OBJECT( var_rcount );
                    tmp_right_name_2 = var_rcount;
                    tmp_args_element_name_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                    if ( tmp_args_element_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 161;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame.f_lineno = 161;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_15 };
                        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_element_name_15 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 161;
                        type_description_1 = "ooooooboo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_ret;
                        assert( old != NULL );
                        var_ret = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                branch_end_8:;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( var_ret );
                tmp_left_name_3 = var_ret;
                CHECK_OBJECT( var_rcount );
                tmp_right_name_3 = var_rcount;
                tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 163;
                    type_description_1 = "ooooooboo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ret;
                    assert( old != NULL );
                    var_ret = tmp_assign_source_12;
                    Py_DECREF( old );
                }

            }
            branch_end_7:;
        }
        branch_end_5:;
    }
    if ( var_ret == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "ooooooboo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9a4181288f7219ec8e41b1da14a1f06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9a4181288f7219ec8e41b1da14a1f06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9a4181288f7219ec8e41b1da14a1f06 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9a4181288f7219ec8e41b1da14a1f06, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9a4181288f7219ec8e41b1da14a1f06->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9a4181288f7219ec8e41b1da14a1f06, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9a4181288f7219ec8e41b1da14a1f06,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_arr,
        (int)var_is_float16_result,
        var_rcount,
        var_ret
    );


    // Release cached frame.
    if ( frame_e9a4181288f7219ec8e41b1da14a1f06 == cache_frame_e9a4181288f7219ec8e41b1da14a1f06 )
    {
        Py_DECREF( frame_e9a4181288f7219ec8e41b1da14a1f06 );
    }
    cache_frame_e9a4181288f7219ec8e41b1da14a1f06 = NULL;

    assertFrameObject( frame_e9a4181288f7219ec8e41b1da14a1f06 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_12__mean );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_rcount );
    Py_DECREF( var_rcount );
    var_rcount = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_rcount );
    var_rcount = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_12__mean );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_13__var( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_ddof = python_pars[ 4 ];
    PyObject *par_keepdims = python_pars[ 5 ];
    PyObject *var_arr = NULL;
    PyObject *var_rcount = NULL;
    PyObject *var_arrmean = NULL;
    PyObject *var_x = NULL;
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_a0b7fee604a5a0cc0aba1366f35f9765;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0b7fee604a5a0cc0aba1366f35f9765 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0b7fee604a5a0cc0aba1366f35f9765, codeobj_a0b7fee604a5a0cc0aba1366f35f9765, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a0b7fee604a5a0cc0aba1366f35f9765 = cache_frame_a0b7fee604a5a0cc0aba1366f35f9765;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0b7fee604a5a0cc0aba1366f35f9765 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0b7fee604a5a0cc0aba1366f35f9765 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_arr == NULL );
        var_arr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__count_reduce_items );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__count_reduce_items );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_count_reduce_items" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_arr );
        tmp_args_element_name_2 = var_arr;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_3 = par_axis;
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rcount == NULL );
        var_rcount = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_ddof );
        tmp_compexpr_left_1 = par_ddof;
        CHECK_OBJECT( var_rcount );
        tmp_compexpr_right_1 = var_rcount;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 173;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 173;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_4;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 173;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_dtype );
        tmp_compexpr_left_2 = par_dtype;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( var_arr );
        tmp_source_name_3 = var_arr;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_integer );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_2 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_6;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bool_ );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_2 );
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 178;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_7;
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 178;
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_str_plain_f8_tuple, 0 ) );

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_sum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 183;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_arr );
        tmp_tuple_element_3 = var_arr;
        tmp_args_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_axis );
        tmp_tuple_element_3 = par_axis;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( par_dtype );
        tmp_tuple_element_3 = par_dtype;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_59e37d231bc1f549a9bff6ecc16f6241 );
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 183;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_arrmean == NULL );
        var_arrmean = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( var_arrmean );
        tmp_isinstance_inst_1 = var_arrmean;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_9;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_10;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_true_divide );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arrmean );
            tmp_tuple_element_4 = var_arrmean;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_rcount );
            tmp_tuple_element_4 = var_rcount;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            tmp_dict_key_1 = const_str_plain_out;
            CHECK_OBJECT( var_arrmean );
            tmp_dict_value_1 = var_arrmean;
            tmp_kw_name_3 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_casting;
            tmp_dict_value_2 = const_str_plain_unsafe;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_subok;
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 185;
            tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_arrmean;
                assert( old != NULL );
                var_arrmean = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_arrmean );
            tmp_source_name_9 = var_arrmean;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_type );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arrmean );
            tmp_left_name_1 = var_arrmean;
            CHECK_OBJECT( var_rcount );
            tmp_right_name_1 = var_rcount;
            tmp_args_element_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 188;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_arrmean;
                assert( old != NULL );
                var_arrmean = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_11;
        CHECK_OBJECT( var_arr );
        tmp_left_name_2 = var_arr;
        CHECK_OBJECT( var_arrmean );
        tmp_right_name_2 = var_arrmean;
        tmp_args_element_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_13;
        int tmp_truth_name_2;
        tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_9 != NULL );
        CHECK_OBJECT( var_arr );
        tmp_source_name_11 = var_arr;
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_type );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_args_element_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_12;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_floating );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_5 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_13;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_integer );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_8 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_5 );
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 194;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 195;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_14;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_multiply );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_tuple_element_6 = var_x;
            tmp_args_name_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_x );
            tmp_tuple_element_6 = var_x;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_dict_key_4 = const_str_plain_out;
            CHECK_OBJECT( var_x );
            tmp_dict_value_4 = var_x;
            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 195;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_source_name_15;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_kw_name_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 197;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_15;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_multiply );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x );
            tmp_tuple_element_7 = var_x;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 197;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_16;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_10 = var_x;
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 197;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_conjugate, call_args );
            }

            if ( tmp_tuple_element_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_name_5 );

                exception_lineno = 197;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
            tmp_dict_key_5 = const_str_plain_out;
            CHECK_OBJECT( var_x );
            tmp_dict_value_5 = var_x;
            tmp_kw_name_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 197;
            tmp_source_name_15 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_source_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_real );
            Py_DECREF( tmp_source_name_15 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_sum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_17;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_11 = var_x;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_12 = par_axis;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_13 = par_dtype;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_14 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_15 = par_keepdims;
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_12, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ret == NULL );
        var_ret = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_13 != NULL );
        CHECK_OBJECT( var_rcount );
        tmp_left_name_3 = var_rcount;
        CHECK_OBJECT( par_ddof );
        tmp_right_name_3 = par_ddof;
        tmp_list_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_16, 0, tmp_list_element_1 );
        tmp_list_element_1 = const_int_0;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_16, 1, tmp_list_element_1 );
        frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rcount;
            assert( old != NULL );
            var_rcount = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_18;
        CHECK_OBJECT( var_ret );
        tmp_isinstance_inst_2 = var_ret;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 205;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_18;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 206;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_19;
            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_true_divide );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ret );
            tmp_tuple_element_8 = var_ret;
            tmp_args_name_6 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_rcount );
            tmp_tuple_element_8 = var_rcount;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
            tmp_dict_key_6 = const_str_plain_out;
            CHECK_OBJECT( var_ret );
            tmp_dict_value_6 = var_ret;
            tmp_kw_name_6 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_casting;
            tmp_dict_value_7 = const_str_plain_unsafe;
            tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_subok;
            tmp_dict_value_8 = Py_False;
            tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 206;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_6 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ret;
                assert( old != NULL );
                var_ret = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_source_name_19;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_ret );
            tmp_source_name_19 = var_ret;
            tmp_attribute_name_1 = const_str_plain_dtype;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_19, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_15;
                PyObject *tmp_source_name_20;
                PyObject *tmp_source_name_21;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( var_ret );
                tmp_source_name_21 = var_ret;
                tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_dtype );
                if ( tmp_source_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_type );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_called_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_ret );
                tmp_left_name_4 = var_ret;
                CHECK_OBJECT( var_rcount );
                tmp_right_name_4 = var_rcount;
                tmp_args_element_name_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_args_element_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_15 );

                    exception_lineno = 209;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame.f_lineno = 209;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17 };
                    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
                }

                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_element_name_17 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ret;
                    assert( old != NULL );
                    var_ret = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( var_ret );
                tmp_left_name_5 = var_ret;
                CHECK_OBJECT( var_rcount );
                tmp_right_name_5 = var_rcount;
                tmp_assign_source_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ret;
                    assert( old != NULL );
                    var_ret = tmp_assign_source_14;
                    Py_DECREF( old );
                }

            }
            branch_end_6:;
        }
        branch_end_5:;
    }
    if ( var_ret == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0b7fee604a5a0cc0aba1366f35f9765 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0b7fee604a5a0cc0aba1366f35f9765 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0b7fee604a5a0cc0aba1366f35f9765 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0b7fee604a5a0cc0aba1366f35f9765, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0b7fee604a5a0cc0aba1366f35f9765->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0b7fee604a5a0cc0aba1366f35f9765, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0b7fee604a5a0cc0aba1366f35f9765,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_arr,
        var_rcount,
        var_arrmean,
        var_x,
        var_ret
    );


    // Release cached frame.
    if ( frame_a0b7fee604a5a0cc0aba1366f35f9765 == cache_frame_a0b7fee604a5a0cc0aba1366f35f9765 )
    {
        Py_DECREF( frame_a0b7fee604a5a0cc0aba1366f35f9765 );
    }
    cache_frame_a0b7fee604a5a0cc0aba1366f35f9765 = NULL;

    assertFrameObject( frame_a0b7fee604a5a0cc0aba1366f35f9765 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_13__var );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_rcount );
    Py_DECREF( var_rcount );
    var_rcount = NULL;

    CHECK_OBJECT( (PyObject *)var_arrmean );
    Py_DECREF( var_arrmean );
    var_arrmean = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_rcount );
    var_rcount = NULL;

    Py_XDECREF( var_arrmean );
    var_arrmean = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_13__var );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_14__std( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_ddof = python_pars[ 4 ];
    PyObject *par_keepdims = python_pars[ 5 ];
    PyObject *var_ret = NULL;
    struct Nuitka_FrameObject *frame_d61ab005c5e048fe0db35eaa79e49be5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d61ab005c5e048fe0db35eaa79e49be5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d61ab005c5e048fe0db35eaa79e49be5, codeobj_d61ab005c5e048fe0db35eaa79e49be5, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d61ab005c5e048fe0db35eaa79e49be5 = cache_frame_d61ab005c5e048fe0db35eaa79e49be5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d61ab005c5e048fe0db35eaa79e49be5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d61ab005c5e048fe0db35eaa79e49be5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__var );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__var );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_var" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_2 = par_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_3 = par_out;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_ddof;
        CHECK_OBJECT( par_ddof );
        tmp_dict_value_4 = par_ddof;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_keepdims;
        CHECK_OBJECT( par_keepdims );
        tmp_dict_value_5 = par_keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_d61ab005c5e048fe0db35eaa79e49be5->m_frame.f_lineno = 216;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ret == NULL );
        var_ret = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( var_ret );
        tmp_isinstance_inst_1 = var_ret;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 220;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sqrt );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_ret );
            tmp_tuple_element_2 = var_ret;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_6 = const_str_plain_out;
            CHECK_OBJECT( var_ret );
            tmp_dict_value_6 = var_ret;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_d61ab005c5e048fe0db35eaa79e49be5->m_frame.f_lineno = 220;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ret;
                assert( old != NULL );
                var_ret = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_ret );
            tmp_source_name_3 = var_ret;
            tmp_attribute_name_1 = const_str_plain_dtype;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_3, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( var_ret );
                tmp_source_name_5 = var_ret;
                tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
                if ( tmp_source_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_type );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 222;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_4;
                CHECK_OBJECT( var_ret );
                tmp_args_element_name_2 = var_ret;
                frame_d61ab005c5e048fe0db35eaa79e49be5->m_frame.f_lineno = 222;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, call_args );
                }

                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 222;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                frame_d61ab005c5e048fe0db35eaa79e49be5->m_frame.f_lineno = 222;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ret;
                    assert( old != NULL );
                    var_ret = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 224;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_2 = tmp_mvar_value_5;
                CHECK_OBJECT( var_ret );
                tmp_args_element_name_3 = var_ret;
                frame_d61ab005c5e048fe0db35eaa79e49be5->m_frame.f_lineno = 224;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sqrt, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 224;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_ret;
                    assert( old != NULL );
                    var_ret = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( var_ret == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_ret;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d61ab005c5e048fe0db35eaa79e49be5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d61ab005c5e048fe0db35eaa79e49be5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d61ab005c5e048fe0db35eaa79e49be5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d61ab005c5e048fe0db35eaa79e49be5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d61ab005c5e048fe0db35eaa79e49be5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d61ab005c5e048fe0db35eaa79e49be5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d61ab005c5e048fe0db35eaa79e49be5,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_ret
    );


    // Release cached frame.
    if ( frame_d61ab005c5e048fe0db35eaa79e49be5 == cache_frame_d61ab005c5e048fe0db35eaa79e49be5 )
    {
        Py_DECREF( frame_d61ab005c5e048fe0db35eaa79e49be5 );
    }
    cache_frame_d61ab005c5e048fe0db35eaa79e49be5 = NULL;

    assertFrameObject( frame_d61ab005c5e048fe0db35eaa79e49be5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_14__std );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_14__std );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_15__ptp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_59a6d51c51ebce831bc1e864fb45a8ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_59a6d51c51ebce831bc1e864fb45a8ce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59a6d51c51ebce831bc1e864fb45a8ce, codeobj_59a6d51c51ebce831bc1e864fb45a8ce, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_59a6d51c51ebce831bc1e864fb45a8ce = cache_frame_59a6d51c51ebce831bc1e864fb45a8ce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59a6d51c51ebce831bc1e864fb45a8ce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59a6d51c51ebce831bc1e864fb45a8ce ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_subtract );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_maximum );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_maximum );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_maximum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_3 = par_axis;
        tmp_args_element_name_4 = Py_None;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_5 = par_out;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_6 = par_keepdims;
        frame_59a6d51c51ebce831bc1e864fb45a8ce->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 230;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_minimum );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_minimum );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "umr_minimum" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_8 = par_a;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_9 = par_axis;
        tmp_args_element_name_10 = Py_None;
        tmp_args_element_name_11 = Py_None;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_12 = par_keepdims;
        frame_59a6d51c51ebce831bc1e864fb45a8ce->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
        }

        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 231;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_out );
        tmp_args_element_name_13 = par_out;
        frame_59a6d51c51ebce831bc1e864fb45a8ce->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_7, tmp_args_element_name_13 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59a6d51c51ebce831bc1e864fb45a8ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_59a6d51c51ebce831bc1e864fb45a8ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59a6d51c51ebce831bc1e864fb45a8ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59a6d51c51ebce831bc1e864fb45a8ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59a6d51c51ebce831bc1e864fb45a8ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59a6d51c51ebce831bc1e864fb45a8ce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59a6d51c51ebce831bc1e864fb45a8ce,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims
    );


    // Release cached frame.
    if ( frame_59a6d51c51ebce831bc1e864fb45a8ce == cache_frame_59a6d51c51ebce831bc1e864fb45a8ce )
    {
        Py_DECREF( frame_59a6d51c51ebce831bc1e864fb45a8ce );
    }
    cache_frame_59a6d51c51ebce831bc1e864fb45a8ce = NULL;

    assertFrameObject( frame_59a6d51c51ebce831bc1e864fb45a8ce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_15__ptp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_15__ptp );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_16__dump( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_file = python_pars[ 1 ];
    PyObject *par_protocol = python_pars[ 2 ];
    PyObject *var_ctx = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_6217490c59c4ac0c60be915bcc1ebdb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_6217490c59c4ac0c60be915bcc1ebdb7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6217490c59c4ac0c60be915bcc1ebdb7, codeobj_6217490c59c4ac0c60be915bcc1ebdb7, module_numpy$core$_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6217490c59c4ac0c60be915bcc1ebdb7 = cache_frame_6217490c59c4ac0c60be915bcc1ebdb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6217490c59c4ac0c60be915bcc1ebdb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6217490c59c4ac0c60be915bcc1ebdb7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_file );
        tmp_source_name_1 = par_file;
        tmp_attribute_name_1 = const_str_plain_write;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_contextlib_nullcontext );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contextlib_nullcontext );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "contextlib_nullcontext" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 237;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_file );
            tmp_args_element_name_1 = par_file;
            frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ctx == NULL );
            var_ctx = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_open_filename_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_open_mode_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_os_fspath );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os_fspath );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os_fspath" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_file );
            tmp_args_element_name_2 = par_file;
            frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = 239;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_open_filename_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_open_filename_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_open_mode_1 = const_str_plain_wb;
            tmp_assign_source_2 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
            Py_DECREF( tmp_open_filename_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ctx == NULL );
            var_ctx = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( var_ctx );
        tmp_assign_source_3 = var_ctx;
        assert( tmp_with_1__source == NULL );
        Py_INCREF( tmp_assign_source_3 );
        tmp_with_1__source = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_3 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = 240;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_7 = tmp_with_1__enter;
        assert( var_f == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_f = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_pickle );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pickle );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pickle" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dump );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_f );
        tmp_tuple_element_1 = var_f;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_protocol;
        CHECK_OBJECT( par_protocol );
        tmp_dict_value_1 = par_protocol;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = 241;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6217490c59c4ac0c60be915bcc1ebdb7, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6217490c59c4ac0c60be915bcc1ebdb7, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_assign_source_8;
            tmp_assign_source_8 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            tmp_args_element_name_3 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_4 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_5 = EXC_TRACEBACK(PyThreadState_GET());
            frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = 241;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 241;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame) frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 240;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame) frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
        branch_end_2:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_16__dump );
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = 241;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 241;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_4:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame.f_lineno = 241;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_5:;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6217490c59c4ac0c60be915bcc1ebdb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6217490c59c4ac0c60be915bcc1ebdb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6217490c59c4ac0c60be915bcc1ebdb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6217490c59c4ac0c60be915bcc1ebdb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6217490c59c4ac0c60be915bcc1ebdb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6217490c59c4ac0c60be915bcc1ebdb7,
        type_description_1,
        par_self,
        par_file,
        par_protocol,
        var_ctx,
        var_f
    );


    // Release cached frame.
    if ( frame_6217490c59c4ac0c60be915bcc1ebdb7 == cache_frame_6217490c59c4ac0c60be915bcc1ebdb7 )
    {
        Py_DECREF( frame_6217490c59c4ac0c60be915bcc1ebdb7 );
    }
    cache_frame_6217490c59c4ac0c60be915bcc1ebdb7 = NULL;

    assertFrameObject( frame_6217490c59c4ac0c60be915bcc1ebdb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_16__dump );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    CHECK_OBJECT( (PyObject *)par_protocol );
    Py_DECREF( par_protocol );
    par_protocol = NULL;

    CHECK_OBJECT( (PyObject *)var_ctx );
    Py_DECREF( var_ctx );
    var_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_file );
    Py_DECREF( par_file );
    par_file = NULL;

    CHECK_OBJECT( (PyObject *)par_protocol );
    Py_DECREF( par_protocol );
    par_protocol = NULL;

    Py_XDECREF( var_ctx );
    var_ctx = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_16__dump );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$core$_methods$$$function_17__dumps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_protocol = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3631212f5cdaa03b6ac623ae1cdbe5ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3631212f5cdaa03b6ac623ae1cdbe5ab = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3631212f5cdaa03b6ac623ae1cdbe5ab, codeobj_3631212f5cdaa03b6ac623ae1cdbe5ab, module_numpy$core$_methods, sizeof(void *)+sizeof(void *) );
    frame_3631212f5cdaa03b6ac623ae1cdbe5ab = cache_frame_3631212f5cdaa03b6ac623ae1cdbe5ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3631212f5cdaa03b6ac623ae1cdbe5ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3631212f5cdaa03b6ac623ae1cdbe5ab ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_pickle );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pickle );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pickle" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dumps );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_protocol;
        CHECK_OBJECT( par_protocol );
        tmp_dict_value_1 = par_protocol;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_3631212f5cdaa03b6ac623ae1cdbe5ab->m_frame.f_lineno = 244;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3631212f5cdaa03b6ac623ae1cdbe5ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3631212f5cdaa03b6ac623ae1cdbe5ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3631212f5cdaa03b6ac623ae1cdbe5ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3631212f5cdaa03b6ac623ae1cdbe5ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3631212f5cdaa03b6ac623ae1cdbe5ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3631212f5cdaa03b6ac623ae1cdbe5ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3631212f5cdaa03b6ac623ae1cdbe5ab,
        type_description_1,
        par_self,
        par_protocol
    );


    // Release cached frame.
    if ( frame_3631212f5cdaa03b6ac623ae1cdbe5ab == cache_frame_3631212f5cdaa03b6ac623ae1cdbe5ab )
    {
        Py_DECREF( frame_3631212f5cdaa03b6ac623ae1cdbe5ab );
    }
    cache_frame_3631212f5cdaa03b6ac623ae1cdbe5ab = NULL;

    assertFrameObject( frame_3631212f5cdaa03b6ac623ae1cdbe5ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_17__dumps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_protocol );
    Py_DECREF( par_protocol );
    par_protocol = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_protocol );
    Py_DECREF( par_protocol );
    par_protocol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_17__dumps );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting( PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting,
        const_str_plain__clip_dep_invoke_with_casting,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e95c0fafbfaa6f7e6ac21b3f3256949,
        NULL,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_11__clip( PyObject *defaults, PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_11__clip,
        const_str_plain__clip,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e09f39a2f46de3c1a1b7db06a37386db,
        defaults,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_12__mean( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_12__mean,
        const_str_plain__mean,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9a4181288f7219ec8e41b1da14a1f06,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_13__var( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_13__var,
        const_str_plain__var,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0b7fee604a5a0cc0aba1366f35f9765,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_14__std( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_14__std,
        const_str_plain__std,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d61ab005c5e048fe0db35eaa79e49be5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_15__ptp( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_15__ptp,
        const_str_plain__ptp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_59a6d51c51ebce831bc1e864fb45a8ce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_16__dump( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_16__dump,
        const_str_plain__dump,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6217490c59c4ac0c60be915bcc1ebdb7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_17__dumps( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_17__dumps,
        const_str_plain__dumps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3631212f5cdaa03b6ac623ae1cdbe5ab,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_1__amax,
        const_str_plain__amax,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fde47fed8a5f41d53a38b73cf0b8005c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_2__amin,
        const_str_plain__amin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_43142fbddb533a03aad8abd9b9a86ed6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_3__sum,
        const_str_plain__sum,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4c860ed18cd6d45f3530c3e2b8b10be3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_4__prod,
        const_str_plain__prod,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3fa9512f8b8382f2eb3968344bd0cc7e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_5__any( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_5__any,
        const_str_plain__any,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9aabc5a1154fdafd999933f071b242a1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_6__all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_6__all,
        const_str_plain__all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_edea61d8ad6779f867cd4ef8ee4bd0d5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_7__count_reduce_items,
        const_str_plain__count_reduce_items,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1eceb682892b85ffe23d488f5510ec3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan,
        const_str_plain__clip_dep_is_scalar_nan,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a6506650536cf3b2101d0cc7db9c4867,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped,
        const_str_plain__clip_dep_is_byte_swapped,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1f9474fc5339edde23e46b8111cc9734,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_methods,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$_methods =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core._methods",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

#if defined(_NUITKA_EXE) || !0
// For executables or non top level modules, we need not export anything.
MOD_ENTRY_DECL(numpy$core$_methods)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(numpy$core$_methods)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$_methods );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("numpy.core._methods: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core._methods: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core._methods: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$_methods" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$_methods = Py_InitModule4(
        "numpy.core._methods",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$core$_methods = PyModule_Create( &mdef_numpy$core$_methods );
#endif

    moduledict_numpy$core$_methods = MODULE_DICT( module_numpy$core$_methods );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$core$_methods,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$core$_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$core$_methods );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c264d6c7c6a577cf11f1d443b80eb75b, module_numpy$core$_methods );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_53a39f86f3b878aa60981752df460152;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_afcfd11ee3df3c947f27eb372797c73c;
        UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_de5187093df4d185107972d56e11a75e;
        UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_53a39f86f3b878aa60981752df460152 = MAKE_MODULE_FRAME( codeobj_53a39f86f3b878aa60981752df460152, module_numpy$core$_methods );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_53a39f86f3b878aa60981752df460152 );
    assert( Py_REFCNT( frame_53a39f86f3b878aa60981752df460152 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_de5187093df4d185107972d56e11a75e;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 6;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_multiarray_tuple;
        tmp_level_name_2 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_multiarray );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_umath_tuple;
        tmp_level_name_3 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 11;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_umath );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_438a8d9ba1582b1ebf08e55dfd20d322;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_asanyarray_tuple;
        tmp_level_name_4 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 12;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asanyarray );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_numerictypes_tuple;
        tmp_level_name_5 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 13;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_numerictypes );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__exceptions_tuple;
        tmp_level_name_6 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 14;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__exceptions );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__exceptions, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_9e9eca8947418183630fd19f8c915a83;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain__NoValue_tuple;
        tmp_level_name_7 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 15;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__NoValue );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__NoValue, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
        tmp_globals_name_8 = (PyObject *)moduledict_numpy$core$_methods;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_35087e572db7f12556349316b3e4a5c7_tuple;
        tmp_level_name_8 = const_int_0;
        frame_53a39f86f3b878aa60981752df460152->m_frame.f_lineno = 16;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_pickle );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_pickle, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_os_fspath );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_os_fspath, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_contextlib_nullcontext );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_contextlib_nullcontext, tmp_assign_source_18 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_maximum );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reduce );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_maximum, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_minimum );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_reduce );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_minimum, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reduce );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_6;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_multiply );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_reduce );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_prod, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_7;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_logical_or );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_reduce );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_any, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "um" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_8;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_logical_and );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_reduce );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_all, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_9;
        tmp_tuple_element_1 = Py_None;
        tmp_defaults_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__NoValue );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NoValue );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NoValue" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_9;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__amax, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_10;
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_2 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_False;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_2 );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__NoValue );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NoValue );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_defaults_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NoValue" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_10;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_True;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_2 );
        tmp_assign_source_26 = MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__amin, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_11;
        tmp_tuple_element_3 = Py_None;
        tmp_defaults_3 = PyTuple_New( 6 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_None;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_None;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_False;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 3, tmp_tuple_element_3 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__NoValue );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NoValue );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_defaults_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NoValue" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_11;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 4, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_True;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 5, tmp_tuple_element_3 );
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__sum, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_12;
        tmp_tuple_element_4 = Py_None;
        tmp_defaults_4 = PyTuple_New( 6 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_4 );
        tmp_tuple_element_4 = Py_None;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_4 );
        tmp_tuple_element_4 = Py_None;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_4, 2, tmp_tuple_element_4 );
        tmp_tuple_element_4 = Py_False;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_4, 3, tmp_tuple_element_4 );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__NoValue );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NoValue );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_defaults_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NoValue" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_12;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_4, 4, tmp_tuple_element_4 );
        tmp_tuple_element_4 = Py_True;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_4, 5, tmp_tuple_element_4 );
        tmp_assign_source_28 = MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__prod, tmp_assign_source_28 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53a39f86f3b878aa60981752df460152 );
#endif
    popFrameStack();

    assertFrameObject( frame_53a39f86f3b878aa60981752df460152 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53a39f86f3b878aa60981752df460152 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53a39f86f3b878aa60981752df460152, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53a39f86f3b878aa60981752df460152->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53a39f86f3b878aa60981752df460152, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_none_none_false_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$core$_methods$$$function_5__any( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__any, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_none_none_none_false_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$core$_methods$$$function_6__all( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__all, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__count_reduce_items, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$core$_methods$$$function_8__clip_dep_is_scalar_nan(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_is_scalar_nan, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_numpy$core$_methods$$$function_9__clip_dep_is_byte_swapped(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_is_byte_swapped, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_kw_defaults_1;
        tmp_kw_defaults_1 = PyDict_Copy( const_dict_4bdb372cd460d175d93baa70bea55974 );
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$core$_methods$$$function_10__clip_dep_invoke_with_casting( tmp_kw_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip_dep_invoke_with_casting, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_7;
        PyObject *tmp_kw_defaults_2;
        tmp_defaults_7 = const_tuple_none_none_none_tuple;
        tmp_kw_defaults_2 = PyDict_Copy( const_dict_7e21d40f9e55a5ec5a77630814412feb );
        Py_INCREF( tmp_defaults_7 );
        tmp_assign_source_35 = MAKE_FUNCTION_numpy$core$_methods$$$function_11__clip( tmp_defaults_7, tmp_kw_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__clip, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_none_none_none_false_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$core$_methods$$$function_12__mean( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__mean, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = const_tuple_none_none_none_int_0_false_tuple;
        Py_INCREF( tmp_defaults_9 );
        tmp_assign_source_37 = MAKE_FUNCTION_numpy$core$_methods$$$function_13__var( tmp_defaults_9 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__var, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = const_tuple_none_none_none_int_0_false_tuple;
        Py_INCREF( tmp_defaults_10 );
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$core$_methods$$$function_14__std( tmp_defaults_10 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__std, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_11;
        tmp_defaults_11 = const_tuple_none_none_false_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$core$_methods$$$function_15__ptp( tmp_defaults_11 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__ptp, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_12;
        tmp_defaults_12 = const_tuple_int_pos_2_tuple;
        Py_INCREF( tmp_defaults_12 );
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$core$_methods$$$function_16__dump( tmp_defaults_12 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__dump, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_13;
        tmp_defaults_13 = const_tuple_int_pos_2_tuple;
        Py_INCREF( tmp_defaults_13 );
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$core$_methods$$$function_17__dumps( tmp_defaults_13 );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__dumps, tmp_assign_source_41 );
    }

    return MOD_RETURN_VALUE( module_numpy$core$_methods );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
