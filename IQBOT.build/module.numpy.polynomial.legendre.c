/* Generated code for Python module 'numpy.polynomial.legendre'
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

/* The "_module_numpy$polynomial$legendre" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$legendre;
PyDictObject *moduledict_numpy$polynomial$legendre;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_64b84da60d1d69e4e065e8ab146f6e21;
static PyObject *const_str_plain_legweight;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_pol;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_9155005e41c3737e8ba43420c4730900_tuple;
extern PyObject *const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple;
extern PyObject *const_str_plain_prd;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain_legval;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain_off_str_plain_scl_tuple;
extern PyObject *const_tuple_type_tuple_type_list_tuple;
extern PyObject *const_str_digest_616f6ee3ef74479987454a15fb3cc986;
extern PyObject *const_str_digest_b303cff154cb34d4708df3886d4b732e;
static PyObject *const_str_digest_c3c7c9f90583c17d917afae8020235e1;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_66bb1ddcec70db3f887aab7ff40c6c7d;
extern PyObject *const_str_plain_iterable;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_legline;
extern PyObject *const_tuple_int_pos_1_int_pos_1_int_0_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_eigvalsh;
static PyObject *const_str_plain_poly2leg;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_digest_1836e9e8bc8f8a3c6f5b817954c8956f;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain__polybase;
extern PyObject *const_str_plain_double;
extern PyObject *const_str_digest_70e3e648da9207a55990fb352e033d01;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_dtyp;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_legmul;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain__fit;
static PyObject *const_str_plain_legdomain;
extern PyObject *const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple;
static PyObject *const_str_digest_0b0c095930399aa2ef75f6ec4fae0476;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_tuple_c4b91bcb0776c1f61b0508de5afe5070_tuple;
static PyObject *const_str_digest_4d940d48505137ef0b24cdef638c8343;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_digest_da2105778c631b698de188a0e1c61710;
extern PyObject *const_str_plain_der;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_plain_legval3d;
extern PyObject *const_dict_0aaf07bc1f9989227b8953d83057c37b;
extern PyObject *const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple;
extern PyObject *const_str_plain_full;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple;
extern PyObject *const_str_plain__valnd;
extern PyObject *const_str_plain__deprecate_as_int;
static PyObject *const_str_digest_9cdcbe6463a55ed28bc11b50a338e5ae;
static PyObject *const_str_digest_50486979601fa56e17e2e7c9d631e855;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_dict_264a7d97adf9df3f4beb0f489755c06f;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_ideg;
extern PyObject *const_str_plain__pow;
extern PyObject *const_tuple_str_plain_polyadd_str_plain_polysub_str_plain_polymulx_tuple;
extern PyObject *const_str_plain_polynomial;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_as_series;
static PyObject *const_str_plain_legpow;
static PyObject *const_str_plain_legvander2d;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain__der;
static PyObject *const_str_plain_leg;
static PyObject *const_str_digest_645bab58e06138e42775c0a5b820a50a;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_str_plain_roots_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_nickname;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_digest_ea8c65b23281db7ee7660696e61ab360;
extern PyObject *const_tuple_str_plain_ABCPolyBase_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_t;
extern PyObject *const_list_int_0_int_pos_1_list;
static PyObject *const_str_digest_2bcf8aeab040d22fc81d4f5e059f6690;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_legvander;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_polymulx;
extern PyObject *const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
extern PyObject *const_float_1_0;
static PyObject *const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple;
extern PyObject *const_str_plain_c2;
extern PyObject *const_str_plain_fm;
extern PyObject *const_float_2_0;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_pu;
static PyObject *const_str_plain_legmulx;
extern PyObject *const_str_plain_normalize_axis_index;
extern PyObject *const_str_plain_roots;
extern PyObject *const_tuple_int_pos_16_tuple;
static PyObject *const_str_digest_ae8937c09e9dd3db3754bdf80b367e58;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_domain;
extern PyObject *const_str_plain_polysub;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain_la;
extern PyObject *const_tuple_str_plain_x_str_plain_w_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_polyadd;
extern PyObject *const_tuple_str_plain_polyutils_tuple;
static PyObject *const_str_digest_2bffd439738cf60c01fa68a3bc7169c1;
extern PyObject *const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_top;
static PyObject *const_list_cb7f181d757d9bb70e42e2f4885dd3f6_list;
static PyObject *const_str_plain_legsub;
extern PyObject *const_str_plain_deg;
static PyObject *const_str_plain_legvander3d;
static PyObject *const_str_digest_283cb7dac52cd3d2279909340923ada9;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain__add;
static PyObject *const_str_plain_leggrid2d;
static PyObject *const_str_digest_f6c80c0acfdfae06fe52f19516d8a5a8;
extern PyObject *const_str_plain_P;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple;
extern PyObject *const_str_plain__fromroots;
extern PyObject *const_str_plain_mat;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
static PyObject *const_str_plain_legfromroots;
extern PyObject *const_str_plain_lbnd;
extern PyObject *const_tuple_b87a3e87a6253db629058266b0859839_tuple;
static PyObject *const_str_digest_1e25be283731f6e219321a9db6816dd4;
static PyObject *const_str_plain_legfit;
extern PyObject *const_str_plain_trimcoef;
extern PyObject *const_str_plain__int;
extern PyObject *const_str_plain_xs;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
extern PyObject *const_str_plain__gridnd;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_iaxis;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_slice_none_int_pos_1_none;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_legtrim;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_Legendre;
static PyObject *const_str_digest_fdfb9cd747e053a8154bceca1c967362;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple;
static PyObject *const_str_digest_d8e393830e65c14b3f5f2e2bcf0ce793;
static PyObject *const_str_plain_leggrid3d;
extern PyObject *const_str_plain__vander2d;
extern PyObject *const_str_plain_c1;
extern PyObject *const_str_plain_pow;
extern PyObject *const_str_plain_dy;
extern PyObject *const_int_0;
extern PyObject *const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple;
extern PyObject *const_str_plain_df;
extern PyObject *const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
extern PyObject *const_str_plain_off;
static PyObject *const_str_digest_2dde18637600520199a1f7df9178f8e2;
static PyObject *const_str_plain_legone;
extern PyObject *const_str_plain_bot;
extern PyObject *const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
extern PyObject *const_str_digest_af327786ef70d70118fb639ec7c50f4e;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_tensor;
extern PyObject *const_str_plain__mul;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_plain_moveaxis;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_plain_leg2poly;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_03b7673e655b056e4f0304ce1db40177_tuple;
static PyObject *const_str_digest_41343e85c36660215d4be3ea54c36220;
static PyObject *const_str_digest_e111a243f153b03bdf2c8122c15641bf;
extern PyObject *const_str_plain_window;
extern PyObject *const_dict_1eef64507cf3de8ea0ea857c5e7e1090;
extern PyObject *const_str_plain__line;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain__sub;
static PyObject *const_str_digest_967588107b02010b9efcdcdac59512bf;
extern PyObject *const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
static PyObject *const_str_plain_legadd;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_legzero;
extern PyObject *const_list_int_neg_1_int_pos_1_list;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_maxpower;
extern PyObject *const_str_plain_v;
static PyObject *const_str_plain_legval2d;
extern PyObject *const_str_plain_basis_name;
static PyObject *const_str_digest_c36cffd6c59d07a581011c24c5a6c0cb;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_z;
static PyObject *const_str_plain_legdiv;
static PyObject *const_str_plain_legx;
static PyObject *const_str_plain_legder;
extern PyObject *const_tuple_none_false_none_tuple;
extern PyObject *const_str_plain_dims;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_legcompanion;
extern PyObject *const_str_plain__val;
extern PyObject *const_str_plain_y;
static PyObject *const_str_digest_6fd7c0642d42474f27fc0eb7d6b8efba;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
extern PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
extern PyObject *const_str_plain_ABCPolyBase;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_10c7d3749bf0751a1956e0e8e2fb54c7;
static PyObject *const_str_plain_legint;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_plain_legroots;
extern PyObject *const_str_plain_cnt;
extern PyObject *const_str_plain_polyutils;
extern PyObject *const_tuple_list_empty_tuple;
extern PyObject *const_tuple_5ac5563309656f6342973420ec643c7c_tuple;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_711a0201d952bbbaee313c2dd939cb20;
extern PyObject *const_tuple_c189a7ca3ebb5cc4f59e9d0e93aa2a74_tuple;
extern PyObject *const_tuple_str_plain_c1_str_plain_c2_tuple;
extern PyObject *const_str_plain_c0;
extern PyObject *const_str_plain__vander3d;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_np;
static PyObject *const_str_digest_e941b27bb800a69c805f24bf7ee09049;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_digest_bd7d3ccf91e4ab6eb4727b3575849f1a;
extern PyObject *const_str_plain__roots;
static PyObject *const_str_plain_leggauss;
static PyObject *const_str_digest_e7d499f020a2bd0c1a0bcdb10e37b531;
extern PyObject *const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple;
extern PyObject *const_str_plain__div;
extern PyObject *const_str_plain_scl;
static PyObject *const_str_digest_2ab6fd1974ce98fb094f158eab128cda;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_51c8b6abf71c35089f5380b3f3e0bc04;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_ndmin;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_64b84da60d1d69e4e065e8ab146f6e21 = UNSTREAM_STRING_ASCII( &constant_bin[ 2312454 ], 1604, 0 );
    const_str_plain_legweight = UNSTREAM_STRING_ASCII( &constant_bin[ 2314058 ], 9, 1 );
    const_str_plain_legval = UNSTREAM_STRING_ASCII( &constant_bin[ 2313964 ], 6, 1 );
    const_str_digest_c3c7c9f90583c17d917afae8020235e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2314067 ], 1303, 0 );
    const_str_digest_66bb1ddcec70db3f887aab7ff40c6c7d = UNSTREAM_STRING_ASCII( &constant_bin[ 2315370 ], 1209, 0 );
    const_str_plain_legline = UNSTREAM_STRING_ASCII( &constant_bin[ 2316579 ], 7, 1 );
    const_str_plain_poly2leg = UNSTREAM_STRING_ASCII( &constant_bin[ 2316586 ], 8, 1 );
    const_str_digest_1836e9e8bc8f8a3c6f5b817954c8956f = UNSTREAM_STRING_ASCII( &constant_bin[ 2316594 ], 1814, 0 );
    const_str_plain_legmul = UNSTREAM_STRING_ASCII( &constant_bin[ 2315927 ], 6, 1 );
    const_str_plain_legdomain = UNSTREAM_STRING_ASCII( &constant_bin[ 2318408 ], 9, 1 );
    const_str_digest_0b0c095930399aa2ef75f6ec4fae0476 = UNSTREAM_STRING_ASCII( &constant_bin[ 2318417 ], 1763, 0 );
    const_str_digest_4d940d48505137ef0b24cdef638c8343 = UNSTREAM_STRING_ASCII( &constant_bin[ 2320180 ], 525, 0 );
    const_str_plain_legval3d = UNSTREAM_STRING_ASCII( &constant_bin[ 2313983 ], 8, 1 );
    const_str_digest_9cdcbe6463a55ed28bc11b50a338e5ae = UNSTREAM_STRING_ASCII( &constant_bin[ 2320705 ], 660, 0 );
    const_str_digest_50486979601fa56e17e2e7c9d631e855 = UNSTREAM_STRING_ASCII( &constant_bin[ 2321365 ], 1421, 0 );
    const_str_plain_legpow = UNSTREAM_STRING_ASCII( &constant_bin[ 2315944 ], 6, 1 );
    const_str_plain_legvander2d = UNSTREAM_STRING_ASCII( &constant_bin[ 2322786 ], 11, 1 );
    const_str_plain_leg = UNSTREAM_STRING_ASCII( &constant_bin[ 101945 ], 3, 1 );
    const_str_digest_645bab58e06138e42775c0a5b820a50a = UNSTREAM_STRING_ASCII( &constant_bin[ 2322797 ], 3439, 0 );
    const_str_digest_2bcf8aeab040d22fc81d4f5e059f6690 = UNSTREAM_STRING_ASCII( &constant_bin[ 2326236 ], 489, 0 );
    const_str_plain_legvander = UNSTREAM_STRING_ASCII( &constant_bin[ 2314512 ], 9, 1 );
    const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple, 1, const_str_plain_prd ); Py_INCREF( const_str_plain_prd );
    PyTuple_SET_ITEM( const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple, 3, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_legmulx = UNSTREAM_STRING_ASCII( &constant_bin[ 2315927 ], 7, 1 );
    const_str_digest_ae8937c09e9dd3db3754bdf80b367e58 = UNSTREAM_STRING_ASCII( &constant_bin[ 2326725 ], 5025, 0 );
    const_str_digest_2bffd439738cf60c01fa68a3bc7169c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2331750 ], 793, 0 );
    const_list_cb7f181d757d9bb70e42e2f4885dd3f6_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2332543 ], 306 );
    const_str_plain_legsub = UNSTREAM_STRING_ASCII( &constant_bin[ 2315919 ], 6, 1 );
    const_str_plain_legvander3d = UNSTREAM_STRING_ASCII( &constant_bin[ 2317114 ], 11, 1 );
    const_str_digest_283cb7dac52cd3d2279909340923ada9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2332849 ], 1677, 0 );
    const_str_plain_leggrid2d = UNSTREAM_STRING_ASCII( &constant_bin[ 2313972 ], 9, 1 );
    const_str_digest_f6c80c0acfdfae06fe52f19516d8a5a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2334526 ], 1001, 0 );
    const_str_plain_legfromroots = UNSTREAM_STRING_ASCII( &constant_bin[ 2171924 ], 12, 1 );
    const_str_digest_1e25be283731f6e219321a9db6816dd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2335527 ], 2407, 0 );
    const_str_plain_legfit = UNSTREAM_STRING_ASCII( &constant_bin[ 2166566 ], 6, 1 );
    const_str_plain_legtrim = UNSTREAM_STRING_ASCII( &constant_bin[ 2332719 ], 7, 1 );
    const_str_digest_fdfb9cd747e053a8154bceca1c967362 = UNSTREAM_STRING_ASCII( &constant_bin[ 2337934 ], 1105, 0 );
    const_str_digest_d8e393830e65c14b3f5f2e2bcf0ce793 = UNSTREAM_STRING_ASCII( &constant_bin[ 2339039 ], 3024, 0 );
    const_str_plain_leggrid3d = UNSTREAM_STRING_ASCII( &constant_bin[ 2313993 ], 9, 1 );
    const_str_digest_2dde18637600520199a1f7df9178f8e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2342063 ], 1920, 0 );
    const_str_plain_legone = UNSTREAM_STRING_ASCII( &constant_bin[ 2332559 ], 6, 1 );
    const_str_plain_leg2poly = UNSTREAM_STRING_ASCII( &constant_bin[ 2332666 ], 8, 1 );
    const_str_digest_41343e85c36660215d4be3ea54c36220 = UNSTREAM_STRING_ASCII( &constant_bin[ 2343983 ], 1070, 0 );
    const_str_digest_e111a243f153b03bdf2c8122c15641bf = UNSTREAM_STRING_ASCII( &constant_bin[ 2320567 ], 25, 0 );
    const_str_digest_967588107b02010b9efcdcdac59512bf = UNSTREAM_STRING_ASCII( &constant_bin[ 2345053 ], 1694, 0 );
    const_str_plain_legadd = UNSTREAM_STRING_ASCII( &constant_bin[ 2315911 ], 6, 1 );
    const_str_plain_legzero = UNSTREAM_STRING_ASCII( &constant_bin[ 2332550 ], 7, 1 );
    const_str_plain_legval2d = UNSTREAM_STRING_ASCII( &constant_bin[ 2318334 ], 8, 1 );
    const_str_digest_c36cffd6c59d07a581011c24c5a6c0cb = UNSTREAM_STRING_ASCII( &constant_bin[ 2346747 ], 1242, 0 );
    const_str_plain_legdiv = UNSTREAM_STRING_ASCII( &constant_bin[ 2315936 ], 6, 1 );
    const_str_plain_legx = UNSTREAM_STRING_ASCII( &constant_bin[ 2332567 ], 4, 1 );
    const_str_plain_legder = UNSTREAM_STRING_ASCII( &constant_bin[ 2324951 ], 6, 1 );
    const_str_plain_legcompanion = UNSTREAM_STRING_ASCII( &constant_bin[ 2332816 ], 12, 1 );
    const_str_digest_6fd7c0642d42474f27fc0eb7d6b8efba = UNSTREAM_STRING_ASCII( &constant_bin[ 2347989 ], 34, 0 );
    const_str_digest_10c7d3749bf0751a1956e0e8e2fb54c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2348023 ], 1559, 0 );
    const_str_plain_legint = UNSTREAM_STRING_ASCII( &constant_bin[ 2325673 ], 6, 1 );
    const_str_plain_legroots = UNSTREAM_STRING_ASCII( &constant_bin[ 2173179 ], 8, 1 );
    const_str_digest_711a0201d952bbbaee313c2dd939cb20 = UNSTREAM_STRING_ASCII( &constant_bin[ 2349582 ], 770, 0 );
    const_str_digest_e941b27bb800a69c805f24bf7ee09049 = UNSTREAM_STRING_ASCII( &constant_bin[ 2350352 ], 1018, 0 );
    const_str_digest_bd7d3ccf91e4ab6eb4727b3575849f1a = UNSTREAM_STRING_ASCII( &constant_bin[ 2351370 ], 1867, 0 );
    const_str_plain_leggauss = UNSTREAM_STRING_ASCII( &constant_bin[ 2332830 ], 8, 1 );
    const_str_digest_e7d499f020a2bd0c1a0bcdb10e37b531 = UNSTREAM_STRING_ASCII( &constant_bin[ 2353237 ], 795, 0 );
    const_str_digest_2ab6fd1974ce98fb094f158eab128cda = UNSTREAM_STRING_ASCII( &constant_bin[ 2354032 ], 56, 0 );
    const_str_digest_51c8b6abf71c35089f5380b3f3e0bc04 = UNSTREAM_STRING_ASCII( &constant_bin[ 2354088 ], 1342, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial$legendre( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_40a0df6c662611fce317cda9c320e812;
static PyCodeObject *codeobj_43bc7a760dc713669a38fa99783a4e66;
static PyCodeObject *codeobj_74a0f1bfc74048fce829f5ca173570a6;
static PyCodeObject *codeobj_78688fab7f9b4b5b61fec228f04b0518;
static PyCodeObject *codeobj_237029e122b2e5c9e084da6ccccf75da;
static PyCodeObject *codeobj_1e268ca069c549b4e3ce589219186dd0;
static PyCodeObject *codeobj_2596edf088ef7543d03b1b749becad5d;
static PyCodeObject *codeobj_2d84e23a8bef1141c6350d787c0c43d9;
static PyCodeObject *codeobj_318e97af334a1b9f28d81621073a2176;
static PyCodeObject *codeobj_1f8987d114f8cffa5fcdb5f8f46438b7;
static PyCodeObject *codeobj_62b69ac06fe6d04a886ab336633d1547;
static PyCodeObject *codeobj_117167350366196be5b9fbb6d735383c;
static PyCodeObject *codeobj_824a4cfc4abb3e5c82432c7a8375a2c4;
static PyCodeObject *codeobj_5667236fa68992a939e635755a17f864;
static PyCodeObject *codeobj_a6956d53047b6254714bc69f70108032;
static PyCodeObject *codeobj_739d86295ee9ed31e3412aaf50e02729;
static PyCodeObject *codeobj_7ad68996df55e68f840055803259e0ec;
static PyCodeObject *codeobj_603e8aa634a983388801ac525f776371;
static PyCodeObject *codeobj_64b269b30d0f89511d8e4136496fec4e;
static PyCodeObject *codeobj_4eadfd694d98bb0a72bf1a8fb14e583a;
static PyCodeObject *codeobj_a585d7c18203fb83cb37e1640d15d479;
static PyCodeObject *codeobj_505b01b53ff0dbb5b86d8974fe265afb;
static PyCodeObject *codeobj_35e444755c524a4bc123a8222732a23a;
static PyCodeObject *codeobj_1532167445b7bec046e6d1004e39bd19;
static PyCodeObject *codeobj_0f03de859633271c41bbbe98d54f5f61;
static PyCodeObject *codeobj_0c1675adca5393eafe4d8e698910dd40;
static PyCodeObject *codeobj_49b3cd53b17dbf077a9e138c7c8bc056;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2ab6fd1974ce98fb094f158eab128cda;
    codeobj_40a0df6c662611fce317cda9c320e812 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6fd7c0642d42474f27fc0eb7d6b8efba, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_43bc7a760dc713669a38fa99783a4e66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Legendre, 1613, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_74a0f1bfc74048fce829f5ca173570a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_leg2poly, 153, const_tuple_c4b91bcb0776c1f61b0508de5afe5070_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_78688fab7f9b4b5b61fec228f04b0518 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legadd, 319, const_tuple_str_plain_c1_str_plain_c2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_237029e122b2e5c9e084da6ccccf75da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legcompanion, 1413, const_tuple_03b7673e655b056e4f0304ce1db40177_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1e268ca069c549b4e3ce589219186dd0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legder, 612, const_tuple_9155005e41c3737e8ba43420c4730900_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2596edf088ef7543d03b1b749becad5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legdiv, 529, const_tuple_str_plain_c1_str_plain_c2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d84e23a8bef1141c6350d787c0c43d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legfit, 1289, const_tuple_b87a3e87a6253db629058266b0859839_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_318e97af334a1b9f28d81621073a2176 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legfromroots, 268, const_tuple_str_plain_roots_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f8987d114f8cffa5fcdb5f8f46438b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_leggauss, 1514, const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_62b69ac06fe6d04a886ab336633d1547 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_leggrid2d, 969, const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_117167350366196be5b9fbb6d735383c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_leggrid3d, 1073, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_824a4cfc4abb3e5c82432c7a8375a2c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legint, 704, const_tuple_c189a7ca3ebb5cc4f59e9d0e93aa2a74_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5667236fa68992a939e635755a17f864 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legline, 232, const_tuple_str_plain_off_str_plain_scl_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a6956d53047b6254714bc69f70108032 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legmul, 461, const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_739d86295ee9ed31e3412aaf50e02729 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legmulx, 405, const_tuple_9f9c15c111aaec597f4d3af4a914c342_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ad68996df55e68f840055803259e0ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legpow, 578, const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_603e8aa634a983388801ac525f776371 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legroots, 1457, const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64b269b30d0f89511d8e4136496fec4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legsub, 361, const_tuple_str_plain_c1_str_plain_c2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4eadfd694d98bb0a72bf1a8fb14e583a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legval, 832, const_tuple_c8b80e0c5c664bd12431d3bbcaf08d6d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a585d7c18203fb83cb37e1640d15d479 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legval2d, 920, const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_505b01b53ff0dbb5b86d8974fe265afb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legval3d, 1022, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35e444755c524a4bc123a8222732a23a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legvander, 1129, const_tuple_5ac5563309656f6342973420ec643c7c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1532167445b7bec046e6d1004e39bd19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legvander2d, 1182, const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f03de859633271c41bbbe98d54f5f61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legvander3d, 1235, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0c1675adca5393eafe4d8e698910dd40 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_legweight, 1582, const_tuple_str_plain_x_str_plain_w_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_49b3cd53b17dbf077a9e138c7c8bc056 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_poly2leg, 105, const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_10_legpow( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_11_legder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_12_legint( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_13_legval( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_14_legval2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_15_leggrid2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_16_legval3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_17_leggrid3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_18_legvander(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_19_legvander2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_1_poly2leg(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_20_legvander3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_21_legfit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_22_legcompanion(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_23_legroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_24_leggauss(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_25_legweight(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_2_leg2poly(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_3_legline(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_4_legfromroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_5_legadd(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_6_legsub(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_7_legmulx(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_8_legmul(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_9_legdiv(  );


// The module function definitions.
static PyObject *impl_numpy$polynomial$legendre$$$function_1_poly2leg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pol = python_pars[ 0 ];
    PyObject *var_deg = NULL;
    PyObject *var_res = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_49b3cd53b17dbf077a9e138c7c8bc056;
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
    static struct Nuitka_FrameObject *cache_frame_49b3cd53b17dbf077a9e138c7c8bc056 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_49b3cd53b17dbf077a9e138c7c8bc056, codeobj_49b3cd53b17dbf077a9e138c7c8bc056, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_49b3cd53b17dbf077a9e138c7c8bc056 = cache_frame_49b3cd53b17dbf077a9e138c7c8bc056;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_49b3cd53b17dbf077a9e138c7c8bc056 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_49b3cd53b17dbf077a9e138c7c8bc056 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_pol );
        tmp_list_element_1 = par_pol;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_49b3cd53b17dbf077a9e138c7c8bc056->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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
            exception_lineno = 145;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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
                    exception_lineno = 145;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
            exception_lineno = 145;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_pol;
            assert( old != NULL );
            par_pol = tmp_assign_source_3;
            Py_INCREF( par_pol );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_pol );
        tmp_len_arg_1 = par_pol;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        assert( var_deg == NULL );
        var_deg = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_0;
        assert( var_res == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_res = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_xrange_step_1;
        CHECK_OBJECT( var_deg );
        tmp_xrange_low_1 = var_deg;
        tmp_xrange_high_1 = const_int_neg_1;
        tmp_xrange_step_1 = const_int_neg_1;
        tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 148;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_8;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legadd );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legadd );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legadd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmulx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmulx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmulx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_res );
        tmp_args_element_name_3 = var_res;
        frame_49b3cd53b17dbf077a9e138c7c8bc056->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_pol );
        tmp_subscribed_name_1 = par_pol;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_1 = var_i;
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_49b3cd53b17dbf077a9e138c7c8bc056->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_res;
            assert( old != NULL );
            var_res = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooo";
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
    RESTORE_FRAME_EXCEPTION( frame_49b3cd53b17dbf077a9e138c7c8bc056 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_49b3cd53b17dbf077a9e138c7c8bc056 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_49b3cd53b17dbf077a9e138c7c8bc056, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_49b3cd53b17dbf077a9e138c7c8bc056->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_49b3cd53b17dbf077a9e138c7c8bc056, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_49b3cd53b17dbf077a9e138c7c8bc056,
        type_description_1,
        par_pol,
        var_deg,
        var_res,
        var_i
    );


    // Release cached frame.
    if ( frame_49b3cd53b17dbf077a9e138c7c8bc056 == cache_frame_49b3cd53b17dbf077a9e138c7c8bc056 )
    {
        Py_DECREF( frame_49b3cd53b17dbf077a9e138c7c8bc056 );
    }
    cache_frame_49b3cd53b17dbf077a9e138c7c8bc056 = NULL;

    assertFrameObject( frame_49b3cd53b17dbf077a9e138c7c8bc056 );

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

    CHECK_OBJECT( var_res );
    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_1_poly2leg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pol );
    Py_DECREF( par_pol );
    par_pol = NULL;

    CHECK_OBJECT( (PyObject *)var_deg );
    Py_DECREF( var_deg );
    var_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pol );
    Py_DECREF( par_pol );
    par_pol = NULL;

    Py_XDECREF( var_deg );
    var_deg = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_1_poly2leg );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_2_leg2poly( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_polyadd = NULL;
    PyObject *var_polysub = NULL;
    PyObject *var_polymulx = NULL;
    PyObject *var_n = NULL;
    PyObject *var_c0 = NULL;
    PyObject *var_c1 = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tmp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_74a0f1bfc74048fce829f5ca173570a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_74a0f1bfc74048fce829f5ca173570a6 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_74a0f1bfc74048fce829f5ca173570a6, codeobj_74a0f1bfc74048fce829f5ca173570a6, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_74a0f1bfc74048fce829f5ca173570a6 = cache_frame_74a0f1bfc74048fce829f5ca173570a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_74a0f1bfc74048fce829f5ca173570a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_74a0f1bfc74048fce829f5ca173570a6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_polynomial;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$polynomial$legendre;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_polyadd_str_plain_polysub_str_plain_polymulx_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_74a0f1bfc74048fce829f5ca173570a6->m_frame.f_lineno = 198;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$polynomial$legendre,
                const_str_plain_polyadd,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_polyadd );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_polyadd == NULL );
        var_polyadd = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$polynomial$legendre,
                const_str_plain_polysub,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_polysub );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_polysub == NULL );
        var_polysub = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_numpy$polynomial$legendre,
                const_str_plain_polymulx,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_polymulx );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_polymulx == NULL );
        var_polymulx = tmp_assign_source_4;
    }
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

    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 200;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_74a0f1bfc74048fce829f5ca173570a6->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
        if ( tmp_assign_source_6 == NULL )
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
            exception_lineno = 200;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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
                    exception_lineno = 200;
                    goto try_except_handler_4;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooo";
            exception_lineno = 200;
            goto try_except_handler_4;
        }
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_7;
            Py_INCREF( par_c );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_c );
        tmp_len_arg_1 = par_c;
        tmp_assign_source_8 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_1 = var_n;
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        assert( !(tmp_res == -1) );
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
        CHECK_OBJECT( par_c );
        tmp_return_value = par_c;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_int_neg_2;
            tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c0 == NULL );
            var_c0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_2 = par_c;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c1 == NULL );
            var_c1 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_xrange_step_1;
            CHECK_OBJECT( var_n );
            tmp_left_name_1 = var_n;
            tmp_right_name_1 = const_int_pos_1;
            tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
            assert( !(tmp_xrange_low_1 == NULL) );
            tmp_xrange_high_1 = const_int_pos_1;
            tmp_xrange_step_1 = const_int_neg_1;
            tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_11;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooo";
                    exception_lineno = 208;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_13 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_13;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( var_c0 );
            tmp_assign_source_14 = var_c0;
            {
                PyObject *old = var_tmp;
                var_tmp = tmp_assign_source_14;
                Py_INCREF( var_tmp );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_polysub );
            tmp_called_name_1 = var_polysub;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_3 = par_c;
            CHECK_OBJECT( var_i );
            tmp_left_name_2 = var_i;
            tmp_right_name_2 = const_int_pos_2;
            tmp_subscript_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_subscript_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_c1 );
            tmp_left_name_4 = var_c1;
            CHECK_OBJECT( var_i );
            tmp_left_name_5 = var_i;
            tmp_right_name_4 = const_int_pos_1;
            tmp_right_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 210;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 210;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_i );
            tmp_right_name_5 = var_i;
            tmp_args_element_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 210;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            frame_74a0f1bfc74048fce829f5ca173570a6->m_frame.f_lineno = 210;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = var_c0;
                assert( old != NULL );
                var_c0 = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( var_polyadd );
            tmp_called_name_2 = var_polyadd;
            CHECK_OBJECT( var_tmp );
            tmp_args_element_name_4 = var_tmp;
            CHECK_OBJECT( var_polymulx );
            tmp_called_name_3 = var_polymulx;
            CHECK_OBJECT( var_c1 );
            tmp_args_element_name_6 = var_c1;
            frame_74a0f1bfc74048fce829f5ca173570a6->m_frame.f_lineno = 211;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_left_name_9 = const_int_pos_2;
            CHECK_OBJECT( var_i );
            tmp_right_name_7 = var_i;
            tmp_left_name_8 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_9, tmp_right_name_7 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 211;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_right_name_8 = const_int_pos_1;
            tmp_right_name_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 211;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_i );
            tmp_right_name_9 = var_i;
            tmp_args_element_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            frame_74a0f1bfc74048fce829f5ca173570a6->m_frame.f_lineno = 211;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = var_c1;
                assert( old != NULL );
                var_c1 = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
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
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( var_polyadd );
            tmp_called_name_4 = var_polyadd;
            CHECK_OBJECT( var_c0 );
            tmp_args_element_name_7 = var_c0;
            CHECK_OBJECT( var_polymulx );
            tmp_called_name_5 = var_polymulx;
            CHECK_OBJECT( var_c1 );
            tmp_args_element_name_9 = var_c1;
            frame_74a0f1bfc74048fce829f5ca173570a6->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_74a0f1bfc74048fce829f5ca173570a6->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74a0f1bfc74048fce829f5ca173570a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_74a0f1bfc74048fce829f5ca173570a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74a0f1bfc74048fce829f5ca173570a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_74a0f1bfc74048fce829f5ca173570a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_74a0f1bfc74048fce829f5ca173570a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_74a0f1bfc74048fce829f5ca173570a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74a0f1bfc74048fce829f5ca173570a6,
        type_description_1,
        par_c,
        var_polyadd,
        var_polysub,
        var_polymulx,
        var_n,
        var_c0,
        var_c1,
        var_i,
        var_tmp
    );


    // Release cached frame.
    if ( frame_74a0f1bfc74048fce829f5ca173570a6 == cache_frame_74a0f1bfc74048fce829f5ca173570a6 )
    {
        Py_DECREF( frame_74a0f1bfc74048fce829f5ca173570a6 );
    }
    cache_frame_74a0f1bfc74048fce829f5ca173570a6 = NULL;

    assertFrameObject( frame_74a0f1bfc74048fce829f5ca173570a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_2_leg2poly );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)var_polyadd );
    Py_DECREF( var_polyadd );
    var_polyadd = NULL;

    CHECK_OBJECT( (PyObject *)var_polysub );
    Py_DECREF( var_polysub );
    var_polysub = NULL;

    CHECK_OBJECT( (PyObject *)var_polymulx );
    Py_DECREF( var_polymulx );
    var_polymulx = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_polyadd );
    var_polyadd = NULL;

    Py_XDECREF( var_polysub );
    var_polysub = NULL;

    Py_XDECREF( var_polymulx );
    var_polymulx = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_2_leg2poly );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_3_legline( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_off = python_pars[ 0 ];
    PyObject *par_scl = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_5667236fa68992a939e635755a17f864;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5667236fa68992a939e635755a17f864 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5667236fa68992a939e635755a17f864, codeobj_5667236fa68992a939e635755a17f864, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *) );
    frame_5667236fa68992a939e635755a17f864 = cache_frame_5667236fa68992a939e635755a17f864;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5667236fa68992a939e635755a17f864 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5667236fa68992a939e635755a17f864 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_scl );
        tmp_compexpr_left_1 = par_scl;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_list_element_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 263;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_off );
            tmp_list_element_1 = par_off;
            tmp_args_element_name_1 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
            CHECK_OBJECT( par_scl );
            tmp_list_element_1 = par_scl;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
            frame_5667236fa68992a939e635755a17f864->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_list_element_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 265;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_off );
            tmp_list_element_2 = par_off;
            tmp_args_element_name_2 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
            frame_5667236fa68992a939e635755a17f864->m_frame.f_lineno = 265;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5667236fa68992a939e635755a17f864 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5667236fa68992a939e635755a17f864 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5667236fa68992a939e635755a17f864 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5667236fa68992a939e635755a17f864, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5667236fa68992a939e635755a17f864->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5667236fa68992a939e635755a17f864, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5667236fa68992a939e635755a17f864,
        type_description_1,
        par_off,
        par_scl
    );


    // Release cached frame.
    if ( frame_5667236fa68992a939e635755a17f864 == cache_frame_5667236fa68992a939e635755a17f864 )
    {
        Py_DECREF( frame_5667236fa68992a939e635755a17f864 );
    }
    cache_frame_5667236fa68992a939e635755a17f864 = NULL;

    assertFrameObject( frame_5667236fa68992a939e635755a17f864 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_3_legline );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_off );
    Py_DECREF( par_off );
    par_off = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

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

    CHECK_OBJECT( (PyObject *)par_off );
    Py_DECREF( par_off );
    par_off = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_3_legline );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_4_legfromroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_roots = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_318e97af334a1b9f28d81621073a2176;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_318e97af334a1b9f28d81621073a2176 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_318e97af334a1b9f28d81621073a2176, codeobj_318e97af334a1b9f28d81621073a2176, module_numpy$polynomial$legendre, sizeof(void *) );
    frame_318e97af334a1b9f28d81621073a2176 = cache_frame_318e97af334a1b9f28d81621073a2176;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_318e97af334a1b9f28d81621073a2176 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_318e97af334a1b9f28d81621073a2176 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fromroots );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legline );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legline );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legline" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmul );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmul );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmul" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_roots );
        tmp_args_element_name_3 = par_roots;
        frame_318e97af334a1b9f28d81621073a2176->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_318e97af334a1b9f28d81621073a2176 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_318e97af334a1b9f28d81621073a2176 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_318e97af334a1b9f28d81621073a2176 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_318e97af334a1b9f28d81621073a2176, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_318e97af334a1b9f28d81621073a2176->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_318e97af334a1b9f28d81621073a2176, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_318e97af334a1b9f28d81621073a2176,
        type_description_1,
        par_roots
    );


    // Release cached frame.
    if ( frame_318e97af334a1b9f28d81621073a2176 == cache_frame_318e97af334a1b9f28d81621073a2176 )
    {
        Py_DECREF( frame_318e97af334a1b9f28d81621073a2176 );
    }
    cache_frame_318e97af334a1b9f28d81621073a2176 = NULL;

    assertFrameObject( frame_318e97af334a1b9f28d81621073a2176 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_4_legfromroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

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

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_4_legfromroots );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_5_legadd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_78688fab7f9b4b5b61fec228f04b0518;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_78688fab7f9b4b5b61fec228f04b0518 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78688fab7f9b4b5b61fec228f04b0518, codeobj_78688fab7f9b4b5b61fec228f04b0518, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *) );
    frame_78688fab7f9b4b5b61fec228f04b0518 = cache_frame_78688fab7f9b4b5b61fec228f04b0518;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78688fab7f9b4b5b61fec228f04b0518 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78688fab7f9b4b5b61fec228f04b0518 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_args_element_name_1 = par_c1;
        CHECK_OBJECT( par_c2 );
        tmp_args_element_name_2 = par_c2;
        frame_78688fab7f9b4b5b61fec228f04b0518->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__add, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78688fab7f9b4b5b61fec228f04b0518 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_78688fab7f9b4b5b61fec228f04b0518 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78688fab7f9b4b5b61fec228f04b0518 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78688fab7f9b4b5b61fec228f04b0518, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78688fab7f9b4b5b61fec228f04b0518->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78688fab7f9b4b5b61fec228f04b0518, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78688fab7f9b4b5b61fec228f04b0518,
        type_description_1,
        par_c1,
        par_c2
    );


    // Release cached frame.
    if ( frame_78688fab7f9b4b5b61fec228f04b0518 == cache_frame_78688fab7f9b4b5b61fec228f04b0518 )
    {
        Py_DECREF( frame_78688fab7f9b4b5b61fec228f04b0518 );
    }
    cache_frame_78688fab7f9b4b5b61fec228f04b0518 = NULL;

    assertFrameObject( frame_78688fab7f9b4b5b61fec228f04b0518 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_5_legadd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_5_legadd );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_6_legsub( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_64b269b30d0f89511d8e4136496fec4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64b269b30d0f89511d8e4136496fec4e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64b269b30d0f89511d8e4136496fec4e, codeobj_64b269b30d0f89511d8e4136496fec4e, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *) );
    frame_64b269b30d0f89511d8e4136496fec4e = cache_frame_64b269b30d0f89511d8e4136496fec4e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64b269b30d0f89511d8e4136496fec4e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64b269b30d0f89511d8e4136496fec4e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_args_element_name_1 = par_c1;
        CHECK_OBJECT( par_c2 );
        tmp_args_element_name_2 = par_c2;
        frame_64b269b30d0f89511d8e4136496fec4e->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__sub, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64b269b30d0f89511d8e4136496fec4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64b269b30d0f89511d8e4136496fec4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64b269b30d0f89511d8e4136496fec4e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64b269b30d0f89511d8e4136496fec4e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64b269b30d0f89511d8e4136496fec4e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64b269b30d0f89511d8e4136496fec4e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64b269b30d0f89511d8e4136496fec4e,
        type_description_1,
        par_c1,
        par_c2
    );


    // Release cached frame.
    if ( frame_64b269b30d0f89511d8e4136496fec4e == cache_frame_64b269b30d0f89511d8e4136496fec4e )
    {
        Py_DECREF( frame_64b269b30d0f89511d8e4136496fec4e );
    }
    cache_frame_64b269b30d0f89511d8e4136496fec4e = NULL;

    assertFrameObject( frame_64b269b30d0f89511d8e4136496fec4e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_6_legsub );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_6_legsub );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_7_legmulx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_prd = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_k = NULL;
    PyObject *var_s = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_739d86295ee9ed31e3412aaf50e02729;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_739d86295ee9ed31e3412aaf50e02729 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_739d86295ee9ed31e3412aaf50e02729, codeobj_739d86295ee9ed31e3412aaf50e02729, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_739d86295ee9ed31e3412aaf50e02729 = cache_frame_739d86295ee9ed31e3412aaf50e02729;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_739d86295ee9ed31e3412aaf50e02729 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_739d86295ee9ed31e3412aaf50e02729 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_739d86295ee9ed31e3412aaf50e02729->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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
            exception_lineno = 444;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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
                    exception_lineno = 444;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooo";
            exception_lineno = 444;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_3;
            Py_INCREF( par_c );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_c );
        tmp_len_arg_1 = par_c;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_1 = par_c;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_c );
        tmp_return_value = par_c;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_empty );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_len_arg_2 = par_c;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_tuple_element_1 == NULL) );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_c );
        tmp_source_name_2 = par_c;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_739d86295ee9ed31e3412aaf50e02729->m_frame.f_lineno = 449;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prd == NULL );
        var_prd = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_2 = par_c;
        tmp_subscript_name_2 = const_int_0;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_0;
        tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_prd );
        tmp_ass_subscribed_1 = var_prd;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_3 = par_c;
        tmp_subscript_name_3 = const_int_0;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_prd );
        tmp_ass_subscribed_2 = var_prd;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_3;
        tmp_xrange_low_1 = const_int_pos_1;
        CHECK_OBJECT( par_c );
        tmp_len_arg_3 = par_c;
        tmp_xrange_high_1 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 452;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_7;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_i );
        tmp_left_name_3 = var_i;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_i );
        tmp_left_name_4 = var_i;
        tmp_right_name_4 = const_int_pos_1;
        tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_i );
        tmp_left_name_5 = var_i;
        CHECK_OBJECT( var_j );
        tmp_right_name_5 = var_j;
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 455;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_4 = par_c;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_4 = var_i;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_j );
        tmp_right_name_6 = var_j;
        tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_s );
        tmp_right_name_7 = var_s;
        tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_prd );
        tmp_ass_subscribed_3 = var_prd;
        CHECK_OBJECT( var_j );
        tmp_ass_subscript_3 = var_j;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( var_prd );
        tmp_assign_source_11 = var_prd;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_11;
            Py_INCREF( tmp_inplace_assign_subscr_1__target );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( var_k );
        tmp_assign_source_12 = var_k;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_12;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_8;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_5 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_5 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_6 = par_c;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_6 = var_i;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 457;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_i );
        tmp_right_name_9 = var_i;
        tmp_left_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 457;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_s );
        tmp_right_name_10 = var_s;
        tmp_right_name_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 457;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_4 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_4 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_739d86295ee9ed31e3412aaf50e02729 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_739d86295ee9ed31e3412aaf50e02729 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_739d86295ee9ed31e3412aaf50e02729 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_739d86295ee9ed31e3412aaf50e02729, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_739d86295ee9ed31e3412aaf50e02729->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_739d86295ee9ed31e3412aaf50e02729, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_739d86295ee9ed31e3412aaf50e02729,
        type_description_1,
        par_c,
        var_prd,
        var_i,
        var_j,
        var_k,
        var_s
    );


    // Release cached frame.
    if ( frame_739d86295ee9ed31e3412aaf50e02729 == cache_frame_739d86295ee9ed31e3412aaf50e02729 )
    {
        Py_DECREF( frame_739d86295ee9ed31e3412aaf50e02729 );
    }
    cache_frame_739d86295ee9ed31e3412aaf50e02729 = NULL;

    assertFrameObject( frame_739d86295ee9ed31e3412aaf50e02729 );

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

    CHECK_OBJECT( var_prd );
    tmp_return_value = var_prd;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_7_legmulx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_7_legmulx );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_8_legmul( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    PyObject *var_c = NULL;
    PyObject *var_xs = NULL;
    PyObject *var_c0 = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tmp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a6956d53047b6254714bc69f70108032;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a6956d53047b6254714bc69f70108032 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a6956d53047b6254714bc69f70108032, codeobj_a6956d53047b6254714bc69f70108032, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a6956d53047b6254714bc69f70108032 = cache_frame_a6956d53047b6254714bc69f70108032;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a6956d53047b6254714bc69f70108032 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a6956d53047b6254714bc69f70108032 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 502;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_list_element_1 = par_c1;
        tmp_args_element_name_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_c2 );
        tmp_list_element_1 = par_c2;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        frame_a6956d53047b6254714bc69f70108032->m_frame.f_lineno = 502;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "oooooooo";
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


            type_description_1 = "oooooooo";
            exception_lineno = 502;
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


            type_description_1 = "oooooooo";
            exception_lineno = 502;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 502;
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

            type_description_1 = "oooooooo";
            exception_lineno = 502;
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
            PyObject *old = par_c1;
            assert( old != NULL );
            par_c1 = tmp_assign_source_4;
            Py_INCREF( par_c1 );
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
            PyObject *old = par_c2;
            assert( old != NULL );
            par_c2 = tmp_assign_source_5;
            Py_INCREF( par_c2 );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_c1 );
        tmp_len_arg_1 = par_c1;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c2 );
        tmp_len_arg_2 = par_c2;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 504;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( par_c2 );
            tmp_assign_source_6 = par_c2;
            assert( var_c == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_c = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( par_c1 );
            tmp_assign_source_7 = par_c1;
            assert( var_xs == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_xs = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( par_c1 );
            tmp_assign_source_8 = par_c1;
            assert( var_c == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_c = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( par_c2 );
            tmp_assign_source_9 = par_c2;
            assert( var_xs == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_xs = tmp_assign_source_9;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( var_c );
        tmp_len_arg_3 = var_c;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_c );
            tmp_subscribed_name_1 = var_c;
            tmp_subscript_name_1 = const_int_0;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 512;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_xs );
            tmp_right_name_1 = var_xs;
            tmp_assign_source_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 512;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c0 == NULL );
            var_c0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = const_int_0;
            {
                PyObject *old = par_c1;
                assert( old != NULL );
                par_c1 = tmp_assign_source_11;
                Py_INCREF( par_c1 );
                Py_DECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_len_arg_4;
            CHECK_OBJECT( var_c );
            tmp_len_arg_4 = var_c;
            tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 514;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_12;
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( var_c );
                tmp_subscribed_name_2 = var_c;
                tmp_subscript_name_2 = const_int_0;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 515;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_xs );
                tmp_right_name_2 = var_xs;
                tmp_assign_source_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 515;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c0 == NULL );
                var_c0 = tmp_assign_source_12;
            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_left_name_3;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( var_c );
                tmp_subscribed_name_3 = var_c;
                tmp_subscript_name_3 = const_int_pos_1;
                tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_xs );
                tmp_right_name_3 = var_xs;
                tmp_assign_source_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_c1;
                    assert( old != NULL );
                    par_c1 = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_len_arg_5;
                CHECK_OBJECT( var_c );
                tmp_len_arg_5 = var_c;
                tmp_assign_source_14 = BUILTIN_LEN( tmp_len_arg_5 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 518;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_nd == NULL );
                var_nd = tmp_assign_source_14;
            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_left_name_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( var_c );
                tmp_subscribed_name_4 = var_c;
                tmp_subscript_name_4 = const_int_neg_2;
                tmp_left_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -2 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 519;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_xs );
                tmp_right_name_4 = var_xs;
                tmp_assign_source_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 519;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c0 == NULL );
                var_c0 = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_left_name_5;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( var_c );
                tmp_subscribed_name_5 = var_c;
                tmp_subscript_name_5 = const_int_neg_1;
                tmp_left_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, -1 );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 520;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_xs );
                tmp_right_name_5 = var_xs;
                tmp_assign_source_16 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 520;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_c1;
                    assert( old != NULL );
                    par_c1 = tmp_assign_source_16;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_xrange_low_1;
                PyObject *tmp_xrange_high_1;
                PyObject *tmp_left_name_6;
                PyObject *tmp_len_arg_6;
                PyObject *tmp_right_name_6;
                tmp_xrange_low_1 = const_int_pos_3;
                CHECK_OBJECT( var_c );
                tmp_len_arg_6 = var_c;
                tmp_left_name_6 = BUILTIN_LEN( tmp_len_arg_6 );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_6 = const_int_pos_1;
                tmp_xrange_high_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_6 );
                assert( !(tmp_xrange_high_1 == NULL) );
                tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
                Py_DECREF( tmp_xrange_high_1 );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 521;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_1__for_iterator == NULL );
                tmp_for_loop_1__for_iterator = tmp_assign_source_17;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_18 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooo";
                        exception_lineno = 521;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_18;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT( tmp_for_loop_1__iter_value );
                tmp_assign_source_19 = tmp_for_loop_1__iter_value;
                {
                    PyObject *old = var_i;
                    var_i = tmp_assign_source_19;
                    Py_INCREF( var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_20;
                CHECK_OBJECT( var_c0 );
                tmp_assign_source_20 = var_c0;
                {
                    PyObject *old = var_tmp;
                    var_tmp = tmp_assign_source_20;
                    Py_INCREF( var_tmp );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                CHECK_OBJECT( var_nd );
                tmp_left_name_7 = var_nd;
                tmp_right_name_7 = const_int_pos_1;
                tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
                if ( tmp_assign_source_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 523;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_nd;
                    assert( old != NULL );
                    var_nd = tmp_assign_source_21;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_left_name_8;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_right_name_8;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_left_name_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_9;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_10;
                PyObject *tmp_right_name_11;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legsub );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legsub );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legsub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                CHECK_OBJECT( var_c );
                tmp_subscribed_name_6 = var_c;
                CHECK_OBJECT( var_i );
                tmp_operand_name_1 = var_i;
                tmp_subscript_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                if ( tmp_subscript_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscript_name_6 );
                if ( tmp_left_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_xs );
                tmp_right_name_8 = var_xs;
                tmp_args_element_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_left_name_8 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_c1 );
                tmp_left_name_10 = par_c1;
                CHECK_OBJECT( var_nd );
                tmp_left_name_11 = var_nd;
                tmp_right_name_10 = const_int_pos_1;
                tmp_right_name_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_10 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_2 );

                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_left_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_2 );

                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_nd );
                tmp_right_name_11 = var_nd;
                tmp_args_element_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_11 );
                Py_DECREF( tmp_left_name_9 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_2 );

                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                frame_a6956d53047b6254714bc69f70108032->m_frame.f_lineno = 524;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_2 );
                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_assign_source_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_c0;
                    assert( old != NULL );
                    var_c0 = tmp_assign_source_22;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_left_name_12;
                PyObject *tmp_left_name_13;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_right_name_12;
                PyObject *tmp_left_name_14;
                PyObject *tmp_left_name_15;
                PyObject *tmp_right_name_13;
                PyObject *tmp_right_name_14;
                PyObject *tmp_right_name_15;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legadd );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legadd );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legadd" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                CHECK_OBJECT( var_tmp );
                tmp_args_element_name_4 = var_tmp;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmulx );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmulx );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmulx" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                CHECK_OBJECT( par_c1 );
                tmp_args_element_name_6 = par_c1;
                frame_a6956d53047b6254714bc69f70108032->m_frame.f_lineno = 525;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_left_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_left_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_left_name_15 = const_int_pos_2;
                CHECK_OBJECT( var_nd );
                tmp_right_name_13 = var_nd;
                tmp_left_name_14 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_15, tmp_right_name_13 );
                if ( tmp_left_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );

                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_right_name_14 = const_int_pos_1;
                tmp_right_name_12 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_left_name_14 );
                if ( tmp_right_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );

                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_left_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
                Py_DECREF( tmp_left_name_13 );
                Py_DECREF( tmp_right_name_12 );
                if ( tmp_left_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_nd );
                tmp_right_name_15 = var_nd;
                tmp_args_element_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_15 );
                Py_DECREF( tmp_left_name_12 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                frame_a6956d53047b6254714bc69f70108032->m_frame.f_lineno = 525;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assign_source_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 525;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = par_c1;
                    assert( old != NULL );
                    par_c1 = tmp_assign_source_23;
                    Py_DECREF( old );
                }

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 521;
                type_description_1 = "oooooooo";
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

            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legadd );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legadd );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legadd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 526;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        if ( var_c0 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 526;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = var_c0;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmulx );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmulx );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmulx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 526;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        if ( par_c1 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 526;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_c1;
        frame_a6956d53047b6254714bc69f70108032->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_a6956d53047b6254714bc69f70108032->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6956d53047b6254714bc69f70108032 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6956d53047b6254714bc69f70108032 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6956d53047b6254714bc69f70108032 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a6956d53047b6254714bc69f70108032, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a6956d53047b6254714bc69f70108032->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a6956d53047b6254714bc69f70108032, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6956d53047b6254714bc69f70108032,
        type_description_1,
        par_c1,
        par_c2,
        var_c,
        var_xs,
        var_c0,
        var_nd,
        var_i,
        var_tmp
    );


    // Release cached frame.
    if ( frame_a6956d53047b6254714bc69f70108032 == cache_frame_a6956d53047b6254714bc69f70108032 )
    {
        Py_DECREF( frame_a6956d53047b6254714bc69f70108032 );
    }
    cache_frame_a6956d53047b6254714bc69f70108032 = NULL;

    assertFrameObject( frame_a6956d53047b6254714bc69f70108032 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_8_legmul );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_xs );
    Py_DECREF( var_xs );
    var_xs = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

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

    Py_XDECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_xs );
    var_xs = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_8_legmul );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_9_legdiv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2596edf088ef7543d03b1b749becad5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2596edf088ef7543d03b1b749becad5d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2596edf088ef7543d03b1b749becad5d, codeobj_2596edf088ef7543d03b1b749becad5d, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *) );
    frame_2596edf088ef7543d03b1b749becad5d = cache_frame_2596edf088ef7543d03b1b749becad5d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2596edf088ef7543d03b1b749becad5d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2596edf088ef7543d03b1b749becad5d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 575;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__div );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmul );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmul );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmul" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 575;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_c1 );
        tmp_args_element_name_2 = par_c1;
        CHECK_OBJECT( par_c2 );
        tmp_args_element_name_3 = par_c2;
        frame_2596edf088ef7543d03b1b749becad5d->m_frame.f_lineno = 575;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2596edf088ef7543d03b1b749becad5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2596edf088ef7543d03b1b749becad5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2596edf088ef7543d03b1b749becad5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2596edf088ef7543d03b1b749becad5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2596edf088ef7543d03b1b749becad5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2596edf088ef7543d03b1b749becad5d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2596edf088ef7543d03b1b749becad5d,
        type_description_1,
        par_c1,
        par_c2
    );


    // Release cached frame.
    if ( frame_2596edf088ef7543d03b1b749becad5d == cache_frame_2596edf088ef7543d03b1b749becad5d )
    {
        Py_DECREF( frame_2596edf088ef7543d03b1b749becad5d );
    }
    cache_frame_2596edf088ef7543d03b1b749becad5d = NULL;

    assertFrameObject( frame_2596edf088ef7543d03b1b749becad5d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_9_legdiv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_9_legdiv );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_10_legpow( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_pow = python_pars[ 1 ];
    PyObject *par_maxpower = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7ad68996df55e68f840055803259e0ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ad68996df55e68f840055803259e0ec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ad68996df55e68f840055803259e0ec, codeobj_7ad68996df55e68f840055803259e0ec, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ad68996df55e68f840055803259e0ec = cache_frame_7ad68996df55e68f840055803259e0ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ad68996df55e68f840055803259e0ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ad68996df55e68f840055803259e0ec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 609;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pow );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 609;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmul );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmul );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmul" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 609;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_pow );
        tmp_args_element_name_3 = par_pow;
        CHECK_OBJECT( par_maxpower );
        tmp_args_element_name_4 = par_maxpower;
        frame_7ad68996df55e68f840055803259e0ec->m_frame.f_lineno = 609;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 609;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ad68996df55e68f840055803259e0ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ad68996df55e68f840055803259e0ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ad68996df55e68f840055803259e0ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ad68996df55e68f840055803259e0ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ad68996df55e68f840055803259e0ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ad68996df55e68f840055803259e0ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ad68996df55e68f840055803259e0ec,
        type_description_1,
        par_c,
        par_pow,
        par_maxpower
    );


    // Release cached frame.
    if ( frame_7ad68996df55e68f840055803259e0ec == cache_frame_7ad68996df55e68f840055803259e0ec )
    {
        Py_DECREF( frame_7ad68996df55e68f840055803259e0ec );
    }
    cache_frame_7ad68996df55e68f840055803259e0ec = NULL;

    assertFrameObject( frame_7ad68996df55e68f840055803259e0ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_10_legpow );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_pow );
    Py_DECREF( par_pow );
    par_pow = NULL;

    CHECK_OBJECT( (PyObject *)par_maxpower );
    Py_DECREF( par_maxpower );
    par_maxpower = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_pow );
    Py_DECREF( par_pow );
    par_pow = NULL;

    CHECK_OBJECT( (PyObject *)par_maxpower );
    Py_DECREF( par_maxpower );
    par_maxpower = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_10_legpow );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_11_legder( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_scl = python_pars[ 2 ];
    PyObject *par_axis = python_pars[ 3 ];
    PyObject *var_cnt = NULL;
    PyObject *var_iaxis = NULL;
    PyObject *var_n = NULL;
    PyObject *var_i = NULL;
    PyObject *var_der = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    struct Nuitka_FrameObject *frame_1e268ca069c549b4e3ce589219186dd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_1e268ca069c549b4e3ce589219186dd0 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1e268ca069c549b4e3ce589219186dd0, codeobj_1e268ca069c549b4e3ce589219186dd0, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1e268ca069c549b4e3ce589219186dd0 = cache_frame_1e268ca069c549b4e3ce589219186dd0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1e268ca069c549b4e3ce589219186dd0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1e268ca069c549b4e3ce589219186dd0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 672;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 672;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_tuple_element_1 = par_c;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_264a7d97adf9df3f4beb0f489755c06f );
        frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 672;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 672;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_c );
        tmp_source_name_3 = par_c;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 673;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 673;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 673;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_c );
            tmp_source_name_4 = par_c;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_astype );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 674;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 674;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_double );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 674;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 674;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 674;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 675;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_m );
        tmp_args_element_name_2 = par_m;
        tmp_args_element_name_3 = const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
        frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 675;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 675;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cnt == NULL );
        var_cnt = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 676;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_4 = par_axis;
        tmp_args_element_name_5 = const_str_digest_70e3e648da9207a55990fb352e033d01;
        frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 676;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 676;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_iaxis == NULL );
        var_iaxis = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_cnt );
        tmp_compexpr_left_2 = var_cnt;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 677;
            type_description_1 = "oooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
            frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 678;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 678;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_axis_index" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 679;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_6 = var_iaxis;
        CHECK_OBJECT( par_c );
        tmp_source_name_6 = par_c;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 679;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 679;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_iaxis;
            assert( old != NULL );
            var_iaxis = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_cnt );
        tmp_compexpr_left_3 = var_cnt;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 681;
            type_description_1 = "oooooooooo";
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
        CHECK_OBJECT( par_c );
        tmp_return_value = par_c;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 684;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_8 = par_c;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_9 = var_iaxis;
        tmp_args_element_name_10 = const_int_0;
        frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 684;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 684;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_c );
        tmp_len_arg_1 = par_c;
        tmp_assign_source_7 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 685;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_cnt );
        tmp_compexpr_left_4 = var_cnt;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_4 = var_n;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 686;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_slice_none_int_pos_1_none;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 687;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_0;
            tmp_assign_source_8 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 687;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            CHECK_OBJECT( var_cnt );
            tmp_xrange_low_1 = var_cnt;
            tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 689;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 689;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_9;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooo";
                    exception_lineno = 689;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_11 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_11;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_n );
            tmp_left_name_2 = var_n;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 690;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_n;
                assert( old != NULL );
                var_n = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_c );
            tmp_left_name_3 = par_c;
            CHECK_OBJECT( par_scl );
            tmp_right_name_3 = par_scl;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 691;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_13 = tmp_left_name_3;
            par_c = tmp_assign_source_13;

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_right_name_4;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_9;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 692;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_7 = tmp_mvar_value_7;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_empty );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 692;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_n );
            tmp_tuple_element_3 = var_n;
            tmp_left_name_4 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_left_name_4, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_c );
            tmp_source_name_8 = par_c;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 692;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
            tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 692;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 692;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( par_c );
            tmp_source_name_9 = par_c;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dtype );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 692;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 692;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 692;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_der;
                var_der = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_xrange_step_1;
            CHECK_OBJECT( var_n );
            tmp_xrange_low_2 = var_n;
            tmp_xrange_high_1 = const_int_pos_2;
            tmp_xrange_step_1 = const_int_neg_1;
            tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_2, tmp_xrange_high_1, tmp_xrange_step_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 693;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 693;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooo";
                    exception_lineno = 693;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_17 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_j;
                var_j = tmp_assign_source_17;
                Py_INCREF( var_j );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            PyObject *tmp_right_name_7;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            tmp_left_name_7 = const_int_pos_2;
            CHECK_OBJECT( var_j );
            tmp_right_name_5 = var_j;
            tmp_left_name_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_5 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 694;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_right_name_6 = const_int_pos_1;
            tmp_left_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 694;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_3 = par_c;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_3 = var_j;
            tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 694;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 694;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_der );
            tmp_ass_subscribed_1 = var_der;
            CHECK_OBJECT( var_j );
            tmp_left_name_8 = var_j;
            tmp_right_name_8 = const_int_pos_1;
            tmp_ass_subscript_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 694;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 694;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( par_c );
            tmp_assign_source_18 = par_c;
            {
                PyObject *old = tmp_inplace_assign_subscr_1__target;
                tmp_inplace_assign_subscr_1__target = tmp_assign_source_18;
                Py_INCREF( tmp_inplace_assign_subscr_1__target );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( var_j );
            tmp_left_name_9 = var_j;
            tmp_right_name_9 = const_int_pos_2;
            tmp_assign_source_19 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 695;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_inplace_assign_subscr_1__subscript;
                tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_19;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_10;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_right_name_10;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_subscribed_name_4 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_subscript_name_4 = tmp_inplace_assign_subscr_1__subscript;
            tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 695;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_5 = par_c;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_5 = var_j;
            tmp_right_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 695;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
            tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 695;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_ass_subscript_2 = tmp_inplace_assign_subscr_1__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 695;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        try_end_1:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 693;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_2;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_n );
            tmp_compexpr_left_5 = var_n;
            tmp_compexpr_right_5 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 696;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                int tmp_ass_subscript_res_1;
                tmp_left_name_11 = const_int_pos_3;
                CHECK_OBJECT( par_c );
                tmp_subscribed_name_6 = par_c;
                tmp_subscript_name_6 = const_int_pos_2;
                tmp_right_name_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 2 );
                if ( tmp_right_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 697;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_2;
                }
                tmp_ass_subvalue_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_ass_subvalue_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 697;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_der );
                tmp_ass_subscribed_3 = var_der;
                tmp_ass_subscript_3 = const_int_pos_1;
                tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 1, tmp_ass_subvalue_3 );
                Py_DECREF( tmp_ass_subvalue_3 );
                if ( tmp_ass_subscript_res_1 == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 697;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_2;
                }
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            int tmp_ass_subscript_res_2;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_7 = par_c;
            tmp_subscript_name_7 = const_int_pos_1;
            tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 1 );
            if ( tmp_ass_subvalue_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 698;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_der );
            tmp_ass_subscribed_4 = var_der;
            tmp_ass_subscript_4 = const_int_0;
            tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, 0, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subvalue_4 );
            if ( tmp_ass_subscript_res_2 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 698;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
        }
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( var_der );
            tmp_assign_source_20 = var_der;
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_20;
                Py_INCREF( par_c );
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 689;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_2:;
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

        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 700;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_moveaxis );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 700;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_c == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 700;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = par_c;
        tmp_args_element_name_12 = const_int_0;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_13 = var_iaxis;
        frame_1e268ca069c549b4e3ce589219186dd0->m_frame.f_lineno = 700;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 700;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            par_c = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e268ca069c549b4e3ce589219186dd0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e268ca069c549b4e3ce589219186dd0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e268ca069c549b4e3ce589219186dd0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e268ca069c549b4e3ce589219186dd0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e268ca069c549b4e3ce589219186dd0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e268ca069c549b4e3ce589219186dd0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e268ca069c549b4e3ce589219186dd0,
        type_description_1,
        par_c,
        par_m,
        par_scl,
        par_axis,
        var_cnt,
        var_iaxis,
        var_n,
        var_i,
        var_der,
        var_j
    );


    // Release cached frame.
    if ( frame_1e268ca069c549b4e3ce589219186dd0 == cache_frame_1e268ca069c549b4e3ce589219186dd0 )
    {
        Py_DECREF( frame_1e268ca069c549b4e3ce589219186dd0 );
    }
    cache_frame_1e268ca069c549b4e3ce589219186dd0 = NULL;

    assertFrameObject( frame_1e268ca069c549b4e3ce589219186dd0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_c );
    tmp_return_value = par_c;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_11_legder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_cnt );
    Py_DECREF( var_cnt );
    var_cnt = NULL;

    CHECK_OBJECT( (PyObject *)var_iaxis );
    Py_DECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_der );
    var_der = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

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

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_der );
    var_der = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_11_legder );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_12_legint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *par_lbnd = python_pars[ 3 ];
    PyObject *par_scl = python_pars[ 4 ];
    PyObject *par_axis = python_pars[ 5 ];
    PyObject *var_cnt = NULL;
    PyObject *var_iaxis = NULL;
    PyObject *var_i = NULL;
    PyObject *var_n = NULL;
    PyObject *var_tmp = NULL;
    PyObject *var_j = NULL;
    PyObject *var_t = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_3__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_3__target = NULL;
    struct Nuitka_FrameObject *frame_824a4cfc4abb3e5c82432c7a8375a2c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_824a4cfc4abb3e5c82432c7a8375a2c4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_824a4cfc4abb3e5c82432c7a8375a2c4, codeobj_824a4cfc4abb3e5c82432c7a8375a2c4, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_824a4cfc4abb3e5c82432c7a8375a2c4 = cache_frame_824a4cfc4abb3e5c82432c7a8375a2c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_824a4cfc4abb3e5c82432c7a8375a2c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_824a4cfc4abb3e5c82432c7a8375a2c4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 789;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_tuple_element_1 = par_c;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_264a7d97adf9df3f4beb0f489755c06f );
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 789;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_c );
        tmp_source_name_3 = par_c;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 790;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_c );
            tmp_source_name_4 = par_c;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_astype );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 791;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 791;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_double );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 791;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 791;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 791;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 792;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_k );
        tmp_args_element_name_2 = par_k;
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 792;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_iterable, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( par_k );
            tmp_list_element_1 = par_k;
            tmp_assign_source_3 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
            {
                PyObject *old = par_k;
                assert( old != NULL );
                par_k = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 794;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_m );
        tmp_args_element_name_3 = par_m;
        tmp_args_element_name_4 = const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 794;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 794;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cnt == NULL );
        var_cnt = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 795;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_5 = par_axis;
        tmp_args_element_name_6 = const_str_digest_70e3e648da9207a55990fb352e033d01;
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 795;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 795;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_iaxis == NULL );
        var_iaxis = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_cnt );
        tmp_compexpr_left_2 = var_cnt;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 796;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_b303cff154cb34d4708df3886d4b732e;
            frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 797;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 797;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_k );
        tmp_len_arg_1 = par_k;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 798;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_cnt );
        tmp_compexpr_right_3 = var_cnt;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 798;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_616f6ee3ef74479987454a15fb3cc986;
            frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 799;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 799;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 800;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_6;
        CHECK_OBJECT( par_lbnd );
        tmp_args_element_name_7 = par_lbnd;
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 800;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 800;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 800;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
            frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 801;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 801;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 802;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_7;
        CHECK_OBJECT( par_scl );
        tmp_args_element_name_8 = par_scl;
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 802;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            tmp_make_exception_arg_4 = const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
            frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 803;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 803;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "normalize_axis_index" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 804;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_8;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_9 = var_iaxis;
        CHECK_OBJECT( par_c );
        tmp_source_name_6 = par_c;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 804;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 804;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 804;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_iaxis;
            assert( old != NULL );
            var_iaxis = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_cnt );
        tmp_compexpr_left_6 = var_cnt;
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 806;
            type_description_1 = "ooooooooooooo";
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
        CHECK_OBJECT( par_c );
        tmp_return_value = par_c;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 809;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_9;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_11 = par_c;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_12 = var_iaxis;
        tmp_args_element_name_13 = const_int_0;
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 809;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_6, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_k );
        tmp_list_arg_1 = par_k;
        tmp_left_name_1 = PySequence_List( tmp_list_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 810;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = LIST_COPY( const_list_int_0_list );
        CHECK_OBJECT( var_cnt );
        tmp_left_name_3 = var_cnt;
        CHECK_OBJECT( par_k );
        tmp_len_arg_2 = par_k;
        tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 810;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 810;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_LIST_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 810;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_LIST_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 810;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_k;
            assert( old != NULL );
            par_k = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_cnt );
        tmp_xrange_low_1 = var_cnt;
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 811;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 811;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 811;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_11;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( par_c );
        tmp_len_arg_3 = par_c;
        tmp_assign_source_12 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 812;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_c );
        tmp_left_name_4 = par_c;
        CHECK_OBJECT( par_scl );
        tmp_right_name_4 = par_scl;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 813;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_13 = tmp_left_name_4;
        par_c = tmp_assign_source_13;

    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_7 = var_n;
        tmp_compexpr_right_7 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        assert( !(tmp_res == -1) );
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 814;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_7 = tmp_mvar_value_10;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_all );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 814;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_1 = par_c;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 814;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_8 = const_int_0;
        tmp_args_element_name_14 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 814;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 814;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 814;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 814;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        tmp_condition_result_8 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_8 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( par_c );
            tmp_assign_source_14 = par_c;
            {
                PyObject *old = tmp_inplace_assign_subscr_1__target;
                tmp_inplace_assign_subscr_1__target = tmp_assign_source_14;
                Py_INCREF( tmp_inplace_assign_subscr_1__target );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = const_int_0;
            {
                PyObject *old = tmp_inplace_assign_subscr_1__subscript;
                tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_15;
                Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_5;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_5;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_subscribed_name_2 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_subscript_name_2 = tmp_inplace_assign_subscr_1__subscript;
            tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 815;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_k );
            tmp_subscribed_name_3 = par_k;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_3 = var_i;
            tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 815;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 815;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 815;
                type_description_1 = "ooooooooooooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_6;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_6;
            PyObject *tmp_right_name_7;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_9;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_10;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 817;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_8 = tmp_mvar_value_11;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_empty );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 817;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_n );
            tmp_left_name_7 = var_n;
            tmp_right_name_6 = const_int_pos_1;
            tmp_tuple_element_3 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_7, tmp_right_name_6 );
            assert( !(tmp_tuple_element_3 == NULL) );
            tmp_left_name_6 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_left_name_6, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_c );
            tmp_source_name_9 = par_c;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
            if ( tmp_subscribed_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 817;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
            tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscribed_name_4 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 817;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_6, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 817;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( par_c );
            tmp_source_name_10 = par_c;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dtype );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 817;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 817;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 817;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_tmp;
                var_tmp = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_8;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_right_name_8;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_5 = par_c;
            tmp_subscript_name_5 = const_int_0;
            tmp_left_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 818;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_8 = const_int_0;
            tmp_ass_subvalue_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 818;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_tmp );
            tmp_ass_subscribed_2 = var_tmp;
            tmp_ass_subscript_2 = const_int_0;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 818;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            int tmp_ass_subscript_res_2;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_6 = par_c;
            tmp_subscript_name_6 = const_int_0;
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 819;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_tmp );
            tmp_ass_subscribed_3 = var_tmp;
            tmp_ass_subscript_3 = const_int_pos_1;
            tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 1, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_ass_subscript_res_2 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 819;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            CHECK_OBJECT( var_n );
            tmp_compexpr_left_9 = var_n;
            tmp_compexpr_right_9 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            assert( !(tmp_res == -1) );
            tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_left_name_9;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_right_name_9;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                int tmp_ass_subscript_res_3;
                CHECK_OBJECT( par_c );
                tmp_subscribed_name_7 = par_c;
                tmp_subscript_name_7 = const_int_pos_1;
                tmp_left_name_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 1 );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 821;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_9 = const_int_pos_3;
                tmp_ass_subvalue_4 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_left_name_9 );
                if ( tmp_ass_subvalue_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 821;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_tmp );
                tmp_ass_subscribed_4 = var_tmp;
                tmp_ass_subscript_4 = const_int_pos_2;
                tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, 2, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subvalue_4 );
                if ( tmp_ass_subscript_res_3 == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 821;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_2;
                }
            }
            branch_no_9:;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_xrange_high_1;
            tmp_xrange_low_2 = const_int_pos_2;
            CHECK_OBJECT( var_n );
            tmp_xrange_high_1 = var_n;
            tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 822;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 822;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 822;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_19 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_j;
                var_j = tmp_assign_source_19;
                Py_INCREF( var_j );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_left_name_10;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_8 = par_c;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_8 = var_j;
            tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 823;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_left_name_12 = const_int_pos_2;
            CHECK_OBJECT( var_j );
            tmp_right_name_11 = var_j;
            tmp_left_name_11 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_12, tmp_right_name_11 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 823;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_right_name_12 = const_int_pos_1;
            tmp_right_name_10 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 823;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_20 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 823;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_t;
                var_t = tmp_assign_source_20;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( var_t );
            tmp_ass_subvalue_5 = var_t;
            CHECK_OBJECT( var_tmp );
            tmp_ass_subscribed_5 = var_tmp;
            CHECK_OBJECT( var_j );
            tmp_left_name_13 = var_j;
            tmp_right_name_13 = const_int_pos_1;
            tmp_ass_subscript_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_ass_subscript_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 824;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subscript_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 824;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( var_tmp );
            tmp_assign_source_21 = var_tmp;
            {
                PyObject *old = tmp_inplace_assign_subscr_2__target;
                tmp_inplace_assign_subscr_2__target = tmp_assign_source_21;
                Py_INCREF( tmp_inplace_assign_subscr_2__target );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            CHECK_OBJECT( var_j );
            tmp_left_name_14 = var_j;
            tmp_right_name_14 = const_int_pos_1;
            tmp_assign_source_22 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 825;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_inplace_assign_subscr_2__subscript;
                tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_left_name_15;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_15;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
            tmp_subscribed_name_9 = tmp_inplace_assign_subscr_2__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
            tmp_subscript_name_9 = tmp_inplace_assign_subscr_2__subscript;
            tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 825;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_t );
            tmp_right_name_15 = var_t;
            tmp_ass_subvalue_6 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_15 );
            if ( tmp_ass_subvalue_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 825;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
            tmp_ass_subscribed_6 = tmp_inplace_assign_subscr_2__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
            tmp_ass_subscript_6 = tmp_inplace_assign_subscr_2__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
            Py_DECREF( tmp_ass_subvalue_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 825;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
        Py_DECREF( tmp_inplace_assign_subscr_2__target );
        tmp_inplace_assign_subscr_2__target = NULL;

        Py_XDECREF( tmp_inplace_assign_subscr_2__subscript );
        tmp_inplace_assign_subscr_2__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
        Py_DECREF( tmp_inplace_assign_subscr_2__target );
        tmp_inplace_assign_subscr_2__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
        tmp_inplace_assign_subscr_2__subscript = NULL;

        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 822;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        try_end_3:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( var_tmp );
            tmp_assign_source_23 = var_tmp;
            {
                PyObject *old = tmp_inplace_assign_subscr_3__target;
                tmp_inplace_assign_subscr_3__target = tmp_assign_source_23;
                Py_INCREF( tmp_inplace_assign_subscr_3__target );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = const_int_0;
            {
                PyObject *old = tmp_inplace_assign_subscr_3__subscript;
                tmp_inplace_assign_subscr_3__subscript = tmp_assign_source_24;
                Py_INCREF( tmp_inplace_assign_subscr_3__subscript );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_left_name_16;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_right_name_16;
            PyObject *tmp_left_name_17;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_right_name_17;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
            tmp_subscribed_name_10 = tmp_inplace_assign_subscr_3__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
            tmp_subscript_name_10 = tmp_inplace_assign_subscr_3__subscript;
            tmp_left_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            if ( tmp_left_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 826;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_k );
            tmp_subscribed_name_11 = par_k;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_11 = var_i;
            tmp_left_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            if ( tmp_left_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 826;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_17 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 826;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_6 = tmp_mvar_value_12;
            CHECK_OBJECT( par_lbnd );
            tmp_args_element_name_15 = par_lbnd;
            CHECK_OBJECT( var_tmp );
            tmp_args_element_name_16 = var_tmp;
            frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 826;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_right_name_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            if ( tmp_right_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );
                Py_DECREF( tmp_left_name_17 );

                exception_lineno = 826;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_right_name_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
            Py_DECREF( tmp_left_name_17 );
            Py_DECREF( tmp_right_name_17 );
            if ( tmp_right_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_16 );

                exception_lineno = 826;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_ass_subvalue_7 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_16, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_16 );
            Py_DECREF( tmp_right_name_16 );
            if ( tmp_ass_subvalue_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 826;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
            tmp_ass_subscribed_7 = tmp_inplace_assign_subscr_3__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
            tmp_ass_subscript_7 = tmp_inplace_assign_subscr_3__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
            Py_DECREF( tmp_ass_subvalue_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 826;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_6;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
        Py_DECREF( tmp_inplace_assign_subscr_3__target );
        tmp_inplace_assign_subscr_3__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
        tmp_inplace_assign_subscr_3__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
        Py_DECREF( tmp_inplace_assign_subscr_3__target );
        tmp_inplace_assign_subscr_3__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
        tmp_inplace_assign_subscr_3__subscript = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( var_tmp );
            tmp_assign_source_25 = var_tmp;
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_25;
                Py_INCREF( par_c );
                Py_DECREF( old );
            }

        }
        branch_end_8:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 811;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 828;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_13;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_17 = par_c;
        tmp_args_element_name_18 = const_int_0;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_19 = var_iaxis;
        frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame.f_lineno = 828;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_26 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_7, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 828;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_26;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_824a4cfc4abb3e5c82432c7a8375a2c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_824a4cfc4abb3e5c82432c7a8375a2c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_824a4cfc4abb3e5c82432c7a8375a2c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_824a4cfc4abb3e5c82432c7a8375a2c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_824a4cfc4abb3e5c82432c7a8375a2c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_824a4cfc4abb3e5c82432c7a8375a2c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_824a4cfc4abb3e5c82432c7a8375a2c4,
        type_description_1,
        par_c,
        par_m,
        par_k,
        par_lbnd,
        par_scl,
        par_axis,
        var_cnt,
        var_iaxis,
        var_i,
        var_n,
        var_tmp,
        var_j,
        var_t
    );


    // Release cached frame.
    if ( frame_824a4cfc4abb3e5c82432c7a8375a2c4 == cache_frame_824a4cfc4abb3e5c82432c7a8375a2c4 )
    {
        Py_DECREF( frame_824a4cfc4abb3e5c82432c7a8375a2c4 );
    }
    cache_frame_824a4cfc4abb3e5c82432c7a8375a2c4 = NULL;

    assertFrameObject( frame_824a4cfc4abb3e5c82432c7a8375a2c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_c );
    tmp_return_value = par_c;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_12_legint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_lbnd );
    Py_DECREF( par_lbnd );
    par_lbnd = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_cnt );
    Py_DECREF( var_cnt );
    var_cnt = NULL;

    CHECK_OBJECT( (PyObject *)var_iaxis );
    Py_DECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_lbnd );
    Py_DECREF( par_lbnd );
    par_lbnd = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_12_legint );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_13_legval( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_tensor = python_pars[ 2 ];
    PyObject *var_c0 = NULL;
    PyObject *var_c1 = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tmp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4eadfd694d98bb0a72bf1a8fb14e583a;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4eadfd694d98bb0a72bf1a8fb14e583a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4eadfd694d98bb0a72bf1a8fb14e583a, codeobj_4eadfd694d98bb0a72bf1a8fb14e583a, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4eadfd694d98bb0a72bf1a8fb14e583a = cache_frame_4eadfd694d98bb0a72bf1a8fb14e583a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4eadfd694d98bb0a72bf1a8fb14e583a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4eadfd694d98bb0a72bf1a8fb14e583a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 894;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 894;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_tuple_element_1 = par_c;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_0aaf07bc1f9989227b8953d83057c37b );
        frame_4eadfd694d98bb0a72bf1a8fb14e583a->m_frame.f_lineno = 894;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 894;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_c );
        tmp_source_name_3 = par_c;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 895;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 895;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 895;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_c );
            tmp_source_name_4 = par_c;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_astype );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 896;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 896;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_double );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 896;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_4eadfd694d98bb0a72bf1a8fb14e583a->m_frame.f_lineno = 896;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 896;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = const_tuple_type_tuple_type_list_tuple;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 897;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 898;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_4eadfd694d98bb0a72bf1a8fb14e583a->m_frame.f_lineno = 898;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 898;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_3;
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
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_2 = par_x;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 899;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 899;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 899;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_tensor );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_tensor );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 899;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_c );
            tmp_source_name_7 = par_c;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_reshape );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 900;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_source_name_8 = par_c;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 900;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_tuple_int_pos_1_tuple;
            CHECK_OBJECT( par_x );
            tmp_source_name_9 = par_x;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndim );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 900;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL_TUPLE_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 900;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 900;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_4eadfd694d98bb0a72bf1a8fb14e583a->m_frame.f_lineno = 900;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 900;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        if ( par_c == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 902;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = par_c;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 902;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            if ( par_c == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 903;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 903;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c0 == NULL );
            var_c0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_int_0;
            assert( var_c1 == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_c1 = tmp_assign_source_6;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_len_arg_2;
            if ( par_c == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 905;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_len_arg_2 = par_c;
            tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 905;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            assert( !(tmp_res == -1) );
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 906;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_2 = par_c;
                tmp_subscript_name_2 = const_int_0;
                tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 906;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c0 == NULL );
                var_c0 = tmp_assign_source_7;
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 907;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_3 = par_c;
                tmp_subscript_name_3 = const_int_pos_1;
                tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 907;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c1 == NULL );
                var_c1 = tmp_assign_source_8;
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_len_arg_3;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 909;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_len_arg_3 = par_c;
                tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_3 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 909;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_nd == NULL );
                var_nd = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 910;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_4 = par_c;
                tmp_subscript_name_4 = const_int_neg_2;
                tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -2 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 910;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c0 == NULL );
                var_c0 = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 911;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_5 = par_c;
                tmp_subscript_name_5 = const_int_neg_1;
                tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, -1 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 911;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c1 == NULL );
                var_c1 = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_xrange_low_1;
                PyObject *tmp_xrange_high_1;
                PyObject *tmp_left_name_3;
                PyObject *tmp_len_arg_4;
                PyObject *tmp_right_name_3;
                tmp_xrange_low_1 = const_int_pos_3;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 912;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_len_arg_4 = par_c;
                tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_4 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 912;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_3 = const_int_pos_1;
                tmp_xrange_high_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                assert( !(tmp_xrange_high_1 == NULL) );
                tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
                Py_DECREF( tmp_xrange_high_1 );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 912;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 912;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_1__for_iterator == NULL );
                tmp_for_loop_1__for_iterator = tmp_assign_source_12;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_13 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooo";
                        exception_lineno = 912;
                        goto try_except_handler_2;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( tmp_for_loop_1__iter_value );
                tmp_assign_source_14 = tmp_for_loop_1__iter_value;
                {
                    PyObject *old = var_i;
                    var_i = tmp_assign_source_14;
                    Py_INCREF( var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( var_c0 );
                tmp_assign_source_15 = var_c0;
                {
                    PyObject *old = var_tmp;
                    var_tmp = tmp_assign_source_15;
                    Py_INCREF( var_tmp );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( var_nd );
                tmp_left_name_4 = var_nd;
                tmp_right_name_4 = const_int_pos_1;
                tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 914;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_nd;
                    assert( old != NULL );
                    var_nd = tmp_assign_source_16;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_left_name_5;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_right_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_7;
                PyObject *tmp_right_name_8;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 915;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }

                tmp_subscribed_name_6 = par_c;
                CHECK_OBJECT( var_i );
                tmp_operand_name_1 = var_i;
                tmp_subscript_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                if ( tmp_subscript_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 915;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscript_name_6 );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 915;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_c1 );
                tmp_left_name_7 = var_c1;
                CHECK_OBJECT( var_nd );
                tmp_left_name_8 = var_nd;
                tmp_right_name_7 = const_int_pos_1;
                tmp_right_name_6 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_7 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 915;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 915;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_nd );
                tmp_right_name_8 = var_nd;
                tmp_right_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_8 );
                Py_DECREF( tmp_left_name_6 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 915;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 915;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_c0;
                    assert( old != NULL );
                    var_c0 = tmp_assign_source_17;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_10;
                PyObject *tmp_right_name_11;
                PyObject *tmp_left_name_13;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_12;
                PyObject *tmp_right_name_13;
                PyObject *tmp_right_name_14;
                CHECK_OBJECT( var_tmp );
                tmp_left_name_9 = var_tmp;
                CHECK_OBJECT( var_c1 );
                tmp_left_name_12 = var_c1;
                CHECK_OBJECT( par_x );
                tmp_right_name_10 = par_x;
                tmp_left_name_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_10 );
                if ( tmp_left_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 916;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_left_name_14 = const_int_pos_2;
                CHECK_OBJECT( var_nd );
                tmp_right_name_12 = var_nd;
                tmp_left_name_13 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_14, tmp_right_name_12 );
                if ( tmp_left_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_11 );

                    exception_lineno = 916;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_13 = const_int_pos_1;
                tmp_right_name_11 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
                Py_DECREF( tmp_left_name_13 );
                if ( tmp_right_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_11 );

                    exception_lineno = 916;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_left_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_left_name_11 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_left_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 916;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_nd );
                tmp_right_name_14 = var_nd;
                tmp_right_name_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_14 );
                Py_DECREF( tmp_left_name_10 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 916;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_assign_source_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 916;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_c1;
                    assert( old != NULL );
                    var_c1 = tmp_assign_source_18;
                    Py_DECREF( old );
                }

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 912;
                type_description_1 = "oooooooo";
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

            branch_end_5:;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        if ( var_c0 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 917;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_15 = var_c0;
        if ( var_c1 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 917;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_16 = var_c1;
        CHECK_OBJECT( par_x );
        tmp_right_name_16 = par_x;
        tmp_right_name_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 917;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 917;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4eadfd694d98bb0a72bf1a8fb14e583a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4eadfd694d98bb0a72bf1a8fb14e583a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4eadfd694d98bb0a72bf1a8fb14e583a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4eadfd694d98bb0a72bf1a8fb14e583a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4eadfd694d98bb0a72bf1a8fb14e583a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4eadfd694d98bb0a72bf1a8fb14e583a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4eadfd694d98bb0a72bf1a8fb14e583a,
        type_description_1,
        par_x,
        par_c,
        par_tensor,
        var_c0,
        var_c1,
        var_nd,
        var_i,
        var_tmp
    );


    // Release cached frame.
    if ( frame_4eadfd694d98bb0a72bf1a8fb14e583a == cache_frame_4eadfd694d98bb0a72bf1a8fb14e583a )
    {
        Py_DECREF( frame_4eadfd694d98bb0a72bf1a8fb14e583a );
    }
    cache_frame_4eadfd694d98bb0a72bf1a8fb14e583a = NULL;

    assertFrameObject( frame_4eadfd694d98bb0a72bf1a8fb14e583a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_13_legval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tensor );
    Py_DECREF( par_tensor );
    par_tensor = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tensor );
    Py_DECREF( par_tensor );
    par_tensor = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_c1 );
    var_c1 = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_13_legval );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_14_legval2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_a585d7c18203fb83cb37e1640d15d479;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a585d7c18203fb83cb37e1640d15d479 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a585d7c18203fb83cb37e1640d15d479, codeobj_a585d7c18203fb83cb37e1640d15d479, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a585d7c18203fb83cb37e1640d15d479 = cache_frame_a585d7c18203fb83cb37e1640d15d479;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a585d7c18203fb83cb37e1640d15d479 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a585d7c18203fb83cb37e1640d15d479 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 966;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__valnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 966;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 966;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_4 = par_y;
        frame_a585d7c18203fb83cb37e1640d15d479->m_frame.f_lineno = 966;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 966;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a585d7c18203fb83cb37e1640d15d479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a585d7c18203fb83cb37e1640d15d479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a585d7c18203fb83cb37e1640d15d479 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a585d7c18203fb83cb37e1640d15d479, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a585d7c18203fb83cb37e1640d15d479->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a585d7c18203fb83cb37e1640d15d479, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a585d7c18203fb83cb37e1640d15d479,
        type_description_1,
        par_x,
        par_y,
        par_c
    );


    // Release cached frame.
    if ( frame_a585d7c18203fb83cb37e1640d15d479 == cache_frame_a585d7c18203fb83cb37e1640d15d479 )
    {
        Py_DECREF( frame_a585d7c18203fb83cb37e1640d15d479 );
    }
    cache_frame_a585d7c18203fb83cb37e1640d15d479 = NULL;

    assertFrameObject( frame_a585d7c18203fb83cb37e1640d15d479 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_14_legval2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_14_legval2d );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_15_leggrid2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_62b69ac06fe6d04a886ab336633d1547;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62b69ac06fe6d04a886ab336633d1547 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62b69ac06fe6d04a886ab336633d1547, codeobj_62b69ac06fe6d04a886ab336633d1547, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_62b69ac06fe6d04a886ab336633d1547 = cache_frame_62b69ac06fe6d04a886ab336633d1547;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62b69ac06fe6d04a886ab336633d1547 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62b69ac06fe6d04a886ab336633d1547 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1019;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__gridnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1019;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1019;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_4 = par_y;
        frame_62b69ac06fe6d04a886ab336633d1547->m_frame.f_lineno = 1019;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1019;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62b69ac06fe6d04a886ab336633d1547 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62b69ac06fe6d04a886ab336633d1547 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62b69ac06fe6d04a886ab336633d1547 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62b69ac06fe6d04a886ab336633d1547, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62b69ac06fe6d04a886ab336633d1547->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62b69ac06fe6d04a886ab336633d1547, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62b69ac06fe6d04a886ab336633d1547,
        type_description_1,
        par_x,
        par_y,
        par_c
    );


    // Release cached frame.
    if ( frame_62b69ac06fe6d04a886ab336633d1547 == cache_frame_62b69ac06fe6d04a886ab336633d1547 )
    {
        Py_DECREF( frame_62b69ac06fe6d04a886ab336633d1547 );
    }
    cache_frame_62b69ac06fe6d04a886ab336633d1547 = NULL;

    assertFrameObject( frame_62b69ac06fe6d04a886ab336633d1547 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_15_leggrid2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_15_leggrid2d );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_16_legval3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_c = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_505b01b53ff0dbb5b86d8974fe265afb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_505b01b53ff0dbb5b86d8974fe265afb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_505b01b53ff0dbb5b86d8974fe265afb, codeobj_505b01b53ff0dbb5b86d8974fe265afb, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_505b01b53ff0dbb5b86d8974fe265afb = cache_frame_505b01b53ff0dbb5b86d8974fe265afb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_505b01b53ff0dbb5b86d8974fe265afb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_505b01b53ff0dbb5b86d8974fe265afb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1070;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__valnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1070;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1070;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_4 = par_y;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_5 = par_z;
        frame_505b01b53ff0dbb5b86d8974fe265afb->m_frame.f_lineno = 1070;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1070;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_505b01b53ff0dbb5b86d8974fe265afb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_505b01b53ff0dbb5b86d8974fe265afb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_505b01b53ff0dbb5b86d8974fe265afb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_505b01b53ff0dbb5b86d8974fe265afb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_505b01b53ff0dbb5b86d8974fe265afb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_505b01b53ff0dbb5b86d8974fe265afb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_505b01b53ff0dbb5b86d8974fe265afb,
        type_description_1,
        par_x,
        par_y,
        par_z,
        par_c
    );


    // Release cached frame.
    if ( frame_505b01b53ff0dbb5b86d8974fe265afb == cache_frame_505b01b53ff0dbb5b86d8974fe265afb )
    {
        Py_DECREF( frame_505b01b53ff0dbb5b86d8974fe265afb );
    }
    cache_frame_505b01b53ff0dbb5b86d8974fe265afb = NULL;

    assertFrameObject( frame_505b01b53ff0dbb5b86d8974fe265afb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_16_legval3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_16_legval3d );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_17_leggrid3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_c = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_117167350366196be5b9fbb6d735383c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_117167350366196be5b9fbb6d735383c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_117167350366196be5b9fbb6d735383c, codeobj_117167350366196be5b9fbb6d735383c, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_117167350366196be5b9fbb6d735383c = cache_frame_117167350366196be5b9fbb6d735383c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_117167350366196be5b9fbb6d735383c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_117167350366196be5b9fbb6d735383c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__gridnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_4 = par_y;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_5 = par_z;
        frame_117167350366196be5b9fbb6d735383c->m_frame.f_lineno = 1126;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_117167350366196be5b9fbb6d735383c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_117167350366196be5b9fbb6d735383c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_117167350366196be5b9fbb6d735383c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_117167350366196be5b9fbb6d735383c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_117167350366196be5b9fbb6d735383c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_117167350366196be5b9fbb6d735383c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_117167350366196be5b9fbb6d735383c,
        type_description_1,
        par_x,
        par_y,
        par_z,
        par_c
    );


    // Release cached frame.
    if ( frame_117167350366196be5b9fbb6d735383c == cache_frame_117167350366196be5b9fbb6d735383c )
    {
        Py_DECREF( frame_117167350366196be5b9fbb6d735383c );
    }
    cache_frame_117167350366196be5b9fbb6d735383c = NULL;

    assertFrameObject( frame_117167350366196be5b9fbb6d735383c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_17_leggrid3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_17_leggrid3d );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_18_legvander( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_deg = python_pars[ 1 ];
    PyObject *var_ideg = NULL;
    PyObject *var_dims = NULL;
    PyObject *var_dtyp = NULL;
    PyObject *var_v = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_35e444755c524a4bc123a8222732a23a;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_35e444755c524a4bc123a8222732a23a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35e444755c524a4bc123a8222732a23a, codeobj_35e444755c524a4bc123a8222732a23a, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_35e444755c524a4bc123a8222732a23a = cache_frame_35e444755c524a4bc123a8222732a23a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35e444755c524a4bc123a8222732a23a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35e444755c524a4bc123a8222732a23a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_1 = par_deg;
        tmp_args_element_name_2 = const_str_plain_deg;
        frame_35e444755c524a4bc123a8222732a23a->m_frame.f_lineno = 1164;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ideg == NULL );
        var_ideg = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_ideg );
        tmp_compexpr_left_1 = var_ideg;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1165;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_ea8c65b23281db7ee7660696e61ab360;
            frame_35e444755c524a4bc123a8222732a23a->m_frame.f_lineno = 1166;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1166;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_1eef64507cf3de8ea0ea857c5e7e1090 );
        frame_35e444755c524a4bc123a8222732a23a->m_frame.f_lineno = 1168;
        tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_0_0;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_ideg );
        tmp_left_name_3 = var_ideg;
        tmp_right_name_2 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_left_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 1169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dims == NULL );
        var_dims = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_x );
        tmp_source_name_3 = par_x;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dtyp == NULL );
        var_dtyp = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dims );
        tmp_tuple_element_3 = var_dims;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( var_dtyp );
        tmp_dict_value_1 = var_dtyp;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_35e444755c524a4bc123a8222732a23a->m_frame.f_lineno = 1171;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( par_x );
        tmp_left_name_5 = par_x;
        tmp_right_name_4 = const_int_0;
        tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_ass_subscribed_1 = var_v;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_ideg );
        tmp_compexpr_left_2 = var_ideg;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1175;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            int tmp_ass_subscript_res_2;
            CHECK_OBJECT( par_x );
            tmp_ass_subvalue_2 = par_x;
            CHECK_OBJECT( var_v );
            tmp_ass_subscribed_2 = var_v;
            tmp_ass_subscript_2 = const_int_pos_1;
            tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
            if ( tmp_ass_subscript_res_2 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1176;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            tmp_xrange_low_1 = const_int_pos_2;
            CHECK_OBJECT( var_ideg );
            tmp_left_name_6 = var_ideg;
            tmp_right_name_6 = const_int_pos_1;
            tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_xrange_high_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1177;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            Py_DECREF( tmp_xrange_high_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1177;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1177;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_6;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooo";
                    exception_lineno = 1177;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_8 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_8;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_left_name_12;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_10;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            PyObject *tmp_left_name_14;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_13;
            PyObject *tmp_right_name_14;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_15;
            PyObject *tmp_right_name_16;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_v );
            tmp_subscribed_name_1 = var_v;
            CHECK_OBJECT( var_i );
            tmp_left_name_11 = var_i;
            tmp_right_name_7 = const_int_pos_1;
            tmp_subscript_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_7 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_x );
            tmp_right_name_8 = par_x;
            tmp_left_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_10 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_13 = const_int_pos_2;
            CHECK_OBJECT( var_i );
            tmp_right_name_10 = var_i;
            tmp_left_name_12 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_13, tmp_right_name_10 );
            if ( tmp_left_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_11 = const_int_pos_1;
            tmp_right_name_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_12, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_12 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_v );
            tmp_subscribed_name_2 = var_v;
            CHECK_OBJECT( var_i );
            tmp_left_name_15 = var_i;
            tmp_right_name_13 = const_int_pos_2;
            tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_15, tmp_right_name_13 );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_left_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_i );
            tmp_left_name_16 = var_i;
            tmp_right_name_15 = const_int_pos_1;
            tmp_right_name_14 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_16, tmp_right_name_15 );
            if ( tmp_right_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );
                Py_DECREF( tmp_left_name_14 );

                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
            Py_DECREF( tmp_left_name_14 );
            Py_DECREF( tmp_right_name_14 );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_i );
            tmp_right_name_16 = var_i;
            tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_16 );
            Py_DECREF( tmp_left_name_7 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_v );
            tmp_ass_subscribed_3 = var_v;
            CHECK_OBJECT( var_i );
            tmp_ass_subscript_3 = var_i;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1178;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1177;
            type_description_1 = "ooooooo";
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

        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1179;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_3 = var_v;
        tmp_args_element_name_4 = const_int_0;
        tmp_args_element_name_5 = const_int_neg_1;
        frame_35e444755c524a4bc123a8222732a23a->m_frame.f_lineno = 1179;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1179;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35e444755c524a4bc123a8222732a23a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_35e444755c524a4bc123a8222732a23a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35e444755c524a4bc123a8222732a23a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35e444755c524a4bc123a8222732a23a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35e444755c524a4bc123a8222732a23a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35e444755c524a4bc123a8222732a23a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35e444755c524a4bc123a8222732a23a,
        type_description_1,
        par_x,
        par_deg,
        var_ideg,
        var_dims,
        var_dtyp,
        var_v,
        var_i
    );


    // Release cached frame.
    if ( frame_35e444755c524a4bc123a8222732a23a == cache_frame_35e444755c524a4bc123a8222732a23a )
    {
        Py_DECREF( frame_35e444755c524a4bc123a8222732a23a );
    }
    cache_frame_35e444755c524a4bc123a8222732a23a = NULL;

    assertFrameObject( frame_35e444755c524a4bc123a8222732a23a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_18_legvander );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_ideg );
    Py_DECREF( var_ideg );
    var_ideg = NULL;

    CHECK_OBJECT( (PyObject *)var_dims );
    Py_DECREF( var_dims );
    var_dims = NULL;

    CHECK_OBJECT( (PyObject *)var_dtyp );
    Py_DECREF( var_dtyp );
    var_dtyp = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_ideg );
    var_ideg = NULL;

    Py_XDECREF( var_dims );
    var_dims = NULL;

    Py_XDECREF( var_dtyp );
    var_dtyp = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_18_legvander );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_19_legvander2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_deg = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_1532167445b7bec046e6d1004e39bd19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1532167445b7bec046e6d1004e39bd19 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1532167445b7bec046e6d1004e39bd19, codeobj_1532167445b7bec046e6d1004e39bd19, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1532167445b7bec046e6d1004e39bd19 = cache_frame_1532167445b7bec046e6d1004e39bd19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1532167445b7bec046e6d1004e39bd19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1532167445b7bec046e6d1004e39bd19 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__vander2d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legvander );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legvander );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legvander" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_3 = par_y;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_4 = par_deg;
        frame_1532167445b7bec046e6d1004e39bd19->m_frame.f_lineno = 1232;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1532167445b7bec046e6d1004e39bd19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1532167445b7bec046e6d1004e39bd19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1532167445b7bec046e6d1004e39bd19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1532167445b7bec046e6d1004e39bd19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1532167445b7bec046e6d1004e39bd19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1532167445b7bec046e6d1004e39bd19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1532167445b7bec046e6d1004e39bd19,
        type_description_1,
        par_x,
        par_y,
        par_deg
    );


    // Release cached frame.
    if ( frame_1532167445b7bec046e6d1004e39bd19 == cache_frame_1532167445b7bec046e6d1004e39bd19 )
    {
        Py_DECREF( frame_1532167445b7bec046e6d1004e39bd19 );
    }
    cache_frame_1532167445b7bec046e6d1004e39bd19 = NULL;

    assertFrameObject( frame_1532167445b7bec046e6d1004e39bd19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_19_legvander2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_19_legvander2d );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_20_legvander3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_deg = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_0f03de859633271c41bbbe98d54f5f61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f03de859633271c41bbbe98d54f5f61 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f03de859633271c41bbbe98d54f5f61, codeobj_0f03de859633271c41bbbe98d54f5f61, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0f03de859633271c41bbbe98d54f5f61 = cache_frame_0f03de859633271c41bbbe98d54f5f61;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f03de859633271c41bbbe98d54f5f61 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f03de859633271c41bbbe98d54f5f61 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__vander3d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legvander );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legvander );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legvander" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_3 = par_y;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_4 = par_z;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_5 = par_deg;
        frame_0f03de859633271c41bbbe98d54f5f61->m_frame.f_lineno = 1286;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f03de859633271c41bbbe98d54f5f61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f03de859633271c41bbbe98d54f5f61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f03de859633271c41bbbe98d54f5f61 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f03de859633271c41bbbe98d54f5f61, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f03de859633271c41bbbe98d54f5f61->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f03de859633271c41bbbe98d54f5f61, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f03de859633271c41bbbe98d54f5f61,
        type_description_1,
        par_x,
        par_y,
        par_z,
        par_deg
    );


    // Release cached frame.
    if ( frame_0f03de859633271c41bbbe98d54f5f61 == cache_frame_0f03de859633271c41bbbe98d54f5f61 )
    {
        Py_DECREF( frame_0f03de859633271c41bbbe98d54f5f61 );
    }
    cache_frame_0f03de859633271c41bbbe98d54f5f61 = NULL;

    assertFrameObject( frame_0f03de859633271c41bbbe98d54f5f61 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_20_legvander3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_20_legvander3d );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_21_legfit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_deg = python_pars[ 2 ];
    PyObject *par_rcond = python_pars[ 3 ];
    PyObject *par_full = python_pars[ 4 ];
    PyObject *par_w = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_2d84e23a8bef1141c6350d787c0c43d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d84e23a8bef1141c6350d787c0c43d9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d84e23a8bef1141c6350d787c0c43d9, codeobj_2d84e23a8bef1141c6350d787c0c43d9, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d84e23a8bef1141c6350d787c0c43d9 = cache_frame_2d84e23a8bef1141c6350d787c0c43d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d84e23a8bef1141c6350d787c0c43d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d84e23a8bef1141c6350d787c0c43d9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fit );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legvander );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legvander );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legvander" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_3 = par_y;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_4 = par_deg;
        CHECK_OBJECT( par_rcond );
        tmp_args_element_name_5 = par_rcond;
        CHECK_OBJECT( par_full );
        tmp_args_element_name_6 = par_full;
        CHECK_OBJECT( par_w );
        tmp_args_element_name_7 = par_w;
        frame_2d84e23a8bef1141c6350d787c0c43d9->m_frame.f_lineno = 1410;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1410;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d84e23a8bef1141c6350d787c0c43d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d84e23a8bef1141c6350d787c0c43d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d84e23a8bef1141c6350d787c0c43d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d84e23a8bef1141c6350d787c0c43d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d84e23a8bef1141c6350d787c0c43d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d84e23a8bef1141c6350d787c0c43d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d84e23a8bef1141c6350d787c0c43d9,
        type_description_1,
        par_x,
        par_y,
        par_deg,
        par_rcond,
        par_full,
        par_w
    );


    // Release cached frame.
    if ( frame_2d84e23a8bef1141c6350d787c0c43d9 == cache_frame_2d84e23a8bef1141c6350d787c0c43d9 )
    {
        Py_DECREF( frame_2d84e23a8bef1141c6350d787c0c43d9 );
    }
    cache_frame_2d84e23a8bef1141c6350d787c0c43d9 = NULL;

    assertFrameObject( frame_2d84e23a8bef1141c6350d787c0c43d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_21_legfit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_21_legfit );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_22_legcompanion( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_n = NULL;
    PyObject *var_mat = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_top = NULL;
    PyObject *var_bot = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_237029e122b2e5c9e084da6ccccf75da;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_237029e122b2e5c9e084da6ccccf75da = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_237029e122b2e5c9e084da6ccccf75da, codeobj_237029e122b2e5c9e084da6ccccf75da, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_237029e122b2e5c9e084da6ccccf75da = cache_frame_237029e122b2e5c9e084da6ccccf75da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_237029e122b2e5c9e084da6ccccf75da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_237029e122b2e5c9e084da6ccccf75da ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1440;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1440;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1440;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1440;
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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
            exception_lineno = 1440;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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
                    exception_lineno = 1440;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooo";
            exception_lineno = 1440;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_3;
            Py_INCREF( par_c );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_c );
        tmp_len_arg_1 = par_c;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1441;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_af327786ef70d70118fb639ec7c50f4e;
            frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1442;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1442;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_c );
        tmp_len_arg_2 = par_c;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1443;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_list_element_2;
            PyObject *tmp_list_element_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1444;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1444;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_int_0;
            tmp_operand_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 1444;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 1444;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_2 = par_c;
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 1444;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_list_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 1444;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_2 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_3 );
            tmp_args_element_name_2 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
            frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1444;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1444;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_c );
        tmp_len_arg_3 = par_c;
        tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1446;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        assert( var_n == NULL );
        var_n = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1447;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1447;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_2 = var_n;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_c );
        tmp_source_name_3 = par_c;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 1447;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1447;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1447;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mat == NULL );
        var_mat = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_5;
        tmp_left_name_3 = const_float_1_0;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sqrt );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_int_pos_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_4 = var_n;
        frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1448;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_arange, call_args );
        }

        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1448;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1448;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_scl == NULL );
        var_scl = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_mat );
        tmp_called_instance_3 = var_mat;
        frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1449;
        tmp_subscribed_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = const_int_pos_1;
        tmp_stop_name_1 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_left_name_6 = var_n;
        tmp_right_name_6 = const_int_pos_1;
        tmp_step_name_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_6, tmp_right_name_6 );
        assert( !(tmp_step_name_1 == NULL) );
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_step_name_1 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1449;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_top == NULL );
        var_top = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_mat );
        tmp_called_instance_4 = var_mat;
        frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1450;
        tmp_subscribed_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1450;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_start_name_2 = var_n;
        tmp_stop_name_2 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_left_name_7 = var_n;
        tmp_right_name_7 = const_int_pos_1;
        tmp_step_name_2 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_7, tmp_right_name_7 );
        assert( !(tmp_step_name_2 == NULL) );
        tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_step_name_2 );
        assert( !(tmp_subscript_name_4 == NULL) );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1450;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bot == NULL );
        var_bot = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_8;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_step_name_3;
        PyObject *tmp_right_name_10;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_6;
        tmp_args_element_name_5 = const_int_pos_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_6 = var_n;
        frame_237029e122b2e5c9e084da6ccccf75da->m_frame.f_lineno = 1451;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_left_name_9 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_arange, call_args );
        }

        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_scl );
        tmp_subscribed_name_5 = var_scl;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_left_name_10 = var_n;
        tmp_right_name_9 = const_int_pos_1;
        tmp_stop_name_3 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_10, tmp_right_name_9 );
        assert( !(tmp_stop_name_3 == NULL) );
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_right_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 1451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_scl );
        tmp_subscribed_name_6 = var_scl;
        tmp_start_name_4 = const_int_pos_1;
        CHECK_OBJECT( var_n );
        tmp_stop_name_4 = var_n;
        tmp_step_name_4 = Py_None;
        tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        assert( !(tmp_subscript_name_6 == NULL) );
        tmp_right_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 1451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_top );
        tmp_ass_subscribed_1 = var_top;
        tmp_ass_subscript_1 = Py_Ellipsis;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1451;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_top );
        tmp_ass_subvalue_2 = var_top;
        CHECK_OBJECT( var_bot );
        tmp_ass_subscribed_2 = var_bot;
        tmp_ass_subscript_2 = Py_Ellipsis;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1452;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( var_mat );
        tmp_assign_source_9 = var_mat;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_9 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_11;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_12;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_7 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_name_7 = const_tuple_slice_none_none_none_int_neg_1_tuple;
        tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_8 = par_c;
        tmp_subscript_name_8 = const_slice_none_int_neg_1_none;
        tmp_left_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_9 = par_c;
        tmp_subscript_name_9 = const_int_neg_1;
        tmp_right_name_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, -1 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_scl );
        tmp_left_name_15 = var_scl;
        CHECK_OBJECT( var_scl );
        tmp_subscribed_name_10 = var_scl;
        tmp_subscript_name_10 = const_int_neg_1;
        tmp_right_name_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, -1 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_n );
        tmp_left_name_16 = var_n;
        tmp_left_name_18 = const_int_pos_2;
        CHECK_OBJECT( var_n );
        tmp_right_name_17 = var_n;
        tmp_left_name_17 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_18, tmp_right_name_17 );
        assert( !(tmp_left_name_17 == NULL) );
        tmp_right_name_18 = const_int_pos_1;
        tmp_right_name_16 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_17, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_17 );
        assert( !(tmp_right_name_16 == NULL) );
        tmp_right_name_15 = BINARY_OPERATION_TRUEDIV_LONG_LONG( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_12 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_3 = const_tuple_slice_none_none_none_int_neg_1_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1453;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_237029e122b2e5c9e084da6ccccf75da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_237029e122b2e5c9e084da6ccccf75da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_237029e122b2e5c9e084da6ccccf75da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_237029e122b2e5c9e084da6ccccf75da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_237029e122b2e5c9e084da6ccccf75da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_237029e122b2e5c9e084da6ccccf75da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_237029e122b2e5c9e084da6ccccf75da,
        type_description_1,
        par_c,
        var_n,
        var_mat,
        var_scl,
        var_top,
        var_bot
    );


    // Release cached frame.
    if ( frame_237029e122b2e5c9e084da6ccccf75da == cache_frame_237029e122b2e5c9e084da6ccccf75da )
    {
        Py_DECREF( frame_237029e122b2e5c9e084da6ccccf75da );
    }
    cache_frame_237029e122b2e5c9e084da6ccccf75da = NULL;

    assertFrameObject( frame_237029e122b2e5c9e084da6ccccf75da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( var_mat );
    tmp_return_value = var_mat;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_22_legcompanion );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_top );
    var_top = NULL;

    Py_XDECREF( var_bot );
    var_bot = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_top );
    var_top = NULL;

    Py_XDECREF( var_bot );
    var_bot = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_22_legcompanion );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_23_legroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_m = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_603e8aa634a983388801ac525f776371;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_603e8aa634a983388801ac525f776371 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_603e8aa634a983388801ac525f776371, codeobj_603e8aa634a983388801ac525f776371, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_603e8aa634a983388801ac525f776371 = cache_frame_603e8aa634a983388801ac525f776371;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_603e8aa634a983388801ac525f776371 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_603e8aa634a983388801ac525f776371 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1501;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_603e8aa634a983388801ac525f776371->m_frame.f_lineno = 1501;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1501;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1501;
            type_description_1 = "ooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "ooo";
            exception_lineno = 1501;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "ooo";
                    exception_lineno = 1501;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooo";
            exception_lineno = 1501;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_3;
            Py_INCREF( par_c );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_c );
        tmp_len_arg_1 = par_c;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1502;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1503;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1503;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = DEEP_COPY( const_tuple_list_empty_tuple );
            tmp_dict_key_1 = const_str_plain_dtype;
            CHECK_OBJECT( par_c );
            tmp_source_name_2 = par_c;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 1503;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_603e8aa634a983388801ac525f776371->m_frame.f_lineno = 1503;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1503;
                type_description_1 = "ooo";
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
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_c );
        tmp_len_arg_2 = par_c;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1504;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_list_element_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1505;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1505;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_int_0;
            tmp_operand_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1505;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1505;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_2 = par_c;
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 1505;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1505;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
            frame_603e8aa634a983388801ac525f776371->m_frame.f_lineno = 1505;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1505;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legcompanion );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legcompanion );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legcompanion" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1508;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_3 = par_c;
        frame_603e8aa634a983388801ac525f776371->m_frame.f_lineno = 1508;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_subscribed_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1508;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1508;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_la );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_la );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "la" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1509;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_4 = var_m;
        frame_603e8aa634a983388801ac525f776371->m_frame.f_lineno = 1509;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_eigvals, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1509;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_r );
        tmp_called_instance_3 = var_r;
        frame_603e8aa634a983388801ac525f776371->m_frame.f_lineno = 1510;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_sort );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1510;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_603e8aa634a983388801ac525f776371 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_603e8aa634a983388801ac525f776371 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_603e8aa634a983388801ac525f776371 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_603e8aa634a983388801ac525f776371, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_603e8aa634a983388801ac525f776371->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_603e8aa634a983388801ac525f776371, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_603e8aa634a983388801ac525f776371,
        type_description_1,
        par_c,
        var_m,
        var_r
    );


    // Release cached frame.
    if ( frame_603e8aa634a983388801ac525f776371 == cache_frame_603e8aa634a983388801ac525f776371 )
    {
        Py_DECREF( frame_603e8aa634a983388801ac525f776371 );
    }
    cache_frame_603e8aa634a983388801ac525f776371 = NULL;

    assertFrameObject( frame_603e8aa634a983388801ac525f776371 );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_23_legroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_23_legroots );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_24_leggauss( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_deg = python_pars[ 0 ];
    PyObject *var_ideg = NULL;
    PyObject *var_c = NULL;
    PyObject *var_m = NULL;
    PyObject *var_x = NULL;
    PyObject *var_dy = NULL;
    PyObject *var_df = NULL;
    PyObject *var_fm = NULL;
    PyObject *var_w = NULL;
    struct Nuitka_FrameObject *frame_1f8987d114f8cffa5fcdb5f8f46438b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1f8987d114f8cffa5fcdb5f8f46438b7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f8987d114f8cffa5fcdb5f8f46438b7, codeobj_1f8987d114f8cffa5fcdb5f8f46438b7, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f8987d114f8cffa5fcdb5f8f46438b7 = cache_frame_1f8987d114f8cffa5fcdb5f8f46438b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f8987d114f8cffa5fcdb5f8f46438b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f8987d114f8cffa5fcdb5f8f46438b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1550;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_1 = par_deg;
        tmp_args_element_name_2 = const_str_plain_deg;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1550;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1550;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ideg == NULL );
        var_ideg = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_ideg );
        tmp_compexpr_left_1 = var_ideg;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1551;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_da2105778c631b698de188a0e1c61710;
            frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1552;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1552;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1556;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1556;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = LIST_COPY( const_list_int_0_list );
        CHECK_OBJECT( par_deg );
        tmp_right_name_1 = par_deg;
        tmp_left_name_1 = BINARY_OPERATION_MUL_LIST_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 1556;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = LIST_COPY( const_list_int_pos_1_list );
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 1556;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1556;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1556;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legcompanion );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legcompanion );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legcompanion" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1557;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_4 = var_c;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1557;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1557;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_la );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_la );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "la" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1558;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_5 = var_m;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1558;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_eigvalsh, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1558;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1561;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_6 = var_x;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_7 = var_c;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1561;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1561;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dy == NULL );
        var_dy = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1562;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_8 = var_x;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legder );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legder );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1562;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_10 = var_c;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1562;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1562;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1562;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1562;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_df == NULL );
        var_df = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_x );
        tmp_left_name_3 = var_x;
        CHECK_OBJECT( var_dy );
        tmp_left_name_4 = var_dy;
        CHECK_OBJECT( var_df );
        tmp_right_name_4 = var_df;
        tmp_right_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1563;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1563;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_left_name_3;
        var_x = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1567;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_11 = var_x;
        CHECK_OBJECT( var_c );
        tmp_subscribed_name_1 = var_c;
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1567;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1567;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1567;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fm == NULL );
        var_fm = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT( var_fm );
        tmp_left_name_5 = var_fm;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1568;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_9;
        CHECK_OBJECT( var_fm );
        tmp_args_element_name_13 = var_fm;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1568;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abs, call_args );
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1568;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1568;
        tmp_right_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_max );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1568;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1568;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_left_name_5;
        var_fm = tmp_assign_source_9;

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( var_df );
        tmp_left_name_6 = var_df;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1569;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_10;
        CHECK_OBJECT( var_df );
        tmp_args_element_name_14 = var_df;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1569;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_called_instance_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_abs, call_args );
        }

        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1569;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1569;
        tmp_right_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_max );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1569;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1569;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_left_name_6;
        var_df = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        tmp_left_name_7 = const_int_pos_1;
        CHECK_OBJECT( var_fm );
        tmp_left_name_8 = var_fm;
        CHECK_OBJECT( var_df );
        tmp_right_name_8 = var_df;
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_w );
        tmp_left_name_10 = var_w;
        CHECK_OBJECT( var_w );
        tmp_subscribed_name_2 = var_w;
        tmp_subscript_name_2 = const_slice_none_none_int_neg_1;
        tmp_right_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1573;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1573;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = const_int_pos_2;
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_9, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1573;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_w;
            assert( old != NULL );
            var_w = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( var_x );
        tmp_left_name_12 = var_x;
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_3 = var_x;
        tmp_subscript_name_3 = const_slice_none_none_int_neg_1;
        tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1574;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1574;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = const_int_pos_2;
        tmp_assign_source_13 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1574;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT( var_w );
        tmp_left_name_13 = var_w;
        tmp_left_name_14 = const_float_2_0;
        CHECK_OBJECT( var_w );
        tmp_called_instance_7 = var_w;
        frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame.f_lineno = 1577;
        tmp_right_name_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_sum );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_left_name_13;
        var_w = tmp_assign_source_14;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f8987d114f8cffa5fcdb5f8f46438b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f8987d114f8cffa5fcdb5f8f46438b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f8987d114f8cffa5fcdb5f8f46438b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f8987d114f8cffa5fcdb5f8f46438b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f8987d114f8cffa5fcdb5f8f46438b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f8987d114f8cffa5fcdb5f8f46438b7,
        type_description_1,
        par_deg,
        var_ideg,
        var_c,
        var_m,
        var_x,
        var_dy,
        var_df,
        var_fm,
        var_w
    );


    // Release cached frame.
    if ( frame_1f8987d114f8cffa5fcdb5f8f46438b7 == cache_frame_1f8987d114f8cffa5fcdb5f8f46438b7 )
    {
        Py_DECREF( frame_1f8987d114f8cffa5fcdb5f8f46438b7 );
    }
    cache_frame_1f8987d114f8cffa5fcdb5f8f46438b7 = NULL;

    assertFrameObject( frame_1f8987d114f8cffa5fcdb5f8f46438b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_1 = var_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_w );
        tmp_tuple_element_1 = var_w;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_24_leggauss );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_ideg );
    Py_DECREF( var_ideg );
    var_ideg = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_dy );
    Py_DECREF( var_dy );
    var_dy = NULL;

    CHECK_OBJECT( (PyObject *)var_df );
    Py_DECREF( var_df );
    var_df = NULL;

    CHECK_OBJECT( (PyObject *)var_fm );
    Py_DECREF( var_fm );
    var_fm = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

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

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_ideg );
    var_ideg = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_dy );
    var_dy = NULL;

    Py_XDECREF( var_df );
    var_df = NULL;

    Py_XDECREF( var_fm );
    var_fm = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_24_leggauss );
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


static PyObject *impl_numpy$polynomial$legendre$$$function_25_legweight( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_w = NULL;
    struct Nuitka_FrameObject *frame_0c1675adca5393eafe4d8e698910dd40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c1675adca5393eafe4d8e698910dd40 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0c1675adca5393eafe4d8e698910dd40, codeobj_0c1675adca5393eafe4d8e698910dd40, module_numpy$polynomial$legendre, sizeof(void *)+sizeof(void *) );
    frame_0c1675adca5393eafe4d8e698910dd40 = cache_frame_0c1675adca5393eafe4d8e698910dd40;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0c1675adca5393eafe4d8e698910dd40 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0c1675adca5393eafe4d8e698910dd40 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_x );
        tmp_left_name_2 = par_x;
        tmp_right_name_1 = const_float_0_0;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1606;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_1_0;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1606;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c1675adca5393eafe4d8e698910dd40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c1675adca5393eafe4d8e698910dd40 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0c1675adca5393eafe4d8e698910dd40, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0c1675adca5393eafe4d8e698910dd40->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0c1675adca5393eafe4d8e698910dd40, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0c1675adca5393eafe4d8e698910dd40,
        type_description_1,
        par_x,
        var_w
    );


    // Release cached frame.
    if ( frame_0c1675adca5393eafe4d8e698910dd40 == cache_frame_0c1675adca5393eafe4d8e698910dd40 )
    {
        Py_DECREF( frame_0c1675adca5393eafe4d8e698910dd40 );
    }
    cache_frame_0c1675adca5393eafe4d8e698910dd40 = NULL;

    assertFrameObject( frame_0c1675adca5393eafe4d8e698910dd40 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_w );
    tmp_return_value = var_w;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_25_legweight );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre$$$function_25_legweight );
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



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_10_legpow( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_10_legpow,
        const_str_plain_legpow,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ad68996df55e68f840055803259e0ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_711a0201d952bbbaee313c2dd939cb20,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_11_legder( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_11_legder,
        const_str_plain_legder,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1e268ca069c549b4e3ce589219186dd0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_2dde18637600520199a1f7df9178f8e2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_12_legint( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_12_legint,
        const_str_plain_legint,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_824a4cfc4abb3e5c82432c7a8375a2c4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_645bab58e06138e42775c0a5b820a50a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_13_legval( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_13_legval,
        const_str_plain_legval,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4eadfd694d98bb0a72bf1a8fb14e583a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_1e25be283731f6e219321a9db6816dd4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_14_legval2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_14_legval2d,
        const_str_plain_legval2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a585d7c18203fb83cb37e1640d15d479,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_64b84da60d1d69e4e065e8ab146f6e21,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_15_leggrid2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_15_leggrid2d,
        const_str_plain_leggrid2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_62b69ac06fe6d04a886ab336633d1547,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_0b0c095930399aa2ef75f6ec4fae0476,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_16_legval3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_16_legval3d,
        const_str_plain_legval3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_505b01b53ff0dbb5b86d8974fe265afb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_967588107b02010b9efcdcdac59512bf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_17_leggrid3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_17_leggrid3d,
        const_str_plain_leggrid3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_117167350366196be5b9fbb6d735383c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_bd7d3ccf91e4ab6eb4727b3575849f1a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_18_legvander(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_18_legvander,
        const_str_plain_legvander,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35e444755c524a4bc123a8222732a23a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_c3c7c9f90583c17d917afae8020235e1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_19_legvander2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_19_legvander2d,
        const_str_plain_legvander2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1532167445b7bec046e6d1004e39bd19,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_283cb7dac52cd3d2279909340923ada9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_1_poly2leg(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_1_poly2leg,
        const_str_plain_poly2leg,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_49b3cd53b17dbf077a9e138c7c8bc056,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_41343e85c36660215d4be3ea54c36220,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_20_legvander3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_20_legvander3d,
        const_str_plain_legvander3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0f03de859633271c41bbbe98d54f5f61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_1836e9e8bc8f8a3c6f5b817954c8956f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_21_legfit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_21_legfit,
        const_str_plain_legfit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2d84e23a8bef1141c6350d787c0c43d9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_ae8937c09e9dd3db3754bdf80b367e58,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_22_legcompanion(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_22_legcompanion,
        const_str_plain_legcompanion,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_237029e122b2e5c9e084da6ccccf75da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_9cdcbe6463a55ed28bc11b50a338e5ae,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_23_legroots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_23_legroots,
        const_str_plain_legroots,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_603e8aa634a983388801ac525f776371,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_51c8b6abf71c35089f5380b3f3e0bc04,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_24_leggauss(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_24_leggauss,
        const_str_plain_leggauss,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1f8987d114f8cffa5fcdb5f8f46438b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_f6c80c0acfdfae06fe52f19516d8a5a8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_25_legweight(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_25_legweight,
        const_str_plain_legweight,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c1675adca5393eafe4d8e698910dd40,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_2bcf8aeab040d22fc81d4f5e059f6690,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_2_leg2poly(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_2_leg2poly,
        const_str_plain_leg2poly,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_74a0f1bfc74048fce829f5ca173570a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_c36cffd6c59d07a581011c24c5a6c0cb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_3_legline(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_3_legline,
        const_str_plain_legline,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5667236fa68992a939e635755a17f864,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_4d940d48505137ef0b24cdef638c8343,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_4_legfromroots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_4_legfromroots,
        const_str_plain_legfromroots,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_318e97af334a1b9f28d81621073a2176,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_10c7d3749bf0751a1956e0e8e2fb54c7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_5_legadd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_5_legadd,
        const_str_plain_legadd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_78688fab7f9b4b5b61fec228f04b0518,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_e941b27bb800a69c805f24bf7ee09049,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_6_legsub(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_6_legsub,
        const_str_plain_legsub,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_64b269b30d0f89511d8e4136496fec4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_fdfb9cd747e053a8154bceca1c967362,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_7_legmulx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_7_legmulx,
        const_str_plain_legmulx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_739d86295ee9ed31e3412aaf50e02729,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_2bffd439738cf60c01fa68a3bc7169c1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_8_legmul(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_8_legmul,
        const_str_plain_legmul,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a6956d53047b6254714bc69f70108032,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_66bb1ddcec70db3f887aab7ff40c6c7d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$legendre$$$function_9_legdiv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$legendre$$$function_9_legdiv,
        const_str_plain_legdiv,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2596edf088ef7543d03b1b749becad5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$legendre,
        const_str_digest_50486979601fa56e17e2e7c9d631e855,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial$legendre =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial.legendre",
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
MOD_ENTRY_DECL(numpy$polynomial$legendre)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(numpy$polynomial$legendre)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial$legendre );
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
    puts("numpy.polynomial.legendre: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.legendre: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.legendre: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$polynomial$legendre" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial$legendre = Py_InitModule4(
        "numpy.polynomial.legendre",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$polynomial$legendre = PyModule_Create( &mdef_numpy$polynomial$legendre );
#endif

    moduledict_numpy$polynomial$legendre = MODULE_DICT( module_numpy$polynomial$legendre );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$polynomial$legendre,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$polynomial$legendre,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$legendre,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$legendre,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$polynomial$legendre );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e111a243f153b03bdf2c8122c15641bf, module_numpy$polynomial$legendre );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_40a0df6c662611fce317cda9c320e812;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_numpy$polynomial$legendre_1613 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_43bc7a760dc713669a38fa99783a4e66_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_43bc7a760dc713669a38fa99783a4e66_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_d8e393830e65c14b3f5f2e2bcf0ce793;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_2ab6fd1974ce98fb094f158eab128cda;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_40a0df6c662611fce317cda9c320e812 = MAKE_MODULE_FRAME( codeobj_40a0df6c662611fce317cda9c320e812, module_numpy$polynomial$legendre );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_40a0df6c662611fce317cda9c320e812 );
    assert( Py_REFCNT( frame_40a0df6c662611fce317cda9c320e812 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_2ab6fd1974ce98fb094f158eab128cda;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 84;
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


            exception_lineno = 84;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 84;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 84;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$polynomial$legendre;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 86;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$polynomial$legendre;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 87;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$polynomial$legendre;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 88;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_linalg );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_la, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$polynomial$legendre;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_normalize_axis_index_tuple;
        tmp_level_name_4 = const_int_0;
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 89;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_normalize_axis_index );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_normalize_axis_index, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_empty;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$polynomial$legendre;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_polyutils_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 91;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$polynomial$legendre,
                const_str_plain_polyutils,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_polyutils );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__polybase;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$polynomial$legendre;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_ABCPolyBase_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 92;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$polynomial$legendre,
                const_str_plain_ABCPolyBase,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ABCPolyBase );
        }

        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_ABCPolyBase, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = LIST_COPY( const_list_cb7f181d757d9bb70e42e2f4885dd3f6_list );
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_pu );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trimcoef );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legtrim, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_1_poly2leg(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_poly2leg, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_2_leg2poly(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_leg2poly, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_arg_element_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        tmp_call_arg_element_1 = LIST_COPY( const_list_int_neg_1_int_pos_1_list );
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legdomain, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_arg_element_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        tmp_call_arg_element_2 = LIST_COPY( const_list_int_0_list );
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_call_arg_element_2 };
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_2 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legzero, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_arg_element_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        tmp_call_arg_element_3 = LIST_COPY( const_list_int_pos_1_list );
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_call_arg_element_3 };
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legone, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_arg_element_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        tmp_call_arg_element_4 = LIST_COPY( const_list_int_0_int_pos_1_list );
        frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_call_arg_element_4 };
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legx, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_3_legline(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legline, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_4_legfromroots(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legfromroots, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_5_legadd(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legadd, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_6_legsub(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legsub, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_7_legmulx(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmulx, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_8_legmul(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmul, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_9_legdiv(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legdiv, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_pos_16_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_10_legpow( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legpow, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_pos_1_int_pos_1_int_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_11_legder( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legder, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = const_int_pos_1;
        tmp_defaults_3 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_3, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_3, 4, tmp_tuple_element_1 );
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_12_legint( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legint, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_13_legval( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_14_legval2d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval2d, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_15_leggrid2d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_leggrid2d, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_16_legval3d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval3d, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_17_leggrid3d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_leggrid3d, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_18_legvander(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legvander, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_19_legvander2d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legvander2d, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_20_legvander3d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legvander3d, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_false_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_21_legfit( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legfit, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_22_legcompanion(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legcompanion, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_23_legroots(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legroots, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_24_leggauss(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_leggauss, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_numpy$polynomial$legendre$$$function_25_legweight(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legweight, tmp_assign_source_44 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABCPolyBase" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1613;

            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        tmp_assign_source_45 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_46 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_48 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_2, const_str_plain___prepare__ );
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1613;

                goto try_except_handler_2;
            }
            tmp_tuple_element_3 = const_str_plain_Legendre;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 1613;
            tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1613;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_49;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_4, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1613;

                goto try_except_handler_2;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_4 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1613;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_5 == NULL) );
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 1613;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_4 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1613;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 1613;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_50;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$polynomial$legendre_1613 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_e111a243f153b03bdf2c8122c15641bf;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_e7d499f020a2bd0c1a0bcdb10e37b531;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_Legendre;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1613;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_43bc7a760dc713669a38fa99783a4e66_2, codeobj_43bc7a760dc713669a38fa99783a4e66, module_numpy$polynomial$legendre, sizeof(void *) );
        frame_43bc7a760dc713669a38fa99783a4e66_2 = cache_frame_43bc7a760dc713669a38fa99783a4e66_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_43bc7a760dc713669a38fa99783a4e66_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_43bc7a760dc713669a38fa99783a4e66_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_mvar_value_10;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1636;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_2 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1636;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1636;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legadd );

            if ( tmp_args_element_name_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legadd );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legadd );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legadd" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1636;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_1 = tmp_mvar_value_9;
                Py_INCREF( tmp_args_element_name_1 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1636;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1636;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_staticmethod_arg_1 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legadd );

            if ( tmp_staticmethod_arg_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legadd );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legadd );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legadd" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1636;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_1 = tmp_mvar_value_10;
                Py_INCREF( tmp_staticmethod_arg_1 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1636;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__add, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1636;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_staticmethod_arg_2;
            PyObject *tmp_mvar_value_12;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1637;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_4;
            }
            else
            {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_3 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1637;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1637;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_2 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legsub );

            if ( tmp_args_element_name_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legsub );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legsub );
                }

                if ( tmp_mvar_value_11 == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legsub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1637;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_2 = tmp_mvar_value_11;
                Py_INCREF( tmp_args_element_name_2 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1637;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1637;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_staticmethod_arg_2 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legsub );

            if ( tmp_staticmethod_arg_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legsub );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legsub );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legsub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1637;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_2 = tmp_mvar_value_12;
                Py_INCREF( tmp_staticmethod_arg_2 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
            Py_DECREF( tmp_staticmethod_arg_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1637;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__sub, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1637;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_staticmethod_arg_3;
            PyObject *tmp_mvar_value_14;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_5;
            }
            else
            {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_4 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legmul );

            if ( tmp_args_element_name_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmul );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmul );
                }

                if ( tmp_mvar_value_13 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmul" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1638;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_3 = tmp_mvar_value_13;
                Py_INCREF( tmp_args_element_name_3 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1638;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_staticmethod_arg_3 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legmul );

            if ( tmp_staticmethod_arg_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legmul );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legmul );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legmul" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1638;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_3 = tmp_mvar_value_14;
                Py_INCREF( tmp_staticmethod_arg_3 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_3 );
            Py_DECREF( tmp_staticmethod_arg_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__mul, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1638;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_staticmethod_arg_4;
            PyObject *tmp_mvar_value_16;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1639;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_6;
            }
            else
            {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_5 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1639;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1639;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_4 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legdiv );

            if ( tmp_args_element_name_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legdiv );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legdiv );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legdiv" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1639;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_4 = tmp_mvar_value_15;
                Py_INCREF( tmp_args_element_name_4 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1639;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1639;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_staticmethod_arg_4 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legdiv );

            if ( tmp_staticmethod_arg_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legdiv );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legdiv );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legdiv" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1639;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_4 = tmp_mvar_value_16;
                Py_INCREF( tmp_staticmethod_arg_4 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_4 );
            Py_DECREF( tmp_staticmethod_arg_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1639;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__div, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1639;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_staticmethod_arg_5;
            PyObject *tmp_mvar_value_18;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_7;
            }
            else
            {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_name_6 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legpow );

            if ( tmp_args_element_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legpow );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legpow );
                }

                if ( tmp_mvar_value_17 == NULL )
                {
                    Py_DECREF( tmp_called_name_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legpow" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1640;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_5 = tmp_mvar_value_17;
                Py_INCREF( tmp_args_element_name_5 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1640;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_staticmethod_arg_5 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legpow );

            if ( tmp_staticmethod_arg_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legpow );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legpow );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legpow" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1640;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_5 = tmp_mvar_value_18;
                Py_INCREF( tmp_staticmethod_arg_5 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_5 );
            Py_DECREF( tmp_staticmethod_arg_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__pow, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1640;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_staticmethod_arg_6;
            PyObject *tmp_mvar_value_20;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_8;
            }
            else
            {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_name_7 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_6 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legval );

            if ( tmp_args_element_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1641;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_6 = tmp_mvar_value_19;
                Py_INCREF( tmp_args_element_name_6 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1641;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_staticmethod_arg_6 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legval );

            if ( tmp_staticmethod_arg_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legval );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legval );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legval" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1641;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_6 = tmp_mvar_value_20;
                Py_INCREF( tmp_staticmethod_arg_6 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_6 );
            Py_DECREF( tmp_staticmethod_arg_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__val, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1641;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_staticmethod_arg_7;
            PyObject *tmp_mvar_value_22;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1642;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_12 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_9;
            }
            else
            {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_name_8 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1642;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1642;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_7 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legint );

            if ( tmp_args_element_name_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legint );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legint );
                }

                if ( tmp_mvar_value_21 == NULL )
                {
                    Py_DECREF( tmp_called_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legint" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1642;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_7 = tmp_mvar_value_21;
                Py_INCREF( tmp_args_element_name_7 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1642;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1642;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_staticmethod_arg_7 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legint );

            if ( tmp_staticmethod_arg_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legint );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legint );
                }

                if ( tmp_mvar_value_22 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legint" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1642;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_7 = tmp_mvar_value_22;
                Py_INCREF( tmp_staticmethod_arg_7 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_7 );
            Py_DECREF( tmp_staticmethod_arg_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1642;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__int, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1642;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_staticmethod_arg_8;
            PyObject *tmp_mvar_value_24;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1643;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_13 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_10;
            }
            else
            {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_name_9 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1643;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1643;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_8 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legder );

            if ( tmp_args_element_name_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legder );

                if (unlikely( tmp_mvar_value_23 == NULL ))
                {
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legder );
                }

                if ( tmp_mvar_value_23 == NULL )
                {
                    Py_DECREF( tmp_called_name_9 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legder" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1643;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_8 = tmp_mvar_value_23;
                Py_INCREF( tmp_args_element_name_8 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1643;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1643;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_staticmethod_arg_8 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legder );

            if ( tmp_staticmethod_arg_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legder );

                if (unlikely( tmp_mvar_value_24 == NULL ))
                {
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legder );
                }

                if ( tmp_mvar_value_24 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legder" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1643;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_8 = tmp_mvar_value_24;
                Py_INCREF( tmp_staticmethod_arg_8 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_8 );
            Py_DECREF( tmp_staticmethod_arg_8 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1643;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__der, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1643;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_mvar_value_25;
            PyObject *tmp_staticmethod_arg_9;
            PyObject *tmp_mvar_value_26;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1644;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_14 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_11;
            }
            else
            {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_name_10 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1644;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1644;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_9 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legfit );

            if ( tmp_args_element_name_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legfit );

                if (unlikely( tmp_mvar_value_25 == NULL ))
                {
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legfit );
                }

                if ( tmp_mvar_value_25 == NULL )
                {
                    Py_DECREF( tmp_called_name_10 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legfit" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1644;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_9 = tmp_mvar_value_25;
                Py_INCREF( tmp_args_element_name_9 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1644;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1644;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_staticmethod_arg_9 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legfit );

            if ( tmp_staticmethod_arg_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legfit );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legfit );
                }

                if ( tmp_mvar_value_26 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legfit" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1644;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_9 = tmp_mvar_value_26;
                Py_INCREF( tmp_staticmethod_arg_9 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_9 );
            Py_DECREF( tmp_staticmethod_arg_9 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1644;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__fit, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1644;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_mvar_value_27;
            PyObject *tmp_staticmethod_arg_10;
            PyObject *tmp_mvar_value_28;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_15 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_12;
            }
            else
            {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_name_11 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_10 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legline );

            if ( tmp_args_element_name_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legline );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legline );
                }

                if ( tmp_mvar_value_27 == NULL )
                {
                    Py_DECREF( tmp_called_name_11 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legline" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1645;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_10 = tmp_mvar_value_27;
                Py_INCREF( tmp_args_element_name_10 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1645;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_staticmethod_arg_10 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legline );

            if ( tmp_staticmethod_arg_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legline );

                if (unlikely( tmp_mvar_value_28 == NULL ))
                {
                    tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legline );
                }

                if ( tmp_mvar_value_28 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legline" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1645;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_10 = tmp_mvar_value_28;
                Py_INCREF( tmp_staticmethod_arg_10 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_10 );
            Py_DECREF( tmp_staticmethod_arg_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__line, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1645;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_mvar_value_29;
            PyObject *tmp_staticmethod_arg_11;
            PyObject *tmp_mvar_value_30;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_16 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_13;
            }
            else
            {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_name_12 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_11 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legroots );

            if ( tmp_args_element_name_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legroots );

                if (unlikely( tmp_mvar_value_29 == NULL ))
                {
                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legroots );
                }

                if ( tmp_mvar_value_29 == NULL )
                {
                    Py_DECREF( tmp_called_name_12 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1646;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_11 = tmp_mvar_value_29;
                Py_INCREF( tmp_args_element_name_11 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1646;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_staticmethod_arg_11 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legroots );

            if ( tmp_staticmethod_arg_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legroots );

                if (unlikely( tmp_mvar_value_30 == NULL ))
                {
                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legroots );
                }

                if ( tmp_mvar_value_30 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1646;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_11 = tmp_mvar_value_30;
                Py_INCREF( tmp_staticmethod_arg_11 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_11 );
            Py_DECREF( tmp_staticmethod_arg_11 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__roots, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1646;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_mvar_value_31;
            PyObject *tmp_staticmethod_arg_12;
            PyObject *tmp_mvar_value_32;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_17 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_14;
            }
            else
            {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_name_13 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_staticmethod );

            if ( tmp_called_name_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_12 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legfromroots );

            if ( tmp_args_element_name_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legfromroots );

                if (unlikely( tmp_mvar_value_31 == NULL ))
                {
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legfromroots );
                }

                if ( tmp_mvar_value_31 == NULL )
                {
                    Py_DECREF( tmp_called_name_13 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legfromroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1647;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_12 = tmp_mvar_value_31;
                Py_INCREF( tmp_args_element_name_12 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1647;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_staticmethod_arg_12 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legfromroots );

            if ( tmp_staticmethod_arg_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legfromroots );

                if (unlikely( tmp_mvar_value_32 == NULL ))
                {
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legfromroots );
                }

                if ( tmp_mvar_value_32 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legfromroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1647;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_staticmethod_arg_12 = tmp_mvar_value_32;
                Py_INCREF( tmp_staticmethod_arg_12 );
                }
            }

            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_12 );
            Py_DECREF( tmp_staticmethod_arg_12 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain__fromroots, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1647;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = const_str_plain_leg;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_nickname, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1650;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_mvar_value_34;
            tmp_source_name_6 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_np );

            if ( tmp_source_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_33 == NULL ))
                {
                    tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_33 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1651;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_6 = tmp_mvar_value_33;
                Py_INCREF( tmp_source_name_6 );
                }
            }

            tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_array );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_called_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1651;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_13 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legdomain );

            if ( tmp_args_element_name_13 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legdomain );

                if (unlikely( tmp_mvar_value_34 == NULL ))
                {
                    tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legdomain );
                }

                if ( tmp_mvar_value_34 == NULL )
                {
                    Py_DECREF( tmp_called_name_14 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legdomain" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1651;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_13 = tmp_mvar_value_34;
                Py_INCREF( tmp_args_element_name_13 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1651;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_called_name_14 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1651;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_domain, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1651;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_35;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_mvar_value_36;
            tmp_source_name_7 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_np );

            if ( tmp_source_name_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_35 == NULL ))
                {
                    tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_35 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1652;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_7 = tmp_mvar_value_35;
                Py_INCREF( tmp_source_name_7 );
                }
            }

            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_array );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1652;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_14 = PyObject_GetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_legdomain );

            if ( tmp_args_element_name_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_legdomain );

                if (unlikely( tmp_mvar_value_36 == NULL ))
                {
                    tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_legdomain );
                }

                if ( tmp_mvar_value_36 == NULL )
                {
                    Py_DECREF( tmp_called_name_15 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "legdomain" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1652;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_14 = tmp_mvar_value_36;
                Py_INCREF( tmp_args_element_name_14 );
                }
            }

            frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame.f_lineno = 1652;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1652;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_window, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1652;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = const_str_plain_P;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain_basis_name, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1653;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_43bc7a760dc713669a38fa99783a4e66_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_43bc7a760dc713669a38fa99783a4e66_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_43bc7a760dc713669a38fa99783a4e66_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_43bc7a760dc713669a38fa99783a4e66_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_43bc7a760dc713669a38fa99783a4e66_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_43bc7a760dc713669a38fa99783a4e66_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_43bc7a760dc713669a38fa99783a4e66_2 == cache_frame_43bc7a760dc713669a38fa99783a4e66_2 )
        {
            Py_DECREF( frame_43bc7a760dc713669a38fa99783a4e66_2 );
        }
        cache_frame_43bc7a760dc713669a38fa99783a4e66_2 = NULL;

        assertFrameObject( frame_43bc7a760dc713669a38fa99783a4e66_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1613;

                goto try_except_handler_4;
            }
            tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$legendre_1613, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1613;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_16 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_Legendre;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            tmp_tuple_element_5 = locals_numpy$polynomial$legendre_1613;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_40a0df6c662611fce317cda9c320e812->m_frame.f_lineno = 1613;
            tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1613;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_51 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_51 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_numpy$polynomial$legendre_1613 );
        locals_numpy$polynomial$legendre_1613 = NULL;
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

        Py_DECREF( locals_numpy$polynomial$legendre_1613 );
        locals_numpy$polynomial$legendre_1613 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$legendre );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 1613;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$legendre, (Nuitka_StringObject *)const_str_plain_Legendre, tmp_assign_source_51 );
    }
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_1__bases_orig );
    tmp_class_creation_1__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40a0df6c662611fce317cda9c320e812 );
#endif
    popFrameStack();

    assertFrameObject( frame_40a0df6c662611fce317cda9c320e812 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40a0df6c662611fce317cda9c320e812 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40a0df6c662611fce317cda9c320e812, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40a0df6c662611fce317cda9c320e812->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40a0df6c662611fce317cda9c320e812, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases_orig );
    Py_DECREF( tmp_class_creation_1__bases_orig );
    tmp_class_creation_1__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_numpy$polynomial$legendre );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
