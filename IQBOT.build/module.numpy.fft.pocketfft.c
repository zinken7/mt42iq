/* Generated code for Python module 'numpy.fft.pocketfft'
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

/* The "_module_numpy$fft$pocketfft" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$pocketfft;
PyDictObject *moduledict_numpy$fft$pocketfft;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_index;
static PyObject *const_str_plain_unitary;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_pfi;
static PyObject *const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
static PyObject *const_str_plain_irfft;
static PyObject *const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_conjugate;
static PyObject *const_tuple_str_plain_pocketfft_internal_tuple;
extern PyObject *const_str_plain_max;
static PyObject *const_str_plain_irfft2;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_fft2;
static PyObject *const_str_plain_ihfft;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_inv_norm;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_str_digest_2e6fb411811df75b5f2043110852feba;
static PyObject *const_str_digest_ad30867cb50db197c788d8d9559403d4;
static PyObject *const_str_plain__fft_dispatcher;
static PyObject *const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_none_int_neg_1_none_tuple;
static PyObject *const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
extern PyObject *const_str_plain_fct;
extern PyObject *const_tuple_int_neg_2_int_neg_1_tuple;
static PyObject *const_str_plain__unitary;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_overrides_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_list_60f473887d8c78e2f768e087222cf620_list;
extern PyObject *const_str_plain_reverse;
static PyObject *const_str_plain_hfft;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_digest_b53f3811d9d65c912707e9b896ba9934;
extern PyObject *const_str_plain_s;
static PyObject *const_str_digest_9494539ffb8411756149e487b446694f;
static PyObject *const_str_plain_shapeless;
static PyObject *const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_int_neg_2;
static PyObject *const_tuple_none_none_int_0_tuple;
static PyObject *const_str_plain_ortho;
static PyObject *const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple;
extern PyObject *const_str_plain_normalize_axis_index;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__cook_nd_args;
static PyObject *const_str_digest_a7370d465522668cf408da24bf87bae8;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_67a439b64216fd79a420034aec6214a2;
extern PyObject *const_dict_c0d9920cdb2d132dd609908b9aa6b9e2;
static PyObject *const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_itl;
static PyObject *const_str_digest_dc52a9a74aa4ff1377be91ff132e602d;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
extern PyObject *const_str_plain_execute;
static PyObject *const_str_digest_b30ab4f0cf971b8781217b9cbe239761;
static PyObject *const_str_digest_13bc5b5254b7204a2573e3d7bbd1a0c7;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_ifft2;
static PyObject *const_str_plain__raw_fft;
static PyObject *const_str_plain_is_real;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_4b356e2504275e6efb56ef14c5d648a6;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_fftn;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
static PyObject *const_str_plain_rfft;
static PyObject *const_str_plain__raw_fftnd;
static PyObject *const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple;
static PyObject *const_str_digest_b3ffc6c71fed7a60fb1aa8d44a22494a;
static PyObject *const_str_plain_rfftn;
static PyObject *const_str_digest_0690581905707e5372848107d89737db;
static PyObject *const_str_plain_irfftn;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_fc36638fe159a5b2fed835b739242617_tuple;
static PyObject *const_str_plain_ii;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_4fde285245e0480bfbee40bbbdd9595f;
static PyObject *const_str_plain_pocketfft_internal;
static PyObject *const_str_plain__fftn_dispatcher;
extern PyObject *const_list_slice_none_none_none_list;
static PyObject *const_str_digest_242e8c397d863f4678e3108a3c04f924;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_44b8cdb2e967d1386bac73e4fcbc532f;
static PyObject *const_str_digest_2ebd01a7795c29958aaada191f1fd76a;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_ab460e111c7690eebacb4cfd09eff01e;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_digest_b1467532df9510b94903b310d05850d1;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_z;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_dict_dd45c77b755c75255009fd804f504c08;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_plain_invreal;
extern PyObject *const_str_plain_axis;
extern PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
static PyObject *const_str_digest_cc5f47a9641920f596e5e9c7aa0e47e9;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_function;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_axes;
static PyObject *const_tuple_str_plain_norm_tuple;
static PyObject *const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_228dbbac8ee90f62048cd171a21defd6;
static PyObject *const_str_digest_07f33a01b29f69eaa8c79d0d21cec2b0;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_ifft;
extern PyObject *const_str_plain_ifftn;
static PyObject *const_str_plain_rfft2;
extern PyObject *const_str_empty;
static PyObject *const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple;
static PyObject *const_str_plain_is_forward;
extern PyObject *const_str_plain_fft;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_unitary = UNSTREAM_STRING_ASCII( &constant_bin[ 1353370 ], 7, 1 );
    const_str_plain_pfi = UNSTREAM_STRING_ASCII( &constant_bin[ 795144 ], 3, 1 );
    const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 1, const_tuple_int_neg_2_int_neg_1_tuple ); Py_INCREF( const_tuple_int_neg_2_int_neg_1_tuple );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_plain_irfft = UNSTREAM_STRING_ASCII( &constant_bin[ 1344142 ], 5, 1 );
    const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_tuple_str_plain_pocketfft_internal_tuple = PyTuple_New( 1 );
    const_str_plain_pocketfft_internal = UNSTREAM_STRING_ASCII( &constant_bin[ 1355736 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pocketfft_internal_tuple, 0, const_str_plain_pocketfft_internal ); Py_INCREF( const_str_plain_pocketfft_internal );
    const_str_plain_irfft2 = UNSTREAM_STRING_ASCII( &constant_bin[ 1349402 ], 6, 1 );
    const_str_plain_ihfft = UNSTREAM_STRING_ASCII( &constant_bin[ 1349731 ], 5, 1 );
    const_str_plain_inv_norm = UNSTREAM_STRING_ASCII( &constant_bin[ 1355754 ], 8, 1 );
    const_str_digest_2e6fb411811df75b5f2043110852feba = UNSTREAM_STRING_ASCII( &constant_bin[ 1355762 ], 4034, 0 );
    const_str_digest_ad30867cb50db197c788d8d9559403d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 1359796 ], 38, 0 );
    const_str_plain__fft_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1359834 ], 15, 1 );
    const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_plain_is_real = UNSTREAM_STRING_ASCII( &constant_bin[ 1359849 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 3, const_str_plain_is_real ); Py_INCREF( const_str_plain_is_real );
    const_str_plain_is_forward = UNSTREAM_STRING_ASCII( &constant_bin[ 1359856 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 4, const_str_plain_is_forward ); Py_INCREF( const_str_plain_is_forward );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 5, const_str_plain_inv_norm ); Py_INCREF( const_str_plain_inv_norm );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 6, const_str_plain_fct ); Py_INCREF( const_str_plain_fct );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 7, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 8, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 9, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 10, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_tuple_none_int_neg_1_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_4668369e132281bb3e0ee274b05ac5ba = UNSTREAM_STRING_ASCII( &constant_bin[ 1359866 ], 49, 0 );
    const_str_plain__unitary = UNSTREAM_STRING_ASCII( &constant_bin[ 1359915 ], 8, 1 );
    const_list_60f473887d8c78e2f768e087222cf620_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    const_str_plain_rfft = UNSTREAM_STRING_ASCII( &constant_bin[ 1344136 ], 4, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 2, const_str_plain_rfft ); Py_INCREF( const_str_plain_rfft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 3, const_str_plain_irfft ); Py_INCREF( const_str_plain_irfft );
    const_str_plain_hfft = UNSTREAM_STRING_ASCII( &constant_bin[ 1349680 ], 4, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 4, const_str_plain_hfft ); Py_INCREF( const_str_plain_hfft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 5, const_str_plain_ihfft ); Py_INCREF( const_str_plain_ihfft );
    const_str_plain_rfftn = UNSTREAM_STRING_ASCII( &constant_bin[ 1349474 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 6, const_str_plain_rfftn ); Py_INCREF( const_str_plain_rfftn );
    const_str_plain_irfftn = UNSTREAM_STRING_ASCII( &constant_bin[ 1349536 ], 6, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 7, const_str_plain_irfftn ); Py_INCREF( const_str_plain_irfftn );
    const_str_plain_rfft2 = UNSTREAM_STRING_ASCII( &constant_bin[ 1349338 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 8, const_str_plain_rfft2 ); Py_INCREF( const_str_plain_rfft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 9, const_str_plain_irfft2 ); Py_INCREF( const_str_plain_irfft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 10, const_str_plain_fft2 ); Py_INCREF( const_str_plain_fft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 11, const_str_plain_ifft2 ); Py_INCREF( const_str_plain_ifft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 12, const_str_plain_fftn ); Py_INCREF( const_str_plain_fftn );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 13, const_str_plain_ifftn ); Py_INCREF( const_str_plain_ifftn );
    const_str_digest_9494539ffb8411756149e487b446694f = UNSTREAM_STRING_ASCII( &constant_bin[ 1359923 ], 1794, 0 );
    const_str_plain_shapeless = UNSTREAM_STRING_ASCII( &constant_bin[ 1361717 ], 9, 1 );
    const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 4, const_str_plain_inv_norm ); Py_INCREF( const_str_plain_inv_norm );
    PyTuple_SET_ITEM( const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_tuple_none_none_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_ortho = UNSTREAM_STRING_ASCII( &constant_bin[ 1353436 ], 5, 1 );
    const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_str_plain__cook_nd_args = UNSTREAM_STRING_ASCII( &constant_bin[ 1361726 ], 13, 1 );
    const_str_digest_a7370d465522668cf408da24bf87bae8 = UNSTREAM_STRING_ASCII( &constant_bin[ 1361739 ], 3826, 0 );
    const_str_digest_67a439b64216fd79a420034aec6214a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 1365565 ], 741, 0 );
    const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_plain_itl = UNSTREAM_STRING_ASCII( &constant_bin[ 5317 ], 3, 1 );
    const_str_digest_dc52a9a74aa4ff1377be91ff132e602d = UNSTREAM_STRING_ASCII( &constant_bin[ 1366306 ], 3097, 0 );
    const_str_digest_b30ab4f0cf971b8781217b9cbe239761 = UNSTREAM_STRING_ASCII( &constant_bin[ 1369403 ], 28, 0 );
    const_str_digest_13bc5b5254b7204a2573e3d7bbd1a0c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 1369431 ], 3643, 0 );
    const_str_plain__raw_fft = UNSTREAM_STRING_ASCII( &constant_bin[ 1373074 ], 8, 1 );
    const_str_digest_4b356e2504275e6efb56ef14c5d648a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 1369411 ], 19, 0 );
    const_str_plain__raw_fftnd = UNSTREAM_STRING_ASCII( &constant_bin[ 1373082 ], 10, 1 );
    const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_plain_ii = UNSTREAM_STRING_ASCII( &constant_bin[ 103869 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_str_digest_b3ffc6c71fed7a60fb1aa8d44a22494a = UNSTREAM_STRING_ASCII( &constant_bin[ 1373092 ], 3454, 0 );
    const_str_digest_0690581905707e5372848107d89737db = UNSTREAM_STRING_ASCII( &constant_bin[ 1376546 ], 3501, 0 );
    const_tuple_fc36638fe159a5b2fed835b739242617_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 1, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 2, const_str_plain_swapaxes ); Py_INCREF( const_str_plain_swapaxes );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 3, const_str_plain_conjugate ); Py_INCREF( const_str_plain_conjugate );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 4, const_str_plain_take ); Py_INCREF( const_str_plain_take );
    PyTuple_SET_ITEM( const_tuple_fc36638fe159a5b2fed835b739242617_tuple, 5, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    const_str_digest_4fde285245e0480bfbee40bbbdd9595f = UNSTREAM_STRING_ASCII( &constant_bin[ 1380047 ], 3141, 0 );
    const_str_plain__fftn_dispatcher = UNSTREAM_STRING_ASCII( &constant_bin[ 1383188 ], 16, 1 );
    const_str_digest_242e8c397d863f4678e3108a3c04f924 = UNSTREAM_STRING_ASCII( &constant_bin[ 1383204 ], 49, 0 );
    const_str_digest_44b8cdb2e967d1386bac73e4fcbc532f = UNSTREAM_STRING_ASCII( &constant_bin[ 1383253 ], 793, 0 );
    const_str_digest_2ebd01a7795c29958aaada191f1fd76a = UNSTREAM_STRING_ASCII( &constant_bin[ 1384046 ], 3765, 0 );
    const_str_digest_ab460e111c7690eebacb4cfd09eff01e = UNSTREAM_STRING_ASCII( &constant_bin[ 1387811 ], 655, 0 );
    const_str_digest_b1467532df9510b94903b310d05850d1 = UNSTREAM_STRING_ASCII( &constant_bin[ 1388466 ], 3188, 0 );
    const_dict_dd45c77b755c75255009fd804f504c08 = _PyDict_NewPresized( 1 );
    const_str_plain_invreal = UNSTREAM_STRING_ASCII( &constant_bin[ 1391654 ], 7, 1 );
    PyDict_SetItem( const_dict_dd45c77b755c75255009fd804f504c08, const_str_plain_invreal, const_int_pos_1 );
    assert( PyDict_Size( const_dict_dd45c77b755c75255009fd804f504c08 ) == 1 );
    const_str_digest_cc5f47a9641920f596e5e9c7aa0e47e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 1391661 ], 50, 0 );
    const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 3, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 4, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, const_str_plain_itl ); Py_INCREF( const_str_plain_itl );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 6, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_tuple_str_plain_norm_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_norm_tuple, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 3, const_str_plain_invreal ); Py_INCREF( const_str_plain_invreal );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, const_str_plain_shapeless ); Py_INCREF( const_str_plain_shapeless );
    const_str_digest_228dbbac8ee90f62048cd171a21defd6 = UNSTREAM_STRING_ASCII( &constant_bin[ 1391711 ], 3001, 0 );
    const_str_digest_07f33a01b29f69eaa8c79d0d21cec2b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 1394712 ], 3014, 0 );
    const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft$pocketfft( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_82ba390fad221dc947e44470f88a74da;
static PyCodeObject *codeobj_416b9d60eb9f0053e20694ca34b5c6b1;
static PyCodeObject *codeobj_ba6c535636deebf05c3cbf15b3f03ec7;
static PyCodeObject *codeobj_cbc1b1eb370cf4f2a52ecd39692c4372;
static PyCodeObject *codeobj_896667a43267e35b2fd279afc1ac2c46;
static PyCodeObject *codeobj_4a5dbdbbe57a7ee21ac80fed1709e8f2;
static PyCodeObject *codeobj_2186a3e88a6fce6df4425b09035789c8;
static PyCodeObject *codeobj_f13f304c071d782bfda081e16c88f43a;
static PyCodeObject *codeobj_0a5baaaea218407bdf9c8ff4b69e66e1;
static PyCodeObject *codeobj_ce16e47b852b4393ad8a490dddc7f7b2;
static PyCodeObject *codeobj_e662b1705748a5f201859c405d51a542;
static PyCodeObject *codeobj_2bc5375913155e40820c357492cb0d7b;
static PyCodeObject *codeobj_e0dec268d9cec13a6f006f01cd9c6b0d;
static PyCodeObject *codeobj_db19d6aeba1d1e3fa4b2329acad7219a;
static PyCodeObject *codeobj_8c5e775b9ee08659d20b9f4a5679602a;
static PyCodeObject *codeobj_be371ee2761729e3641d15e62ecf2231;
static PyCodeObject *codeobj_9191b022ba1861956602fb4b24aadbc0;
static PyCodeObject *codeobj_99805872a0cf63d9d5a9663488d530a5;
static PyCodeObject *codeobj_e100cc0a671d30e437bf831854125e71;
static PyCodeObject *codeobj_9bc836d078423891714dd85e2918b0ba;
static PyCodeObject *codeobj_9308fee141970baed8ea701bfc63ec56;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cc5f47a9641920f596e5e9c7aa0e47e9;
    codeobj_82ba390fad221dc947e44470f88a74da = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b30ab4f0cf971b8781217b9cbe239761, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_416b9d60eb9f0053e20694ca34b5c6b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__cook_nd_args, 630, const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba6c535636deebf05c3cbf15b3f03ec7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fft_dispatcher, 94, const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cbc1b1eb370cf4f2a52ecd39692c4372 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fftn_dispatcher, 659, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_896667a43267e35b2fd279afc1ac2c46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fft, 51, const_tuple_5724d2553cdf77e27cbde82140b69fb0_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a5dbdbbe57a7ee21ac80fed1709e8f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fftnd, 649, const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2186a3e88a6fce6df4425b09035789c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unitary, 85, const_tuple_str_plain_norm_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f13f304c071d782bfda081e16c88f43a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft, 98, const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0a5baaaea218407bdf9c8ff4b69e66e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft2, 859, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce16e47b852b4393ad8a490dddc7f7b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftn, 663, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e662b1705748a5f201859c405d51a542 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hfft, 478, const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2bc5375913155e40820c357492cb0d7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft, 192, const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e0dec268d9cec13a6f006f01cd9c6b0d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft2, 950, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_db19d6aeba1d1e3fa4b2329acad7219a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifftn, 761, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8c5e775b9ee08659d20b9f4a5679602a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ihfft, 569, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be371ee2761729e3641d15e62ecf2231 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft, 378, const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9191b022ba1861956602fb4b24aadbc0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft2, 1272, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_99805872a0cf63d9d5a9663488d530a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfftn, 1168, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e100cc0a671d30e437bf831854125e71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft, 289, const_tuple_36949bc03c86e25080822ed74a63e2bf_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9bc836d078423891714dd85e2918b0ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft2, 1130, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9308fee141970baed8ea701bfc63ec56 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfftn, 1038, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_10__cook_nd_args( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_11__raw_fftnd( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_13_fftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_14_ifftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_15_fft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_16_ifft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_17_rfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_18_rfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_19_irfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_1__raw_fft(  );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_20_irfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_2__unitary(  );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_3__fft_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_4_fft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_5_ifft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_6_rfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_7_irfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_8_hfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_9_ihfft( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$fft$pocketfft$$$function_1__raw_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_is_real = python_pars[ 3 ];
    PyObject *par_is_forward = python_pars[ 4 ];
    PyObject *par_inv_norm = python_pars[ 5 ];
    PyObject *var_fct = NULL;
    PyObject *var_s = NULL;
    PyObject *var_index = NULL;
    PyObject *var_z = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_896667a43267e35b2fd279afc1ac2c46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_896667a43267e35b2fd279afc1ac2c46 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_896667a43267e35b2fd279afc1ac2c46, codeobj_896667a43267e35b2fd279afc1ac2c46, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_896667a43267e35b2fd279afc1ac2c46 = cache_frame_896667a43267e35b2fd279afc1ac2c46;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_896667a43267e35b2fd279afc1ac2c46 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_896667a43267e35b2fd279afc1ac2c46 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_axis_index" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_1 = par_axis;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_896667a43267e35b2fd279afc1ac2c46->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert( old != NULL );
            par_axis = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
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


                exception_lineno = 54;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_2 = par_n;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_242e8c397d863f4678e3108a3c04f924;
            CHECK_OBJECT( par_n );
            tmp_right_name_1 = par_n;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_896667a43267e35b2fd279afc1ac2c46->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 57;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( par_inv_norm );
        tmp_right_name_2 = par_inv_norm;
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fct == NULL );
        var_fct = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_2 = par_axis;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_compexpr_right_3 = par_n;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_a );
            tmp_source_name_4 = par_a;
            tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_s == NULL );
            var_s = tmp_assign_source_4;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_s );
            tmp_subscribed_name_3 = var_s;
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_3 = par_axis;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_n );
            tmp_compexpr_right_4 = par_n;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_len_arg_1;
                tmp_left_name_3 = LIST_COPY( const_list_slice_none_none_none_list );
                CHECK_OBJECT( var_s );
                tmp_len_arg_1 = var_s;
                tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
                assert( !(tmp_right_name_3 == NULL) );
                tmp_assign_source_5 = BINARY_OPERATION_MUL_LIST_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_3 );
                assert( !(tmp_assign_source_5 == NULL) );
                assert( var_index == NULL );
                var_index = tmp_assign_source_5;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                tmp_start_name_1 = const_int_0;
                CHECK_OBJECT( par_n );
                tmp_stop_name_1 = par_n;
                tmp_step_name_1 = Py_None;
                tmp_ass_subvalue_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                assert( !(tmp_ass_subvalue_1 == NULL) );
                CHECK_OBJECT( var_index );
                tmp_ass_subscribed_1 = var_index;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_1 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_tuple_arg_1;
                CHECK_OBJECT( par_a );
                tmp_subscribed_name_4 = par_a;
                CHECK_OBJECT( var_index );
                tmp_tuple_arg_1 = var_index;
                tmp_subscript_name_4 = PySequence_Tuple( tmp_tuple_arg_1 );
                if ( tmp_subscript_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 67;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 67;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_a;
                    assert( old != NULL );
                    par_a = tmp_assign_source_6;
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_len_arg_2;
                tmp_left_name_4 = LIST_COPY( const_list_slice_none_none_none_list );
                CHECK_OBJECT( var_s );
                tmp_len_arg_2 = var_s;
                tmp_right_name_4 = BUILTIN_LEN( tmp_len_arg_2 );
                assert( !(tmp_right_name_4 == NULL) );
                tmp_assign_source_7 = BINARY_OPERATION_MUL_LIST_LONG( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_right_name_4 );
                assert( !(tmp_assign_source_7 == NULL) );
                assert( var_index == NULL );
                var_index = tmp_assign_source_7;
            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_step_name_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                tmp_start_name_2 = const_int_0;
                CHECK_OBJECT( var_s );
                tmp_subscribed_name_5 = var_s;
                CHECK_OBJECT( par_axis );
                tmp_subscript_name_5 = par_axis;
                tmp_stop_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_stop_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_2 = Py_None;
                tmp_ass_subvalue_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_stop_name_2 );
                assert( !(tmp_ass_subvalue_2 == NULL) );
                CHECK_OBJECT( var_index );
                tmp_ass_subscribed_2 = var_index;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_2 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( par_n );
                tmp_ass_subvalue_3 = par_n;
                CHECK_OBJECT( var_s );
                tmp_ass_subscribed_3 = var_s;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_3 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_source_name_6;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 72;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                CHECK_OBJECT( var_s );
                tmp_args_element_name_3 = var_s;
                CHECK_OBJECT( par_a );
                tmp_source_name_6 = par_a;
                tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
                if ( tmp_source_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_char );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_896667a43267e35b2fd279afc1ac2c46->m_frame.f_lineno = 72;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_z == NULL );
                var_z = tmp_assign_source_8;
            }
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                PyObject *tmp_tuple_arg_2;
                CHECK_OBJECT( par_a );
                tmp_ass_subvalue_4 = par_a;
                CHECK_OBJECT( var_z );
                tmp_ass_subscribed_4 = var_z;
                CHECK_OBJECT( var_index );
                tmp_tuple_arg_2 = var_index;
                tmp_ass_subscript_4 = PySequence_Tuple( tmp_tuple_arg_2 );
                if ( tmp_ass_subscript_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 73;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subscript_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 73;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( var_z );
                tmp_assign_source_9 = var_z;
                {
                    PyObject *old = par_a;
                    assert( old != NULL );
                    par_a = tmp_assign_source_9;
                    Py_INCREF( par_a );
                    Py_DECREF( old );
                }

            }
            branch_end_4:;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_5 = par_axis;
        if ( par_a == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = par_a;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_compexpr_right_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_pfi );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pfi );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pfi" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 77;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_execute );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_a == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 77;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = par_a;
            CHECK_OBJECT( par_is_real );
            tmp_args_element_name_6 = par_is_real;
            CHECK_OBJECT( par_is_forward );
            tmp_args_element_name_7 = par_is_forward;
            CHECK_OBJECT( var_fct );
            tmp_args_element_name_8 = var_fct;
            frame_896667a43267e35b2fd279afc1ac2c46->m_frame.f_lineno = 77;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_10;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_swapaxes );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "swapaxes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 79;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            if ( par_a == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 79;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_9 = par_a;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_10 = par_axis;
            tmp_args_element_name_11 = const_int_neg_1;
            frame_896667a43267e35b2fd279afc1ac2c46->m_frame.f_lineno = 79;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                par_a = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_pfi );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pfi );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pfi" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 80;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_5;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_12 = par_a;
            CHECK_OBJECT( par_is_real );
            tmp_args_element_name_13 = par_is_real;
            CHECK_OBJECT( par_is_forward );
            tmp_args_element_name_14 = par_is_forward;
            CHECK_OBJECT( var_fct );
            tmp_args_element_name_15 = var_fct;
            frame_896667a43267e35b2fd279afc1ac2c46->m_frame.f_lineno = 80;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assign_source_12 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain_execute, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_swapaxes );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "swapaxes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 81;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_16 = var_r;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_17 = par_axis;
            tmp_args_element_name_18 = const_int_neg_1;
            frame_896667a43267e35b2fd279afc1ac2c46->m_frame.f_lineno = 81;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        branch_end_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_896667a43267e35b2fd279afc1ac2c46 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_896667a43267e35b2fd279afc1ac2c46 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_896667a43267e35b2fd279afc1ac2c46, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_896667a43267e35b2fd279afc1ac2c46->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_896667a43267e35b2fd279afc1ac2c46, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_896667a43267e35b2fd279afc1ac2c46,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_is_real,
        par_is_forward,
        par_inv_norm,
        var_fct,
        var_s,
        var_index,
        var_z,
        var_r
    );


    // Release cached frame.
    if ( frame_896667a43267e35b2fd279afc1ac2c46 == cache_frame_896667a43267e35b2fd279afc1ac2c46 )
    {
        Py_DECREF( frame_896667a43267e35b2fd279afc1ac2c46 );
    }
    cache_frame_896667a43267e35b2fd279afc1ac2c46 = NULL;

    assertFrameObject( frame_896667a43267e35b2fd279afc1ac2c46 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_1__raw_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_is_real );
    Py_DECREF( par_is_real );
    par_is_real = NULL;

    CHECK_OBJECT( (PyObject *)par_is_forward );
    Py_DECREF( par_is_forward );
    par_is_forward = NULL;

    CHECK_OBJECT( (PyObject *)par_inv_norm );
    Py_DECREF( par_inv_norm );
    par_inv_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_fct );
    Py_DECREF( var_fct );
    var_fct = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_is_real );
    Py_DECREF( par_is_real );
    par_is_real = NULL;

    CHECK_OBJECT( (PyObject *)par_is_forward );
    Py_DECREF( par_is_forward );
    par_is_forward = NULL;

    CHECK_OBJECT( (PyObject *)par_inv_norm );
    Py_DECREF( par_inv_norm );
    par_inv_norm = NULL;

    Py_XDECREF( var_fct );
    var_fct = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_1__raw_fft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_2__unitary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_norm = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_2186a3e88a6fce6df4425b09035789c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2186a3e88a6fce6df4425b09035789c8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_1 = par_norm;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_2186a3e88a6fce6df4425b09035789c8, codeobj_2186a3e88a6fce6df4425b09035789c8, module_numpy$fft$pocketfft, sizeof(void *) );
    frame_2186a3e88a6fce6df4425b09035789c8 = cache_frame_2186a3e88a6fce6df4425b09035789c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2186a3e88a6fce6df4425b09035789c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2186a3e88a6fce6df4425b09035789c8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = const_str_plain_ortho;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "o";
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
        CHECK_OBJECT( par_norm );
        tmp_right_name_1 = par_norm;
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2186a3e88a6fce6df4425b09035789c8->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 90;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2186a3e88a6fce6df4425b09035789c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2186a3e88a6fce6df4425b09035789c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2186a3e88a6fce6df4425b09035789c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2186a3e88a6fce6df4425b09035789c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2186a3e88a6fce6df4425b09035789c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2186a3e88a6fce6df4425b09035789c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2186a3e88a6fce6df4425b09035789c8,
        type_description_1,
        par_norm
    );


    // Release cached frame.
    if ( frame_2186a3e88a6fce6df4425b09035789c8 == cache_frame_2186a3e88a6fce6df4425b09035789c8 )
    {
        Py_DECREF( frame_2186a3e88a6fce6df4425b09035789c8 );
    }
    cache_frame_2186a3e88a6fce6df4425b09035789c8 = NULL;

    assertFrameObject( frame_2186a3e88a6fce6df4425b09035789c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_2__unitary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_2__unitary );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_3__fft_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_3__fft_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_3__fft_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$pocketfft$$$function_4_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_inv_norm = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_f13f304c071d782bfda081e16c88f43a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f13f304c071d782bfda081e16c88f43a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f13f304c071d782bfda081e16c88f43a, codeobj_f13f304c071d782bfda081e16c88f43a, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f13f304c071d782bfda081e16c88f43a = cache_frame_f13f304c071d782bfda081e16c88f43a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f13f304c071d782bfda081e16c88f43a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f13f304c071d782bfda081e16c88f43a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_f13f304c071d782bfda081e16c88f43a->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_pos_1;
        assert( var_inv_norm == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_inv_norm = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 186;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_f13f304c071d782bfda081e16c88f43a->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 186;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            frame_f13f304c071d782bfda081e16c88f43a->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_inv_norm;
                assert( old != NULL );
                var_inv_norm = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = Py_False;
        tmp_args_element_name_8 = Py_True;
        CHECK_OBJECT( var_inv_norm );
        tmp_args_element_name_9 = var_inv_norm;
        frame_f13f304c071d782bfda081e16c88f43a->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f13f304c071d782bfda081e16c88f43a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f13f304c071d782bfda081e16c88f43a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f13f304c071d782bfda081e16c88f43a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f13f304c071d782bfda081e16c88f43a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f13f304c071d782bfda081e16c88f43a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f13f304c071d782bfda081e16c88f43a,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_inv_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_f13f304c071d782bfda081e16c88f43a == cache_frame_f13f304c071d782bfda081e16c88f43a )
    {
        Py_DECREF( frame_f13f304c071d782bfda081e16c88f43a );
    }
    cache_frame_f13f304c071d782bfda081e16c88f43a = NULL;

    assertFrameObject( frame_f13f304c071d782bfda081e16c88f43a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_4_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_inv_norm );
    Py_DECREF( var_inv_norm );
    var_inv_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_inv_norm );
    var_inv_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_4_fft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_5_ifft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_inv_norm = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_2bc5375913155e40820c357492cb0d7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2bc5375913155e40820c357492cb0d7b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2bc5375913155e40820c357492cb0d7b, codeobj_2bc5375913155e40820c357492cb0d7b, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2bc5375913155e40820c357492cb0d7b = cache_frame_2bc5375913155e40820c357492cb0d7b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2bc5375913155e40820c357492cb0d7b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2bc5375913155e40820c357492cb0d7b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_2bc5375913155e40820c357492cb0d7b->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

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
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 280;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_2bc5375913155e40820c357492cb0d7b->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 280;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 281;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_4 != NULL );
            CHECK_OBJECT( par_n );
            tmp_args_element_name_4 = par_n;
            tmp_args_element_name_5 = const_int_pos_1;
            frame_2bc5375913155e40820c357492cb0d7b->m_frame.f_lineno = 281;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_2bc5375913155e40820c357492cb0d7b->m_frame.f_lineno = 281;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_inv_norm == NULL );
            var_inv_norm = tmp_assign_source_3;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( par_n );
            tmp_assign_source_4 = par_n;
            assert( var_inv_norm == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_inv_norm = tmp_assign_source_4;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 284;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_6 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_7 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_8 = par_axis;
        tmp_args_element_name_9 = Py_False;
        tmp_args_element_name_10 = Py_False;
        CHECK_OBJECT( var_inv_norm );
        tmp_args_element_name_11 = var_inv_norm;
        frame_2bc5375913155e40820c357492cb0d7b->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bc5375913155e40820c357492cb0d7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bc5375913155e40820c357492cb0d7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2bc5375913155e40820c357492cb0d7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2bc5375913155e40820c357492cb0d7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2bc5375913155e40820c357492cb0d7b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2bc5375913155e40820c357492cb0d7b,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_inv_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_2bc5375913155e40820c357492cb0d7b == cache_frame_2bc5375913155e40820c357492cb0d7b )
    {
        Py_DECREF( frame_2bc5375913155e40820c357492cb0d7b );
    }
    cache_frame_2bc5375913155e40820c357492cb0d7b = NULL;

    assertFrameObject( frame_2bc5375913155e40820c357492cb0d7b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_5_ifft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_inv_norm );
    Py_DECREF( var_inv_norm );
    var_inv_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_inv_norm );
    var_inv_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_5_ifft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_6_rfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_inv_norm = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_e100cc0a671d30e437bf831854125e71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e100cc0a671d30e437bf831854125e71 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e100cc0a671d30e437bf831854125e71, codeobj_e100cc0a671d30e437bf831854125e71, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e100cc0a671d30e437bf831854125e71 = cache_frame_e100cc0a671d30e437bf831854125e71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e100cc0a671d30e437bf831854125e71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e100cc0a671d30e437bf831854125e71 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 368;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_e100cc0a671d30e437bf831854125e71->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
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
        tmp_assign_source_2 = const_int_pos_1;
        assert( var_inv_norm == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_inv_norm = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_1 = par_norm;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 370;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_e100cc0a671d30e437bf831854125e71->m_frame.f_lineno = 370;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 370;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_n );
            tmp_compexpr_left_2 = par_n;
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_1 = par_a;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axis );
                tmp_subscript_name_1 = par_axis;
                tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_n;
                    assert( old != NULL );
                    par_n = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 373;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            frame_e100cc0a671d30e437bf831854125e71->m_frame.f_lineno = 373;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_inv_norm;
                assert( old != NULL );
                var_inv_norm = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 374;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        if ( par_n == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 374;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = Py_True;
        tmp_args_element_name_8 = Py_True;
        CHECK_OBJECT( var_inv_norm );
        tmp_args_element_name_9 = var_inv_norm;
        frame_e100cc0a671d30e437bf831854125e71->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e100cc0a671d30e437bf831854125e71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e100cc0a671d30e437bf831854125e71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e100cc0a671d30e437bf831854125e71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e100cc0a671d30e437bf831854125e71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e100cc0a671d30e437bf831854125e71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e100cc0a671d30e437bf831854125e71,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_inv_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_e100cc0a671d30e437bf831854125e71 == cache_frame_e100cc0a671d30e437bf831854125e71 )
    {
        Py_DECREF( frame_e100cc0a671d30e437bf831854125e71 );
    }
    cache_frame_e100cc0a671d30e437bf831854125e71 = NULL;

    assertFrameObject( frame_e100cc0a671d30e437bf831854125e71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_6_rfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_inv_norm );
    Py_DECREF( var_inv_norm );
    var_inv_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_inv_norm );
    var_inv_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_6_rfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_7_irfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_inv_norm = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_be371ee2761729e3641d15e62ecf2231;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be371ee2761729e3641d15e62ecf2231 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be371ee2761729e3641d15e62ecf2231, codeobj_be371ee2761729e3641d15e62ecf2231, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be371ee2761729e3641d15e62ecf2231 = cache_frame_be371ee2761729e3641d15e62ecf2231;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be371ee2761729e3641d15e62ecf2231 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be371ee2761729e3641d15e62ecf2231 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 468;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_be371ee2761729e3641d15e62ecf2231->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( par_n );
        tmp_assign_source_3 = par_n;
        assert( var_inv_norm == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_inv_norm = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 472;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_be371ee2761729e3641d15e62ecf2231->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 472;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 472;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 473;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            frame_be371ee2761729e3641d15e62ecf2231->m_frame.f_lineno = 473;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_inv_norm;
                assert( old != NULL );
                var_inv_norm = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 474;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = Py_True;
        tmp_args_element_name_8 = Py_False;
        CHECK_OBJECT( var_inv_norm );
        tmp_args_element_name_9 = var_inv_norm;
        frame_be371ee2761729e3641d15e62ecf2231->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 474;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be371ee2761729e3641d15e62ecf2231 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be371ee2761729e3641d15e62ecf2231 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be371ee2761729e3641d15e62ecf2231, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be371ee2761729e3641d15e62ecf2231->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be371ee2761729e3641d15e62ecf2231, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be371ee2761729e3641d15e62ecf2231,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_inv_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_be371ee2761729e3641d15e62ecf2231 == cache_frame_be371ee2761729e3641d15e62ecf2231 )
    {
        Py_DECREF( frame_be371ee2761729e3641d15e62ecf2231 );
    }
    cache_frame_be371ee2761729e3641d15e62ecf2231 = NULL;

    assertFrameObject( frame_be371ee2761729e3641d15e62ecf2231 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_7_irfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_inv_norm );
    Py_DECREF( var_inv_norm );
    var_inv_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_inv_norm );
    var_inv_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_7_irfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_8_hfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    struct Nuitka_FrameObject *frame_e662b1705748a5f201859c405d51a542;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e662b1705748a5f201859c405d51a542 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e662b1705748a5f201859c405d51a542, codeobj_e662b1705748a5f201859c405d51a542, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e662b1705748a5f201859c405d51a542 = cache_frame_e662b1705748a5f201859c405d51a542;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e662b1705748a5f201859c405d51a542 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e662b1705748a5f201859c405d51a542 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 562;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_e662b1705748a5f201859c405d51a542->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 562;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 564;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 564;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 564;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 564;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 565;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_e662b1705748a5f201859c405d51a542->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 565;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_3;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "irfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_conjugate );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "conjugate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        frame_e662b1705748a5f201859c405d51a542->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        frame_e662b1705748a5f201859c405d51a542->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_7 = par_n;
        frame_e662b1705748a5f201859c405d51a542->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_3 = par_n;
        Py_INCREF( tmp_right_name_3 );
        condexpr_end_1:;
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 566;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e662b1705748a5f201859c405d51a542 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e662b1705748a5f201859c405d51a542 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e662b1705748a5f201859c405d51a542 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e662b1705748a5f201859c405d51a542, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e662b1705748a5f201859c405d51a542->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e662b1705748a5f201859c405d51a542, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e662b1705748a5f201859c405d51a542,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary
    );


    // Release cached frame.
    if ( frame_e662b1705748a5f201859c405d51a542 == cache_frame_e662b1705748a5f201859c405d51a542 )
    {
        Py_DECREF( frame_e662b1705748a5f201859c405d51a542 );
    }
    cache_frame_e662b1705748a5f201859c405d51a542 = NULL;

    assertFrameObject( frame_e662b1705748a5f201859c405d51a542 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_8_hfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_8_hfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_9_ihfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_8c5e775b9ee08659d20b9f4a5679602a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8c5e775b9ee08659d20b9f4a5679602a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c5e775b9ee08659d20b9f4a5679602a, codeobj_8c5e775b9ee08659d20b9f4a5679602a, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8c5e775b9ee08659d20b9f4a5679602a = cache_frame_8c5e775b9ee08659d20b9f4a5679602a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c5e775b9ee08659d20b9f4a5679602a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c5e775b9ee08659d20b9f4a5679602a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 622;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_8c5e775b9ee08659d20b9f4a5679602a->m_frame.f_lineno = 622;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 624;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 624;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unitary" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 625;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_2 = par_norm;
        frame_8c5e775b9ee08659d20b9f4a5679602a->m_frame.f_lineno = 625;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 625;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_conjugate );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "conjugate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 626;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 626;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        frame_8c5e775b9ee08659d20b9f4a5679602a->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8c5e775b9ee08659d20b9f4a5679602a->m_frame.f_lineno = 626;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_4;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_output );
        tmp_left_name_1 = var_output;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sqrt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 627;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_7 = par_n;
        frame_8c5e775b9ee08659d20b9f4a5679602a->m_frame.f_lineno = 627;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_2 = par_n;
        Py_INCREF( tmp_right_name_2 );
        condexpr_end_1:;
        tmp_right_name_1 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 627;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c5e775b9ee08659d20b9f4a5679602a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c5e775b9ee08659d20b9f4a5679602a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c5e775b9ee08659d20b9f4a5679602a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c5e775b9ee08659d20b9f4a5679602a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c5e775b9ee08659d20b9f4a5679602a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c5e775b9ee08659d20b9f4a5679602a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c5e775b9ee08659d20b9f4a5679602a,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_8c5e775b9ee08659d20b9f4a5679602a == cache_frame_8c5e775b9ee08659d20b9f4a5679602a )
    {
        Py_DECREF( frame_8c5e775b9ee08659d20b9f4a5679602a );
    }
    cache_frame_8c5e775b9ee08659d20b9f4a5679602a = NULL;

    assertFrameObject( frame_8c5e775b9ee08659d20b9f4a5679602a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_9_ihfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_9_ihfft );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_10__cook_nd_args( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_invreal = python_pars[ 3 ];
    PyObject *var_shapeless = NULL;
    struct Nuitka_FrameObject *frame_416b9d60eb9f0053e20694ca34b5c6b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_416b9d60eb9f0053e20694ca34b5c6b1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_416b9d60eb9f0053e20694ca34b5c6b1, codeobj_416b9d60eb9f0053e20694ca34b5c6b1, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_416b9d60eb9f0053e20694ca34b5c6b1 = cache_frame_416b9d60eb9f0053e20694ca34b5c6b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_416b9d60eb9f0053e20694ca34b5c6b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_416b9d60eb9f0053e20694ca34b5c6b1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_1 = par_s;
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
            tmp_assign_source_1 = const_int_pos_1;
            assert( var_shapeless == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_shapeless = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_axes );
            tmp_compexpr_left_2 = par_axes;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_list_arg_1;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_1 = par_a;
                tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
                if ( tmp_list_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 634;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
                Py_DECREF( tmp_list_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 634;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_take );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "take" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 636;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_2 = par_a;
                tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 636;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axes );
                tmp_args_element_name_2 = par_axes;
                frame_416b9d60eb9f0053e20694ca34b5c6b1->m_frame.f_lineno = 636;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 636;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_int_0;
            assert( var_shapeless == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_shapeless = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_arg_2;
        if ( par_s == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 639;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_2 = par_s;
        tmp_assign_source_5 = PySequence_List( tmp_list_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 639;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_s;
            par_s = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_axes );
        tmp_compexpr_left_3 = par_axes;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_list_arg_3;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_xrange_high_1;
            CHECK_OBJECT( par_s );
            tmp_len_arg_1 = par_s;
            tmp_operand_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
            assert( !(tmp_operand_name_1 == NULL) );
            tmp_xrange_low_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_xrange_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 641;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_xrange_high_1 = const_int_0;
            tmp_list_arg_3 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_list_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 641;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = PySequence_List( tmp_list_arg_3 );
            Py_DECREF( tmp_list_arg_3 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 641;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axes;
                assert( old != NULL );
                par_axes = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( par_s );
        tmp_len_arg_2 = par_s;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
        assert( !(tmp_compexpr_left_4 == NULL) );
        CHECK_OBJECT( par_axes );
        tmp_len_arg_3 = par_axes;
        tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 642;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_ad30867cb50db197c788d8d9559403d4;
            frame_416b9d60eb9f0053e20694ca34b5c6b1->m_frame.f_lineno = 643;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 643;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_invreal );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_invreal );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 644;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( var_shapeless );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_shapeless );
        assert( !(tmp_truth_name_2 == -1) );
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_3 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 645;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axes );
            tmp_subscribed_name_2 = par_axes;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_subscript_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_1 );

                exception_lineno = 645;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 645;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 645;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 645;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_s );
            tmp_ass_subscribed_1 = par_s;
            tmp_ass_subscript_1 = const_int_neg_1;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 645;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_416b9d60eb9f0053e20694ca34b5c6b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_416b9d60eb9f0053e20694ca34b5c6b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_416b9d60eb9f0053e20694ca34b5c6b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_416b9d60eb9f0053e20694ca34b5c6b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_416b9d60eb9f0053e20694ca34b5c6b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_416b9d60eb9f0053e20694ca34b5c6b1,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_invreal,
        var_shapeless
    );


    // Release cached frame.
    if ( frame_416b9d60eb9f0053e20694ca34b5c6b1 == cache_frame_416b9d60eb9f0053e20694ca34b5c6b1 )
    {
        Py_DECREF( frame_416b9d60eb9f0053e20694ca34b5c6b1 );
    }
    cache_frame_416b9d60eb9f0053e20694ca34b5c6b1 = NULL;

    assertFrameObject( frame_416b9d60eb9f0053e20694ca34b5c6b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_axes );
        tmp_tuple_element_1 = par_axes;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_10__cook_nd_args );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

    CHECK_OBJECT( (PyObject *)var_shapeless );
    Py_DECREF( var_shapeless );
    var_shapeless = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

    Py_XDECREF( var_shapeless );
    var_shapeless = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_10__cook_nd_args );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_11__raw_fftnd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_function = python_pars[ 3 ];
    PyObject *par_norm = python_pars[ 4 ];
    PyObject *var_itl = NULL;
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4a5dbdbbe57a7ee21ac80fed1709e8f2;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a5dbdbbe57a7ee21ac80fed1709e8f2, codeobj_4a5dbdbbe57a7ee21ac80fed1709e8f2, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 = cache_frame_4a5dbdbbe57a7ee21ac80fed1709e8f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 650;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_4a5dbdbbe57a7ee21ac80fed1709e8f2->m_frame.f_lineno = 650;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 650;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 651;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_3 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_4 = par_axes;
        frame_4a5dbdbbe57a7ee21ac80fed1709e8f2->m_frame.f_lineno = 651;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
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
            exception_lineno = 651;
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
            exception_lineno = 651;
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
                    exception_lineno = 651;
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
            exception_lineno = 651;
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
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 652;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 652;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 652;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_itl == NULL );
        var_itl = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_itl );
        tmp_called_instance_1 = var_itl;
        frame_4a5dbdbbe57a7ee21ac80fed1709e8f2->m_frame.f_lineno = 653;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reverse );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_itl );
        tmp_iter_arg_2 = var_itl;
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 654;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_10;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT( par_function );
        tmp_called_name_3 = par_function;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_n;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_1 = var_ii;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 655;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_axis;
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_2 = var_ii;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 655;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_norm;
        CHECK_OBJECT( par_norm );
        tmp_dict_value_3 = par_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_4a5dbdbbe57a7ee21ac80fed1709e8f2->m_frame.f_lineno = 655;
        tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 655;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a5dbdbbe57a7ee21ac80fed1709e8f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a5dbdbbe57a7ee21ac80fed1709e8f2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a5dbdbbe57a7ee21ac80fed1709e8f2,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_function,
        par_norm,
        var_itl,
        var_ii
    );


    // Release cached frame.
    if ( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 == cache_frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 )
    {
        Py_DECREF( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 );
    }
    cache_frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 = NULL;

    assertFrameObject( frame_4a5dbdbbe57a7ee21ac80fed1709e8f2 );

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

    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_11__raw_fftnd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_itl );
    Py_DECREF( var_itl );
    var_itl = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_itl );
    var_itl = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_11__raw_fftnd );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_12__fftn_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_12__fftn_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$pocketfft$$$function_13_fftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_ce16e47b852b4393ad8a490dddc7f7b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce16e47b852b4393ad8a490dddc7f7b2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce16e47b852b4393ad8a490dddc7f7b2, codeobj_ce16e47b852b4393ad8a490dddc7f7b2, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce16e47b852b4393ad8a490dddc7f7b2 = cache_frame_ce16e47b852b4393ad8a490dddc7f7b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce16e47b852b4393ad8a490dddc7f7b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce16e47b852b4393ad8a490dddc7f7b2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 758;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 758;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_ce16e47b852b4393ad8a490dddc7f7b2->m_frame.f_lineno = 758;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 758;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce16e47b852b4393ad8a490dddc7f7b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce16e47b852b4393ad8a490dddc7f7b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce16e47b852b4393ad8a490dddc7f7b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce16e47b852b4393ad8a490dddc7f7b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce16e47b852b4393ad8a490dddc7f7b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce16e47b852b4393ad8a490dddc7f7b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce16e47b852b4393ad8a490dddc7f7b2,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_ce16e47b852b4393ad8a490dddc7f7b2 == cache_frame_ce16e47b852b4393ad8a490dddc7f7b2 )
    {
        Py_DECREF( frame_ce16e47b852b4393ad8a490dddc7f7b2 );
    }
    cache_frame_ce16e47b852b4393ad8a490dddc7f7b2 = NULL;

    assertFrameObject( frame_ce16e47b852b4393ad8a490dddc7f7b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_13_fftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_13_fftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_14_ifftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_db19d6aeba1d1e3fa4b2329acad7219a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db19d6aeba1d1e3fa4b2329acad7219a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_db19d6aeba1d1e3fa4b2329acad7219a, codeobj_db19d6aeba1d1e3fa4b2329acad7219a, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_db19d6aeba1d1e3fa4b2329acad7219a = cache_frame_db19d6aeba1d1e3fa4b2329acad7219a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_db19d6aeba1d1e3fa4b2329acad7219a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_db19d6aeba1d1e3fa4b2329acad7219a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 856;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ifft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 856;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_db19d6aeba1d1e3fa4b2329acad7219a->m_frame.f_lineno = 856;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 856;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db19d6aeba1d1e3fa4b2329acad7219a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db19d6aeba1d1e3fa4b2329acad7219a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db19d6aeba1d1e3fa4b2329acad7219a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db19d6aeba1d1e3fa4b2329acad7219a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db19d6aeba1d1e3fa4b2329acad7219a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db19d6aeba1d1e3fa4b2329acad7219a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_db19d6aeba1d1e3fa4b2329acad7219a,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_db19d6aeba1d1e3fa4b2329acad7219a == cache_frame_db19d6aeba1d1e3fa4b2329acad7219a )
    {
        Py_DECREF( frame_db19d6aeba1d1e3fa4b2329acad7219a );
    }
    cache_frame_db19d6aeba1d1e3fa4b2329acad7219a = NULL;

    assertFrameObject( frame_db19d6aeba1d1e3fa4b2329acad7219a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_14_ifftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_14_ifftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_15_fft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_0a5baaaea218407bdf9c8ff4b69e66e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a5baaaea218407bdf9c8ff4b69e66e1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a5baaaea218407bdf9c8ff4b69e66e1, codeobj_0a5baaaea218407bdf9c8ff4b69e66e1, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0a5baaaea218407bdf9c8ff4b69e66e1 = cache_frame_0a5baaaea218407bdf9c8ff4b69e66e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a5baaaea218407bdf9c8ff4b69e66e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a5baaaea218407bdf9c8ff4b69e66e1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 947;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 947;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_0a5baaaea218407bdf9c8ff4b69e66e1->m_frame.f_lineno = 947;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 947;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a5baaaea218407bdf9c8ff4b69e66e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a5baaaea218407bdf9c8ff4b69e66e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a5baaaea218407bdf9c8ff4b69e66e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a5baaaea218407bdf9c8ff4b69e66e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a5baaaea218407bdf9c8ff4b69e66e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a5baaaea218407bdf9c8ff4b69e66e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a5baaaea218407bdf9c8ff4b69e66e1,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_0a5baaaea218407bdf9c8ff4b69e66e1 == cache_frame_0a5baaaea218407bdf9c8ff4b69e66e1 )
    {
        Py_DECREF( frame_0a5baaaea218407bdf9c8ff4b69e66e1 );
    }
    cache_frame_0a5baaaea218407bdf9c8ff4b69e66e1 = NULL;

    assertFrameObject( frame_0a5baaaea218407bdf9c8ff4b69e66e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_15_fft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_15_fft2 );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_16_ifft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_e0dec268d9cec13a6f006f01cd9c6b0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0dec268d9cec13a6f006f01cd9c6b0d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e0dec268d9cec13a6f006f01cd9c6b0d, codeobj_e0dec268d9cec13a6f006f01cd9c6b0d, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e0dec268d9cec13a6f006f01cd9c6b0d = cache_frame_e0dec268d9cec13a6f006f01cd9c6b0d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e0dec268d9cec13a6f006f01cd9c6b0d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e0dec268d9cec13a6f006f01cd9c6b0d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1035;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ifft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1035;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_e0dec268d9cec13a6f006f01cd9c6b0d->m_frame.f_lineno = 1035;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1035;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0dec268d9cec13a6f006f01cd9c6b0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0dec268d9cec13a6f006f01cd9c6b0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0dec268d9cec13a6f006f01cd9c6b0d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e0dec268d9cec13a6f006f01cd9c6b0d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e0dec268d9cec13a6f006f01cd9c6b0d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e0dec268d9cec13a6f006f01cd9c6b0d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e0dec268d9cec13a6f006f01cd9c6b0d,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_e0dec268d9cec13a6f006f01cd9c6b0d == cache_frame_e0dec268d9cec13a6f006f01cd9c6b0d )
    {
        Py_DECREF( frame_e0dec268d9cec13a6f006f01cd9c6b0d );
    }
    cache_frame_e0dec268d9cec13a6f006f01cd9c6b0d = NULL;

    assertFrameObject( frame_e0dec268d9cec13a6f006f01cd9c6b0d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_16_ifft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_16_ifft2 );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_17_rfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9308fee141970baed8ea701bfc63ec56;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_9308fee141970baed8ea701bfc63ec56 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9308fee141970baed8ea701bfc63ec56, codeobj_9308fee141970baed8ea701bfc63ec56, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9308fee141970baed8ea701bfc63ec56 = cache_frame_9308fee141970baed8ea701bfc63ec56;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9308fee141970baed8ea701bfc63ec56 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9308fee141970baed8ea701bfc63ec56 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_9308fee141970baed8ea701bfc63ec56->m_frame.f_lineno = 1122;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1122;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1123;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_3 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_4 = par_axes;
        frame_9308fee141970baed8ea701bfc63ec56->m_frame.f_lineno = 1123;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1123;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1123;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 1123;
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


            type_description_1 = "ooooo";
            exception_lineno = 1123;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 1123;
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
            exception_lineno = 1123;
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
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_5 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 1124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_8 = par_norm;
        frame_9308fee141970baed8ea701bfc63ec56->m_frame.f_lineno = 1124;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_xrange_low_1 == NULL) );
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 1125;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_10;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1126;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_9 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_3 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_3 = var_ii;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_4 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_4 = var_ii;
        tmp_args_element_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 1126;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_12 = par_norm;
        frame_9308fee141970baed8ea701bfc63ec56->m_frame.f_lineno = 1126;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1125;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9308fee141970baed8ea701bfc63ec56 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9308fee141970baed8ea701bfc63ec56 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9308fee141970baed8ea701bfc63ec56, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9308fee141970baed8ea701bfc63ec56->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9308fee141970baed8ea701bfc63ec56, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9308fee141970baed8ea701bfc63ec56,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_9308fee141970baed8ea701bfc63ec56 == cache_frame_9308fee141970baed8ea701bfc63ec56 )
    {
        Py_DECREF( frame_9308fee141970baed8ea701bfc63ec56 );
    }
    cache_frame_9308fee141970baed8ea701bfc63ec56 = NULL;

    assertFrameObject( frame_9308fee141970baed8ea701bfc63ec56 );

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

    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_17_rfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_17_rfftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_18_rfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_9bc836d078423891714dd85e2918b0ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9bc836d078423891714dd85e2918b0ba = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9bc836d078423891714dd85e2918b0ba, codeobj_9bc836d078423891714dd85e2918b0ba, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9bc836d078423891714dd85e2918b0ba = cache_frame_9bc836d078423891714dd85e2918b0ba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bc836d078423891714dd85e2918b0ba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bc836d078423891714dd85e2918b0ba ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfftn );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfftn );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rfftn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_4 = par_norm;
        frame_9bc836d078423891714dd85e2918b0ba->m_frame.f_lineno = 1165;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bc836d078423891714dd85e2918b0ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bc836d078423891714dd85e2918b0ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bc836d078423891714dd85e2918b0ba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bc836d078423891714dd85e2918b0ba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bc836d078423891714dd85e2918b0ba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bc836d078423891714dd85e2918b0ba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bc836d078423891714dd85e2918b0ba,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_9bc836d078423891714dd85e2918b0ba == cache_frame_9bc836d078423891714dd85e2918b0ba )
    {
        Py_DECREF( frame_9bc836d078423891714dd85e2918b0ba );
    }
    cache_frame_9bc836d078423891714dd85e2918b0ba = NULL;

    assertFrameObject( frame_9bc836d078423891714dd85e2918b0ba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_18_rfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_18_rfft2 );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_19_irfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_99805872a0cf63d9d5a9663488d530a5;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_99805872a0cf63d9d5a9663488d530a5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99805872a0cf63d9d5a9663488d530a5, codeobj_99805872a0cf63d9d5a9663488d530a5, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_99805872a0cf63d9d5a9663488d530a5 = cache_frame_99805872a0cf63d9d5a9663488d530a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99805872a0cf63d9d5a9663488d530a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99805872a0cf63d9d5a9663488d530a5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asarray" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_99805872a0cf63d9d5a9663488d530a5->m_frame.f_lineno = 1264;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1265;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_axes );
        tmp_tuple_element_1 = par_axes;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_dd45c77b755c75255009fd804f504c08 );
        frame_99805872a0cf63d9d5a9663488d530a5->m_frame.f_lineno = 1265;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1265;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1265;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 1265;
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


            type_description_1 = "ooooo";
            exception_lineno = 1265;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 1265;
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
            exception_lineno = 1265;
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
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_xrange_low_1 == NULL) );
        tmp_iter_arg_2 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 1266;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_9;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ifft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1267;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_1 = var_ii;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1267;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_2 = var_ii;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 1267;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_99805872a0cf63d9d5a9663488d530a5->m_frame.f_lineno = 1267;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1267;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1266;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "irfft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1268;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_6 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_3 = par_s;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1268;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_4 = par_axes;
        tmp_subscript_name_4 = const_int_neg_1;
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_7 );

            exception_lineno = 1268;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_9 = par_norm;
        frame_99805872a0cf63d9d5a9663488d530a5->m_frame.f_lineno = 1268;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1268;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99805872a0cf63d9d5a9663488d530a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99805872a0cf63d9d5a9663488d530a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99805872a0cf63d9d5a9663488d530a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99805872a0cf63d9d5a9663488d530a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99805872a0cf63d9d5a9663488d530a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99805872a0cf63d9d5a9663488d530a5,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_99805872a0cf63d9d5a9663488d530a5 == cache_frame_99805872a0cf63d9d5a9663488d530a5 )
    {
        Py_DECREF( frame_99805872a0cf63d9d5a9663488d530a5 );
    }
    cache_frame_99805872a0cf63d9d5a9663488d530a5 = NULL;

    assertFrameObject( frame_99805872a0cf63d9d5a9663488d530a5 );

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
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_19_irfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_19_irfftn );
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


static PyObject *impl_numpy$fft$pocketfft$$$function_20_irfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_9191b022ba1861956602fb4b24aadbc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9191b022ba1861956602fb4b24aadbc0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9191b022ba1861956602fb4b24aadbc0, codeobj_9191b022ba1861956602fb4b24aadbc0, module_numpy$fft$pocketfft, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9191b022ba1861956602fb4b24aadbc0 = cache_frame_9191b022ba1861956602fb4b24aadbc0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9191b022ba1861956602fb4b24aadbc0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9191b022ba1861956602fb4b24aadbc0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfftn );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfftn );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "irfftn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_4 = par_norm;
        frame_9191b022ba1861956602fb4b24aadbc0->m_frame.f_lineno = 1307;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9191b022ba1861956602fb4b24aadbc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9191b022ba1861956602fb4b24aadbc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9191b022ba1861956602fb4b24aadbc0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9191b022ba1861956602fb4b24aadbc0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9191b022ba1861956602fb4b24aadbc0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9191b022ba1861956602fb4b24aadbc0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9191b022ba1861956602fb4b24aadbc0,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_9191b022ba1861956602fb4b24aadbc0 == cache_frame_9191b022ba1861956602fb4b24aadbc0 )
    {
        Py_DECREF( frame_9191b022ba1861956602fb4b24aadbc0 );
    }
    cache_frame_9191b022ba1861956602fb4b24aadbc0 = NULL;

    assertFrameObject( frame_9191b022ba1861956602fb4b24aadbc0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_20_irfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$pocketfft$$$function_20_irfft2 );
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



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_10__cook_nd_args( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_10__cook_nd_args,
        const_str_plain__cook_nd_args,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_416b9d60eb9f0053e20694ca34b5c6b1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_11__raw_fftnd( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_11__raw_fftnd,
        const_str_plain__raw_fftnd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4a5dbdbbe57a7ee21ac80fed1709e8f2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_12__fftn_dispatcher,
        const_str_plain__fftn_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cbc1b1eb370cf4f2a52ecd39692c4372,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_13_fftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_13_fftn,
        const_str_plain_fftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ce16e47b852b4393ad8a490dddc7f7b2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_13bc5b5254b7204a2573e3d7bbd1a0c7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_14_ifftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_14_ifftn,
        const_str_plain_ifftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_db19d6aeba1d1e3fa4b2329acad7219a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_2ebd01a7795c29958aaada191f1fd76a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_15_fft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_15_fft2,
        const_str_plain_fft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0a5baaaea218407bdf9c8ff4b69e66e1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_0690581905707e5372848107d89737db,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_16_ifft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_16_ifft2,
        const_str_plain_ifft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e0dec268d9cec13a6f006f01cd9c6b0d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_b3ffc6c71fed7a60fb1aa8d44a22494a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_17_rfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_17_rfftn,
        const_str_plain_rfftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9308fee141970baed8ea701bfc63ec56,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_4fde285245e0480bfbee40bbbdd9595f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_18_rfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_18_rfft2,
        const_str_plain_rfft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9bc836d078423891714dd85e2918b0ba,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_67a439b64216fd79a420034aec6214a2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_19_irfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_19_irfftn,
        const_str_plain_irfftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_99805872a0cf63d9d5a9663488d530a5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_2e6fb411811df75b5f2043110852feba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_1__raw_fft(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_1__raw_fft,
        const_str_plain__raw_fft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_896667a43267e35b2fd279afc1ac2c46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_20_irfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_20_irfft2,
        const_str_plain_irfft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9191b022ba1861956602fb4b24aadbc0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_44b8cdb2e967d1386bac73e4fcbc532f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_2__unitary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_2__unitary,
        const_str_plain__unitary,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2186a3e88a6fce6df4425b09035789c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_3__fft_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_3__fft_dispatcher,
        const_str_plain__fft_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba6c535636deebf05c3cbf15b3f03ec7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_4_fft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_4_fft,
        const_str_plain_fft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f13f304c071d782bfda081e16c88f43a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_228dbbac8ee90f62048cd171a21defd6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_5_ifft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_5_ifft,
        const_str_plain_ifft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2bc5375913155e40820c357492cb0d7b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_dc52a9a74aa4ff1377be91ff132e602d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_6_rfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_6_rfft,
        const_str_plain_rfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e100cc0a671d30e437bf831854125e71,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_07f33a01b29f69eaa8c79d0d21cec2b0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_7_irfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_7_irfft,
        const_str_plain_irfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be371ee2761729e3641d15e62ecf2231,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_a7370d465522668cf408da24bf87bae8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_8_hfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_8_hfft,
        const_str_plain_hfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e662b1705748a5f201859c405d51a542,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_b1467532df9510b94903b310d05850d1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$pocketfft$$$function_9_ihfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$pocketfft$$$function_9_ihfft,
        const_str_plain_ihfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8c5e775b9ee08659d20b9f4a5679602a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$pocketfft,
        const_str_digest_9494539ffb8411756149e487b446694f,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$pocketfft =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.pocketfft",
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
MOD_ENTRY_DECL(numpy$fft$pocketfft)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(numpy$fft$pocketfft)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$pocketfft );
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
    puts("numpy.fft.pocketfft: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.pocketfft: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.pocketfft: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$fft$pocketfft" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$pocketfft = Py_InitModule4(
        "numpy.fft.pocketfft",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$fft$pocketfft = PyModule_Create( &mdef_numpy$fft$pocketfft );
#endif

    moduledict_numpy$fft$pocketfft = MODULE_DICT( module_numpy$fft$pocketfft );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$fft$pocketfft,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$fft$pocketfft,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$pocketfft,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$pocketfft,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$fft$pocketfft );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4b356e2504275e6efb56ef14c5d648a6, module_numpy$fft$pocketfft );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_82ba390fad221dc947e44470f88a74da;
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
        tmp_assign_source_1 = const_str_digest_ab460e111c7690eebacb4cfd09eff01e;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_cc5f47a9641920f596e5e9c7aa0e47e9;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_82ba390fad221dc947e44470f88a74da = MAKE_MODULE_FRAME( codeobj_82ba390fad221dc947e44470f88a74da, module_numpy$fft$pocketfft );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_82ba390fad221dc947e44470f88a74da );
    assert( Py_REFCNT( frame_82ba390fad221dc947e44470f88a74da ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_cc5f47a9641920f596e5e9c7aa0e47e9;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 30;
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


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_60f473887d8c78e2f768e087222cf620_list );
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 35;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_fc36638fe159a5b2fed835b739242617_tuple;
        tmp_level_name_2 = const_int_0;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 37;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_asarray );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_zeros );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_swapaxes );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_swapaxes, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_conjugate );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_conjugate, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_take );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_sqrt );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_16 );
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_pocketfft_internal_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 38;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_numpy$fft$pocketfft,
                const_str_plain_pocketfft_internal,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_pocketfft_internal );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_pfi, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_normalize_axis_index_tuple;
        tmp_level_name_4 = const_int_0;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 39;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_normalize_axis_index );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_normalize_axis_index, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$fft$pocketfft;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_5 = const_int_0;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 40;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_functools );

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

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_overrides );

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

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c0d9920cdb2d132dd609908b9aa6b9e2 );
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 43;
        tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_1__raw_fft(  );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fft, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_2__unitary(  );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__unitary, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_3__fft_dispatcher( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_called_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_args_element_name_1 = tmp_mvar_value_6;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_4_fft( tmp_defaults_2 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_8;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_5_ifft( tmp_defaults_3 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_10;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_6_rfft( tmp_defaults_4 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 378;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 378;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = tmp_mvar_value_12;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_7_irfft( tmp_defaults_5 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 378;
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


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_defaults_6;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 478;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 478;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_14;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_8_hfft( tmp_defaults_6 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_hfft, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_7;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 569;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 569;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = tmp_mvar_value_16;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 569;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_9_ihfft( tmp_defaults_7 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 569;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ihfft, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = const_tuple_none_none_int_0_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_10__cook_nd_args( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__cook_nd_args, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_9;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_17;
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_9 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 1, tmp_tuple_element_2 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_defaults_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 649;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_17;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 2, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_9, 3, tmp_tuple_element_2 );
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_11__raw_fftnd( tmp_defaults_9 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__raw_fftnd, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_10 );
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_12__fftn_dispatcher( tmp_defaults_10 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_defaults_11;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 663;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_19 );
        tmp_args_element_name_13 = tmp_mvar_value_19;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 663;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        tmp_defaults_11 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_13_fftn( tmp_defaults_11 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 663;
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


            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fftn, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_defaults_12;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 761;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 761;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_15 = tmp_mvar_value_21;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 761;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 761;

            goto frame_exception_exit_1;
        }
        tmp_defaults_12 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_12 );
        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_14_ifftn( tmp_defaults_12 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 761;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 761;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifftn, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_defaults_13;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 859;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 859;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = tmp_mvar_value_23;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 859;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 859;

            goto frame_exception_exit_1;
        }
        tmp_defaults_13 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_13 );
        tmp_args_element_name_18 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_15_fft2( tmp_defaults_13 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 859;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 859;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_fft2, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_defaults_14;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 950;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 950;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_19 = tmp_mvar_value_25;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 950;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_called_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;

            goto frame_exception_exit_1;
        }
        tmp_defaults_14 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_14 );
        tmp_args_element_name_20 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_16_ifft2( tmp_defaults_14 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 950;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_ifft2, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_defaults_15;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_26;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_21 = tmp_mvar_value_27;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1038;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }
        tmp_defaults_15 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_15 );
        tmp_args_element_name_22 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_17_rfftn( tmp_defaults_15 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1038;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1038;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfftn, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_defaults_16;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 1130;

            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_28;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1130;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = tmp_mvar_value_29;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1130;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_called_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1130;

            goto frame_exception_exit_1;
        }
        tmp_defaults_16 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_16 );
        tmp_args_element_name_24 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_18_rfft2( tmp_defaults_16 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1130;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_rfft2, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_defaults_17;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1168;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_30;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1168;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_25 = tmp_mvar_value_31;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1168;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1168;

            goto frame_exception_exit_1;
        }
        tmp_defaults_17 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_17 );
        tmp_args_element_name_26 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_19_irfftn( tmp_defaults_17 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1168;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfftn, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_defaults_18;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_32;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_27 = tmp_mvar_value_33;
        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1272;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_called_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
        }

        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_defaults_18 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_18 );
        tmp_args_element_name_28 = MAKE_FUNCTION_numpy$fft$pocketfft$$$function_20_irfft2( tmp_defaults_18 );



        frame_82ba390fad221dc947e44470f88a74da->m_frame.f_lineno = 1272;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$pocketfft, (Nuitka_StringObject *)const_str_plain_irfft2, tmp_assign_source_40 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_82ba390fad221dc947e44470f88a74da );
#endif
    popFrameStack();

    assertFrameObject( frame_82ba390fad221dc947e44470f88a74da );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_82ba390fad221dc947e44470f88a74da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_82ba390fad221dc947e44470f88a74da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_82ba390fad221dc947e44470f88a74da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_82ba390fad221dc947e44470f88a74da, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$fft$pocketfft );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
