/* Generated code for Python module 'numpy.lib.nanfunctions'
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

/* The "_module_numpy$lib$nanfunctions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$nanfunctions;
PyDictObject *moduledict_numpy$lib$nanfunctions;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_70aae56bb0e8a850685be457c8902a72;
static PyObject *const_str_plain__nanmedian;
extern PyObject *const_str_plain_var;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_str_digest_2a20b471982a1151f922e03478914a4f;
static PyObject *const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_function_base_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_unsafe;
static PyObject *const_str_plain__keepdims;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_nanmax;
extern PyObject *const_tuple_1f383c4a8f667b83cff41e7aa10fb98d_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_filled;
static PyObject *const_str_digest_9800e518a6c97708b7eef1502bb04656;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_digest_5ab373ae36e2bb6baafef27c86182e81;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain__quantile_unchecked;
static PyObject *const_str_digest_20fa3028eb0fbfbd5707c1ff2db20281;
static PyObject *const_str_plain__nanargmax_dispatcher;
static PyObject *const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple;
static PyObject *const_dict_e33da8a36ea6ef3da497c84b6aae64a4;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_plain_nanprod;
static PyObject *const_str_digest_bbd396d9bb37b13c133fa37fab502bba;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_invert;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_size;
static PyObject *const_str_plain__copyto;
static PyObject *const_tuple_str_plain_arr1d_str_plain_overwrite_input_tuple;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_false_str_plain_linear_tuple;
static PyObject *const_str_digest_d0858221f735b26b46241a92f5b05f4d;
static PyObject *const_str_plain__nancumsum_dispatcher;
static PyObject *const_str_plain_nancumprod;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain___enter__;
static PyObject *const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain_tot;
extern PyObject *const_str_plain_func;
static PyObject *const_str_plain__nanquantile_unchecked;
static PyObject *const_tuple_a53faa7f675c776abe6aae9e37415232_tuple;
static PyObject *const_str_plain_fc;
extern PyObject *const_str_plain_full;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_subtract;
extern PyObject *const_tuple_str_plain_overrides_tuple;
extern PyObject *const_str_plain_avg;
extern PyObject *const_dict_eeec7aac86b0de3c7b9e410669185928;
static PyObject *const_str_digest_aeb83b4db1e919f133b88cc632e778c9;
static PyObject *const_str_digest_37509469899fb20033f7873d3e99050d;
static PyObject *const_str_plain__remove_nan_1d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain__nansum_dispatcher;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_nan;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_true_divide;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_fmin;
static PyObject *const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple;
static PyObject *const_str_plain__nanpercentile_dispatcher;
static PyObject *const_str_plain__nanquantile_1d;
static PyObject *const_str_digest_db33301295480348472775c384964f4e;
static PyObject *const_str_digest_77cd7a058ddab9bba7dcbfcbab6e2b83;
extern PyObject *const_tuple_str_plain_a_str_plain_b_str_plain_out_tuple;
static PyObject *const_str_plain__nanprod_dispatcher;
static PyObject *const_str_plain__nanmedian_dispatcher;
static PyObject *const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple;
static PyObject *const_str_digest_27e656ab981b837c9506086cef15b2d4;
extern PyObject *const_str_plain_asanyarray;
static PyObject *const_str_digest_065979c640faf6aafe85807b63835f6a;
extern PyObject *const_str_plain_isnan;
static PyObject *const_str_plain__replace_nan;
static PyObject *const_str_plain__nanmedian1d;
static PyObject *const_str_plain_nanpercentile;
extern PyObject *const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple;
static PyObject *const_tuple_dd9138628158b38e41ae803dce423b21_tuple;
static PyObject *const_slice_none_int_0_none;
extern PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
static PyObject *const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_divide;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_681a6d8204d0d96310d5a7ef0afd0272_tuple;
extern PyObject *const_str_plain_casting;
extern PyObject *const_str_plain_arr;
static PyObject *const_str_digest_2f2ef366a39121406f41b77774fcc38b;
extern PyObject *const_float_100_0;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_str_plain_out;
static PyObject *const_str_digest_d24ac6bbec8abd2b0cd4812d2a69f224;
extern PyObject *const_str_plain_linear;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_ma;
extern PyObject *const_str_plain_prod;
static PyObject *const_str_digest_f522dbb66a9318e026d85a23545c925d;
extern PyObject *const_str_plain_masked_array;
extern PyObject *const_str_plain_conj;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain__nan_mask;
extern PyObject *const_str_plain_object_;
static PyObject *const_str_plain_nanmean;
static PyObject *const_str_plain__nancumprod_dispatcher;
static PyObject *const_str_plain__nanquantile_ureduce_func;
static PyObject *const_str_plain_nancumsum;
static PyObject *const_str_plain__nanvar_dispatcher;
extern PyObject *const_str_plain_RuntimeWarning;
extern PyObject *const_tuple_7c21073cfd531e35bd169034434d02b4_tuple;
extern PyObject *const_str_plain_squeeze;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_str_digest_8c323ce07a42d338703395e75d30dca7;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_13a6827213f1b15310ecdbf6398d4844;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_nonzero;
static PyObject *const_str_digest_b22320b7b2715874062e5dd95f635a14;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_str_plain_argmax;
static PyObject *const_str_plain__divide_by_count;
extern PyObject *const_str_plain_k;
static PyObject *const_str_plain__nanmin_dispatcher;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_d55d8b4c626b40fb88ec539c49edf000_tuple;
static PyObject *const_tuple_1f5315046d8698adafa259715a90551c_tuple;
static PyObject *const_str_plain_sqr;
extern PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple;
extern PyObject *const_tuple_none_none_none_none_none_tuple;
static PyObject *const_str_digest_f5d86a1dd0bc768b3760b07f81390cab;
extern PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple;
static PyObject *const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8;
static PyObject *const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d;
extern PyObject *const_str_plain_amin;
extern PyObject *const_str_digest_f47df35bbcf99e0a872c43dc6981620b;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
extern PyObject *const_tuple_d63081c8ceea6cfa0b7e54707488f314_tuple;
extern PyObject *const_str_plain_val;
static PyObject *const_str_digest_e01b16f8b1b53afc81714a463182bff1;
extern PyObject *const_str_plain_std;
static PyObject *const_str_plain__nanquantile_dispatcher;
static PyObject *const_list_e328792b501ba3bfe9ef50afeb6f0d39_list;
extern PyObject *const_str_plain_count_nonzero;
static PyObject *const_str_plain_nansum;
static PyObject *const_str_digest_5b68640cd4c96061bbb525b4d43785db;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_invalid;
static PyObject *const_str_plain_nanmedian;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_dict_a761d016d430864480383c3284603eea;
extern PyObject *const_str_plain_part;
extern PyObject *const_str_plain_median;
extern PyObject *const_str_plain__ureduce;
extern PyObject *const_str_plain_moveaxis;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_str_plain_c;
extern PyObject *const_tuple_str_plain_a_str_plain_axis_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain__nanmedian_small;
static PyObject *const_str_digest_a8ec271b1c4ec5c3a68d055edaf18a03;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_41ff8e6f17fe0f0e358372f791e6dc39;
static PyObject *const_str_digest_e5906d9b36689902967f4292e56d9fde;
extern PyObject *const_tuple_476d4ef2ade6da2a3024dbc8ecf5934b_tuple;
extern PyObject *const_str_plain_intp;
static PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_dof;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain__NoValue;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_67488b567da97391898b16b6e6269bec_tuple;
extern PyObject *const_str_plain_subok;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_plain_nanmin;
extern PyObject *const_str_plain_apply_along_axis;
static PyObject *const_str_plain__nanmean_dispatcher;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain__quantile_is_valid;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_str_digest_85e2bffc7ec807d938def4b1eeb4e084;
static PyObject *const_str_digest_32383d08c19cf306ff97b1d17823d642;
extern PyObject *const_str_plain_complexfloating;
static PyObject *const_str_plain_nanstd;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_plain_fmax;
extern PyObject *const_str_plain_y;
static PyObject *const_str_digest_8b84aa44113aaa30537e0b7fc877c3e3;
extern PyObject *const_str_plain_reduce;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_amax;
extern PyObject *const_str_plain_cumprod;
static PyObject *const_str_digest_57cd3af074957558d6efaf4e2a7f4aa8;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_errstate;
static PyObject *const_str_plain_nanargmax;
extern PyObject *const_str_plain_keepdims;
static PyObject *const_str_plain__nanmax_dispatcher;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_digest_5ed3425d130ccc603b0170248a180c82;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain_cnt;
extern PyObject *const_str_plain_ddof;
static PyObject *const_str_plain__nanargmin_dispatcher;
static PyObject *const_str_plain_nanvar;
extern PyObject *const_str_plain_mean;
extern PyObject *const_str_plain_module;
static PyObject *const_str_plain_nanquantile;
static PyObject *const_str_plain__nanstd_dispatcher;
static PyObject *const_str_plain_enonan;
extern PyObject *const_tuple_none_none_false_tuple;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_59bcd9bc2371c47d12b9bc63b5a99880;
static PyObject *const_str_plain_isbad;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_acfaad50c55d762c110253c18919c3d1_tuple;
extern PyObject *const_str_digest_8d3dde78ef0a5edc96e74007dfe8e642;
extern PyObject *const_str_plain_multiply;
static PyObject *const_tuple_none_none_false_str_plain_linear_tuple;
extern PyObject *const_str_plain_interpolation;
extern PyObject *const_str_plain_overwrite_input;
static PyObject *const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
extern PyObject *const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
extern PyObject *const_str_plain_copyto;
static PyObject *const_str_digest_e72bbfac9c78eb28dc31bccfb94e361e;
static PyObject *const_str_plain_nanargmin;
static PyObject *const_str_plain_arr1d;
extern PyObject *const_int_pos_600;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_70aae56bb0e8a850685be457c8902a72 = UNSTREAM_STRING_ASCII( &constant_bin[ 1652391 ], 176, 0 );
    const_str_plain__nanmedian = UNSTREAM_STRING_ASCII( &constant_bin[ 1652567 ], 10, 1 );
    const_str_digest_2a20b471982a1151f922e03478914a4f = UNSTREAM_STRING_ASCII( &constant_bin[ 1652577 ], 179, 0 );
    const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple, 2, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_plain__keepdims = UNSTREAM_STRING_ASCII( &constant_bin[ 1652756 ], 9, 1 );
    const_str_plain_nanmax = UNSTREAM_STRING_ASCII( &constant_bin[ 1118232 ], 6, 1 );
    const_str_digest_9800e518a6c97708b7eef1502bb04656 = UNSTREAM_STRING_ASCII( &constant_bin[ 1652765 ], 172, 0 );
    const_str_digest_20fa3028eb0fbfbd5707c1ff2db20281 = UNSTREAM_STRING_ASCII( &constant_bin[ 1652937 ], 22, 0 );
    const_str_plain__nanargmax_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1652959 ], 21, 1 );
    const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple, 3, const_str_plain_overwrite_input ); Py_INCREF( const_str_plain_overwrite_input );
    PyTuple_SET_ITEM( const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple, 4, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_dict_e33da8a36ea6ef3da497c84b6aae64a4 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_e33da8a36ea6ef3da497c84b6aae64a4, const_str_plain_invalid, const_str_plain_ignore );
    PyDict_SetItem( const_dict_e33da8a36ea6ef3da497c84b6aae64a4, const_str_plain_divide, const_str_plain_ignore );
    assert( PyDict_Size( const_dict_e33da8a36ea6ef3da497c84b6aae64a4 ) == 2 );
    const_str_plain_nanprod = UNSTREAM_STRING_ASCII( &constant_bin[ 1652980 ], 7, 1 );
    const_str_digest_bbd396d9bb37b13c133fa37fab502bba = UNSTREAM_STRING_ASCII( &constant_bin[ 1652987 ], 34, 0 );
    const_str_plain__copyto = UNSTREAM_STRING_ASCII( &constant_bin[ 1653021 ], 7, 1 );
    const_tuple_str_plain_arr1d_str_plain_overwrite_input_tuple = PyTuple_New( 2 );
    const_str_plain_arr1d = UNSTREAM_STRING_ASCII( &constant_bin[ 1653028 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr1d_str_plain_overwrite_input_tuple, 0, const_str_plain_arr1d ); Py_INCREF( const_str_plain_arr1d );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr1d_str_plain_overwrite_input_tuple, 1, const_str_plain_overwrite_input ); Py_INCREF( const_str_plain_overwrite_input );
    const_tuple_false_str_plain_linear_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_false_str_plain_linear_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_str_plain_linear_tuple, 1, const_str_plain_linear ); Py_INCREF( const_str_plain_linear );
    const_str_digest_d0858221f735b26b46241a92f5b05f4d = UNSTREAM_STRING_ASCII( &constant_bin[ 1653033 ], 3515, 0 );
    const_str_plain__nancumsum_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1656548 ], 21, 1 );
    const_str_plain_nancumprod = UNSTREAM_STRING_ASCII( &constant_bin[ 1656569 ], 10, 1 );
    const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, 3, const_str_plain_overwrite_input ); Py_INCREF( const_str_plain_overwrite_input );
    PyTuple_SET_ITEM( const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, 4, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, 5, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_tot = UNSTREAM_STRING_ASCII( &constant_bin[ 38237 ], 3, 1 );
    const_str_plain__nanquantile_unchecked = UNSTREAM_STRING_ASCII( &constant_bin[ 1656579 ], 22, 1 );
    const_tuple_a53faa7f675c776abe6aae9e37415232_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 5, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_plain_fc = UNSTREAM_STRING_ASCII( &constant_bin[ 3905 ], 2, 1 );
    const_str_digest_aeb83b4db1e919f133b88cc632e778c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 1656601 ], 3073, 0 );
    const_str_digest_37509469899fb20033f7873d3e99050d = UNSTREAM_STRING_ASCII( &constant_bin[ 1659674 ], 772, 0 );
    const_str_plain__remove_nan_1d = UNSTREAM_STRING_ASCII( &constant_bin[ 1660446 ], 14, 1 );
    const_str_plain__nansum_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1660460 ], 18, 1 );
    const_str_plain_fmin = UNSTREAM_STRING_ASCII( &constant_bin[ 1118094 ], 4, 1 );
    const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 6, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 7, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 8, const_str_plain__keepdims ); Py_INCREF( const_str_plain__keepdims );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 9, const_str_plain_cnt ); Py_INCREF( const_str_plain_cnt );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 10, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    const_str_plain_sqr = UNSTREAM_STRING_ASCII( &constant_bin[ 763354 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 11, const_str_plain_sqr ); Py_INCREF( const_str_plain_sqr );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 12, const_str_plain_var ); Py_INCREF( const_str_plain_var );
    const_str_plain_dof = UNSTREAM_STRING_ASCII( &constant_bin[ 807342 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 13, const_str_plain_dof ); Py_INCREF( const_str_plain_dof );
    const_str_plain_isbad = UNSTREAM_STRING_ASCII( &constant_bin[ 1660478 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 14, const_str_plain_isbad ); Py_INCREF( const_str_plain_isbad );
    const_str_plain__nanpercentile_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1660483 ], 25, 1 );
    const_str_plain__nanquantile_1d = UNSTREAM_STRING_ASCII( &constant_bin[ 1660508 ], 15, 1 );
    const_str_digest_db33301295480348472775c384964f4e = UNSTREAM_STRING_ASCII( &constant_bin[ 1660523 ], 4334, 0 );
    const_str_digest_77cd7a058ddab9bba7dcbfcbab6e2b83 = UNSTREAM_STRING_ASCII( &constant_bin[ 1664857 ], 481, 0 );
    const_str_plain__nanprod_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1665338 ], 19, 1 );
    const_str_plain__nanmedian_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1665357 ], 21, 1 );
    const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple, 0, const_str_plain_arr1d ); Py_INCREF( const_str_plain_arr1d );
    PyTuple_SET_ITEM( const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple, 1, const_str_plain_overwrite_input ); Py_INCREF( const_str_plain_overwrite_input );
    PyTuple_SET_ITEM( const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple, 2, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_enonan = UNSTREAM_STRING_ASCII( &constant_bin[ 1665378 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple, 4, const_str_plain_enonan ); Py_INCREF( const_str_plain_enonan );
    const_str_digest_27e656ab981b837c9506086cef15b2d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 1665384 ], 3097, 0 );
    const_str_digest_065979c640faf6aafe85807b63835f6a = UNSTREAM_STRING_ASCII( &constant_bin[ 1668481 ], 2887, 0 );
    const_str_plain__replace_nan = UNSTREAM_STRING_ASCII( &constant_bin[ 1671368 ], 12, 1 );
    const_str_plain__nanmedian1d = UNSTREAM_STRING_ASCII( &constant_bin[ 1671380 ], 12, 1 );
    const_str_plain_nanpercentile = UNSTREAM_STRING_ASCII( &constant_bin[ 1567614 ], 13, 1 );
    const_tuple_dd9138628158b38e41ae803dce423b21_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 1, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 4, const_str_plain_overwrite_input ); Py_INCREF( const_str_plain_overwrite_input );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 5, const_str_plain_interpolation ); Py_INCREF( const_str_plain_interpolation );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 6, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 7, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_slice_none_int_0_none = PySlice_New( Py_None, const_int_0, Py_None );
    const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 5, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 6, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 7, const_str_plain_cnt ); Py_INCREF( const_str_plain_cnt );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 8, const_str_plain_tot ); Py_INCREF( const_str_plain_tot );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 9, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    PyTuple_SET_ITEM( const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 10, const_str_plain_isbad ); Py_INCREF( const_str_plain_isbad );
    const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple, 1, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_digest_2f2ef366a39121406f41b77774fcc38b = UNSTREAM_STRING_ASCII( &constant_bin[ 1671392 ], 2785, 0 );
    const_str_digest_d24ac6bbec8abd2b0cd4812d2a69f224 = UNSTREAM_STRING_ASCII( &constant_bin[ 1674177 ], 941, 0 );
    const_str_digest_f522dbb66a9318e026d85a23545c925d = UNSTREAM_STRING_ASCII( &constant_bin[ 1675118 ], 604, 0 );
    const_str_plain__nan_mask = UNSTREAM_STRING_ASCII( &constant_bin[ 1675722 ], 9, 1 );
    const_str_plain_nanmean = UNSTREAM_STRING_ASCII( &constant_bin[ 1072217 ], 7, 1 );
    const_str_plain__nancumprod_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1675731 ], 22, 1 );
    const_str_plain__nanquantile_ureduce_func = UNSTREAM_STRING_ASCII( &constant_bin[ 1675753 ], 25, 1 );
    const_str_plain_nancumsum = UNSTREAM_STRING_ASCII( &constant_bin[ 1656549 ], 9, 1 );
    const_str_plain__nanvar_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1675778 ], 18, 1 );
    const_str_digest_8c323ce07a42d338703395e75d30dca7 = UNSTREAM_STRING_ASCII( &constant_bin[ 1675796 ], 770, 0 );
    const_str_digest_13a6827213f1b15310ecdbf6398d4844 = UNSTREAM_STRING_ASCII( &constant_bin[ 1676566 ], 677, 0 );
    const_str_digest_b22320b7b2715874062e5dd95f635a14 = UNSTREAM_STRING_ASCII( &constant_bin[ 1677243 ], 624, 0 );
    const_str_plain__divide_by_count = UNSTREAM_STRING_ASCII( &constant_bin[ 1677867 ], 16, 1 );
    const_str_plain__nanmin_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1677883 ], 18, 1 );
    const_tuple_d55d8b4c626b40fb88ec539c49edf000_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d55d8b4c626b40fb88ec539c49edf000_tuple, 0, const_str_plain_arr1d ); Py_INCREF( const_str_plain_arr1d );
    PyTuple_SET_ITEM( const_tuple_d55d8b4c626b40fb88ec539c49edf000_tuple, 1, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_d55d8b4c626b40fb88ec539c49edf000_tuple, 2, const_str_plain_overwrite_input ); Py_INCREF( const_str_plain_overwrite_input );
    PyTuple_SET_ITEM( const_tuple_d55d8b4c626b40fb88ec539c49edf000_tuple, 3, const_str_plain_interpolation ); Py_INCREF( const_str_plain_interpolation );
    const_tuple_1f5315046d8698adafa259715a90551c_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1f5315046d8698adafa259715a90551c_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1f5315046d8698adafa259715a90551c_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_1f5315046d8698adafa259715a90551c_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_1f5315046d8698adafa259715a90551c_tuple, 3, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_1f5315046d8698adafa259715a90551c_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_1f5315046d8698adafa259715a90551c_tuple, 5, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_1f5315046d8698adafa259715a90551c_tuple, 6, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_str_digest_f5d86a1dd0bc768b3760b07f81390cab = UNSTREAM_STRING_ASCII( &constant_bin[ 1677901 ], 53, 0 );
    const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8 = UNSTREAM_STRING_ASCII( &constant_bin[ 1677954 ], 43, 0 );
    const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d = UNSTREAM_STRING_ASCII( &constant_bin[ 937153 ], 19, 0 );
    const_str_digest_e01b16f8b1b53afc81714a463182bff1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1677997 ], 117, 0 );
    const_str_plain__nanquantile_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1678114 ], 23, 1 );
    const_list_e328792b501ba3bfe9ef50afeb6f0d39_list = PyList_New( 14 );
    const_str_plain_nansum = UNSTREAM_STRING_ASCII( &constant_bin[ 1660461 ], 6, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 0, const_str_plain_nansum ); Py_INCREF( const_str_plain_nansum );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 1, const_str_plain_nanmax ); Py_INCREF( const_str_plain_nanmax );
    const_str_plain_nanmin = UNSTREAM_STRING_ASCII( &constant_bin[ 1117924 ], 6, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 2, const_str_plain_nanmin ); Py_INCREF( const_str_plain_nanmin );
    const_str_plain_nanargmax = UNSTREAM_STRING_ASCII( &constant_bin[ 1652960 ], 9, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 3, const_str_plain_nanargmax ); Py_INCREF( const_str_plain_nanargmax );
    const_str_plain_nanargmin = UNSTREAM_STRING_ASCII( &constant_bin[ 1660203 ], 9, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 4, const_str_plain_nanargmin ); Py_INCREF( const_str_plain_nanargmin );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 5, const_str_plain_nanmean ); Py_INCREF( const_str_plain_nanmean );
    const_str_plain_nanmedian = UNSTREAM_STRING_ASCII( &constant_bin[ 1652532 ], 9, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 6, const_str_plain_nanmedian ); Py_INCREF( const_str_plain_nanmedian );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 7, const_str_plain_nanpercentile ); Py_INCREF( const_str_plain_nanpercentile );
    const_str_plain_nanvar = UNSTREAM_STRING_ASCII( &constant_bin[ 1072234 ], 6, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 8, const_str_plain_nanvar ); Py_INCREF( const_str_plain_nanvar );
    const_str_plain_nanstd = UNSTREAM_STRING_ASCII( &constant_bin[ 1072226 ], 6, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 9, const_str_plain_nanstd ); Py_INCREF( const_str_plain_nanstd );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 10, const_str_plain_nanprod ); Py_INCREF( const_str_plain_nanprod );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 11, const_str_plain_nancumsum ); Py_INCREF( const_str_plain_nancumsum );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 12, const_str_plain_nancumprod ); Py_INCREF( const_str_plain_nancumprod );
    const_str_plain_nanquantile = UNSTREAM_STRING_ASCII( &constant_bin[ 1522367 ], 11, 1 );
    PyList_SET_ITEM( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list, 13, const_str_plain_nanquantile ); Py_INCREF( const_str_plain_nanquantile );
    const_str_digest_5b68640cd4c96061bbb525b4d43785db = UNSTREAM_STRING_ASCII( &constant_bin[ 1678137 ], 1869, 0 );
    const_str_plain__nanmedian_small = UNSTREAM_STRING_ASCII( &constant_bin[ 1680006 ], 16, 1 );
    const_str_digest_a8ec271b1c4ec5c3a68d055edaf18a03 = UNSTREAM_STRING_ASCII( &constant_bin[ 1680022 ], 3743, 0 );
    const_str_digest_41ff8e6f17fe0f0e358372f791e6dc39 = UNSTREAM_STRING_ASCII( &constant_bin[ 1683765 ], 2890, 0 );
    const_str_digest_e5906d9b36689902967f4292e56d9fde = UNSTREAM_STRING_ASCII( &constant_bin[ 1686655 ], 24, 0 );
    const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple, 2, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_67488b567da97391898b16b6e6269bec_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 6, const_str_plain_var ); Py_INCREF( const_str_plain_var );
    PyTuple_SET_ITEM( const_tuple_67488b567da97391898b16b6e6269bec_tuple, 7, const_str_plain_std ); Py_INCREF( const_str_plain_std );
    const_str_plain__nanmean_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1686679 ], 19, 1 );
    const_str_digest_85e2bffc7ec807d938def4b1eeb4e084 = UNSTREAM_STRING_ASCII( &constant_bin[ 1686698 ], 119, 0 );
    const_str_digest_32383d08c19cf306ff97b1d17823d642 = UNSTREAM_STRING_ASCII( &constant_bin[ 1686817 ], 41, 0 );
    const_str_plain_fmax = UNSTREAM_STRING_ASCII( &constant_bin[ 1118249 ], 4, 1 );
    const_str_digest_8b84aa44113aaa30537e0b7fc877c3e3 = UNSTREAM_STRING_ASCII( &constant_bin[ 1686858 ], 2030, 0 );
    const_str_digest_57cd3af074957558d6efaf4e2a7f4aa8 = UNSTREAM_STRING_ASCII( &constant_bin[ 1688888 ], 31, 0 );
    const_str_plain__nanmax_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1688919 ], 18, 1 );
    const_str_digest_5ed3425d130ccc603b0170248a180c82 = UNSTREAM_STRING_ASCII( &constant_bin[ 1688937 ], 897, 0 );
    const_str_plain__nanargmin_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1689834 ], 21, 1 );
    const_str_plain__nanstd_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1689855 ], 18, 1 );
    const_str_digest_59bcd9bc2371c47d12b9bc63b5a99880 = UNSTREAM_STRING_ASCII( &constant_bin[ 1689873 ], 2100, 0 );
    const_tuple_acfaad50c55d762c110253c18919c3d1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, 4, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    const_tuple_none_none_false_str_plain_linear_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_str_plain_linear_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_str_plain_linear_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_str_plain_linear_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_false_str_plain_linear_tuple, 3, const_str_plain_linear ); Py_INCREF( const_str_plain_linear );
    const_str_digest_df9219e7323f1cc1c5ffd9b53703d856 = UNSTREAM_STRING_ASCII( &constant_bin[ 1691973 ], 25, 0 );
    const_str_digest_e72bbfac9c78eb28dc31bccfb94e361e = UNSTREAM_STRING_ASCII( &constant_bin[ 1691998 ], 3862, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$nanfunctions( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8e9ab6ecb61a37989cd28e556d561c90;
static PyCodeObject *codeobj_724dcf6337c2ffd0feb3878fd115ce08;
static PyCodeObject *codeobj_d7c4f188fed90abd5d6e4f64857fe4c0;
static PyCodeObject *codeobj_6a8c8ab8b5f4b3747a1299a1127d95eb;
static PyCodeObject *codeobj_40657f50dfd409b59bd0257fc7a0ca14;
static PyCodeObject *codeobj_a0729eb4cfc136729c4b58cd5d403d5c;
static PyCodeObject *codeobj_1a1a9718643e72eb6481cf25556567de;
static PyCodeObject *codeobj_4dc4dbcba85371d1f9e102f3a2ccf29f;
static PyCodeObject *codeobj_66215fefc6f1e3bb1cfaf2b5588f59b0;
static PyCodeObject *codeobj_01c0f16ac4c32e6ec0a67f2ad59417d3;
static PyCodeObject *codeobj_edf6404edcea529c020d76700f395657;
static PyCodeObject *codeobj_00653194df05fc06a2415c65a27afa34;
static PyCodeObject *codeobj_71dcd03035f6f64e5c0750d4c5789624;
static PyCodeObject *codeobj_a14694a66ddc1b8f8fecea77da4fef1c;
static PyCodeObject *codeobj_2c0f63cb165b8bb6f094ab5c4f37bf5e;
static PyCodeObject *codeobj_999e7a5e9f693faa45fb54fbe527c8ee;
static PyCodeObject *codeobj_c5a02d8ccee340606e83985568859d1e;
static PyCodeObject *codeobj_70e64a8e201c61a470c9d6adc76887a1;
static PyCodeObject *codeobj_c6e9f74ba00ada67c6674b13f262a8ce;
static PyCodeObject *codeobj_ff012ca30e1cc46b44c9f31699bbf64e;
static PyCodeObject *codeobj_f7e0f0d606b91d17aeafaadc6e90c2af;
static PyCodeObject *codeobj_396394e1a9272469f887f22cb96b2df9;
static PyCodeObject *codeobj_479c1c2506582ff65e0affcc6bd2ea55;
static PyCodeObject *codeobj_f0d22ace42cb57ac0b8e272749be2ad6;
static PyCodeObject *codeobj_2cee2210b8a52882b00bef7dc69a73f6;
static PyCodeObject *codeobj_6385991811f73235e8742cb6036910d7;
static PyCodeObject *codeobj_afd225dffdbcd0066a73acc1af94e94d;
static PyCodeObject *codeobj_3a0dc336bcee19460e3c3df02b8667d4;
static PyCodeObject *codeobj_b24ca2bc9ebd074ee5afbe1e90ce3a0e;
static PyCodeObject *codeobj_c673f5aeb314262e1e9f74a502fd232f;
static PyCodeObject *codeobj_28d51f286b19042fb78be9f74b990479;
static PyCodeObject *codeobj_609d55599b44f63ce3121ddcdce34bf8;
static PyCodeObject *codeobj_4aa7b4d534141eee99f4359aaa1086b9;
static PyCodeObject *codeobj_26177692774f80ddb06ef340d2e4d856;
static PyCodeObject *codeobj_0c751d1ad097317239055ee0fd716d40;
static PyCodeObject *codeobj_70a115f6fa0032f9dac380ffc9de0b35;
static PyCodeObject *codeobj_2362283528d982ba744b2fd929a82498;
static PyCodeObject *codeobj_0d1b253c87af32584a2eed2b3dca944c;
static PyCodeObject *codeobj_8370874a4b1079886bdd37ec3c7daae7;
static PyCodeObject *codeobj_9cfe790bffd190470736a95b95604357;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f5d86a1dd0bc768b3760b07f81390cab;
    codeobj_8e9ab6ecb61a37989cd28e556d561c90 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_57cd3af074957558d6efaf4e2a7f4aa8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_724dcf6337c2ffd0feb3878fd115ce08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__copyto, 114, const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d7c4f188fed90abd5d6e4f64857fe4c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__divide_by_count, 184, const_tuple_str_plain_a_str_plain_b_str_plain_out_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6a8c8ab8b5f4b3747a1299a1127d95eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nan_mask, 43, const_tuple_str_plain_a_str_plain_out_str_plain_y_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_40657f50dfd409b59bd0257fc7a0ca14 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanargmax_dispatcher, 504, const_tuple_str_plain_a_str_plain_axis_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a0729eb4cfc136729c4b58cd5d403d5c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanargmin_dispatcher, 455, const_tuple_str_plain_a_str_plain_axis_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1a1a9718643e72eb6481cf25556567de = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nancumprod_dispatcher, 792, const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4dc4dbcba85371d1f9e102f3a2ccf29f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nancumsum_dispatcher, 722, const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_66215fefc6f1e3bb1cfaf2b5588f59b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanmax_dispatcher, 340, const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_01c0f16ac4c32e6ec0a67f2ad59417d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanmean_dispatcher, 859, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_edf6404edcea529c020d76700f395657 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanmedian, 974, const_tuple_b7d63ece20ea0060c89c4c03346b09d4_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_00653194df05fc06a2415c65a27afa34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanmedian1d, 961, const_tuple_str_plain_arr1d_str_plain_overwrite_input_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_71dcd03035f6f64e5c0750d4c5789624 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanmedian_dispatcher, 1018, const_tuple_7c21073cfd531e35bd169034434d02b4_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a14694a66ddc1b8f8fecea77da4fef1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanmedian_small, 1000, const_tuple_b2947e6a1c021316e84eaa150aac27ee_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c0f63cb165b8bb6f094ab5c4f37bf5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanmin_dispatcher, 225, const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_999e7a5e9f693faa45fb54fbe527c8ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanpercentile_dispatcher, 1122, const_tuple_d63081c8ceea6cfa0b7e54707488f314_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5a02d8ccee340606e83985568859d1e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanprod_dispatcher, 652, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_70e64a8e201c61a470c9d6adc76887a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanquantile_1d, 1403, const_tuple_d55d8b4c626b40fb88ec539c49edf000_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6e9f74ba00ada67c6674b13f262a8ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanquantile_dispatcher, 1248, const_tuple_d63081c8ceea6cfa0b7e54707488f314_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ff012ca30e1cc46b44c9f31699bbf64e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanquantile_unchecked, 1361, const_tuple_1f383c4a8f667b83cff41e7aa10fb98d_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7e0f0d606b91d17aeafaadc6e90c2af = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanquantile_ureduce_func, 1379, const_tuple_dd9138628158b38e41ae803dce423b21_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_396394e1a9272469f887f22cb96b2df9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanstd_dispatcher, 1565, const_tuple_476d4ef2ade6da2a3024dbc8ecf5934b_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_479c1c2506582ff65e0affcc6bd2ea55 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nansum_dispatcher, 554, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f0d22ace42cb57ac0b8e272749be2ad6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__nanvar_dispatcher, 1417, const_tuple_476d4ef2ade6da2a3024dbc8ecf5934b_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2cee2210b8a52882b00bef7dc69a73f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__remove_nan_1d, 143, const_tuple_c127688ef72f36f94baf4bb3dcfb2ace_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6385991811f73235e8742cb6036910d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__replace_nan, 70, const_tuple_str_plain_a_str_plain_val_str_plain_mask_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_afd225dffdbcd0066a73acc1af94e94d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanargmax, 508, const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a0dc336bcee19460e3c3df02b8667d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanargmin, 459, const_tuple_str_plain_a_str_plain_axis_str_plain_mask_str_plain_res_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b24ca2bc9ebd074ee5afbe1e90ce3a0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nancumprod, 796, const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c673f5aeb314262e1e9f74a502fd232f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nancumsum, 726, const_tuple_acfaad50c55d762c110253c18919c3d1_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_28d51f286b19042fb78be9f74b990479 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanmax, 344, const_tuple_1f5315046d8698adafa259715a90551c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_609d55599b44f63ce3121ddcdce34bf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanmean, 863, const_tuple_a846ee8c814d45dcb55520bddd8f676c_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4aa7b4d534141eee99f4359aaa1086b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanmedian, 1023, const_tuple_681a6d8204d0d96310d5a7ef0afd0272_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_26177692774f80ddb06ef340d2e4d856 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanmin, 229, const_tuple_1f5315046d8698adafa259715a90551c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0c751d1ad097317239055ee0fd716d40 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanpercentile, 1127, const_tuple_d63081c8ceea6cfa0b7e54707488f314_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_70a115f6fa0032f9dac380ffc9de0b35 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanprod, 656, const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2362283528d982ba744b2fd929a82498 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanquantile, 1253, const_tuple_d63081c8ceea6cfa0b7e54707488f314_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d1b253c87af32584a2eed2b3dca944c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanstd, 1570, const_tuple_67488b567da97391898b16b6e6269bec_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8370874a4b1079886bdd37ec3c7daae7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nansum, 558, const_tuple_a53faa7f675c776abe6aae9e37415232_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9cfe790bffd190470736a95b95604357 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nanvar, 1422, const_tuple_0610f01d38a6e1e9a9f5d7b1224dcbd2_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_10__nanargmin_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_11_nanargmin( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_12__nanargmax_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_13_nanargmax( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_14__nansum_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_15_nansum( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_16__nanprod_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_17_nanprod( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_18__nancumsum_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_19_nancumsum( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_1__nan_mask( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_20__nancumprod_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_21_nancumprod( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_22__nanmean_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_23_nanmean( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_24__nanmedian1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_25__nanmedian( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_26__nanmedian_small( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_27__nanmedian_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_28_nanmedian( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_29__nanpercentile_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_2__replace_nan(  );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_30_nanpercentile( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_31__nanquantile_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_32_nanquantile( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_33__nanquantile_unchecked( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_34__nanquantile_ureduce_func( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_35__nanquantile_1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_36__nanvar_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_37_nanvar( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_38__nanstd_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_39_nanstd( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_3__copyto(  );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_4__remove_nan_1d( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_5__divide_by_count( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_6__nanmin_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_7_nanmin( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_8__nanmax_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_9_nanmax( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$lib$nanfunctions$$$function_1__nan_mask( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_out = python_pars[ 1 ];
    PyObject *var_y = NULL;
    struct Nuitka_FrameObject *frame_6a8c8ab8b5f4b3747a1299a1127d95eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a8c8ab8b5f4b3747a1299a1127d95eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a8c8ab8b5f4b3747a1299a1127d95eb, codeobj_6a8c8ab8b5f4b3747a1299a1127d95eb, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a8c8ab8b5f4b3747a1299a1127d95eb = cache_frame_6a8c8ab8b5f4b3747a1299a1127d95eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a8c8ab8b5f4b3747a1299a1127d95eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a8c8ab8b5f4b3747a1299a1127d95eb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_a );
        tmp_source_name_2 = par_a;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_fc;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_isnan );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_1 = par_out;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_6a8c8ab8b5f4b3747a1299a1127d95eb->m_frame.f_lineno = 66;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_invert );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_y );
        tmp_tuple_element_2 = var_y;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_out;
        CHECK_OBJECT( var_y );
        tmp_dict_value_2 = var_y;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_6a8c8ab8b5f4b3747a1299a1127d95eb->m_frame.f_lineno = 67;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y;
            assert( old != NULL );
            var_y = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a8c8ab8b5f4b3747a1299a1127d95eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a8c8ab8b5f4b3747a1299a1127d95eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a8c8ab8b5f4b3747a1299a1127d95eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a8c8ab8b5f4b3747a1299a1127d95eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a8c8ab8b5f4b3747a1299a1127d95eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a8c8ab8b5f4b3747a1299a1127d95eb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a8c8ab8b5f4b3747a1299a1127d95eb,
        type_description_1,
        par_a,
        par_out,
        var_y
    );


    // Release cached frame.
    if ( frame_6a8c8ab8b5f4b3747a1299a1127d95eb == cache_frame_6a8c8ab8b5f4b3747a1299a1127d95eb )
    {
        Py_DECREF( frame_6a8c8ab8b5f4b3747a1299a1127d95eb );
    }
    cache_frame_6a8c8ab8b5f4b3747a1299a1127d95eb = NULL;

    assertFrameObject( frame_6a8c8ab8b5f4b3747a1299a1127d95eb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_y );
    tmp_return_value = var_y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_1__nan_mask );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_1__nan_mask );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_2__replace_nan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *var_mask = NULL;
    struct Nuitka_FrameObject *frame_6385991811f73235e8742cb6036910d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6385991811f73235e8742cb6036910d7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6385991811f73235e8742cb6036910d7, codeobj_6385991811f73235e8742cb6036910d7, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6385991811f73235e8742cb6036910d7 = cache_frame_6385991811f73235e8742cb6036910d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6385991811f73235e8742cb6036910d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6385991811f73235e8742cb6036910d7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_eeec7aac86b0de3c7b9e410669185928 );
        frame_6385991811f73235e8742cb6036910d7->m_frame.f_lineno = 98;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_source_name_2 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_object_ );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 100;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooo";
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
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_a );
            tmp_compexpr_left_2 = par_a;
            CHECK_OBJECT( par_a );
            tmp_compexpr_right_2 = par_a;
            tmp_assign_source_2 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_mask == NULL );
            var_mask = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_3;
            int tmp_truth_name_1;
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
            assert( tmp_called_name_2 != NULL );
            CHECK_OBJECT( par_a );
            tmp_source_name_5 = par_a;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_type );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 103;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_3;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inexact );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 103;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_6385991811f73235e8742cb6036910d7->m_frame.f_lineno = 103;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 103;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 103;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 104;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_4;
                CHECK_OBJECT( par_a );
                tmp_args_element_name_3 = par_a;
                frame_6385991811f73235e8742cb6036910d7->m_frame.f_lineno = 104;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isnan, call_args );
                }

                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert( var_mask == NULL );
                var_mask = tmp_assign_source_3;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = Py_None;
                assert( var_mask == NULL );
                Py_INCREF( tmp_assign_source_4 );
                var_mask = tmp_assign_source_4;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        if ( var_mask == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mask" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = var_mask;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 109;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_copyto );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_2 = par_a;
            tmp_args_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_val );
            tmp_tuple_element_2 = par_val;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_where;
            if ( var_mask == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mask" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 109;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = var_mask;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_6385991811f73235e8742cb6036910d7->m_frame.f_lineno = 109;
            tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 109;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_3 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        if ( var_mask == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mask" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_mask;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6385991811f73235e8742cb6036910d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6385991811f73235e8742cb6036910d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6385991811f73235e8742cb6036910d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6385991811f73235e8742cb6036910d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6385991811f73235e8742cb6036910d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6385991811f73235e8742cb6036910d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6385991811f73235e8742cb6036910d7,
        type_description_1,
        par_a,
        par_val,
        var_mask
    );


    // Release cached frame.
    if ( frame_6385991811f73235e8742cb6036910d7 == cache_frame_6385991811f73235e8742cb6036910d7 )
    {
        Py_DECREF( frame_6385991811f73235e8742cb6036910d7 );
    }
    cache_frame_6385991811f73235e8742cb6036910d7 = NULL;

    assertFrameObject( frame_6385991811f73235e8742cb6036910d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_2__replace_nan );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_2__replace_nan );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_3__copyto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *par_mask = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_724dcf6337c2ffd0feb3878fd115ce08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_724dcf6337c2ffd0feb3878fd115ce08 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_724dcf6337c2ffd0feb3878fd115ce08, codeobj_724dcf6337c2ffd0feb3878fd115ce08, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_724dcf6337c2ffd0feb3878fd115ce08 = cache_frame_724dcf6337c2ffd0feb3878fd115ce08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_724dcf6337c2ffd0feb3878fd115ce08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_724dcf6337c2ffd0feb3878fd115ce08 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_isinstance_inst_1 = par_a;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_copyto );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_1 = par_a;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_val );
            tmp_tuple_element_1 = par_val;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_where;
            CHECK_OBJECT( par_mask );
            tmp_dict_value_1 = par_mask;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_casting;
            tmp_dict_value_2 = const_str_plain_unsafe;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_724dcf6337c2ffd0feb3878fd115ce08->m_frame.f_lineno = 137;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_3 = par_a;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_val );
            tmp_args_element_name_1 = par_val;
            frame_724dcf6337c2ffd0feb3878fd115ce08->m_frame.f_lineno = 139;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_type, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 139;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_724dcf6337c2ffd0feb3878fd115ce08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_724dcf6337c2ffd0feb3878fd115ce08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_724dcf6337c2ffd0feb3878fd115ce08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_724dcf6337c2ffd0feb3878fd115ce08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_724dcf6337c2ffd0feb3878fd115ce08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_724dcf6337c2ffd0feb3878fd115ce08,
        type_description_1,
        par_a,
        par_val,
        par_mask
    );


    // Release cached frame.
    if ( frame_724dcf6337c2ffd0feb3878fd115ce08 == cache_frame_724dcf6337c2ffd0feb3878fd115ce08 )
    {
        Py_DECREF( frame_724dcf6337c2ffd0feb3878fd115ce08 );
    }
    cache_frame_724dcf6337c2ffd0feb3878fd115ce08 = NULL;

    assertFrameObject( frame_724dcf6337c2ffd0feb3878fd115ce08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_3__copyto );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)par_mask );
    Py_DECREF( par_mask );
    par_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)par_mask );
    Py_DECREF( par_mask );
    par_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_3__copyto );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_4__remove_nan_1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr1d = python_pars[ 0 ];
    PyObject *par_overwrite_input = python_pars[ 1 ];
    PyObject *var_c = NULL;
    PyObject *var_s = NULL;
    PyObject *var_enonan = NULL;
    struct Nuitka_FrameObject *frame_2cee2210b8a52882b00bef7dc69a73f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2cee2210b8a52882b00bef7dc69a73f6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2cee2210b8a52882b00bef7dc69a73f6, codeobj_2cee2210b8a52882b00bef7dc69a73f6, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2cee2210b8a52882b00bef7dc69a73f6 = cache_frame_2cee2210b8a52882b00bef7dc69a73f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2cee2210b8a52882b00bef7dc69a73f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2cee2210b8a52882b00bef7dc69a73f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arr1d );
        tmp_args_element_name_1 = par_arr1d;
        frame_2cee2210b8a52882b00bef7dc69a73f6->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isnan, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_2 = var_c;
        frame_2cee2210b8a52882b00bef7dc69a73f6->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_nonzero, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_s );
        tmp_source_name_1 = var_s;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_arr1d );
        tmp_source_name_2 = par_arr1d;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

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

                exception_lineno = 168;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 168;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_4;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61 );
            frame_2cee2210b8a52882b00bef7dc69a73f6->m_frame.f_lineno = 168;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_arr1d );
            tmp_subscribed_name_2 = par_arr1d;
            tmp_subscript_name_2 = const_slice_none_int_0_none;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_True;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( var_s );
            tmp_source_name_4 = var_s;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooo";
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
                PyObject *tmp_tuple_element_3;
                CHECK_OBJECT( par_arr1d );
                tmp_tuple_element_3 = par_arr1d;
                tmp_return_value = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_overwrite_input );
                tmp_tuple_element_3 = par_overwrite_input;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                CHECK_OBJECT( par_overwrite_input );
                tmp_operand_name_1 = par_overwrite_input;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
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
                {
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_called_instance_3;
                    CHECK_OBJECT( par_arr1d );
                    tmp_called_instance_3 = par_arr1d;
                    frame_2cee2210b8a52882b00bef7dc69a73f6->m_frame.f_lineno = 175;
                    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_copy );
                    if ( tmp_assign_source_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 175;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_arr1d;
                        assert( old != NULL );
                        par_arr1d = tmp_assign_source_3;
                        Py_DECREF( old );
                    }

                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_start_name_1;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_start_name_2;
                PyObject *tmp_operand_name_4;
                PyObject *tmp_source_name_6;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                CHECK_OBJECT( par_arr1d );
                tmp_subscribed_name_4 = par_arr1d;
                CHECK_OBJECT( var_s );
                tmp_source_name_5 = var_s;
                tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_size );
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_start_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_start_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_1 = Py_None;
                tmp_step_name_1 = Py_None;
                tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                Py_DECREF( tmp_start_name_1 );
                assert( !(tmp_subscript_name_3 == NULL) );
                tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_c );
                tmp_subscribed_name_5 = var_c;
                CHECK_OBJECT( var_s );
                tmp_source_name_6 = var_s;
                tmp_operand_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_size );
                if ( tmp_operand_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_start_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
                Py_DECREF( tmp_operand_name_4 );
                if ( tmp_start_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_2 = Py_None;
                tmp_step_name_2 = Py_None;
                tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_start_name_2 );
                assert( !(tmp_subscript_name_5 == NULL) );
                tmp_operand_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                Py_DECREF( tmp_subscript_name_5 );
                if ( tmp_operand_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
                Py_DECREF( tmp_operand_name_3 );
                if ( tmp_subscript_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );

                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_enonan == NULL );
                var_enonan = tmp_assign_source_4;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_start_name_3;
                PyObject *tmp_stop_name_3;
                PyObject *tmp_source_name_7;
                PyObject *tmp_step_name_3;
                CHECK_OBJECT( var_enonan );
                tmp_ass_subvalue_1 = var_enonan;
                CHECK_OBJECT( par_arr1d );
                tmp_ass_subscribed_1 = par_arr1d;
                CHECK_OBJECT( var_s );
                tmp_subscribed_name_6 = var_s;
                tmp_start_name_3 = Py_None;
                CHECK_OBJECT( var_enonan );
                tmp_source_name_7 = var_enonan;
                tmp_stop_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_size );
                if ( tmp_stop_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_3 = Py_None;
                tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
                Py_DECREF( tmp_stop_name_3 );
                assert( !(tmp_subscript_name_6 == NULL) );
                tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscript_name_6 );
                if ( tmp_ass_subscript_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscript_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_start_name_4;
                PyObject *tmp_stop_name_4;
                PyObject *tmp_operand_name_5;
                PyObject *tmp_source_name_8;
                PyObject *tmp_step_name_4;
                CHECK_OBJECT( par_arr1d );
                tmp_subscribed_name_7 = par_arr1d;
                tmp_start_name_4 = Py_None;
                CHECK_OBJECT( var_s );
                tmp_source_name_8 = var_s;
                tmp_operand_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_size );
                if ( tmp_operand_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
                Py_DECREF( tmp_operand_name_5 );
                if ( tmp_stop_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_4 = Py_None;
                tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
                Py_DECREF( tmp_stop_name_4 );
                assert( !(tmp_subscript_name_7 == NULL) );
                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                Py_DECREF( tmp_subscript_name_7 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
                tmp_tuple_element_4 = Py_True;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cee2210b8a52882b00bef7dc69a73f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cee2210b8a52882b00bef7dc69a73f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cee2210b8a52882b00bef7dc69a73f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2cee2210b8a52882b00bef7dc69a73f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2cee2210b8a52882b00bef7dc69a73f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2cee2210b8a52882b00bef7dc69a73f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2cee2210b8a52882b00bef7dc69a73f6,
        type_description_1,
        par_arr1d,
        par_overwrite_input,
        var_c,
        var_s,
        var_enonan
    );


    // Release cached frame.
    if ( frame_2cee2210b8a52882b00bef7dc69a73f6 == cache_frame_2cee2210b8a52882b00bef7dc69a73f6 )
    {
        Py_DECREF( frame_2cee2210b8a52882b00bef7dc69a73f6 );
    }
    cache_frame_2cee2210b8a52882b00bef7dc69a73f6 = NULL;

    assertFrameObject( frame_2cee2210b8a52882b00bef7dc69a73f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_4__remove_nan_1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_arr1d );
    par_arr1d = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_enonan );
    var_enonan = NULL;

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

    Py_XDECREF( par_arr1d );
    par_arr1d = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_enonan );
    var_enonan = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_4__remove_nan_1d );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_5__divide_by_count( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_d7c4f188fed90abd5d6e4f64857fe4c0;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_d7c4f188fed90abd5d6e4f64857fe4c0 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7c4f188fed90abd5d6e4f64857fe4c0, codeobj_d7c4f188fed90abd5d6e4f64857fe4c0, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7c4f188fed90abd5d6e4f64857fe4c0 = cache_frame_d7c4f188fed90abd5d6e4f64857fe4c0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7c4f188fed90abd5d6e4f64857fe4c0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7c4f188fed90abd5d6e4f64857fe4c0 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 210;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_errstate );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_e33da8a36ea6ef3da497c84b6aae64a4 );
        frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 210;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 210;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_isinstance_inst_1 = par_a;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto try_except_handler_4;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( par_out );
            tmp_compexpr_left_1 = par_out;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 213;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_5 = tmp_mvar_value_3;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_divide );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_a );
                tmp_tuple_element_1 = par_a;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_b );
                tmp_tuple_element_1 = par_b;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
                tmp_dict_key_1 = const_str_plain_out;
                CHECK_OBJECT( par_a );
                tmp_dict_value_1 = par_a;
                tmp_kw_name_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_casting;
                tmp_dict_value_2 = const_str_plain_unsafe;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 213;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 213;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                goto try_return_handler_3;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 215;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_6 = tmp_mvar_value_4;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_divide );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 215;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_a );
                tmp_tuple_element_2 = par_a;
                tmp_args_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_b );
                tmp_tuple_element_2 = par_b;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
                tmp_dict_key_3 = const_str_plain_out;
                CHECK_OBJECT( par_out );
                tmp_dict_value_3 = par_out;
                tmp_kw_name_3 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_4 = const_str_plain_casting;
                tmp_dict_value_4 = const_str_plain_unsafe;
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 215;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 215;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                goto try_return_handler_3;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_out );
            tmp_compexpr_left_2 = par_out;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_8 = par_a;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 218;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_type );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 218;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_a );
                tmp_left_name_1 = par_a;
                CHECK_OBJECT( par_b );
                tmp_right_name_1 = par_b;
                tmp_args_element_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 218;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 218;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 218;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                goto try_return_handler_3;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 222;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_9 = tmp_mvar_value_5;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_divide );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_a );
                tmp_tuple_element_3 = par_a;
                tmp_args_name_3 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( par_b );
                tmp_tuple_element_3 = par_b;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
                tmp_dict_key_5 = const_str_plain_out;
                CHECK_OBJECT( par_out );
                tmp_dict_value_5 = par_out;
                tmp_kw_name_4 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_6 = const_str_plain_casting;
                tmp_dict_value_6 = const_str_plain_unsafe;
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 222;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_4 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                goto try_return_handler_3;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_5__divide_by_count );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d7c4f188fed90abd5d6e4f64857fe4c0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d7c4f188fed90abd5d6e4f64857fe4c0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            tmp_args_element_name_2 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_4 = EXC_TRACEBACK(PyThreadState_GET());
            frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 222;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame) frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_5;
            branch_no_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 210;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame) frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_5;
        branch_end_4:;
    }
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_5__divide_by_count );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_8 = tmp_with_1__exit;
        frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 222;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_return_handler_2;
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
        nuitka_bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_9;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_9 = tmp_with_1__exit;
            frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 222;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 222;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_6:;
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
        nuitka_bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_1__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_10;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_10 = tmp_with_1__exit;
            frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame.f_lineno = 222;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_7:;
    }
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_with_1__source );
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
    RESTORE_FRAME_EXCEPTION( frame_d7c4f188fed90abd5d6e4f64857fe4c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7c4f188fed90abd5d6e4f64857fe4c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7c4f188fed90abd5d6e4f64857fe4c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7c4f188fed90abd5d6e4f64857fe4c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7c4f188fed90abd5d6e4f64857fe4c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7c4f188fed90abd5d6e4f64857fe4c0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7c4f188fed90abd5d6e4f64857fe4c0,
        type_description_1,
        par_a,
        par_b,
        par_out
    );


    // Release cached frame.
    if ( frame_d7c4f188fed90abd5d6e4f64857fe4c0 == cache_frame_d7c4f188fed90abd5d6e4f64857fe4c0 )
    {
        Py_DECREF( frame_d7c4f188fed90abd5d6e4f64857fe4c0 );
    }
    cache_frame_d7c4f188fed90abd5d6e4f64857fe4c0 = NULL;

    assertFrameObject( frame_d7c4f188fed90abd5d6e4f64857fe4c0 );

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_5__divide_by_count );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_5__divide_by_count );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_6__nanmin_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_6__nanmin_dispatcher );
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
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_6__nanmin_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_7_nanmin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_kwargs = NULL;
    PyObject *var_res = NULL;
    PyObject *var_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_26177692774f80ddb06ef340d2e4d856;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_26177692774f80ddb06ef340d2e4d856 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_26177692774f80ddb06ef340d2e4d856, codeobj_26177692774f80ddb06ef340d2e4d856, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_26177692774f80ddb06ef340d2e4d856 = cache_frame_26177692774f80ddb06ef340d2e4d856;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_26177692774f80ddb06ef340d2e4d856 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_26177692774f80ddb06ef340d2e4d856 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_keepdims );
        tmp_compexpr_left_1 = par_keepdims;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( par_keepdims );
        tmp_dictset_value = par_keepdims;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_keepdims;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_type_arg_1 = par_a;
        tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_2 == NULL) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
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
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_object_ );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dircall_arg4_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 320;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_4;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fmin );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reduce );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_1 = par_a;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_1 = par_axis;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_2 = par_out;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_kwargs );
            tmp_dircall_arg4_1 = var_kwargs;
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_assign_source_2 = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 321;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( var_res );
            tmp_args_element_name_1 = var_res;
            frame_26177692774f80ddb06ef340d2e4d856->m_frame.f_lineno = 321;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isnan, call_args );
            }

            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_26177692774f80ddb06ef340d2e4d856->m_frame.f_lineno = 321;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_any );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 321;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 322;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_7 = tmp_mvar_value_6;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_warn );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_2 = const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 322;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_2 = tmp_mvar_value_7;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                frame_26177692774f80ddb06ef340d2e4d856->m_frame.f_lineno = 322;
                tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 326;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_8;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_2 = par_a;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 326;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_8 = tmp_mvar_value_9;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_inf );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_3 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            frame_26177692774f80ddb06ef340d2e4d856->m_frame.f_lineno = 326;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooo";
                exception_lineno = 326;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_5 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooo";
                exception_lineno = 326;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

            if (likely( tmp_iterator_attempt == NULL ))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if ( error != NULL )
                {
                    if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                    {
                        CLEAR_ERROR_OCCURRED();
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ooooooo";
                        exception_lineno = 326;
                        goto try_except_handler_3;
                    }
                }
            }
            else
            {
                Py_DECREF( tmp_iterator_attempt );

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooo";
                exception_lineno = 326;
                goto try_except_handler_3;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_6;
                Py_INCREF( par_a );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
            assert( var_mask == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_mask = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dircall_arg4_2;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 327;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_10;
            tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_amin );
            if ( tmp_dircall_arg1_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_3 = par_a;
            tmp_dircall_arg2_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
            tmp_dict_key_3 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_3 = par_axis;
            tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_4 = par_out;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_kwargs );
            tmp_dircall_arg4_2 = var_kwargs;
            Py_INCREF( tmp_dircall_arg4_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_assign_source_8 = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_mask );
            tmp_compexpr_left_4 = var_mask;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( var_res );
            tmp_return_value = var_res;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_dircall_arg1_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_dircall_arg2_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_dircall_arg3_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dircall_arg4_3;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 332;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_11;
            tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_all );
            if ( tmp_dircall_arg1_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_tuple_element_4 = var_mask;
            tmp_dircall_arg2_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_4 );
            tmp_dict_key_5 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_5 = par_axis;
            tmp_dircall_arg3_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_kwargs );
            tmp_dircall_arg4_3 = var_kwargs;
            Py_INCREF( tmp_dircall_arg4_3 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
                tmp_assign_source_9 = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_mask;
                assert( old != NULL );
                var_mask = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_4;
            int tmp_truth_name_2;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 333;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_12;
            CHECK_OBJECT( var_mask );
            tmp_args_element_name_4 = var_mask;
            frame_26177692774f80ddb06ef340d2e4d856->m_frame.f_lineno = 333;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_any, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 333;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__copyto );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copyto );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copyto" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 334;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_13;
                CHECK_OBJECT( var_res );
                tmp_args_element_name_5 = var_res;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 334;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_14;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_nan );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 334;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_mask );
                tmp_args_element_name_7 = var_mask;
                frame_26177692774f80ddb06ef340d2e4d856->m_frame.f_lineno = 334;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 334;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_10;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_kw_name_2;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 335;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_15;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_warn );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 335;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_5 = const_str_digest_e5906d9b36689902967f4292e56d9fde;
                tmp_args_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_16 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 335;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_5 = tmp_mvar_value_16;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                frame_26177692774f80ddb06ef340d2e4d856->m_frame.f_lineno = 335;
                tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 335;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_5:;
        }
        branch_end_2:;
    }
    if ( var_res == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26177692774f80ddb06ef340d2e4d856 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_26177692774f80ddb06ef340d2e4d856 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26177692774f80ddb06ef340d2e4d856 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26177692774f80ddb06ef340d2e4d856, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26177692774f80ddb06ef340d2e4d856->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26177692774f80ddb06ef340d2e4d856, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26177692774f80ddb06ef340d2e4d856,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_kwargs,
        var_res,
        var_mask
    );


    // Release cached frame.
    if ( frame_26177692774f80ddb06ef340d2e4d856 == cache_frame_26177692774f80ddb06ef340d2e4d856 )
    {
        Py_DECREF( frame_26177692774f80ddb06ef340d2e4d856 );
    }
    cache_frame_26177692774f80ddb06ef340d2e4d856 = NULL;

    assertFrameObject( frame_26177692774f80ddb06ef340d2e4d856 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_7_nanmin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
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

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

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

    Py_XDECREF( par_a );
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

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_7_nanmin );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_8__nanmax_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_8__nanmax_dispatcher );
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
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_8__nanmax_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_9_nanmax( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_kwargs = NULL;
    PyObject *var_res = NULL;
    PyObject *var_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_28d51f286b19042fb78be9f74b990479;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_28d51f286b19042fb78be9f74b990479 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28d51f286b19042fb78be9f74b990479, codeobj_28d51f286b19042fb78be9f74b990479, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_28d51f286b19042fb78be9f74b990479 = cache_frame_28d51f286b19042fb78be9f74b990479;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28d51f286b19042fb78be9f74b990479 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28d51f286b19042fb78be9f74b990479 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_keepdims );
        tmp_compexpr_left_1 = par_keepdims;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( par_keepdims );
        tmp_dictset_value = par_keepdims;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_keepdims;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_type_arg_1 = par_a;
        tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_2 == NULL) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
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
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_object_ );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dircall_arg4_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 435;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_4;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fmax );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reduce );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_1 = par_a;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_1 = par_axis;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_2 = par_out;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_kwargs );
            tmp_dircall_arg4_1 = var_kwargs;
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_assign_source_2 = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 436;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( var_res );
            tmp_args_element_name_1 = var_res;
            frame_28d51f286b19042fb78be9f74b990479->m_frame.f_lineno = 436;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isnan, call_args );
            }

            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 436;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_28d51f286b19042fb78be9f74b990479->m_frame.f_lineno = 436;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_any );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 436;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 436;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 437;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_7 = tmp_mvar_value_6;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_warn );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 437;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_2 = const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_7 == NULL )
                {
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 437;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_2 = tmp_mvar_value_7;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                frame_28d51f286b19042fb78be9f74b990479->m_frame.f_lineno = 437;
                tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 437;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 441;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_8;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_2 = par_a;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 441;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_8 = tmp_mvar_value_9;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_inf );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            frame_28d51f286b19042fb78be9f74b990479->m_frame.f_lineno = 441;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooo";
                exception_lineno = 441;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_5 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooo";
                exception_lineno = 441;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

            if (likely( tmp_iterator_attempt == NULL ))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if ( error != NULL )
                {
                    if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                    {
                        CLEAR_ERROR_OCCURRED();
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ooooooo";
                        exception_lineno = 441;
                        goto try_except_handler_3;
                    }
                }
            }
            else
            {
                Py_DECREF( tmp_iterator_attempt );

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooo";
                exception_lineno = 441;
                goto try_except_handler_3;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_6;
                Py_INCREF( par_a );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
            assert( var_mask == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_mask = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dircall_arg4_2;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 442;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_10;
            tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_amax );
            if ( tmp_dircall_arg1_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 442;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_3 = par_a;
            tmp_dircall_arg2_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
            tmp_dict_key_3 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_3 = par_axis;
            tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_4 = par_out;
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_kwargs );
            tmp_dircall_arg4_2 = var_kwargs;
            Py_INCREF( tmp_dircall_arg4_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_assign_source_8 = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 442;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_mask );
            tmp_compexpr_left_4 = var_mask;
            tmp_compexpr_right_4 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( var_res );
            tmp_return_value = var_res;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_dircall_arg1_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_dircall_arg2_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_dircall_arg3_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dircall_arg4_3;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 447;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_11;
            tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_all );
            if ( tmp_dircall_arg1_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_tuple_element_4 = var_mask;
            tmp_dircall_arg2_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_4 );
            tmp_dict_key_5 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_5 = par_axis;
            tmp_dircall_arg3_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_kwargs );
            tmp_dircall_arg4_3 = var_kwargs;
            Py_INCREF( tmp_dircall_arg4_3 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
                tmp_assign_source_9 = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_mask;
                assert( old != NULL );
                var_mask = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_4;
            int tmp_truth_name_2;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 448;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_12;
            CHECK_OBJECT( var_mask );
            tmp_args_element_name_4 = var_mask;
            frame_28d51f286b19042fb78be9f74b990479->m_frame.f_lineno = 448;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_any, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 448;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 448;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
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
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__copyto );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copyto );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copyto" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 449;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_13;
                CHECK_OBJECT( var_res );
                tmp_args_element_name_5 = var_res;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 449;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_14;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_nan );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 449;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_mask );
                tmp_args_element_name_7 = var_mask;
                frame_28d51f286b19042fb78be9f74b990479->m_frame.f_lineno = 449;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 449;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_10;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_kw_name_2;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 450;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_15;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_warn );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 450;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_5 = const_str_digest_e5906d9b36689902967f4292e56d9fde;
                tmp_args_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_16 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    Py_DECREF( tmp_args_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 450;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_5 = tmp_mvar_value_16;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                frame_28d51f286b19042fb78be9f74b990479->m_frame.f_lineno = 450;
                tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 450;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_5:;
        }
        branch_end_2:;
    }
    if ( var_res == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 452;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28d51f286b19042fb78be9f74b990479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28d51f286b19042fb78be9f74b990479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28d51f286b19042fb78be9f74b990479 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28d51f286b19042fb78be9f74b990479, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28d51f286b19042fb78be9f74b990479->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28d51f286b19042fb78be9f74b990479, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28d51f286b19042fb78be9f74b990479,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_kwargs,
        var_res,
        var_mask
    );


    // Release cached frame.
    if ( frame_28d51f286b19042fb78be9f74b990479 == cache_frame_28d51f286b19042fb78be9f74b990479 )
    {
        Py_DECREF( frame_28d51f286b19042fb78be9f74b990479 );
    }
    cache_frame_28d51f286b19042fb78be9f74b990479 = NULL;

    assertFrameObject( frame_28d51f286b19042fb78be9f74b990479 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_9_nanmax );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
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

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

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

    Py_XDECREF( par_a );
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

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_9_nanmax );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_10__nanargmin_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_10__nanargmin_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_10__nanargmin_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_11_nanargmin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *var_mask = NULL;
    PyObject *var_res = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3a0dc336bcee19460e3c3df02b8667d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3a0dc336bcee19460e3c3df02b8667d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a0dc336bcee19460e3c3df02b8667d4, codeobj_3a0dc336bcee19460e3c3df02b8667d4, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3a0dc336bcee19460e3c3df02b8667d4 = cache_frame_3a0dc336bcee19460e3c3df02b8667d4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a0dc336bcee19460e3c3df02b8667d4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a0dc336bcee19460e3c3df02b8667d4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 495;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 495;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_3a0dc336bcee19460e3c3df02b8667d4->m_frame.f_lineno = 495;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 495;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 495;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 495;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooo";
                    exception_lineno = 495;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
            exception_lineno = 495;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 496;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_argmin );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 496;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_3a0dc336bcee19460e3c3df02b8667d4->m_frame.f_lineno = 496;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 496;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_mask );
        tmp_compexpr_left_1 = var_mask;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 498;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_all );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_tuple_element_2 = var_mask;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_2 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_2 = par_axis;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_3a0dc336bcee19460e3c3df02b8667d4->m_frame.f_lineno = 498;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_mask;
                assert( old != NULL );
                var_mask = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            int tmp_truth_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 499;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_5;
            CHECK_OBJECT( var_mask );
            tmp_args_element_name_3 = var_mask;
            frame_3a0dc336bcee19460e3c3df02b8667d4->m_frame.f_lineno = 499;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_any, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 499;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 499;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
                frame_3a0dc336bcee19460e3c3df02b8667d4->m_frame.f_lineno = 500;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 500;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a0dc336bcee19460e3c3df02b8667d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a0dc336bcee19460e3c3df02b8667d4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a0dc336bcee19460e3c3df02b8667d4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a0dc336bcee19460e3c3df02b8667d4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a0dc336bcee19460e3c3df02b8667d4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a0dc336bcee19460e3c3df02b8667d4,
        type_description_1,
        par_a,
        par_axis,
        var_mask,
        var_res
    );


    // Release cached frame.
    if ( frame_3a0dc336bcee19460e3c3df02b8667d4 == cache_frame_3a0dc336bcee19460e3c3df02b8667d4 )
    {
        Py_DECREF( frame_3a0dc336bcee19460e3c3df02b8667d4 );
    }
    cache_frame_3a0dc336bcee19460e3c3df02b8667d4 = NULL;

    assertFrameObject( frame_3a0dc336bcee19460e3c3df02b8667d4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_res );
    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_11_nanargmin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_11_nanargmin );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_12__nanargmax_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_12__nanargmax_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_12__nanargmax_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_13_nanargmax( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *var_mask = NULL;
    PyObject *var_res = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_afd225dffdbcd0066a73acc1af94e94d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_afd225dffdbcd0066a73acc1af94e94d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_afd225dffdbcd0066a73acc1af94e94d, codeobj_afd225dffdbcd0066a73acc1af94e94d, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_afd225dffdbcd0066a73acc1af94e94d = cache_frame_afd225dffdbcd0066a73acc1af94e94d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afd225dffdbcd0066a73acc1af94e94d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afd225dffdbcd0066a73acc1af94e94d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_afd225dffdbcd0066a73acc1af94e94d->m_frame.f_lineno = 545;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 545;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 545;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooo";
                    exception_lineno = 545;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
            exception_lineno = 545;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_argmax );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_afd225dffdbcd0066a73acc1af94e94d->m_frame.f_lineno = 546;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_mask );
        tmp_compexpr_left_1 = var_mask;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 548;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_all );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 548;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_mask );
            tmp_tuple_element_2 = var_mask;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_2 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_2 = par_axis;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_afd225dffdbcd0066a73acc1af94e94d->m_frame.f_lineno = 548;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 548;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_mask;
                assert( old != NULL );
                var_mask = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            int tmp_truth_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 549;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_5;
            CHECK_OBJECT( var_mask );
            tmp_args_element_name_3 = var_mask;
            frame_afd225dffdbcd0066a73acc1af94e94d->m_frame.f_lineno = 549;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_any, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 549;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 549;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
                frame_afd225dffdbcd0066a73acc1af94e94d->m_frame.f_lineno = 550;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 550;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd225dffdbcd0066a73acc1af94e94d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afd225dffdbcd0066a73acc1af94e94d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afd225dffdbcd0066a73acc1af94e94d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afd225dffdbcd0066a73acc1af94e94d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afd225dffdbcd0066a73acc1af94e94d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afd225dffdbcd0066a73acc1af94e94d,
        type_description_1,
        par_a,
        par_axis,
        var_mask,
        var_res
    );


    // Release cached frame.
    if ( frame_afd225dffdbcd0066a73acc1af94e94d == cache_frame_afd225dffdbcd0066a73acc1af94e94d )
    {
        Py_DECREF( frame_afd225dffdbcd0066a73acc1af94e94d );
    }
    cache_frame_afd225dffdbcd0066a73acc1af94e94d = NULL;

    assertFrameObject( frame_afd225dffdbcd0066a73acc1af94e94d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_res );
    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_13_nanargmax );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_13_nanargmax );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_14__nansum_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_14__nansum_dispatcher );
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
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_14__nansum_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_15_nansum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8370874a4b1079886bdd37ec3c7daae7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8370874a4b1079886bdd37ec3c7daae7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8370874a4b1079886bdd37ec3c7daae7, codeobj_8370874a4b1079886bdd37ec3c7daae7, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8370874a4b1079886bdd37ec3c7daae7 = cache_frame_8370874a4b1079886bdd37ec3c7daae7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8370874a4b1079886bdd37ec3c7daae7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8370874a4b1079886bdd37ec3c7daae7 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 648;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_args_element_name_2 = const_int_0;
        frame_8370874a4b1079886bdd37ec3c7daae7->m_frame.f_lineno = 648;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 648;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 648;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 648;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooo";
                    exception_lineno = 648;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooo";
            exception_lineno = 648;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 649;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 649;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 4 );
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
        tmp_dict_key_4 = const_str_plain_keepdims;
        CHECK_OBJECT( par_keepdims );
        tmp_dict_value_4 = par_keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_8370874a4b1079886bdd37ec3c7daae7->m_frame.f_lineno = 649;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 649;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8370874a4b1079886bdd37ec3c7daae7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8370874a4b1079886bdd37ec3c7daae7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8370874a4b1079886bdd37ec3c7daae7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8370874a4b1079886bdd37ec3c7daae7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8370874a4b1079886bdd37ec3c7daae7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8370874a4b1079886bdd37ec3c7daae7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8370874a4b1079886bdd37ec3c7daae7,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_mask
    );


    // Release cached frame.
    if ( frame_8370874a4b1079886bdd37ec3c7daae7 == cache_frame_8370874a4b1079886bdd37ec3c7daae7 )
    {
        Py_DECREF( frame_8370874a4b1079886bdd37ec3c7daae7 );
    }
    cache_frame_8370874a4b1079886bdd37ec3c7daae7 = NULL;

    assertFrameObject( frame_8370874a4b1079886bdd37ec3c7daae7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_15_nansum );
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

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_15_nansum );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_16__nanprod_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_16__nanprod_dispatcher );
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
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_16__nanprod_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_17_nanprod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_70a115f6fa0032f9dac380ffc9de0b35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_70a115f6fa0032f9dac380ffc9de0b35 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_70a115f6fa0032f9dac380ffc9de0b35, codeobj_70a115f6fa0032f9dac380ffc9de0b35, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_70a115f6fa0032f9dac380ffc9de0b35 = cache_frame_70a115f6fa0032f9dac380ffc9de0b35;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_70a115f6fa0032f9dac380ffc9de0b35 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_70a115f6fa0032f9dac380ffc9de0b35 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 718;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_args_element_name_2 = const_int_pos_1;
        frame_70a115f6fa0032f9dac380ffc9de0b35->m_frame.f_lineno = 718;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 718;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 718;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 718;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooo";
            exception_lineno = 718;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooo";
                    exception_lineno = 718;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooo";
            exception_lineno = 718;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 719;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prod );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 719;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 4 );
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
        tmp_dict_key_4 = const_str_plain_keepdims;
        CHECK_OBJECT( par_keepdims );
        tmp_dict_value_4 = par_keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_70a115f6fa0032f9dac380ffc9de0b35->m_frame.f_lineno = 719;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 719;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70a115f6fa0032f9dac380ffc9de0b35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70a115f6fa0032f9dac380ffc9de0b35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70a115f6fa0032f9dac380ffc9de0b35 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70a115f6fa0032f9dac380ffc9de0b35, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70a115f6fa0032f9dac380ffc9de0b35->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70a115f6fa0032f9dac380ffc9de0b35, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70a115f6fa0032f9dac380ffc9de0b35,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_mask
    );


    // Release cached frame.
    if ( frame_70a115f6fa0032f9dac380ffc9de0b35 == cache_frame_70a115f6fa0032f9dac380ffc9de0b35 )
    {
        Py_DECREF( frame_70a115f6fa0032f9dac380ffc9de0b35 );
    }
    cache_frame_70a115f6fa0032f9dac380ffc9de0b35 = NULL;

    assertFrameObject( frame_70a115f6fa0032f9dac380ffc9de0b35 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_17_nanprod );
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

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_17_nanprod );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_18__nancumsum_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_18__nancumsum_dispatcher );
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

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_18__nancumsum_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_19_nancumsum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c673f5aeb314262e1e9f74a502fd232f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c673f5aeb314262e1e9f74a502fd232f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c673f5aeb314262e1e9f74a502fd232f, codeobj_c673f5aeb314262e1e9f74a502fd232f, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c673f5aeb314262e1e9f74a502fd232f = cache_frame_c673f5aeb314262e1e9f74a502fd232f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c673f5aeb314262e1e9f74a502fd232f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c673f5aeb314262e1e9f74a502fd232f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 788;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_args_element_name_2 = const_int_0;
        frame_c673f5aeb314262e1e9f74a502fd232f->m_frame.f_lineno = 788;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 788;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 788;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooo";
            exception_lineno = 788;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooo";
            exception_lineno = 788;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooo";
                    exception_lineno = 788;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooo";
            exception_lineno = 788;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 789;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cumsum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
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
        frame_c673f5aeb314262e1e9f74a502fd232f->m_frame.f_lineno = 789;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c673f5aeb314262e1e9f74a502fd232f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c673f5aeb314262e1e9f74a502fd232f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c673f5aeb314262e1e9f74a502fd232f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c673f5aeb314262e1e9f74a502fd232f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c673f5aeb314262e1e9f74a502fd232f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c673f5aeb314262e1e9f74a502fd232f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c673f5aeb314262e1e9f74a502fd232f,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        var_mask
    );


    // Release cached frame.
    if ( frame_c673f5aeb314262e1e9f74a502fd232f == cache_frame_c673f5aeb314262e1e9f74a502fd232f )
    {
        Py_DECREF( frame_c673f5aeb314262e1e9f74a502fd232f );
    }
    cache_frame_c673f5aeb314262e1e9f74a502fd232f = NULL;

    assertFrameObject( frame_c673f5aeb314262e1e9f74a502fd232f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_19_nancumsum );
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

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_19_nancumsum );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_20__nancumprod_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_20__nancumprod_dispatcher );
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

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_20__nancumprod_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_21_nancumprod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_mask = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e, codeobj_b24ca2bc9ebd074ee5afbe1e90ce3a0e, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e = cache_frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 855;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_args_element_name_2 = const_int_pos_1;
        frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e->m_frame.f_lineno = 855;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 855;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 855;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooo";
            exception_lineno = 855;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooo";
            exception_lineno = 855;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooo";
                    exception_lineno = 855;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooo";
            exception_lineno = 855;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_4;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 856;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cumprod );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 856;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
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
        frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e->m_frame.f_lineno = 856;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 856;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        var_mask
    );


    // Release cached frame.
    if ( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e == cache_frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e )
    {
        Py_DECREF( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e );
    }
    cache_frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e = NULL;

    assertFrameObject( frame_b24ca2bc9ebd074ee5afbe1e90ce3a0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_21_nancumprod );
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

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_21_nancumprod );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_22__nanmean_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_22__nanmean_dispatcher );
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
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_22__nanmean_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_23_nanmean( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_mask = NULL;
    PyObject *var_cnt = NULL;
    PyObject *var_tot = NULL;
    PyObject *var_avg = NULL;
    PyObject *var_isbad = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_609d55599b44f63ce3121ddcdce34bf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_609d55599b44f63ce3121ddcdce34bf8 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_609d55599b44f63ce3121ddcdce34bf8, codeobj_609d55599b44f63ce3121ddcdce34bf8, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_609d55599b44f63ce3121ddcdce34bf8 = cache_frame_609d55599b44f63ce3121ddcdce34bf8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_609d55599b44f63ce3121ddcdce34bf8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_609d55599b44f63ce3121ddcdce34bf8 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 938;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_args_element_name_2 = const_int_0;
        frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 938;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 938;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 938;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 938;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 938;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 938;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooo";
            exception_lineno = 938;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_arr == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_arr = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_mask );
        tmp_compexpr_left_1 = var_mask;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 940;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mean );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 940;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arr );
            tmp_tuple_element_1 = var_arr;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_axis;
            CHECK_OBJECT( par_axis );
            tmp_dict_value_1 = par_axis;
            tmp_kw_name_1 = _PyDict_NewPresized( 4 );
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
            tmp_dict_key_4 = const_str_plain_keepdims;
            CHECK_OBJECT( par_keepdims );
            tmp_dict_value_4 = par_keepdims;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 940;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 940;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
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
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 943;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_dtype );
            tmp_args_element_name_3 = par_dtype;
            frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 943;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 943;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_dtype );
        tmp_compexpr_left_3 = par_dtype;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( par_dtype );
        tmp_source_name_2 = par_dtype;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 944;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 944;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inexact );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 944;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 944;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 944;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 944;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8;
            frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 945;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 945;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_out );
        tmp_compexpr_left_4 = par_out;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( par_out );
        tmp_source_name_5 = par_out;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_type );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inexact );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 946;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 946;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_32383d08c19cf306ff97b1d17823d642;
            frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 947;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 947;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 949;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sum );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 949;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mask );
        tmp_operand_name_3 = var_mask;
        tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 949;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_5 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_5 = par_axis;
        tmp_kw_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_dtype;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 949;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_7;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_intp );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 949;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_keepdims;
        CHECK_OBJECT( par_keepdims );
        tmp_dict_value_7 = par_keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 949;
        tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 949;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cnt == NULL );
        var_cnt = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 950;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sum );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_arr );
        tmp_tuple_element_3 = var_arr;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_dict_key_8 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_8 = par_axis;
        tmp_kw_name_3 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_9 = par_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_10 = par_out;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_keepdims;
        CHECK_OBJECT( par_keepdims );
        tmp_dict_value_11 = par_keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 950;
        tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tot == NULL );
        var_tot = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__divide_by_count );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__divide_by_count );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_divide_by_count" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 951;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        CHECK_OBJECT( var_tot );
        tmp_tuple_element_4 = var_tot;
        tmp_args_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_cnt );
        tmp_tuple_element_4 = var_cnt;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
        tmp_dict_key_12 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_12 = par_out;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 951;
        tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 951;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_avg == NULL );
        var_avg = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_cnt );
        tmp_compexpr_left_5 = var_cnt;
        tmp_compexpr_right_5 = const_int_0;
        tmp_assign_source_10 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 953;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_isbad == NULL );
        var_isbad = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_isbad );
        tmp_called_instance_2 = var_isbad;
        frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 954;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_any );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 954;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 954;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_kw_name_5;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 955;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_10;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_warn );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 955;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = const_str_digest_3620d11fe442a9568f3ab88d5f5efa7d;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_5 );
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 955;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_5 = tmp_mvar_value_11;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_5 );
            tmp_kw_name_5 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
            frame_609d55599b44f63ce3121ddcdce34bf8->m_frame.f_lineno = 955;
            tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 955;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_609d55599b44f63ce3121ddcdce34bf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_609d55599b44f63ce3121ddcdce34bf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_609d55599b44f63ce3121ddcdce34bf8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_609d55599b44f63ce3121ddcdce34bf8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_609d55599b44f63ce3121ddcdce34bf8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_609d55599b44f63ce3121ddcdce34bf8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_609d55599b44f63ce3121ddcdce34bf8,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_arr,
        var_mask,
        var_cnt,
        var_tot,
        var_avg,
        var_isbad
    );


    // Release cached frame.
    if ( frame_609d55599b44f63ce3121ddcdce34bf8 == cache_frame_609d55599b44f63ce3121ddcdce34bf8 )
    {
        Py_DECREF( frame_609d55599b44f63ce3121ddcdce34bf8 );
    }
    cache_frame_609d55599b44f63ce3121ddcdce34bf8 = NULL;

    assertFrameObject( frame_609d55599b44f63ce3121ddcdce34bf8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_avg );
    tmp_return_value = var_avg;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_23_nanmean );
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

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_tot );
    var_tot = NULL;

    Py_XDECREF( var_avg );
    var_avg = NULL;

    Py_XDECREF( var_isbad );
    var_isbad = NULL;

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

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_tot );
    var_tot = NULL;

    Py_XDECREF( var_avg );
    var_avg = NULL;

    Py_XDECREF( var_isbad );
    var_isbad = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_23_nanmean );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_24__nanmedian1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr1d = python_pars[ 0 ];
    PyObject *par_overwrite_input = python_pars[ 1 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_00653194df05fc06a2415c65a27afa34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_00653194df05fc06a2415c65a27afa34 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_00653194df05fc06a2415c65a27afa34, codeobj_00653194df05fc06a2415c65a27afa34, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *) );
    frame_00653194df05fc06a2415c65a27afa34 = cache_frame_00653194df05fc06a2415c65a27afa34;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_00653194df05fc06a2415c65a27afa34 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_00653194df05fc06a2415c65a27afa34 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__remove_nan_1d );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__remove_nan_1d );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_remove_nan_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 966;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arr1d );
        tmp_tuple_element_1 = par_arr1d;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_overwrite_input;
        CHECK_OBJECT( par_overwrite_input );
        tmp_dict_value_1 = par_overwrite_input;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_00653194df05fc06a2415c65a27afa34->m_frame.f_lineno = 966;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 966;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 966;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oo";
            exception_lineno = 966;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oo";
            exception_lineno = 966;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oo";
                    exception_lineno = 966;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oo";
            exception_lineno = 966;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_arr1d;
            assert( old != NULL );
            par_arr1d = tmp_assign_source_4;
            Py_INCREF( par_arr1d );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_overwrite_input;
            assert( old != NULL );
            par_overwrite_input = tmp_assign_source_5;
            Py_INCREF( par_overwrite_input );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_arr1d );
        tmp_source_name_1 = par_arr1d;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 968;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 968;
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
        {
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 969;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nan );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 969;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 971;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_median );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 971;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_arr1d );
        tmp_tuple_element_2 = par_arr1d;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_overwrite_input;
        CHECK_OBJECT( par_overwrite_input );
        tmp_dict_value_2 = par_overwrite_input;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_00653194df05fc06a2415c65a27afa34->m_frame.f_lineno = 971;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 971;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00653194df05fc06a2415c65a27afa34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_00653194df05fc06a2415c65a27afa34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00653194df05fc06a2415c65a27afa34 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_00653194df05fc06a2415c65a27afa34, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_00653194df05fc06a2415c65a27afa34->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_00653194df05fc06a2415c65a27afa34, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_00653194df05fc06a2415c65a27afa34,
        type_description_1,
        par_arr1d,
        par_overwrite_input
    );


    // Release cached frame.
    if ( frame_00653194df05fc06a2415c65a27afa34 == cache_frame_00653194df05fc06a2415c65a27afa34 )
    {
        Py_DECREF( frame_00653194df05fc06a2415c65a27afa34 );
    }
    cache_frame_00653194df05fc06a2415c65a27afa34 = NULL;

    assertFrameObject( frame_00653194df05fc06a2415c65a27afa34 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_24__nanmedian1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr1d );
    Py_DECREF( par_arr1d );
    par_arr1d = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr1d );
    Py_DECREF( par_arr1d );
    par_arr1d = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_24__nanmedian1d );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_25__nanmedian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_overwrite_input = python_pars[ 3 ];
    PyObject *var_part = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_edf6404edcea529c020d76700f395657;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_edf6404edcea529c020d76700f395657 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_edf6404edcea529c020d76700f395657, codeobj_edf6404edcea529c020d76700f395657, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_edf6404edcea529c020d76700f395657 = cache_frame_edf6404edcea529c020d76700f395657;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_edf6404edcea529c020d76700f395657 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_edf6404edcea529c020d76700f395657 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 981;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 981;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_a );
            tmp_called_instance_1 = par_a;
            frame_edf6404edcea529c020d76700f395657->m_frame.f_lineno = 982;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 982;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_part == NULL );
            var_part = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_out );
            tmp_compexpr_left_3 = par_out;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian1d );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmedian1d );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanmedian1d" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 984;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( var_part );
                tmp_args_element_name_1 = var_part;
                CHECK_OBJECT( par_overwrite_input );
                tmp_args_element_name_2 = par_overwrite_input;
                frame_edf6404edcea529c020d76700f395657->m_frame.f_lineno = 984;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 984;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian1d );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmedian1d );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanmedian1d" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 986;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                CHECK_OBJECT( var_part );
                tmp_args_element_name_3 = var_part;
                CHECK_OBJECT( par_overwrite_input );
                tmp_args_element_name_4 = par_overwrite_input;
                frame_edf6404edcea529c020d76700f395657->m_frame.f_lineno = 986;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 986;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_out );
                tmp_ass_subscribed_1 = par_out;
                tmp_ass_subscript_1 = Py_Ellipsis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 986;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            CHECK_OBJECT( par_out );
            tmp_return_value = par_out;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_2 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 992;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 992;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_int_pos_600;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 992;
                type_description_1 = "oooooo";
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian_small );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmedian_small );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanmedian_small" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 993;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_3;
                CHECK_OBJECT( par_a );
                tmp_args_element_name_5 = par_a;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_6 = par_axis;
                CHECK_OBJECT( par_out );
                tmp_args_element_name_7 = par_out;
                CHECK_OBJECT( par_overwrite_input );
                tmp_args_element_name_8 = par_overwrite_input;
                frame_edf6404edcea529c020d76700f395657->m_frame.f_lineno = 993;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 993;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 994;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_apply_along_axis );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 994;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian1d );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmedian1d );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanmedian1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 994;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_9 = tmp_mvar_value_5;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_10 = par_axis;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_11 = par_a;
            CHECK_OBJECT( par_overwrite_input );
            tmp_args_element_name_12 = par_overwrite_input;
            frame_edf6404edcea529c020d76700f395657->m_frame.f_lineno = 994;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 994;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( par_out );
            tmp_compexpr_left_5 = par_out;
            tmp_compexpr_right_5 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT( var_result );
                tmp_ass_subvalue_2 = var_result;
                CHECK_OBJECT( par_out );
                tmp_ass_subscribed_2 = par_out;
                tmp_ass_subscript_2 = Py_Ellipsis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 996;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_4:;
        }
        CHECK_OBJECT( var_result );
        tmp_return_value = var_result;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edf6404edcea529c020d76700f395657 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_edf6404edcea529c020d76700f395657 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edf6404edcea529c020d76700f395657 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_edf6404edcea529c020d76700f395657, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_edf6404edcea529c020d76700f395657->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_edf6404edcea529c020d76700f395657, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_edf6404edcea529c020d76700f395657,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_overwrite_input,
        var_part,
        var_result
    );


    // Release cached frame.
    if ( frame_edf6404edcea529c020d76700f395657 == cache_frame_edf6404edcea529c020d76700f395657 )
    {
        Py_DECREF( frame_edf6404edcea529c020d76700f395657 );
    }
    cache_frame_edf6404edcea529c020d76700f395657 = NULL;

    assertFrameObject( frame_edf6404edcea529c020d76700f395657 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_25__nanmedian );
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

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_25__nanmedian );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_26__nanmedian_small( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_overwrite_input = python_pars[ 3 ];
    PyObject *var_m = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a14694a66ddc1b8f8fecea77da4fef1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a14694a66ddc1b8f8fecea77da4fef1c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a14694a66ddc1b8f8fecea77da4fef1c, codeobj_a14694a66ddc1b8f8fecea77da4fef1c, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a14694a66ddc1b8f8fecea77da4fef1c = cache_frame_a14694a66ddc1b8f8fecea77da4fef1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a14694a66ddc1b8f8fecea77da4fef1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a14694a66ddc1b8f8fecea77da4fef1c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1007;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ma );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1007;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_masked_array );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1007;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1007;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_3 = par_a;
        frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1007;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isnan, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 1007;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1007;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1007;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1008;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ma );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1008;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_median );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1008;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_1 = par_axis;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_overwrite_input;
        CHECK_OBJECT( par_overwrite_input );
        tmp_dict_value_2 = par_overwrite_input;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1008;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1008;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1009;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_count_nonzero );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1009;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_source_name_6 = var_m;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_mask );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1009;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1009;
        tmp_args_element_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_ravel );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1009;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1009;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_xrange_low_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1009;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1009;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1009;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 1009;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_5;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

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

            exception_lineno = 1010;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_warn );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1010;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = const_str_digest_df9219e7323f1cc1c5ffd9b53703d856;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1010;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = tmp_mvar_value_6;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_a761d016d430864480383c3284603eea );
        frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1010;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1010;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1009;
        type_description_1 = "oooooo";
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_out );
        tmp_compexpr_left_1 = par_out;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_m );
            tmp_source_name_8 = var_m;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_filled );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1013;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1013;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_7;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_nan );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 1013;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1013;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1013;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_out );
            tmp_ass_subscribed_1 = par_out;
            tmp_ass_subscript_1 = Py_Ellipsis;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1013;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT( par_out );
        tmp_return_value = par_out;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_8;
        CHECK_OBJECT( var_m );
        tmp_source_name_10 = var_m;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_filled );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1015;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1015;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_8;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_nan );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 1015;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame.f_lineno = 1015;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1015;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14694a66ddc1b8f8fecea77da4fef1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14694a66ddc1b8f8fecea77da4fef1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14694a66ddc1b8f8fecea77da4fef1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a14694a66ddc1b8f8fecea77da4fef1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a14694a66ddc1b8f8fecea77da4fef1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a14694a66ddc1b8f8fecea77da4fef1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a14694a66ddc1b8f8fecea77da4fef1c,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_overwrite_input,
        var_m,
        var_i
    );


    // Release cached frame.
    if ( frame_a14694a66ddc1b8f8fecea77da4fef1c == cache_frame_a14694a66ddc1b8f8fecea77da4fef1c )
    {
        Py_DECREF( frame_a14694a66ddc1b8f8fecea77da4fef1c );
    }
    cache_frame_a14694a66ddc1b8f8fecea77da4fef1c = NULL;

    assertFrameObject( frame_a14694a66ddc1b8f8fecea77da4fef1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_26__nanmedian_small );
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

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_26__nanmedian_small );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_27__nanmedian_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_overwrite_input = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_27__nanmedian_dispatcher );
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

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_27__nanmedian_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_28_nanmedian( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_overwrite_input = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *var_r = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4aa7b4d534141eee99f4359aaa1086b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4aa7b4d534141eee99f4359aaa1086b9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4aa7b4d534141eee99f4359aaa1086b9, codeobj_4aa7b4d534141eee99f4359aaa1086b9, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4aa7b4d534141eee99f4359aaa1086b9 = cache_frame_4aa7b4d534141eee99f4359aaa1086b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4aa7b4d534141eee99f4359aaa1086b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4aa7b4d534141eee99f4359aaa1086b9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_4aa7b4d534141eee99f4359aaa1086b9->m_frame.f_lineno = 1108;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1111;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1112;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nanmean );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1112;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_1 = par_a;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_axis );
            tmp_tuple_element_1 = par_axis;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_1 = par_out;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_keepdims;
            CHECK_OBJECT( par_keepdims );
            tmp_dict_value_2 = par_keepdims;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_4aa7b4d534141eee99f4359aaa1086b9->m_frame.f_lineno = 1112;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1112;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_function_base );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "function_base" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1114;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ureduce );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1114;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_2 = par_a;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_3 = const_str_plain_func;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmedian );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanmedian" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1114;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_dict_value_3 = tmp_mvar_value_4;
        tmp_kw_name_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_4 = par_axis;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_5 = par_out;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_overwrite_input;
        CHECK_OBJECT( par_overwrite_input );
        tmp_dict_value_6 = par_overwrite_input;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_4aa7b4d534141eee99f4359aaa1086b9->m_frame.f_lineno = 1114;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1114;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1114;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooo";
            exception_lineno = 1114;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooo";
            exception_lineno = 1114;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooo";
                    exception_lineno = 1114;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooo";
            exception_lineno = 1114;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_r == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_r = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_k = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_keepdims );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_keepdims );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_keepdims );
        tmp_compexpr_left_2 = par_keepdims;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__NoValue );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1116;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_2 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_r );
            tmp_called_instance_2 = var_r;
            CHECK_OBJECT( var_k );
            tmp_args_element_name_2 = var_k;
            frame_4aa7b4d534141eee99f4359aaa1086b9->m_frame.f_lineno = 1117;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_reshape, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1117;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        CHECK_OBJECT( var_r );
        tmp_return_value = var_r;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aa7b4d534141eee99f4359aaa1086b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aa7b4d534141eee99f4359aaa1086b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aa7b4d534141eee99f4359aaa1086b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4aa7b4d534141eee99f4359aaa1086b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4aa7b4d534141eee99f4359aaa1086b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4aa7b4d534141eee99f4359aaa1086b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4aa7b4d534141eee99f4359aaa1086b9,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_overwrite_input,
        par_keepdims,
        var_r,
        var_k
    );


    // Release cached frame.
    if ( frame_4aa7b4d534141eee99f4359aaa1086b9 == cache_frame_4aa7b4d534141eee99f4359aaa1086b9 )
    {
        Py_DECREF( frame_4aa7b4d534141eee99f4359aaa1086b9 );
    }
    cache_frame_4aa7b4d534141eee99f4359aaa1086b9 = NULL;

    assertFrameObject( frame_4aa7b4d534141eee99f4359aaa1086b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_28_nanmedian );
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

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_28_nanmedian );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_29__nanpercentile_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_overwrite_input = python_pars[ 4 ];
    PyObject *par_interpolation = python_pars[ 5 ];
    PyObject *par_keepdims = python_pars[ 6 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_1 = par_q;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_29__nanpercentile_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_29__nanpercentile_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_30_nanpercentile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_overwrite_input = python_pars[ 4 ];
    PyObject *par_interpolation = python_pars[ 5 ];
    PyObject *par_keepdims = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_0c751d1ad097317239055ee0fd716d40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0c751d1ad097317239055ee0fd716d40 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0c751d1ad097317239055ee0fd716d40, codeobj_0c751d1ad097317239055ee0fd716d40, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0c751d1ad097317239055ee0fd716d40 = cache_frame_0c751d1ad097317239055ee0fd716d40;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0c751d1ad097317239055ee0fd716d40 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0c751d1ad097317239055ee0fd716d40 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_0c751d1ad097317239055ee0fd716d40->m_frame.f_lineno = 1240;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1240;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_2 = par_q;
        tmp_args_element_name_3 = const_float_100_0;
        frame_0c751d1ad097317239055ee0fd716d40->m_frame.f_lineno = 1241;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_true_divide, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1241;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_function_base );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "function_base" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1242;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_4 = par_q;
        frame_0c751d1ad097317239055ee0fd716d40->m_frame.f_lineno = 1242;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__quantile_is_valid, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1242;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1242;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_1 = const_str_digest_5ab373ae36e2bb6baafef27c86182e81;
            frame_0c751d1ad097317239055ee0fd716d40->m_frame.f_lineno = 1243;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1243;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_unchecked );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanquantile_unchecked );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanquantile_unchecked" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_5 = par_a;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_6 = par_q;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_7 = par_axis;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_8 = par_out;
        CHECK_OBJECT( par_overwrite_input );
        tmp_args_element_name_9 = par_overwrite_input;
        CHECK_OBJECT( par_interpolation );
        tmp_args_element_name_10 = par_interpolation;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_11 = par_keepdims;
        frame_0c751d1ad097317239055ee0fd716d40->m_frame.f_lineno = 1244;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c751d1ad097317239055ee0fd716d40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c751d1ad097317239055ee0fd716d40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c751d1ad097317239055ee0fd716d40 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0c751d1ad097317239055ee0fd716d40, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0c751d1ad097317239055ee0fd716d40->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0c751d1ad097317239055ee0fd716d40, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0c751d1ad097317239055ee0fd716d40,
        type_description_1,
        par_a,
        par_q,
        par_axis,
        par_out,
        par_overwrite_input,
        par_interpolation,
        par_keepdims
    );


    // Release cached frame.
    if ( frame_0c751d1ad097317239055ee0fd716d40 == cache_frame_0c751d1ad097317239055ee0fd716d40 )
    {
        Py_DECREF( frame_0c751d1ad097317239055ee0fd716d40 );
    }
    cache_frame_0c751d1ad097317239055ee0fd716d40 = NULL;

    assertFrameObject( frame_0c751d1ad097317239055ee0fd716d40 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_30_nanpercentile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_30_nanpercentile );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_31__nanquantile_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_overwrite_input = python_pars[ 4 ];
    PyObject *par_interpolation = python_pars[ 5 ];
    PyObject *par_keepdims = python_pars[ 6 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_1 = par_q;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_31__nanquantile_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_31__nanquantile_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_32_nanquantile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_overwrite_input = python_pars[ 4 ];
    PyObject *par_interpolation = python_pars[ 5 ];
    PyObject *par_keepdims = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_2362283528d982ba744b2fd929a82498;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2362283528d982ba744b2fd929a82498 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2362283528d982ba744b2fd929a82498, codeobj_2362283528d982ba744b2fd929a82498, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2362283528d982ba744b2fd929a82498 = cache_frame_2362283528d982ba744b2fd929a82498;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2362283528d982ba744b2fd929a82498 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2362283528d982ba744b2fd929a82498 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1353;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_2362283528d982ba744b2fd929a82498->m_frame.f_lineno = 1353;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1353;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1354;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_2 = par_q;
        frame_2362283528d982ba744b2fd929a82498->m_frame.f_lineno = 1354;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1354;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_function_base );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "function_base" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1355;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_3 = par_q;
        frame_2362283528d982ba744b2fd929a82498->m_frame.f_lineno = 1355;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__quantile_is_valid, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1355;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1355;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_make_exception_arg_1 = const_str_digest_f47df35bbcf99e0a872c43dc6981620b;
            frame_2362283528d982ba744b2fd929a82498->m_frame.f_lineno = 1356;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1356;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_unchecked );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanquantile_unchecked );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanquantile_unchecked" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1357;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_5 = par_q;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        CHECK_OBJECT( par_out );
        tmp_args_element_name_7 = par_out;
        CHECK_OBJECT( par_overwrite_input );
        tmp_args_element_name_8 = par_overwrite_input;
        CHECK_OBJECT( par_interpolation );
        tmp_args_element_name_9 = par_interpolation;
        CHECK_OBJECT( par_keepdims );
        tmp_args_element_name_10 = par_keepdims;
        frame_2362283528d982ba744b2fd929a82498->m_frame.f_lineno = 1357;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1357;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2362283528d982ba744b2fd929a82498 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2362283528d982ba744b2fd929a82498 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2362283528d982ba744b2fd929a82498 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2362283528d982ba744b2fd929a82498, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2362283528d982ba744b2fd929a82498->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2362283528d982ba744b2fd929a82498, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2362283528d982ba744b2fd929a82498,
        type_description_1,
        par_a,
        par_q,
        par_axis,
        par_out,
        par_overwrite_input,
        par_interpolation,
        par_keepdims
    );


    // Release cached frame.
    if ( frame_2362283528d982ba744b2fd929a82498 == cache_frame_2362283528d982ba744b2fd929a82498 )
    {
        Py_DECREF( frame_2362283528d982ba744b2fd929a82498 );
    }
    cache_frame_2362283528d982ba744b2fd929a82498 = NULL;

    assertFrameObject( frame_2362283528d982ba744b2fd929a82498 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_32_nanquantile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_32_nanquantile );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_33__nanquantile_unchecked( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_overwrite_input = python_pars[ 4 ];
    PyObject *par_interpolation = python_pars[ 5 ];
    PyObject *par_keepdims = python_pars[ 6 ];
    PyObject *var_r = NULL;
    PyObject *var_k = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ff012ca30e1cc46b44c9f31699bbf64e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ff012ca30e1cc46b44c9f31699bbf64e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff012ca30e1cc46b44c9f31699bbf64e, codeobj_ff012ca30e1cc46b44c9f31699bbf64e, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ff012ca30e1cc46b44c9f31699bbf64e = cache_frame_ff012ca30e1cc46b44c9f31699bbf64e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff012ca30e1cc46b44c9f31699bbf64e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff012ca30e1cc46b44c9f31699bbf64e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1366;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1366;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1367;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nanmean );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1367;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_a );
            tmp_tuple_element_1 = par_a;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_axis );
            tmp_tuple_element_1 = par_axis;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_out;
            CHECK_OBJECT( par_out );
            tmp_dict_value_1 = par_out;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_keepdims;
            CHECK_OBJECT( par_keepdims );
            tmp_dict_value_2 = par_keepdims;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_ff012ca30e1cc46b44c9f31699bbf64e->m_frame.f_lineno = 1367;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1367;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_function_base );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "function_base" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1369;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ureduce );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1369;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_a );
        tmp_tuple_element_2 = par_a;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_3 = const_str_plain_func;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_ureduce_func );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanquantile_ureduce_func );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanquantile_ureduce_func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1370;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_dict_value_3 = tmp_mvar_value_3;
        tmp_kw_name_2 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_q;
        CHECK_OBJECT( par_q );
        tmp_dict_value_4 = par_q;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_5 = par_axis;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_6 = par_out;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_overwrite_input;
        CHECK_OBJECT( par_overwrite_input );
        tmp_dict_value_7 = par_overwrite_input;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_interpolation;
        CHECK_OBJECT( par_interpolation );
        tmp_dict_value_8 = par_interpolation;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_ff012ca30e1cc46b44c9f31699bbf64e->m_frame.f_lineno = 1369;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1369;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1369;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 1369;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 1369;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooo";
                    exception_lineno = 1369;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooo";
            exception_lineno = 1369;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_r == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_r = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_k = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_keepdims );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_keepdims );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_keepdims );
        tmp_compexpr_left_2 = par_keepdims;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__NoValue );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_2 );
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_r );
            tmp_source_name_5 = var_r;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reshape );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1374;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_q );
            tmp_source_name_6 = par_q;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 1374;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_k );
            tmp_right_name_1 = var_k;
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 1374;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ff012ca30e1cc46b44c9f31699bbf64e->m_frame.f_lineno = 1374;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1374;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        CHECK_OBJECT( var_r );
        tmp_return_value = var_r;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff012ca30e1cc46b44c9f31699bbf64e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff012ca30e1cc46b44c9f31699bbf64e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff012ca30e1cc46b44c9f31699bbf64e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff012ca30e1cc46b44c9f31699bbf64e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff012ca30e1cc46b44c9f31699bbf64e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff012ca30e1cc46b44c9f31699bbf64e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff012ca30e1cc46b44c9f31699bbf64e,
        type_description_1,
        par_a,
        par_q,
        par_axis,
        par_out,
        par_overwrite_input,
        par_interpolation,
        par_keepdims,
        var_r,
        var_k
    );


    // Release cached frame.
    if ( frame_ff012ca30e1cc46b44c9f31699bbf64e == cache_frame_ff012ca30e1cc46b44c9f31699bbf64e )
    {
        Py_DECREF( frame_ff012ca30e1cc46b44c9f31699bbf64e );
    }
    cache_frame_ff012ca30e1cc46b44c9f31699bbf64e = NULL;

    assertFrameObject( frame_ff012ca30e1cc46b44c9f31699bbf64e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_33__nanquantile_unchecked );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_33__nanquantile_unchecked );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_34__nanquantile_ureduce_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_overwrite_input = python_pars[ 4 ];
    PyObject *par_interpolation = python_pars[ 5 ];
    PyObject *var_part = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_f7e0f0d606b91d17aeafaadc6e90c2af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f7e0f0d606b91d17aeafaadc6e90c2af = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f7e0f0d606b91d17aeafaadc6e90c2af, codeobj_f7e0f0d606b91d17aeafaadc6e90c2af, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f7e0f0d606b91d17aeafaadc6e90c2af = cache_frame_f7e0f0d606b91d17aeafaadc6e90c2af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7e0f0d606b91d17aeafaadc6e90c2af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7e0f0d606b91d17aeafaadc6e90c2af ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1386;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1386;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_a );
            tmp_called_instance_1 = par_a;
            frame_f7e0f0d606b91d17aeafaadc6e90c2af->m_frame.f_lineno = 1387;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ravel );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1387;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_part == NULL );
            var_part = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_1d );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanquantile_1d );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanquantile_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1388;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( var_part );
            tmp_args_element_name_1 = var_part;
            CHECK_OBJECT( par_q );
            tmp_args_element_name_2 = par_q;
            CHECK_OBJECT( par_overwrite_input );
            tmp_args_element_name_3 = par_overwrite_input;
            CHECK_OBJECT( par_interpolation );
            tmp_args_element_name_4 = par_interpolation;
            frame_f7e0f0d606b91d17aeafaadc6e90c2af->m_frame.f_lineno = 1388;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1388;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1390;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_apply_along_axis );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1390;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_1d );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanquantile_1d );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_nanquantile_1d" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1390;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = tmp_mvar_value_3;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_6 = par_axis;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_7 = par_a;
            CHECK_OBJECT( par_q );
            tmp_args_element_name_8 = par_q;
            CHECK_OBJECT( par_overwrite_input );
            tmp_args_element_name_9 = par_overwrite_input;
            CHECK_OBJECT( par_interpolation );
            tmp_args_element_name_10 = par_interpolation;
            frame_f7e0f0d606b91d17aeafaadc6e90c2af->m_frame.f_lineno = 1390;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1390;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_q );
            tmp_source_name_3 = par_q;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1395;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1395;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1396;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_2 = tmp_mvar_value_4;
                CHECK_OBJECT( var_result );
                tmp_args_element_name_11 = var_result;
                CHECK_OBJECT( par_axis );
                tmp_args_element_name_12 = par_axis;
                tmp_args_element_name_13 = const_int_0;
                frame_f7e0f0d606b91d17aeafaadc6e90c2af->m_frame.f_lineno = 1396;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_moveaxis, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1396;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_result;
                    assert( old != NULL );
                    var_result = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_out );
        tmp_compexpr_left_4 = par_out;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1399;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_ass_subvalue_1 = var_result;
            CHECK_OBJECT( par_out );
            tmp_ass_subscribed_1 = par_out;
            tmp_ass_subscript_1 = Py_Ellipsis;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1399;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    if ( var_result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1400;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7e0f0d606b91d17aeafaadc6e90c2af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7e0f0d606b91d17aeafaadc6e90c2af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7e0f0d606b91d17aeafaadc6e90c2af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7e0f0d606b91d17aeafaadc6e90c2af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7e0f0d606b91d17aeafaadc6e90c2af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7e0f0d606b91d17aeafaadc6e90c2af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7e0f0d606b91d17aeafaadc6e90c2af,
        type_description_1,
        par_a,
        par_q,
        par_axis,
        par_out,
        par_overwrite_input,
        par_interpolation,
        var_part,
        var_result
    );


    // Release cached frame.
    if ( frame_f7e0f0d606b91d17aeafaadc6e90c2af == cache_frame_f7e0f0d606b91d17aeafaadc6e90c2af )
    {
        Py_DECREF( frame_f7e0f0d606b91d17aeafaadc6e90c2af );
    }
    cache_frame_f7e0f0d606b91d17aeafaadc6e90c2af = NULL;

    assertFrameObject( frame_f7e0f0d606b91d17aeafaadc6e90c2af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_34__nanquantile_ureduce_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_34__nanquantile_ureduce_func );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_35__nanquantile_1d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr1d = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_overwrite_input = python_pars[ 2 ];
    PyObject *par_interpolation = python_pars[ 3 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_70e64a8e201c61a470c9d6adc76887a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_70e64a8e201c61a470c9d6adc76887a1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_70e64a8e201c61a470c9d6adc76887a1, codeobj_70e64a8e201c61a470c9d6adc76887a1, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_70e64a8e201c61a470c9d6adc76887a1 = cache_frame_70e64a8e201c61a470c9d6adc76887a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_70e64a8e201c61a470c9d6adc76887a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_70e64a8e201c61a470c9d6adc76887a1 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__remove_nan_1d );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__remove_nan_1d );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_remove_nan_1d" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1408;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arr1d );
        tmp_tuple_element_1 = par_arr1d;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_overwrite_input;
        CHECK_OBJECT( par_overwrite_input );
        tmp_dict_value_1 = par_overwrite_input;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_70e64a8e201c61a470c9d6adc76887a1->m_frame.f_lineno = 1408;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1408;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1408;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 1408;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 1408;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooo";
                    exception_lineno = 1408;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
            exception_lineno = 1408;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_arr1d;
            assert( old != NULL );
            par_arr1d = tmp_assign_source_4;
            Py_INCREF( par_arr1d );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_overwrite_input;
            assert( old != NULL );
            par_overwrite_input = tmp_assign_source_5;
            Py_INCREF( par_overwrite_input );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_arr1d );
        tmp_source_name_1 = par_arr1d;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1410;
            type_description_1 = "oooo";
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1411;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_full );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1411;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_q );
            tmp_source_name_3 = par_q;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1411;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1411;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_nan );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 1411;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_70e64a8e201c61a470c9d6adc76887a1->m_frame.f_lineno = 1411;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1411;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_tuple_empty;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1411;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_function_base );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "function_base" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__quantile_unchecked );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_arr1d );
        tmp_tuple_element_2 = par_arr1d;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_2 = par_q;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_dict_key_2 = const_str_plain_overwrite_input;
        CHECK_OBJECT( par_overwrite_input );
        tmp_dict_value_2 = par_overwrite_input;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_interpolation;
        CHECK_OBJECT( par_interpolation );
        tmp_dict_value_3 = par_interpolation;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_70e64a8e201c61a470c9d6adc76887a1->m_frame.f_lineno = 1413;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e64a8e201c61a470c9d6adc76887a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e64a8e201c61a470c9d6adc76887a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70e64a8e201c61a470c9d6adc76887a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70e64a8e201c61a470c9d6adc76887a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70e64a8e201c61a470c9d6adc76887a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70e64a8e201c61a470c9d6adc76887a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70e64a8e201c61a470c9d6adc76887a1,
        type_description_1,
        par_arr1d,
        par_q,
        par_overwrite_input,
        par_interpolation
    );


    // Release cached frame.
    if ( frame_70e64a8e201c61a470c9d6adc76887a1 == cache_frame_70e64a8e201c61a470c9d6adc76887a1 )
    {
        Py_DECREF( frame_70e64a8e201c61a470c9d6adc76887a1 );
    }
    cache_frame_70e64a8e201c61a470c9d6adc76887a1 = NULL;

    assertFrameObject( frame_70e64a8e201c61a470c9d6adc76887a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_35__nanquantile_1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr1d );
    Py_DECREF( par_arr1d );
    par_arr1d = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr1d );
    Py_DECREF( par_arr1d );
    par_arr1d = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_input );
    Py_DECREF( par_overwrite_input );
    par_overwrite_input = NULL;

    CHECK_OBJECT( (PyObject *)par_interpolation );
    Py_DECREF( par_interpolation );
    par_interpolation = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_35__nanquantile_1d );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_36__nanvar_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_36__nanvar_dispatcher );
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

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_36__nanvar_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_37_nanvar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_mask = NULL;
    PyObject *var__keepdims = NULL;
    PyObject *var_cnt = NULL;
    PyObject *var_avg = NULL;
    PyObject *var_sqr = NULL;
    PyObject *var_var = NULL;
    PyObject *var_dof = NULL;
    PyObject *var_isbad = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9cfe790bffd190470736a95b95604357;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9cfe790bffd190470736a95b95604357 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9cfe790bffd190470736a95b95604357, codeobj_9cfe790bffd190470736a95b95604357, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9cfe790bffd190470736a95b95604357 = cache_frame_9cfe790bffd190470736a95b95604357;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9cfe790bffd190470736a95b95604357 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9cfe790bffd190470736a95b95604357 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__replace_nan );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_replace_nan" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1513;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        tmp_args_element_name_2 = const_int_0;
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1513;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1513;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1513;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 1513;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 1513;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 1513;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 1513;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_arr == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_arr = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_mask == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_mask = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_mask );
        tmp_compexpr_left_1 = var_mask;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1515;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_var );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1515;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arr );
            tmp_tuple_element_1 = var_arr;
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
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1515;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1515;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
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
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1519;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_dtype );
            tmp_args_element_name_3 = par_dtype;
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1519;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1519;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_dtype );
        tmp_compexpr_left_3 = par_dtype;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( par_dtype );
        tmp_source_name_2 = par_dtype;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1520;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1520;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inexact );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 1520;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1520;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1520;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1520;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d0f68b1312beaf88b5b68249f29f5bf8;
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1521;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1521;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_out );
        tmp_compexpr_left_4 = par_out;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( par_out );
        tmp_source_name_5 = par_out;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1522;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_type );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1522;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1522;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_inexact );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 1522;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1522;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1522;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1522;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_32383d08c19cf306ff97b1d17823d642;
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1523;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 1523;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( var_arr );
        tmp_type_arg_1 = var_arr;
        tmp_compexpr_left_5 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_5 == NULL) );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1526;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_matrix );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 1526;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1527;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_7;
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__NoValue );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1527;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__keepdims == NULL );
            var__keepdims = tmp_assign_source_7;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = Py_True;
            assert( var__keepdims == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var__keepdims = tmp_assign_source_8;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1535;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sum );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1535;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mask );
        tmp_operand_name_3 = var_mask;
        tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 1535;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_key_6 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_6 = par_axis;
        tmp_kw_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_dtype;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1535;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_intp );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 1535;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_keepdims;
        CHECK_OBJECT( var__keepdims );
        tmp_dict_value_8 = var__keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1535;
        tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1535;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cnt == NULL );
        var_cnt = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1536;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_10;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_sum );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1536;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_arr );
        tmp_tuple_element_3 = var_arr;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_dict_key_9 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_9 = par_axis;
        tmp_kw_name_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_10 = par_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_10, tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_keepdims;
        CHECK_OBJECT( var__keepdims );
        tmp_dict_value_11 = var__keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1536;
        tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1536;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_avg == NULL );
        var_avg = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__divide_by_count );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__divide_by_count );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_divide_by_count" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1537;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_11;
        CHECK_OBJECT( var_avg );
        tmp_args_element_name_8 = var_avg;
        CHECK_OBJECT( var_cnt );
        tmp_args_element_name_9 = var_cnt;
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1537;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1537;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_avg;
            assert( old != NULL );
            var_avg = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1540;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_12;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_subtract );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1540;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_arr );
        tmp_tuple_element_4 = var_arr;
        tmp_args_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_avg );
        tmp_tuple_element_4 = var_avg;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
        tmp_dict_key_12 = const_str_plain_out;
        CHECK_OBJECT( var_arr );
        tmp_dict_value_12 = var_arr;
        tmp_kw_name_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_13 = const_str_plain_casting;
        tmp_dict_value_13 = const_str_plain_unsafe;
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1540;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1540;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__copyto );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copyto );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copyto" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1541;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_13;
        CHECK_OBJECT( var_arr );
        tmp_args_element_name_10 = var_arr;
        tmp_args_element_name_11 = const_int_0;
        CHECK_OBJECT( var_mask );
        tmp_args_element_name_12 = var_mask;
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1541;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1541;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arr;
            assert( old != NULL );
            var_arr = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_name_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_14;
        int tmp_truth_name_1;
        tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_10 != NULL );
        CHECK_OBJECT( var_arr );
        tmp_source_name_14 = var_arr;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_type );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_args_element_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_14;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_complexfloating );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_13 );

            exception_lineno = 1542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1542;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 1542;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_source_name_16;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_kw_name_5;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1543;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_15;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_multiply );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1543;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arr );
            tmp_tuple_element_5 = var_arr;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_arr );
            tmp_called_instance_2 = var_arr;
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1543;
            tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_name_5 );

                exception_lineno = 1543;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_5 );
            tmp_dict_key_14 = const_str_plain_out;
            CHECK_OBJECT( var_arr );
            tmp_dict_value_14 = var_arr;
            tmp_kw_name_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1543;
            tmp_source_name_16 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_source_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1543;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_real );
            Py_DECREF( tmp_source_name_16 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1543;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_sqr == NULL );
            var_sqr = tmp_assign_source_13;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_6;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1545;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_16;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_multiply );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1545;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arr );
            tmp_tuple_element_6 = var_arr;
            tmp_args_name_6 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_arr );
            tmp_tuple_element_6 = var_arr;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_6 );
            tmp_dict_key_15 = const_str_plain_out;
            CHECK_OBJECT( var_arr );
            tmp_dict_value_15 = var_arr;
            tmp_kw_name_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1545;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_6 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1545;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_sqr == NULL );
            var_sqr = tmp_assign_source_14;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1548;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_17;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_sum );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1548;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_sqr );
        tmp_tuple_element_7 = var_sqr;
        tmp_args_name_7 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_7 );
        tmp_dict_key_16 = const_str_plain_axis;
        CHECK_OBJECT( par_axis );
        tmp_dict_value_16 = par_axis;
        tmp_kw_name_7 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_16, tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_17 = const_str_plain_dtype;
        CHECK_OBJECT( par_dtype );
        tmp_dict_value_17 = par_dtype;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_17, tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_18 = const_str_plain_out;
        CHECK_OBJECT( par_out );
        tmp_dict_value_18 = par_out;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_18, tmp_dict_value_18 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_19 = const_str_plain_keepdims;
        CHECK_OBJECT( par_keepdims );
        tmp_dict_value_19 = par_keepdims;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_19, tmp_dict_value_19 );
        assert( !(tmp_res != 0) );
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1548;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_7, tmp_kw_name_7 );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1548;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_var == NULL );
        var_var = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( var_var );
        tmp_source_name_20 = var_var;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_ndim );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1549;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_cnt );
        tmp_source_name_21 = var_cnt;
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ndim );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 1549;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1549;
            type_description_1 = "ooooooooooooooo";
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_15;
            CHECK_OBJECT( var_cnt );
            tmp_called_instance_3 = var_cnt;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_15 = par_axis;
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1551;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_squeeze, call_args );
            }

            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1551;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_cnt;
                assert( old != NULL );
                var_cnt = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_cnt );
        tmp_left_name_1 = var_cnt;
        CHECK_OBJECT( par_ddof );
        tmp_right_name_1 = par_ddof;
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1552;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dof == NULL );
        var_dof = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__divide_by_count );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__divide_by_count );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_divide_by_count" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1553;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_18;
        CHECK_OBJECT( var_var );
        tmp_args_element_name_16 = var_var;
        CHECK_OBJECT( var_dof );
        tmp_args_element_name_17 = var_dof;
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1553;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1553;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_var;
            assert( old != NULL );
            var_var = tmp_assign_source_18;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_dof );
        tmp_compexpr_left_7 = var_dof;
        tmp_compexpr_right_7 = const_int_0;
        tmp_assign_source_19 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1555;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_isbad == NULL );
        var_isbad = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_18;
        int tmp_truth_name_2;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1556;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_19;
        CHECK_OBJECT( var_isbad );
        tmp_args_element_name_18 = var_isbad;
        frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1556;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1556;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 1556;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_kw_name_8;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1557;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = tmp_mvar_value_20;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_warn );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1557;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_8 = const_str_digest_bbd396d9bb37b13c133fa37fab502bba;
            tmp_args_name_8 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_8 );
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
            }

            if ( tmp_mvar_value_21 == NULL )
            {
                Py_DECREF( tmp_called_name_15 );
                Py_DECREF( tmp_args_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1557;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_8 = tmp_mvar_value_21;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_8 );
            tmp_kw_name_8 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1557;
            tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_name_8 );
            Py_DECREF( tmp_kw_name_8 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1557;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_16;
            PyObject *tmp_mvar_value_22;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_source_name_23;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__copyto );

            if (unlikely( tmp_mvar_value_22 == NULL ))
            {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__copyto );
            }

            if ( tmp_mvar_value_22 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_copyto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1561;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_16 = tmp_mvar_value_22;
            CHECK_OBJECT( var_var );
            tmp_args_element_name_19 = var_var;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1561;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_23 = tmp_mvar_value_23;
            tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_nan );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1561;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_isbad );
            tmp_args_element_name_21 = var_isbad;
            frame_9cfe790bffd190470736a95b95604357->m_frame.f_lineno = 1561;
            {
                PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1561;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_var;
                assert( old != NULL );
                var_var = tmp_assign_source_20;
                Py_DECREF( old );
            }

        }
        branch_no_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cfe790bffd190470736a95b95604357 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cfe790bffd190470736a95b95604357 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cfe790bffd190470736a95b95604357 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9cfe790bffd190470736a95b95604357, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9cfe790bffd190470736a95b95604357->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9cfe790bffd190470736a95b95604357, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cfe790bffd190470736a95b95604357,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_arr,
        var_mask,
        var__keepdims,
        var_cnt,
        var_avg,
        var_sqr,
        var_var,
        var_dof,
        var_isbad
    );


    // Release cached frame.
    if ( frame_9cfe790bffd190470736a95b95604357 == cache_frame_9cfe790bffd190470736a95b95604357 )
    {
        Py_DECREF( frame_9cfe790bffd190470736a95b95604357 );
    }
    cache_frame_9cfe790bffd190470736a95b95604357 = NULL;

    assertFrameObject( frame_9cfe790bffd190470736a95b95604357 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_var );
    tmp_return_value = var_var;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_37_nanvar );
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

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var__keepdims );
    var__keepdims = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_avg );
    var_avg = NULL;

    Py_XDECREF( var_sqr );
    var_sqr = NULL;

    Py_XDECREF( var_var );
    var_var = NULL;

    Py_XDECREF( var_dof );
    var_dof = NULL;

    Py_XDECREF( var_isbad );
    var_isbad = NULL;

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

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var__keepdims );
    var__keepdims = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_avg );
    var_avg = NULL;

    Py_XDECREF( var_sqr );
    var_sqr = NULL;

    Py_XDECREF( var_var );
    var_var = NULL;

    Py_XDECREF( var_dof );
    var_dof = NULL;

    Py_XDECREF( var_isbad );
    var_isbad = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_37_nanvar );
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


static PyObject *impl_numpy$lib$nanfunctions$$$function_38__nanstd_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_out );
        tmp_tuple_element_1 = par_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_38__nanstd_dispatcher );
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

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_38__nanstd_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$nanfunctions$$$function_39_nanstd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_var = NULL;
    PyObject *var_std = NULL;
    struct Nuitka_FrameObject *frame_0d1b253c87af32584a2eed2b3dca944c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0d1b253c87af32584a2eed2b3dca944c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d1b253c87af32584a2eed2b3dca944c, codeobj_0d1b253c87af32584a2eed2b3dca944c, module_numpy$lib$nanfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0d1b253c87af32584a2eed2b3dca944c = cache_frame_0d1b253c87af32584a2eed2b3dca944c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d1b253c87af32584a2eed2b3dca944c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d1b253c87af32584a2eed2b3dca944c ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanvar );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nanvar );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "nanvar" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1665;
            type_description_1 = "oooooooo";
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
        frame_0d1b253c87af32584a2eed2b3dca944c->m_frame.f_lineno = 1665;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1665;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_var == NULL );
        var_var = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( var_var );
        tmp_isinstance_inst_1 = var_var;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1667;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1667;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1667;
            type_description_1 = "oooooooo";
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
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1668;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sqrt );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1668;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_var );
            tmp_tuple_element_2 = var_var;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_6 = const_str_plain_out;
            CHECK_OBJECT( var_var );
            tmp_dict_value_6 = var_var;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_0d1b253c87af32584a2eed2b3dca944c->m_frame.f_lineno = 1668;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1668;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_std == NULL );
            var_std = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_var );
            tmp_source_name_4 = var_var;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1670;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1670;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1670;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_4;
            CHECK_OBJECT( var_var );
            tmp_args_element_name_2 = var_var;
            frame_0d1b253c87af32584a2eed2b3dca944c->m_frame.f_lineno = 1670;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 1670;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_0d1b253c87af32584a2eed2b3dca944c->m_frame.f_lineno = 1670;
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


                exception_lineno = 1670;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_std == NULL );
            var_std = tmp_assign_source_3;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d1b253c87af32584a2eed2b3dca944c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d1b253c87af32584a2eed2b3dca944c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d1b253c87af32584a2eed2b3dca944c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d1b253c87af32584a2eed2b3dca944c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d1b253c87af32584a2eed2b3dca944c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d1b253c87af32584a2eed2b3dca944c,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_var,
        var_std
    );


    // Release cached frame.
    if ( frame_0d1b253c87af32584a2eed2b3dca944c == cache_frame_0d1b253c87af32584a2eed2b3dca944c )
    {
        Py_DECREF( frame_0d1b253c87af32584a2eed2b3dca944c );
    }
    cache_frame_0d1b253c87af32584a2eed2b3dca944c = NULL;

    assertFrameObject( frame_0d1b253c87af32584a2eed2b3dca944c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_std );
    tmp_return_value = var_std;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_39_nanstd );
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

    CHECK_OBJECT( (PyObject *)var_var );
    Py_DECREF( var_var );
    var_var = NULL;

    CHECK_OBJECT( (PyObject *)var_std );
    Py_DECREF( var_std );
    var_std = NULL;

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

    Py_XDECREF( var_var );
    var_var = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$nanfunctions$$$function_39_nanstd );
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



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_10__nanargmin_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_10__nanargmin_dispatcher,
        const_str_plain__nanargmin_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0729eb4cfc136729c4b58cd5d403d5c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_11_nanargmin( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_11_nanargmin,
        const_str_plain_nanargmin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3a0dc336bcee19460e3c3df02b8667d4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_8c323ce07a42d338703395e75d30dca7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_12__nanargmax_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_12__nanargmax_dispatcher,
        const_str_plain__nanargmax_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_40657f50dfd409b59bd0257fc7a0ca14,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_13_nanargmax( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_13_nanargmax,
        const_str_plain_nanargmax,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_afd225dffdbcd0066a73acc1af94e94d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_37509469899fb20033f7873d3e99050d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_14__nansum_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_14__nansum_dispatcher,
        const_str_plain__nansum_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_479c1c2506582ff65e0affcc6bd2ea55,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_15_nansum( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_15_nansum,
        const_str_plain_nansum,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8370874a4b1079886bdd37ec3c7daae7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_27e656ab981b837c9506086cef15b2d4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_16__nanprod_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_16__nanprod_dispatcher,
        const_str_plain__nanprod_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c5a02d8ccee340606e83985568859d1e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_17_nanprod( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_17_nanprod,
        const_str_plain_nanprod,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_70a115f6fa0032f9dac380ffc9de0b35,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_59bcd9bc2371c47d12b9bc63b5a99880,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_18__nancumsum_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_18__nancumsum_dispatcher,
        const_str_plain__nancumsum_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4dc4dbcba85371d1f9e102f3a2ccf29f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_19_nancumsum( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_19_nancumsum,
        const_str_plain_nancumsum,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c673f5aeb314262e1e9f74a502fd232f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_8b84aa44113aaa30537e0b7fc877c3e3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_1__nan_mask( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_1__nan_mask,
        const_str_plain__nan_mask,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6a8c8ab8b5f4b3747a1299a1127d95eb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_b22320b7b2715874062e5dd95f635a14,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_20__nancumprod_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_20__nancumprod_dispatcher,
        const_str_plain__nancumprod_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1a1a9718643e72eb6481cf25556567de,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_21_nancumprod( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_21_nancumprod,
        const_str_plain_nancumprod,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b24ca2bc9ebd074ee5afbe1e90ce3a0e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_5b68640cd4c96061bbb525b4d43785db,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_22__nanmean_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_22__nanmean_dispatcher,
        const_str_plain__nanmean_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_01c0f16ac4c32e6ec0a67f2ad59417d3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_23_nanmean( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_23_nanmean,
        const_str_plain_nanmean,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_609d55599b44f63ce3121ddcdce34bf8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_2f2ef366a39121406f41b77774fcc38b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_24__nanmedian1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_24__nanmedian1d,
        const_str_plain__nanmedian1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_00653194df05fc06a2415c65a27afa34,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_e01b16f8b1b53afc81714a463182bff1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_25__nanmedian( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_25__nanmedian,
        const_str_plain__nanmedian,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_edf6404edcea529c020d76700f395657,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_70aae56bb0e8a850685be457c8902a72,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_26__nanmedian_small( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_26__nanmedian_small,
        const_str_plain__nanmedian_small,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a14694a66ddc1b8f8fecea77da4fef1c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_9800e518a6c97708b7eef1502bb04656,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_27__nanmedian_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_27__nanmedian_dispatcher,
        const_str_plain__nanmedian_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_71dcd03035f6f64e5c0750d4c5789624,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_28_nanmedian( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_28_nanmedian,
        const_str_plain_nanmedian,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4aa7b4d534141eee99f4359aaa1086b9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_aeb83b4db1e919f133b88cc632e778c9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_29__nanpercentile_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_29__nanpercentile_dispatcher,
        const_str_plain__nanpercentile_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_999e7a5e9f693faa45fb54fbe527c8ee,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_2__replace_nan(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_2__replace_nan,
        const_str_plain__replace_nan,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6385991811f73235e8742cb6036910d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_5ed3425d130ccc603b0170248a180c82,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_30_nanpercentile( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_30_nanpercentile,
        const_str_plain_nanpercentile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c751d1ad097317239055ee0fd716d40,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_db33301295480348472775c384964f4e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_31__nanquantile_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_31__nanquantile_dispatcher,
        const_str_plain__nanquantile_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c6e9f74ba00ada67c6674b13f262a8ce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_32_nanquantile( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_32_nanquantile,
        const_str_plain_nanquantile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2362283528d982ba744b2fd929a82498,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_a8ec271b1c4ec5c3a68d055edaf18a03,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_33__nanquantile_unchecked( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_33__nanquantile_unchecked,
        const_str_plain__nanquantile_unchecked,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ff012ca30e1cc46b44c9f31699bbf64e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_8d3dde78ef0a5edc96e74007dfe8e642,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_34__nanquantile_ureduce_func( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_34__nanquantile_ureduce_func,
        const_str_plain__nanquantile_ureduce_func,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f7e0f0d606b91d17aeafaadc6e90c2af,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_2a20b471982a1151f922e03478914a4f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_35__nanquantile_1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_35__nanquantile_1d,
        const_str_plain__nanquantile_1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_70e64a8e201c61a470c9d6adc76887a1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_85e2bffc7ec807d938def4b1eeb4e084,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_36__nanvar_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_36__nanvar_dispatcher,
        const_str_plain__nanvar_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f0d22ace42cb57ac0b8e272749be2ad6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_37_nanvar( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_37_nanvar,
        const_str_plain_nanvar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9cfe790bffd190470736a95b95604357,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_d0858221f735b26b46241a92f5b05f4d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_38__nanstd_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_38__nanstd_dispatcher,
        const_str_plain__nanstd_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_396394e1a9272469f887f22cb96b2df9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_39_nanstd( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_39_nanstd,
        const_str_plain_nanstd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0d1b253c87af32584a2eed2b3dca944c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_e72bbfac9c78eb28dc31bccfb94e361e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_3__copyto(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_3__copyto,
        const_str_plain__copyto,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_724dcf6337c2ffd0feb3878fd115ce08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_f522dbb66a9318e026d85a23545c925d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_4__remove_nan_1d( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_4__remove_nan_1d,
        const_str_plain__remove_nan_1d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2cee2210b8a52882b00bef7dc69a73f6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_77cd7a058ddab9bba7dcbfcbab6e2b83,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_5__divide_by_count( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_5__divide_by_count,
        const_str_plain__divide_by_count,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d7c4f188fed90abd5d6e4f64857fe4c0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_d24ac6bbec8abd2b0cd4812d2a69f224,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_6__nanmin_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_6__nanmin_dispatcher,
        const_str_plain__nanmin_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c0f63cb165b8bb6f094ab5c4f37bf5e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_7_nanmin( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_7_nanmin,
        const_str_plain_nanmin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_26177692774f80ddb06ef340d2e4d856,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_065979c640faf6aafe85807b63835f6a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_8__nanmax_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_8__nanmax_dispatcher,
        const_str_plain__nanmax_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66215fefc6f1e3bb1cfaf2b5588f59b0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_9_nanmax( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$nanfunctions$$$function_9_nanmax,
        const_str_plain_nanmax,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_28d51f286b19042fb78be9f74b990479,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$nanfunctions,
        const_str_digest_41ff8e6f17fe0f0e358372f791e6dc39,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$nanfunctions =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.nanfunctions",
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
MOD_ENTRY_DECL(numpy$lib$nanfunctions)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(numpy$lib$nanfunctions)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$nanfunctions );
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
    puts("numpy.lib.nanfunctions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.nanfunctions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.nanfunctions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$nanfunctions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$nanfunctions = Py_InitModule4(
        "numpy.lib.nanfunctions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$nanfunctions = PyModule_Create( &mdef_numpy$lib$nanfunctions );
#endif

    moduledict_numpy$lib$nanfunctions = MODULE_DICT( module_numpy$lib$nanfunctions );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$lib$nanfunctions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$nanfunctions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$nanfunctions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$nanfunctions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$nanfunctions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_20fa3028eb0fbfbd5707c1ff2db20281, module_numpy$lib$nanfunctions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_8e9ab6ecb61a37989cd28e556d561c90;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_13a6827213f1b15310ecdbf6398d4844;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_f5d86a1dd0bc768b3760b07f81390cab;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_8e9ab6ecb61a37989cd28e556d561c90 = MAKE_MODULE_FRAME( codeobj_8e9ab6ecb61a37989cd28e556d561c90, module_numpy$lib$nanfunctions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8e9ab6ecb61a37989cd28e556d561c90 );
    assert( Py_REFCNT( frame_8e9ab6ecb61a37989cd28e556d561c90 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_f5d86a1dd0bc768b3760b07f81390cab;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 23;
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


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$nanfunctions;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 25;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$nanfunctions;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 26;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$nanfunctions;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 27;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$nanfunctions;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_function_base_tuple;
        tmp_level_name_4 = const_int_0;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 28;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_function_base );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_function_base, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$nanfunctions;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_5 = const_int_0;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 29;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 32;
        tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = LIST_COPY( const_list_e328792b501ba3bfe9ef50afeb6f0d39_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_1__nan_mask( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nan_mask, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_2__replace_nan(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__replace_nan, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_3__copyto(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__copyto, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_4__remove_nan_1d( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__remove_nan_1d, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_5__divide_by_count( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__divide_by_count, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_6__nanmin_dispatcher( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmin_dispatcher, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_called_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmin_dispatcher );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmin_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_args_element_name_1 = tmp_mvar_value_6;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_5 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_5, 1, tmp_tuple_element_2 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_defaults_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__NoValue );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_defaults_5 );

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_5, 2, tmp_tuple_element_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_7_nanmin( tmp_defaults_5 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanmin, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_8__nanmax_dispatcher( tmp_defaults_6 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmax_dispatcher, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_7;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmax_dispatcher );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmax_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_args_element_name_3 = tmp_mvar_value_9;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = Py_None;
        tmp_defaults_7 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_None;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_7, 1, tmp_tuple_element_3 );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_defaults_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_10;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__NoValue );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_defaults_7 );

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_7, 2, tmp_tuple_element_3 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_9_nanmax( tmp_defaults_7 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanmax, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_10__nanargmin_dispatcher( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanargmin_dispatcher, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_defaults_9;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 459;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanargmin_dispatcher );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanargmin_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_args_element_name_5 = tmp_mvar_value_12;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_defaults_9 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_9 );
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_11_nanargmin( tmp_defaults_9 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanargmin, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_10 );
        tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_12__nanargmax_dispatcher( tmp_defaults_10 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanargmax_dispatcher, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_defaults_11;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 508;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanargmax_dispatcher );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanargmax_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_args_element_name_7 = tmp_mvar_value_14;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 508;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        tmp_defaults_11 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_13_nanargmax( tmp_defaults_11 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 508;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanargmax, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_12;
        tmp_defaults_12 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_12 );
        tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_14__nansum_dispatcher( tmp_defaults_12 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nansum_dispatcher, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_defaults_13;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 558;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nansum_dispatcher );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nansum_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_16 );
        tmp_args_element_name_9 = tmp_mvar_value_16;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 558;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = Py_None;
        tmp_defaults_13 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_13, 0, tmp_tuple_element_4 );
        tmp_tuple_element_4 = Py_None;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_13, 1, tmp_tuple_element_4 );
        tmp_tuple_element_4 = Py_None;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_defaults_13, 2, tmp_tuple_element_4 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_defaults_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 559;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_17;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__NoValue );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_defaults_13 );

            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_13, 3, tmp_tuple_element_4 );
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_15_nansum( tmp_defaults_13 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 558;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nansum, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_14;
        tmp_defaults_14 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_14 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_16__nanprod_dispatcher( tmp_defaults_14 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanprod_dispatcher, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_15;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 656;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanprod_dispatcher );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanprod_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_19 );
        tmp_args_element_name_11 = tmp_mvar_value_19;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 656;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = Py_None;
        tmp_defaults_15 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_15, 0, tmp_tuple_element_5 );
        tmp_tuple_element_5 = Py_None;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_15, 1, tmp_tuple_element_5 );
        tmp_tuple_element_5 = Py_None;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_defaults_15, 2, tmp_tuple_element_5 );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_defaults_15 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 657;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_20;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__NoValue );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_defaults_15 );

            exception_lineno = 657;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_15, 3, tmp_tuple_element_5 );
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_17_nanprod( tmp_defaults_15 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 656;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanprod, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_16;
        tmp_defaults_16 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_16 );
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_18__nancumsum_dispatcher( tmp_defaults_16 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nancumsum_dispatcher, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_defaults_17;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 726;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_21;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nancumsum_dispatcher );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nancumsum_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_22 );
        tmp_args_element_name_13 = tmp_mvar_value_22;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 726;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 726;

            goto frame_exception_exit_1;
        }
        tmp_defaults_17 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_17 );
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_19_nancumsum( tmp_defaults_17 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 726;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 726;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nancumsum, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_18;
        tmp_defaults_18 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_18 );
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_20__nancumprod_dispatcher( tmp_defaults_18 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nancumprod_dispatcher, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_defaults_19;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 796;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_23;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nancumprod_dispatcher );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nancumprod_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_24 );
        tmp_args_element_name_15 = tmp_mvar_value_24;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 796;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 796;

            goto frame_exception_exit_1;
        }
        tmp_defaults_19 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_19 );
        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_21_nancumprod( tmp_defaults_19 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 796;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 796;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nancumprod, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_20;
        tmp_defaults_20 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_20 );
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_22__nanmean_dispatcher( tmp_defaults_20 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmean_dispatcher, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_defaults_21;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 863;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_25;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmean_dispatcher );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmean_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_26 );
        tmp_args_element_name_17 = tmp_mvar_value_26;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 863;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 863;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = Py_None;
        tmp_defaults_21 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_defaults_21, 0, tmp_tuple_element_6 );
        tmp_tuple_element_6 = Py_None;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_defaults_21, 1, tmp_tuple_element_6 );
        tmp_tuple_element_6 = Py_None;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_defaults_21, 2, tmp_tuple_element_6 );
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_27 == NULL )
        {
            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_defaults_21 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 864;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_27;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__NoValue );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_18 );
            Py_DECREF( tmp_defaults_21 );

            exception_lineno = 864;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_21, 3, tmp_tuple_element_6 );
        tmp_args_element_name_18 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_23_nanmean( tmp_defaults_21 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 863;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 863;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanmean, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_22;
        tmp_defaults_22 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_22 );
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_24__nanmedian1d( tmp_defaults_22 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian1d, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_23;
        tmp_defaults_23 = const_tuple_none_none_false_tuple;
        Py_INCREF( tmp_defaults_23 );
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_25__nanmedian( tmp_defaults_23 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_24;
        tmp_defaults_24 = const_tuple_none_none_false_tuple;
        Py_INCREF( tmp_defaults_24 );
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_26__nanmedian_small( tmp_defaults_24 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian_small, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_25;
        tmp_defaults_25 = const_tuple_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_25 );
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_27__nanmedian_dispatcher( tmp_defaults_25 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian_dispatcher, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_defaults_26;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1023;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_28;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanmedian_dispatcher );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanmedian_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_29 );
        tmp_args_element_name_19 = tmp_mvar_value_29;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1023;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_called_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1023;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = Py_None;
        tmp_defaults_26 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_defaults_26, 0, tmp_tuple_element_7 );
        tmp_tuple_element_7 = Py_None;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_defaults_26, 1, tmp_tuple_element_7 );
        tmp_tuple_element_7 = Py_False;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_defaults_26, 2, tmp_tuple_element_7 );
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_30 == NULL )
        {
            Py_DECREF( tmp_called_name_20 );
            Py_DECREF( tmp_defaults_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_30;
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__NoValue );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_20 );
            Py_DECREF( tmp_defaults_26 );

            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_26, 3, tmp_tuple_element_7 );
        tmp_args_element_name_20 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_28_nanmedian( tmp_defaults_26 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1023;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1023;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanmedian, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_27;
        tmp_defaults_27 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_27 );
        tmp_assign_source_43 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_29__nanpercentile_dispatcher( tmp_defaults_27 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanpercentile_dispatcher, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_defaults_28;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_33;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1127;

            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_31;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanpercentile_dispatcher );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanpercentile_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_32 );
        tmp_args_element_name_21 = tmp_mvar_value_32;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1127;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1127;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = Py_None;
        tmp_defaults_28 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_defaults_28, 0, tmp_tuple_element_8 );
        tmp_tuple_element_8 = Py_None;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_defaults_28, 1, tmp_tuple_element_8 );
        tmp_tuple_element_8 = Py_False;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_defaults_28, 2, tmp_tuple_element_8 );
        tmp_tuple_element_8 = const_str_plain_linear;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_defaults_28, 3, tmp_tuple_element_8 );
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_33 == NULL )
        {
            Py_DECREF( tmp_called_name_22 );
            Py_DECREF( tmp_defaults_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1129;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_33;
        tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__NoValue );
        if ( tmp_tuple_element_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_22 );
            Py_DECREF( tmp_defaults_28 );

            exception_lineno = 1129;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_28, 4, tmp_tuple_element_8 );
        tmp_args_element_name_22 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_30_nanpercentile( tmp_defaults_28 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1127;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanpercentile, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_29;
        tmp_defaults_29 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_29 );
        tmp_assign_source_45 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_31__nanquantile_dispatcher( tmp_defaults_29 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_dispatcher, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_defaults_30;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1253;

            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_34;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_dispatcher );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanquantile_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_35 );
        tmp_args_element_name_23 = tmp_mvar_value_35;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1253;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_called_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1253;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = Py_None;
        tmp_defaults_30 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_30, 0, tmp_tuple_element_9 );
        tmp_tuple_element_9 = Py_None;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_30, 1, tmp_tuple_element_9 );
        tmp_tuple_element_9 = Py_False;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_30, 2, tmp_tuple_element_9 );
        tmp_tuple_element_9 = const_str_plain_linear;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_defaults_30, 3, tmp_tuple_element_9 );
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_36 == NULL )
        {
            Py_DECREF( tmp_called_name_24 );
            Py_DECREF( tmp_defaults_30 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1255;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_36;
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__NoValue );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_24 );
            Py_DECREF( tmp_defaults_30 );

            exception_lineno = 1255;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_30, 4, tmp_tuple_element_9 );
        tmp_args_element_name_24 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_32_nanquantile( tmp_defaults_30 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1253;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1253;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanquantile, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_31;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_37;
        tmp_tuple_element_10 = Py_None;
        tmp_defaults_31 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_defaults_31, 0, tmp_tuple_element_10 );
        tmp_tuple_element_10 = Py_None;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_defaults_31, 1, tmp_tuple_element_10 );
        tmp_tuple_element_10 = Py_False;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_defaults_31, 2, tmp_tuple_element_10 );
        tmp_tuple_element_10 = const_str_plain_linear;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_defaults_31, 3, tmp_tuple_element_10 );
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_37 == NULL )
        {
            Py_DECREF( tmp_defaults_31 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1362;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_37;
        tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__NoValue );
        if ( tmp_tuple_element_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_31 );

            exception_lineno = 1362;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_31, 4, tmp_tuple_element_10 );
        tmp_assign_source_47 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_33__nanquantile_unchecked( tmp_defaults_31 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_unchecked, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_defaults_32;
        tmp_defaults_32 = const_tuple_none_none_false_str_plain_linear_tuple;
        Py_INCREF( tmp_defaults_32 );
        tmp_assign_source_48 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_34__nanquantile_ureduce_func( tmp_defaults_32 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_ureduce_func, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_defaults_33;
        tmp_defaults_33 = const_tuple_false_str_plain_linear_tuple;
        Py_INCREF( tmp_defaults_33 );
        tmp_assign_source_49 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_35__nanquantile_1d( tmp_defaults_33 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanquantile_1d, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_defaults_34;
        tmp_defaults_34 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_34 );
        tmp_assign_source_50 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_36__nanvar_dispatcher( tmp_defaults_34 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanvar_dispatcher, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_defaults_35;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_40;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_38;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanvar_dispatcher );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanvar_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_39 );
        tmp_args_element_name_25 = tmp_mvar_value_39;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1422;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = Py_None;
        tmp_defaults_35 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_35, 0, tmp_tuple_element_11 );
        tmp_tuple_element_11 = Py_None;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_35, 1, tmp_tuple_element_11 );
        tmp_tuple_element_11 = Py_None;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_35, 2, tmp_tuple_element_11 );
        tmp_tuple_element_11 = const_int_0;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_defaults_35, 3, tmp_tuple_element_11 );
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_40 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_defaults_35 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1423;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_40;
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__NoValue );
        if ( tmp_tuple_element_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_defaults_35 );

            exception_lineno = 1423;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_35, 4, tmp_tuple_element_11 );
        tmp_args_element_name_26 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_37_nanvar( tmp_defaults_35 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1422;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1422;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanvar, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_defaults_36;
        tmp_defaults_36 = const_tuple_none_none_none_none_none_tuple;
        Py_INCREF( tmp_defaults_36 );
        tmp_assign_source_52 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_38__nanstd_dispatcher( tmp_defaults_36 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanstd_dispatcher, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_defaults_37;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_43;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1570;

            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_41;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain__nanstd_dispatcher );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nanstd_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_42 );
        tmp_args_element_name_27 = tmp_mvar_value_42;
        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1570;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_called_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
        }

        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1570;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = Py_None;
        tmp_defaults_37 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_defaults_37, 0, tmp_tuple_element_12 );
        tmp_tuple_element_12 = Py_None;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_defaults_37, 1, tmp_tuple_element_12 );
        tmp_tuple_element_12 = Py_None;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_defaults_37, 2, tmp_tuple_element_12 );
        tmp_tuple_element_12 = const_int_0;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_defaults_37, 3, tmp_tuple_element_12 );
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_43 == NULL )
        {
            Py_DECREF( tmp_called_name_28 );
            Py_DECREF( tmp_defaults_37 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_43;
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__NoValue );
        if ( tmp_tuple_element_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_28 );
            Py_DECREF( tmp_defaults_37 );

            exception_lineno = 1571;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_37, 4, tmp_tuple_element_12 );
        tmp_args_element_name_28 = MAKE_FUNCTION_numpy$lib$nanfunctions$$$function_39_nanstd( tmp_defaults_37 );



        frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame.f_lineno = 1570;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1570;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$nanfunctions, (Nuitka_StringObject *)const_str_plain_nanstd, tmp_assign_source_53 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e9ab6ecb61a37989cd28e556d561c90 );
#endif
    popFrameStack();

    assertFrameObject( frame_8e9ab6ecb61a37989cd28e556d561c90 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e9ab6ecb61a37989cd28e556d561c90 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e9ab6ecb61a37989cd28e556d561c90, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e9ab6ecb61a37989cd28e556d561c90->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e9ab6ecb61a37989cd28e556d561c90, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$lib$nanfunctions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
