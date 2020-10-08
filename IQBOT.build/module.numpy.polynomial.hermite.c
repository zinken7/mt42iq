/* Generated code for Python module 'numpy.polynomial.hermite'
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

/* The "_module_numpy$polynomial$hermite" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$hermite;
PyDictObject *moduledict_numpy$polynomial$hermite;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_pol;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_9155005e41c3737e8ba43420c4730900_tuple;
static PyObject *const_str_plain_hermmul;
extern PyObject *const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_prd;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain_off_str_plain_scl_tuple;
extern PyObject *const_tuple_type_tuple_type_list_tuple;
extern PyObject *const_str_digest_616f6ee3ef74479987454a15fb3cc986;
extern PyObject *const_str_plain_accumulate;
extern PyObject *const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple;
extern PyObject *const_str_digest_b303cff154cb34d4708df3886d4b732e;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_iterable;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_int_pos_1_int_pos_1_int_0_tuple;
extern PyObject *const_str_plain_i;
static PyObject *const_str_digest_b4b22a53c630189423e63a82fc9efd13;
extern PyObject *const_str_plain_eigvalsh;
static PyObject *const_str_digest_0233c512a75882bacf2ead42c82e440d;
static PyObject *const_str_digest_79aa7845de5bdcc58f6772c7d8e3cb31;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_plain_hermcompanion;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain__polybase;
extern PyObject *const_str_plain_double;
extern PyObject *const_str_digest_70e3e648da9207a55990fb352e033d01;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_dtyp;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_hermpow;
static PyObject *const_str_digest_ec68a65009ef17bf791157b7ba885ede;
static PyObject *const_str_plain_hermsub;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain__fit;
extern PyObject *const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_hermval;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_tuple_c4b91bcb0776c1f61b0508de5afe5070_tuple;
extern PyObject *const_str_plain_H;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_digest_da2105778c631b698de188a0e1c61710;
extern PyObject *const_str_plain_der;
extern PyObject *const_str_plain_astype;
extern PyObject *const_dict_0aaf07bc1f9989227b8953d83057c37b;
extern PyObject *const_float_0_5;
extern PyObject *const_tuple_slice_none_none_int_neg_1_slice_none_none_int_neg_1_tuple;
extern PyObject *const_str_plain_full;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple;
extern PyObject *const_str_plain__valnd;
extern PyObject *const_str_plain__deprecate_as_int;
static PyObject *const_str_digest_e344a2d6b68dd580ed7751d269b08212;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_dict_264a7d97adf9df3f4beb0f489755c06f;
extern PyObject *const_str_plain_linalg;
static PyObject *const_str_plain_hermgrid2d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_ideg;
extern PyObject *const_str_plain__pow;
extern PyObject *const_tuple_str_plain_polyadd_str_plain_polysub_str_plain_polymulx_tuple;
extern PyObject *const_str_plain_polynomial;
static PyObject *const_list_906a319729d646dc106ab9203973edb1_list;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple;
extern PyObject *const_str_plain_as_series;
static PyObject *const_str_digest_f5e0384f5553c51b1b3fd4f6e8d47e48;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_res;
static PyObject *const_list_int_0_float_0_5_list;
extern PyObject *const_str_plain__der;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_2ce4b48ec17c44472e33514d764e3d7c;
static PyObject *const_str_digest_76082d9373be91bf0e3f5df3d298febc;
static PyObject *const_str_plain_herm2poly;
extern PyObject *const_tuple_str_plain_roots_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_nickname;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_digest_ea8c65b23281db7ee7660696e61ab360;
extern PyObject *const_tuple_str_plain_ABCPolyBase_tuple;
static PyObject *const_str_plain_hermgauss;
static PyObject *const_str_digest_d0f21d4282709d5b1f4fff9eb523c00d;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_pi;
extern PyObject *const_str_plain_n;
extern PyObject *const_int_neg_2;
static PyObject *const_str_plain_hermroots;
static PyObject *const_str_plain_hermfit;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_polymulx;
extern PyObject *const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
static PyObject *const_str_digest_87a48fe75220900c1afcbf4e8775f4cb;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_c2;
static PyObject *const_str_digest_ee85202f620e1efdba1ca0a717e3afaa;
extern PyObject *const_str_plain_fm;
extern PyObject *const_float_2_0;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_pu;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_normalize_axis_index;
extern PyObject *const_str_plain_roots;
extern PyObject *const_tuple_int_pos_16_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_str_digest_933bc4cb7fc43137efea1500cad0afd6;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_plain_hermdomain;
extern PyObject *const_str_plain_domain;
extern PyObject *const_str_plain_polysub;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain_la;
extern PyObject *const_tuple_str_plain_x_str_plain_w_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_7bc9fee5de8fbb571d3e7de42f67b827;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_polyadd;
extern PyObject *const_tuple_str_plain_polyutils_tuple;
static PyObject *const_str_plain__normed_hermite_n;
extern PyObject *const_str_digest_a9be14195673dac9b8db86f91b86f4b8;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_hermtrim;
static PyObject *const_str_plain_hermvander2d;
extern PyObject *const_str_plain_top;
static PyObject *const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple;
static PyObject *const_str_digest_8745b4d5e1169a38d182ce566a6d969b;
extern PyObject *const_str_plain_deg;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain__add;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple;
extern PyObject *const_str_plain_lbnd;
extern PyObject *const_str_plain__fromroots;
extern PyObject *const_str_plain_mat;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
static PyObject *const_str_digest_b042ae68f68c83ee53182cf1b0e39619;
extern PyObject *const_str_plain_Hermite;
extern PyObject *const_tuple_b87a3e87a6253db629058266b0859839_tuple;
static PyObject *const_str_plain_hermint;
extern PyObject *const_str_plain_trimcoef;
extern PyObject *const_str_plain__int;
extern PyObject *const_str_plain_xs;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
extern PyObject *const_str_plain__gridnd;
static PyObject *const_str_digest_d9bce18bf24a65c247ac08b5785d8edd;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_hermval3d;
extern PyObject *const_str_plain_iaxis;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_da5501e8e216a8a52345697e4ca88221;
extern PyObject *const_slice_none_int_pos_1_none;
static PyObject *const_str_plain_hermmulx;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_hermx;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_eigvals;
static PyObject *const_str_plain_hermder;
static PyObject *const_str_plain_hermfromroots;
extern PyObject *const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple;
extern PyObject *const_str_plain_c1;
extern PyObject *const_str_plain__vander2d;
extern PyObject *const_str_plain_pow;
extern PyObject *const_str_plain_dy;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_df;
extern PyObject *const_tuple_12007d4ec7f577025a49b2ac80678cc6_tuple;
extern PyObject *const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
extern PyObject *const_str_plain_off;
extern PyObject *const_str_plain_bot;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_float64;
extern PyObject *const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
extern PyObject *const_str_digest_af327786ef70d70118fb639ec7c50f4e;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_tensor;
static PyObject *const_str_digest_c2e2877902ed76c5634a254b79ca3070;
extern PyObject *const_tuple_dfde0fffe950637125c97009296b6a79_tuple;
static PyObject *const_str_plain_hermvander;
extern PyObject *const_str_plain__mul;
extern PyObject *const_str_plain_nd;
static PyObject *const_str_digest_d8cab349acba3a44ae3672edb38ee496;
extern PyObject *const_str_plain_moveaxis;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_7f712a6292710d305d54789dfd034b2d;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_556654d8c41102e6b648eeebe440c961;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple;
extern PyObject *const_str_plain_c;
extern PyObject *const_tuple_03b7673e655b056e4f0304ce1db40177_tuple;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_a61f47dbac6795f2e00baa25f0097162;
static PyObject *const_str_plain_herm;
extern PyObject *const_str_plain_window;
static PyObject *const_str_plain_hermval2d;
extern PyObject *const_dict_1eef64507cf3de8ea0ea857c5e7e1090;
extern PyObject *const_str_plain__line;
static PyObject *const_str_plain_hermone;
extern PyObject *const_str_plain__sub;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_hermweight;
static PyObject *const_str_plain_hermline;
static PyObject *const_str_plain_hermvander3d;
extern PyObject *const_str_digest_a4ebb85230f14bf30cd89adbff1d8f92;
static PyObject *const_str_plain_hermgrid3d;
static PyObject *const_str_plain_hermadd;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_maxpower;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
extern PyObject *const_list_int_neg_1_int_pos_1_list;
static PyObject *const_str_digest_6cda7ea5861e76d5f257a230b7c4c9d7;
extern PyObject *const_str_plain_v;
static PyObject *const_str_plain_poly2herm;
extern PyObject *const_str_plain_basis_name;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple;
extern PyObject *const_float_minus_0_5;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_z;
extern PyObject *const_tuple_none_false_none_tuple;
extern PyObject *const_str_plain_dims;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_e51196dd8e0a5a3c6974e277f19d5b81;
extern PyObject *const_str_plain__val;
extern PyObject *const_str_plain_y;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
extern PyObject *const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple;
extern PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
extern PyObject *const_str_plain_ABCPolyBase;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_ac6dad3981b7e3a25c8c8eb922a0f3f8;
static PyObject *const_str_plain_hermzero;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_31dc77ee0bf9fe6d970cc8d226d2ed2e;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_299901cfab77045b8cccd2b7d620afab;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_cnt;
extern PyObject *const_str_plain_polyutils;
extern PyObject *const_tuple_list_empty_tuple;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_b816a0fb53b07c1aae7ad6c902f66814;
extern PyObject *const_tuple_str_plain_c1_str_plain_c2_tuple;
extern PyObject *const_str_plain_c0;
extern PyObject *const_str_plain__vander3d;
extern PyObject *const_str_plain_x2;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_digest_6cae10ae7eb457611d7e08b7ab115f87;
extern PyObject *const_str_plain_multiply;
extern PyObject *const_str_plain__roots;
extern PyObject *const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple;
static PyObject *const_str_digest_6269ee6747c1222fa2b7fc655c468505;
extern PyObject *const_str_plain__div;
extern PyObject *const_str_plain_scl;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_hermdiv;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_ndmin;
static PyObject *const_str_digest_80e523600d02515b68df04cb10521fcf;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_hermmul = UNSTREAM_STRING_ASCII( &constant_bin[ 2184421 ], 7, 1 );
    const_str_digest_b4b22a53c630189423e63a82fc9efd13 = UNSTREAM_STRING_ASCII( &constant_bin[ 2184428 ], 755, 0 );
    const_str_digest_0233c512a75882bacf2ead42c82e440d = UNSTREAM_STRING_ASCII( &constant_bin[ 2185183 ], 522, 0 );
    const_str_digest_79aa7845de5bdcc58f6772c7d8e3cb31 = UNSTREAM_STRING_ASCII( &constant_bin[ 2185705 ], 1014, 0 );
    const_str_plain_hermcompanion = UNSTREAM_STRING_ASCII( &constant_bin[ 2186719 ], 13, 1 );
    const_str_plain_hermpow = UNSTREAM_STRING_ASCII( &constant_bin[ 2184849 ], 7, 1 );
    const_str_digest_ec68a65009ef17bf791157b7ba885ede = UNSTREAM_STRING_ASCII( &constant_bin[ 2186732 ], 3424, 0 );
    const_str_plain_hermsub = UNSTREAM_STRING_ASCII( &constant_bin[ 2184822 ], 7, 1 );
    const_str_plain_hermval = UNSTREAM_STRING_ASCII( &constant_bin[ 2185608 ], 7, 1 );
    const_str_digest_e344a2d6b68dd580ed7751d269b08212 = UNSTREAM_STRING_ASCII( &constant_bin[ 2190156 ], 1029, 0 );
    const_str_plain_hermgrid2d = UNSTREAM_STRING_ASCII( &constant_bin[ 2191185 ], 10, 1 );
    const_list_906a319729d646dc106ab9203973edb1_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2191195 ], 335 );
    const_str_digest_f5e0384f5553c51b1b3fd4f6e8d47e48 = UNSTREAM_STRING_ASCII( &constant_bin[ 2191530 ], 2611, 0 );
    const_list_int_0_float_0_5_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_int_0_float_0_5_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_float_0_5_list, 1, const_float_0_5 ); Py_INCREF( const_float_0_5 );
    const_str_digest_2ce4b48ec17c44472e33514d764e3d7c = UNSTREAM_STRING_ASCII( &constant_bin[ 2194141 ], 792, 0 );
    const_str_digest_76082d9373be91bf0e3f5df3d298febc = UNSTREAM_STRING_ASCII( &constant_bin[ 2194933 ], 1402, 0 );
    const_str_plain_herm2poly = UNSTREAM_STRING_ASCII( &constant_bin[ 2191090 ], 9, 1 );
    const_str_plain_hermgauss = UNSTREAM_STRING_ASCII( &constant_bin[ 2191509 ], 9, 1 );
    const_str_digest_d0f21d4282709d5b1f4fff9eb523c00d = UNSTREAM_STRING_ASCII( &constant_bin[ 2196335 ], 658, 0 );
    const_str_plain_hermroots = UNSTREAM_STRING_ASCII( &constant_bin[ 2173199 ], 9, 1 );
    const_str_plain_hermfit = UNSTREAM_STRING_ASCII( &constant_bin[ 2166582 ], 7, 1 );
    const_str_digest_87a48fe75220900c1afcbf4e8775f4cb = UNSTREAM_STRING_ASCII( &constant_bin[ 2196993 ], 1870, 0 );
    const_str_digest_ee85202f620e1efdba1ca0a717e3afaa = UNSTREAM_STRING_ASCII( &constant_bin[ 2198863 ], 1105, 0 );
    const_str_digest_933bc4cb7fc43137efea1500cad0afd6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2199968 ], 1746, 0 );
    const_str_plain_hermdomain = UNSTREAM_STRING_ASCII( &constant_bin[ 2191228 ], 10, 1 );
    const_str_digest_7bc9fee5de8fbb571d3e7de42f67b827 = UNSTREAM_STRING_ASCII( &constant_bin[ 2201714 ], 502, 0 );
    const_str_plain__normed_hermite_n = UNSTREAM_STRING_ASCII( &constant_bin[ 2202216 ], 17, 1 );
    const_str_plain_hermtrim = UNSTREAM_STRING_ASCII( &constant_bin[ 2191390 ], 8, 1 );
    const_str_plain_hermvander2d = UNSTREAM_STRING_ASCII( &constant_bin[ 2191466 ], 12, 1 );
    const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 2, const_str_plain_tensor ); Py_INCREF( const_str_plain_tensor );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 3, const_str_plain_x2 ); Py_INCREF( const_str_plain_x2 );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 4, const_str_plain_c0 ); Py_INCREF( const_str_plain_c0 );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 5, const_str_plain_c1 ); Py_INCREF( const_str_plain_c1 );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 6, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 8, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    const_str_digest_8745b4d5e1169a38d182ce566a6d969b = UNSTREAM_STRING_ASCII( &constant_bin[ 2202233 ], 996, 0 );
    const_str_digest_b042ae68f68c83ee53182cf1b0e39619 = UNSTREAM_STRING_ASCII( &constant_bin[ 2203229 ], 907, 0 );
    const_str_plain_hermint = UNSTREAM_STRING_ASCII( &constant_bin[ 2189564 ], 7, 1 );
    const_str_digest_d9bce18bf24a65c247ac08b5785d8edd = UNSTREAM_STRING_ASCII( &constant_bin[ 2204136 ], 1681, 0 );
    const_str_plain_hermval3d = UNSTREAM_STRING_ASCII( &constant_bin[ 2191431 ], 9, 1 );
    const_str_digest_da5501e8e216a8a52345697e4ca88221 = UNSTREAM_STRING_ASCII( &constant_bin[ 2205817 ], 895, 0 );
    const_str_plain_hermmulx = UNSTREAM_STRING_ASCII( &constant_bin[ 2185109 ], 8, 1 );
    const_str_plain_hermx = UNSTREAM_STRING_ASCII( &constant_bin[ 2191221 ], 5, 1 );
    const_str_plain_hermder = UNSTREAM_STRING_ASCII( &constant_bin[ 2188877 ], 7, 1 );
    const_str_plain_hermfromroots = UNSTREAM_STRING_ASCII( &constant_bin[ 2171952 ], 13, 1 );
    const_str_digest_c2e2877902ed76c5634a254b79ca3070 = UNSTREAM_STRING_ASCII( &constant_bin[ 2206712 ], 1602, 0 );
    const_str_plain_hermvander = UNSTREAM_STRING_ASCII( &constant_bin[ 2191369 ], 10, 1 );
    const_str_digest_d8cab349acba3a44ae3672edb38ee496 = UNSTREAM_STRING_ASCII( &constant_bin[ 2208314 ], 33, 0 );
    const_str_digest_7f712a6292710d305d54789dfd034b2d = UNSTREAM_STRING_ASCII( &constant_bin[ 2208347 ], 1428, 0 );
    const_str_digest_556654d8c41102e6b648eeebe440c961 = UNSTREAM_STRING_ASCII( &constant_bin[ 2185077 ], 24, 0 );
    const_str_digest_a61f47dbac6795f2e00baa25f0097162 = UNSTREAM_STRING_ASCII( &constant_bin[ 2209775 ], 1697, 0 );
    const_str_plain_herm = UNSTREAM_STRING_ASCII( &constant_bin[ 1290039 ], 4, 1 );
    const_str_plain_hermval2d = UNSTREAM_STRING_ASCII( &constant_bin[ 2191420 ], 9, 1 );
    const_str_plain_hermone = UNSTREAM_STRING_ASCII( &constant_bin[ 2191212 ], 7, 1 );
    const_str_plain_hermweight = UNSTREAM_STRING_ASCII( &constant_bin[ 2191520 ], 10, 1 );
    const_str_plain_hermline = UNSTREAM_STRING_ASCII( &constant_bin[ 2185598 ], 8, 1 );
    const_str_plain_hermvander3d = UNSTREAM_STRING_ASCII( &constant_bin[ 2191480 ], 12, 1 );
    const_str_plain_hermgrid3d = UNSTREAM_STRING_ASCII( &constant_bin[ 2191454 ], 10, 1 );
    const_str_plain_hermadd = UNSTREAM_STRING_ASCII( &constant_bin[ 2184813 ], 7, 1 );
    const_str_digest_6cda7ea5861e76d5f257a230b7c4c9d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2211472 ], 1015, 0 );
    const_str_plain_poly2herm = UNSTREAM_STRING_ASCII( &constant_bin[ 2190868 ], 9, 1 );
    const_str_digest_e51196dd8e0a5a3c6974e277f19d5b81 = UNSTREAM_STRING_ASCII( &constant_bin[ 2212487 ], 671, 0 );
    const_str_digest_ac6dad3981b7e3a25c8c8eb922a0f3f8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2213158 ], 2345, 0 );
    const_str_plain_hermzero = UNSTREAM_STRING_ASCII( &constant_bin[ 2191202 ], 8, 1 );
    const_str_digest_31dc77ee0bf9fe6d970cc8d226d2ed2e = UNSTREAM_STRING_ASCII( &constant_bin[ 2215503 ], 1819, 0 );
    const_str_digest_299901cfab77045b8cccd2b7d620afab = UNSTREAM_STRING_ASCII( &constant_bin[ 2217322 ], 1544, 0 );
    const_str_digest_b816a0fb53b07c1aae7ad6c902f66814 = UNSTREAM_STRING_ASCII( &constant_bin[ 2218866 ], 5134, 0 );
    const_str_digest_6cae10ae7eb457611d7e08b7ab115f87 = UNSTREAM_STRING_ASCII( &constant_bin[ 2224000 ], 55, 0 );
    const_str_digest_6269ee6747c1222fa2b7fc655c468505 = UNSTREAM_STRING_ASCII( &constant_bin[ 2224055 ], 1853, 0 );
    const_str_plain_hermdiv = UNSTREAM_STRING_ASCII( &constant_bin[ 2184840 ], 7, 1 );
    const_str_digest_80e523600d02515b68df04cb10521fcf = UNSTREAM_STRING_ASCII( &constant_bin[ 2225908 ], 1498, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial$hermite( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f7e6c1fb8ba62f36967a8d9d9ed02e54;
static PyCodeObject *codeobj_5d6aa0ad8a1decdfecdfcdf1b6007ce4;
static PyCodeObject *codeobj_dbcb358a6969d8b08bf6ca98e46b5d93;
static PyCodeObject *codeobj_eb388cac62d0ebf487b5733265b0dc34;
static PyCodeObject *codeobj_ad3f27034cfe6f93a7af73e2aacf0403;
static PyCodeObject *codeobj_bd13efed20bb61f02bf5d52c4f2b0739;
static PyCodeObject *codeobj_c8b6a9e317ada024adbdf18992905d18;
static PyCodeObject *codeobj_05169f102087f40436a3e7251e17f703;
static PyCodeObject *codeobj_37b2769ab4164b697716d6b7a66bbe52;
static PyCodeObject *codeobj_892654279eebf05e139684c5d4bb318e;
static PyCodeObject *codeobj_96bdb8738b57e4a2de78338435969a84;
static PyCodeObject *codeobj_86b2fe7f772c782a019ab2eb4c786be7;
static PyCodeObject *codeobj_231740e22b7a8e6f9adcdf19fb53337e;
static PyCodeObject *codeobj_5a3477570ce246780b625a9555fc3d82;
static PyCodeObject *codeobj_a0d62dfe155ee54c70f21a8be6be4e72;
static PyCodeObject *codeobj_0d11145e8a866218dd724afe50f95234;
static PyCodeObject *codeobj_f04c530f047acfa63f56aa8b97d8a381;
static PyCodeObject *codeobj_1989168d2c3222232be2d15a49a309ae;
static PyCodeObject *codeobj_be38f0ab4a6d024eff485f087c75433c;
static PyCodeObject *codeobj_f9bc3e8848bf762ea6422f8c590d852d;
static PyCodeObject *codeobj_b7d5b4dc5b89452b7e63e36f9c624587;
static PyCodeObject *codeobj_1ff59e5452da0d27d033bfac9e9c22ef;
static PyCodeObject *codeobj_e0e51f2761270a217034dacc81da0c90;
static PyCodeObject *codeobj_8b6498cafcdbcbc1c400716df076e433;
static PyCodeObject *codeobj_572f0b0d72a471bec8fe7f236cc6445c;
static PyCodeObject *codeobj_ef197a857b3ae7aa3bfb35cc11915300;
static PyCodeObject *codeobj_f4cfd891a73cf6918202321b4120041e;
static PyCodeObject *codeobj_af998c58965844351af0643e7df4cfe3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6cae10ae7eb457611d7e08b7ab115f87;
    codeobj_f7e6c1fb8ba62f36967a8d9d9ed02e54 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d8cab349acba3a44ae3672edb38ee496, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5d6aa0ad8a1decdfecdfcdf1b6007ce4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Hermite, 1627, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_dbcb358a6969d8b08bf6ca98e46b5d93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__normed_hermite_n, 1485, const_tuple_2bb8ed6c2b5b501a420a6f1eb4373ea2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb388cac62d0ebf487b5733265b0dc34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_herm2poly, 128, const_tuple_c4b91bcb0776c1f61b0508de5afe5070_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ad3f27034cfe6f93a7af73e2aacf0403 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermadd, 291, const_tuple_str_plain_c1_str_plain_c2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd13efed20bb61f02bf5d52c4f2b0739 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermcompanion, 1380, const_tuple_03b7673e655b056e4f0304ce1db40177_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c8b6a9e317ada024adbdf18992905d18 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermder, 575, const_tuple_9155005e41c3737e8ba43420c4730900_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05169f102087f40436a3e7251e17f703 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermdiv, 490, const_tuple_str_plain_c1_str_plain_c2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_37b2769ab4164b697716d6b7a66bbe52 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermfit, 1253, const_tuple_b87a3e87a6253db629058266b0859839_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_892654279eebf05e139684c5d4bb318e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermfromroots, 239, const_tuple_str_plain_roots_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_96bdb8738b57e4a2de78338435969a84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermgauss, 1528, const_tuple_5ba2478aca2a1e6f353cb89afeeb9acb_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_86b2fe7f772c782a019ab2eb4c786be7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermgrid2d, 925, const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_231740e22b7a8e6f9adcdf19fb53337e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermgrid3d, 1029, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a3477570ce246780b625a9555fc3d82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermint, 658, const_tuple_dfde0fffe950637125c97009296b6a79_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a0d62dfe155ee54c70f21a8be6be4e72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermline, 203, const_tuple_str_plain_off_str_plain_scl_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d11145e8a866218dd724afe50f95234 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermmul, 424, const_tuple_e173e23472de811b9ff6dd0c03190b1f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f04c530f047acfa63f56aa8b97d8a381 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermmulx, 371, const_tuple_str_plain_c_str_plain_prd_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1989168d2c3222232be2d15a49a309ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermpow, 538, const_tuple_str_plain_c_str_plain_pow_str_plain_maxpower_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be38f0ab4a6d024eff485f087c75433c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermroots, 1425, const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f9bc3e8848bf762ea6422f8c590d852d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermsub, 331, const_tuple_str_plain_c1_str_plain_c2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7d5b4dc5b89452b7e63e36f9c624587 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermval, 780, const_tuple_aa75f6e1d3d5683c80b4cd8ed15cc355_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ff59e5452da0d27d033bfac9e9c22ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermval2d, 876, const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e0e51f2761270a217034dacc81da0c90 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermval3d, 978, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b6498cafcdbcbc1c400716df076e433 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermvander, 1085, const_tuple_12007d4ec7f577025a49b2ac80678cc6_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_572f0b0d72a471bec8fe7f236cc6445c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermvander2d, 1146, const_tuple_str_plain_x_str_plain_y_str_plain_deg_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef197a857b3ae7aa3bfb35cc11915300 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermvander3d, 1199, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_deg_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f4cfd891a73cf6918202321b4120041e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hermweight, 1595, const_tuple_str_plain_x_str_plain_w_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_af998c58965844351af0643e7df4cfe3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_poly2herm, 82, const_tuple_str_plain_pol_str_plain_deg_str_plain_res_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_10_hermpow( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_11_hermder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_12_hermint( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_13_hermval( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_14_hermval2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_15_hermgrid2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_16_hermval3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_17_hermgrid3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_18_hermvander(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_19_hermvander2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_1_poly2herm(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_20_hermvander3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_21_hermfit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_22_hermcompanion(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_23_hermroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_24__normed_hermite_n(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_25_hermgauss(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_26_hermweight(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_2_herm2poly(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_3_hermline(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_4_hermfromroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_5_hermadd(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_6_hermsub(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_7_hermmulx(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_8_hermmul(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_9_hermdiv(  );


// The module function definitions.
static PyObject *impl_numpy$polynomial$hermite$$$function_1_poly2herm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_af998c58965844351af0643e7df4cfe3;
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
    static struct Nuitka_FrameObject *cache_frame_af998c58965844351af0643e7df4cfe3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_af998c58965844351af0643e7df4cfe3, codeobj_af998c58965844351af0643e7df4cfe3, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_af998c58965844351af0643e7df4cfe3 = cache_frame_af998c58965844351af0643e7df4cfe3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af998c58965844351af0643e7df4cfe3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af998c58965844351af0643e7df4cfe3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 120;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_pol );
        tmp_list_element_1 = par_pol;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_af998c58965844351af0643e7df4cfe3->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
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
            exception_lineno = 120;
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
                    exception_lineno = 120;
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
            exception_lineno = 120;
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


            exception_lineno = 121;
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


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
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
                exception_lineno = 123;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermadd );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermadd );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermadd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmulx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmulx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmulx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_res );
        tmp_args_element_name_3 = var_res;
        frame_af998c58965844351af0643e7df4cfe3->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
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

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_af998c58965844351af0643e7df4cfe3->m_frame.f_lineno = 124;
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


            exception_lineno = 124;
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


        exception_lineno = 123;
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
    RESTORE_FRAME_EXCEPTION( frame_af998c58965844351af0643e7df4cfe3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af998c58965844351af0643e7df4cfe3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af998c58965844351af0643e7df4cfe3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af998c58965844351af0643e7df4cfe3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af998c58965844351af0643e7df4cfe3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af998c58965844351af0643e7df4cfe3,
        type_description_1,
        par_pol,
        var_deg,
        var_res,
        var_i
    );


    // Release cached frame.
    if ( frame_af998c58965844351af0643e7df4cfe3 == cache_frame_af998c58965844351af0643e7df4cfe3 )
    {
        Py_DECREF( frame_af998c58965844351af0643e7df4cfe3 );
    }
    cache_frame_af998c58965844351af0643e7df4cfe3 = NULL;

    assertFrameObject( frame_af998c58965844351af0643e7df4cfe3 );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_1_poly2herm );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_1_poly2herm );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_2_herm2poly( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_eb388cac62d0ebf487b5733265b0dc34;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_eb388cac62d0ebf487b5733265b0dc34 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb388cac62d0ebf487b5733265b0dc34, codeobj_eb388cac62d0ebf487b5733265b0dc34, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb388cac62d0ebf487b5733265b0dc34 = cache_frame_eb388cac62d0ebf487b5733265b0dc34;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb388cac62d0ebf487b5733265b0dc34 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb388cac62d0ebf487b5733265b0dc34 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_polynomial;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$polynomial$hermite;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_polyadd_str_plain_polysub_str_plain_polymulx_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_eb388cac62d0ebf487b5733265b0dc34->m_frame.f_lineno = 166;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
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
                (PyObject *)moduledict_numpy$polynomial$hermite,
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


            exception_lineno = 166;
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
                (PyObject *)moduledict_numpy$polynomial$hermite,
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


            exception_lineno = 166;
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
                (PyObject *)moduledict_numpy$polynomial$hermite,
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


            exception_lineno = 166;
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_eb388cac62d0ebf487b5733265b0dc34->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
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
            exception_lineno = 168;
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
                    exception_lineno = 168;
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
            exception_lineno = 168;
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


            exception_lineno = 169;
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
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_2 = var_n;
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
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
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( par_c );
            tmp_assign_source_9 = par_c;
            assert( tmp_inplace_assign_subscr_1__target == NULL );
            Py_INCREF( tmp_assign_source_9 );
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_subscribed_name_1 = tmp_inplace_assign_subscr_1__target;
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_right_name_1 = const_int_pos_2;
            tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
            tmp_ass_subscript_1 = const_int_pos_1;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        CHECK_OBJECT( par_c );
        tmp_return_value = par_c;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_2 = par_c;
            tmp_subscript_name_2 = const_int_neg_2;
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c0 == NULL );
            var_c0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_3 = par_c;
            tmp_subscript_name_3 = const_int_neg_1;
            tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c1 == NULL );
            var_c1 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_xrange_step_1;
            CHECK_OBJECT( var_n );
            tmp_left_name_2 = var_n;
            tmp_right_name_2 = const_int_pos_1;
            tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
            assert( !(tmp_xrange_low_1 == NULL) );
            tmp_xrange_high_1 = const_int_pos_1;
            tmp_xrange_step_1 = const_int_neg_1;
            tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooooo";
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
                    type_description_1 = "ooooooooo";
                    exception_lineno = 179;
                    goto try_except_handler_6;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_polysub );
            tmp_called_name_1 = var_polysub;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_4 = par_c;
            CHECK_OBJECT( var_i );
            tmp_left_name_3 = var_i;
            tmp_right_name_3 = const_int_pos_2;
            tmp_subscript_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_c1 );
            tmp_left_name_4 = var_c1;
            tmp_left_name_5 = const_int_pos_2;
            CHECK_OBJECT( var_i );
            tmp_left_name_6 = var_i;
            tmp_right_name_6 = const_int_pos_1;
            tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            tmp_right_name_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            tmp_args_element_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            frame_eb388cac62d0ebf487b5733265b0dc34->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_c0;
                assert( old != NULL );
                var_c0 = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( var_polyadd );
            tmp_called_name_2 = var_polyadd;
            CHECK_OBJECT( var_tmp );
            tmp_args_element_name_4 = var_tmp;
            CHECK_OBJECT( var_polymulx );
            tmp_called_name_3 = var_polymulx;
            CHECK_OBJECT( var_c1 );
            tmp_args_element_name_6 = var_c1;
            frame_eb388cac62d0ebf487b5733265b0dc34->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            tmp_right_name_7 = const_int_pos_2;
            tmp_args_element_name_5 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            frame_eb388cac62d0ebf487b5733265b0dc34->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_c1;
                assert( old != NULL );
                var_c1 = tmp_assign_source_17;
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_5;
        // Exception handler code:
        try_except_handler_6:;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( var_polyadd );
            tmp_called_name_4 = var_polyadd;
            CHECK_OBJECT( var_c0 );
            tmp_args_element_name_7 = var_c0;
            CHECK_OBJECT( var_polymulx );
            tmp_called_name_5 = var_polymulx;
            CHECK_OBJECT( var_c1 );
            tmp_args_element_name_9 = var_c1;
            frame_eb388cac62d0ebf487b5733265b0dc34->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_8 = const_int_pos_2;
            tmp_args_element_name_8 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_eb388cac62d0ebf487b5733265b0dc34->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb388cac62d0ebf487b5733265b0dc34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb388cac62d0ebf487b5733265b0dc34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb388cac62d0ebf487b5733265b0dc34 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb388cac62d0ebf487b5733265b0dc34, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb388cac62d0ebf487b5733265b0dc34->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb388cac62d0ebf487b5733265b0dc34, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb388cac62d0ebf487b5733265b0dc34,
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
    if ( frame_eb388cac62d0ebf487b5733265b0dc34 == cache_frame_eb388cac62d0ebf487b5733265b0dc34 )
    {
        Py_DECREF( frame_eb388cac62d0ebf487b5733265b0dc34 );
    }
    cache_frame_eb388cac62d0ebf487b5733265b0dc34 = NULL;

    assertFrameObject( frame_eb388cac62d0ebf487b5733265b0dc34 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_2_herm2poly );
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
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_2_herm2poly );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_3_hermline( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_off = python_pars[ 0 ];
    PyObject *par_scl = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a0d62dfe155ee54c70f21a8be6be4e72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0d62dfe155ee54c70f21a8be6be4e72 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0d62dfe155ee54c70f21a8be6be4e72, codeobj_a0d62dfe155ee54c70f21a8be6be4e72, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *) );
    frame_a0d62dfe155ee54c70f21a8be6be4e72 = cache_frame_a0d62dfe155ee54c70f21a8be6be4e72;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0d62dfe155ee54c70f21a8be6be4e72 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0d62dfe155ee54c70f21a8be6be4e72 ) == 2 ); // Frame stack

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


            exception_lineno = 233;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_list_element_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 234;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_off );
            tmp_list_element_1 = par_off;
            tmp_args_element_name_1 = PyList_New( 2 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
            CHECK_OBJECT( par_scl );
            tmp_left_name_1 = par_scl;
            tmp_right_name_1 = const_int_pos_2;
            tmp_list_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 234;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
            frame_a0d62dfe155ee54c70f21a8be6be4e72->m_frame.f_lineno = 234;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_list_element_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 236;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_off );
            tmp_list_element_2 = par_off;
            tmp_args_element_name_2 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
            frame_a0d62dfe155ee54c70f21a8be6be4e72->m_frame.f_lineno = 236;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0d62dfe155ee54c70f21a8be6be4e72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0d62dfe155ee54c70f21a8be6be4e72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0d62dfe155ee54c70f21a8be6be4e72 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0d62dfe155ee54c70f21a8be6be4e72, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0d62dfe155ee54c70f21a8be6be4e72->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0d62dfe155ee54c70f21a8be6be4e72, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0d62dfe155ee54c70f21a8be6be4e72,
        type_description_1,
        par_off,
        par_scl
    );


    // Release cached frame.
    if ( frame_a0d62dfe155ee54c70f21a8be6be4e72 == cache_frame_a0d62dfe155ee54c70f21a8be6be4e72 )
    {
        Py_DECREF( frame_a0d62dfe155ee54c70f21a8be6be4e72 );
    }
    cache_frame_a0d62dfe155ee54c70f21a8be6be4e72 = NULL;

    assertFrameObject( frame_a0d62dfe155ee54c70f21a8be6be4e72 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_3_hermline );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_3_hermline );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_4_hermfromroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_roots = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_892654279eebf05e139684c5d4bb318e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_892654279eebf05e139684c5d4bb318e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_892654279eebf05e139684c5d4bb318e, codeobj_892654279eebf05e139684c5d4bb318e, module_numpy$polynomial$hermite, sizeof(void *) );
    frame_892654279eebf05e139684c5d4bb318e = cache_frame_892654279eebf05e139684c5d4bb318e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_892654279eebf05e139684c5d4bb318e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_892654279eebf05e139684c5d4bb318e ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fromroots );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermline );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermline );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermline" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmul );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmul );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmul" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_roots );
        tmp_args_element_name_3 = par_roots;
        frame_892654279eebf05e139684c5d4bb318e->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_892654279eebf05e139684c5d4bb318e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_892654279eebf05e139684c5d4bb318e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_892654279eebf05e139684c5d4bb318e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_892654279eebf05e139684c5d4bb318e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_892654279eebf05e139684c5d4bb318e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_892654279eebf05e139684c5d4bb318e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_892654279eebf05e139684c5d4bb318e,
        type_description_1,
        par_roots
    );


    // Release cached frame.
    if ( frame_892654279eebf05e139684c5d4bb318e == cache_frame_892654279eebf05e139684c5d4bb318e )
    {
        Py_DECREF( frame_892654279eebf05e139684c5d4bb318e );
    }
    cache_frame_892654279eebf05e139684c5d4bb318e = NULL;

    assertFrameObject( frame_892654279eebf05e139684c5d4bb318e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_4_hermfromroots );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_4_hermfromroots );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_5_hermadd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ad3f27034cfe6f93a7af73e2aacf0403;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad3f27034cfe6f93a7af73e2aacf0403 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad3f27034cfe6f93a7af73e2aacf0403, codeobj_ad3f27034cfe6f93a7af73e2aacf0403, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *) );
    frame_ad3f27034cfe6f93a7af73e2aacf0403 = cache_frame_ad3f27034cfe6f93a7af73e2aacf0403;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad3f27034cfe6f93a7af73e2aacf0403 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad3f27034cfe6f93a7af73e2aacf0403 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_args_element_name_1 = par_c1;
        CHECK_OBJECT( par_c2 );
        tmp_args_element_name_2 = par_c2;
        frame_ad3f27034cfe6f93a7af73e2aacf0403->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__add, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad3f27034cfe6f93a7af73e2aacf0403 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad3f27034cfe6f93a7af73e2aacf0403 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad3f27034cfe6f93a7af73e2aacf0403 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad3f27034cfe6f93a7af73e2aacf0403, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad3f27034cfe6f93a7af73e2aacf0403->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad3f27034cfe6f93a7af73e2aacf0403, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad3f27034cfe6f93a7af73e2aacf0403,
        type_description_1,
        par_c1,
        par_c2
    );


    // Release cached frame.
    if ( frame_ad3f27034cfe6f93a7af73e2aacf0403 == cache_frame_ad3f27034cfe6f93a7af73e2aacf0403 )
    {
        Py_DECREF( frame_ad3f27034cfe6f93a7af73e2aacf0403 );
    }
    cache_frame_ad3f27034cfe6f93a7af73e2aacf0403 = NULL;

    assertFrameObject( frame_ad3f27034cfe6f93a7af73e2aacf0403 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_5_hermadd );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_5_hermadd );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_6_hermsub( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f9bc3e8848bf762ea6422f8c590d852d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9bc3e8848bf762ea6422f8c590d852d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9bc3e8848bf762ea6422f8c590d852d, codeobj_f9bc3e8848bf762ea6422f8c590d852d, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *) );
    frame_f9bc3e8848bf762ea6422f8c590d852d = cache_frame_f9bc3e8848bf762ea6422f8c590d852d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9bc3e8848bf762ea6422f8c590d852d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9bc3e8848bf762ea6422f8c590d852d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_args_element_name_1 = par_c1;
        CHECK_OBJECT( par_c2 );
        tmp_args_element_name_2 = par_c2;
        frame_f9bc3e8848bf762ea6422f8c590d852d->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__sub, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9bc3e8848bf762ea6422f8c590d852d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9bc3e8848bf762ea6422f8c590d852d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9bc3e8848bf762ea6422f8c590d852d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9bc3e8848bf762ea6422f8c590d852d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9bc3e8848bf762ea6422f8c590d852d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9bc3e8848bf762ea6422f8c590d852d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9bc3e8848bf762ea6422f8c590d852d,
        type_description_1,
        par_c1,
        par_c2
    );


    // Release cached frame.
    if ( frame_f9bc3e8848bf762ea6422f8c590d852d == cache_frame_f9bc3e8848bf762ea6422f8c590d852d )
    {
        Py_DECREF( frame_f9bc3e8848bf762ea6422f8c590d852d );
    }
    cache_frame_f9bc3e8848bf762ea6422f8c590d852d = NULL;

    assertFrameObject( frame_f9bc3e8848bf762ea6422f8c590d852d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_6_hermsub );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_6_hermsub );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_7_hermmulx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_prd = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f04c530f047acfa63f56aa8b97d8a381;
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
    static struct Nuitka_FrameObject *cache_frame_f04c530f047acfa63f56aa8b97d8a381 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f04c530f047acfa63f56aa8b97d8a381, codeobj_f04c530f047acfa63f56aa8b97d8a381, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f04c530f047acfa63f56aa8b97d8a381 = cache_frame_f04c530f047acfa63f56aa8b97d8a381;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f04c530f047acfa63f56aa8b97d8a381 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f04c530f047acfa63f56aa8b97d8a381 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 410;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_f04c530f047acfa63f56aa8b97d8a381->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
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
            exception_lineno = 410;
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
                    exception_lineno = 410;
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
            exception_lineno = 410;
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


            exception_lineno = 412;
            type_description_1 = "ooo";
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


            exception_lineno = 412;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "ooo";
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 415;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_empty );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooo";
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

            exception_lineno = 415;
            type_description_1 = "ooo";
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

            exception_lineno = 415;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_f04c530f047acfa63f56aa8b97d8a381->m_frame.f_lineno = 415;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooo";
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


            exception_lineno = 416;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_0;
        tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooo";
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


            exception_lineno = 416;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_3 = par_c;
        tmp_subscript_name_3 = const_int_0;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_2;
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooo";
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


            exception_lineno = 417;
            type_description_1 = "ooo";
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


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 418;
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
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_4 = par_c;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_4 = var_i;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_right_name_4 = const_int_pos_2;
        tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_prd );
        tmp_ass_subscribed_3 = var_prd;
        CHECK_OBJECT( var_i );
        tmp_left_name_5 = var_i;
        tmp_right_name_5 = const_int_pos_1;
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_ass_subscript_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 419;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( var_prd );
        tmp_assign_source_8 = var_prd;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_8;
            Py_INCREF( tmp_inplace_assign_subscr_1__target );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_i );
        tmp_left_name_6 = var_i;
        tmp_right_name_6 = const_int_pos_1;
        tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_8;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_5 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_5 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_6 = par_c;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_6 = var_i;
        tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 420;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_i );
        tmp_right_name_8 = var_i;
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 420;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ooo";
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


            exception_lineno = 420;
            type_description_1 = "ooo";
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

    Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
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


        exception_lineno = 418;
        type_description_1 = "ooo";
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
    RESTORE_FRAME_EXCEPTION( frame_f04c530f047acfa63f56aa8b97d8a381 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f04c530f047acfa63f56aa8b97d8a381 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f04c530f047acfa63f56aa8b97d8a381 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f04c530f047acfa63f56aa8b97d8a381, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f04c530f047acfa63f56aa8b97d8a381->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f04c530f047acfa63f56aa8b97d8a381, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f04c530f047acfa63f56aa8b97d8a381,
        type_description_1,
        par_c,
        var_prd,
        var_i
    );


    // Release cached frame.
    if ( frame_f04c530f047acfa63f56aa8b97d8a381 == cache_frame_f04c530f047acfa63f56aa8b97d8a381 )
    {
        Py_DECREF( frame_f04c530f047acfa63f56aa8b97d8a381 );
    }
    cache_frame_f04c530f047acfa63f56aa8b97d8a381 = NULL;

    assertFrameObject( frame_f04c530f047acfa63f56aa8b97d8a381 );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_7_hermmulx );
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

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_7_hermmulx );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_8_hermmul( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_0d11145e8a866218dd724afe50f95234;
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
    static struct Nuitka_FrameObject *cache_frame_0d11145e8a866218dd724afe50f95234 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d11145e8a866218dd724afe50f95234, codeobj_0d11145e8a866218dd724afe50f95234, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0d11145e8a866218dd724afe50f95234 = cache_frame_0d11145e8a866218dd724afe50f95234;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d11145e8a866218dd724afe50f95234 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d11145e8a866218dd724afe50f95234 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 463;
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
        frame_0d11145e8a866218dd724afe50f95234->m_frame.f_lineno = 463;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
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
            exception_lineno = 463;
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
            exception_lineno = 463;
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
                    exception_lineno = 463;
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
            exception_lineno = 463;
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


            exception_lineno = 465;
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

            exception_lineno = 465;
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


            exception_lineno = 472;
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


                exception_lineno = 473;
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


                exception_lineno = 473;
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


                exception_lineno = 475;
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


                    exception_lineno = 476;
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


                    exception_lineno = 476;
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


                    exception_lineno = 477;
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


                    exception_lineno = 477;
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


                    exception_lineno = 479;
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


                    exception_lineno = 480;
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


                    exception_lineno = 480;
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


                    exception_lineno = 481;
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


                    exception_lineno = 481;
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


                    exception_lineno = 482;
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


                    exception_lineno = 482;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 482;
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
                        exception_lineno = 482;
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


                    exception_lineno = 484;
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
                PyObject *tmp_right_name_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermsub );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermsub );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermsub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 485;
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


                    exception_lineno = 485;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_left_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscript_name_6 );
                if ( tmp_left_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 485;
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


                    exception_lineno = 485;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_c1 );
                tmp_left_name_9 = par_c1;
                tmp_left_name_10 = const_int_pos_2;
                CHECK_OBJECT( var_nd );
                tmp_left_name_11 = var_nd;
                tmp_right_name_11 = const_int_pos_1;
                tmp_right_name_10 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_right_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_2 );

                    exception_lineno = 485;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_right_name_9 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_2 );

                    exception_lineno = 485;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_args_element_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_2 );

                    exception_lineno = 485;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                frame_0d11145e8a866218dd724afe50f95234->m_frame.f_lineno = 485;
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


                    exception_lineno = 485;
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_right_name_12;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermadd );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermadd );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermadd" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 486;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                CHECK_OBJECT( var_tmp );
                tmp_args_element_name_4 = var_tmp;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmulx );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmulx );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmulx" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 486;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                CHECK_OBJECT( par_c1 );
                tmp_args_element_name_6 = par_c1;
                frame_0d11145e8a866218dd724afe50f95234->m_frame.f_lineno = 486;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_left_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_left_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_right_name_12 = const_int_pos_2;
                tmp_args_element_name_5 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_left_name_12 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                frame_0d11145e8a866218dd724afe50f95234->m_frame.f_lineno = 486;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_assign_source_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 486;
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


                exception_lineno = 482;
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
        PyObject *tmp_left_name_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_13;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermadd );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermadd );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermadd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 487;
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

            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = var_c0;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmulx );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmulx );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmulx" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 487;
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

            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_c1;
        frame_0d11145e8a866218dd724afe50f95234->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_left_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = const_int_pos_2;
        tmp_args_element_name_8 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_0d11145e8a866218dd724afe50f95234->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d11145e8a866218dd724afe50f95234 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d11145e8a866218dd724afe50f95234 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d11145e8a866218dd724afe50f95234 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d11145e8a866218dd724afe50f95234, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d11145e8a866218dd724afe50f95234->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d11145e8a866218dd724afe50f95234, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d11145e8a866218dd724afe50f95234,
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
    if ( frame_0d11145e8a866218dd724afe50f95234 == cache_frame_0d11145e8a866218dd724afe50f95234 )
    {
        Py_DECREF( frame_0d11145e8a866218dd724afe50f95234 );
    }
    cache_frame_0d11145e8a866218dd724afe50f95234 = NULL;

    assertFrameObject( frame_0d11145e8a866218dd724afe50f95234 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_8_hermmul );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_8_hermmul );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_9_hermdiv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_05169f102087f40436a3e7251e17f703;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05169f102087f40436a3e7251e17f703 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05169f102087f40436a3e7251e17f703, codeobj_05169f102087f40436a3e7251e17f703, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *) );
    frame_05169f102087f40436a3e7251e17f703 = cache_frame_05169f102087f40436a3e7251e17f703;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05169f102087f40436a3e7251e17f703 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05169f102087f40436a3e7251e17f703 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__div );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmul );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmul );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmul" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_c1 );
        tmp_args_element_name_2 = par_c1;
        CHECK_OBJECT( par_c2 );
        tmp_args_element_name_3 = par_c2;
        frame_05169f102087f40436a3e7251e17f703->m_frame.f_lineno = 535;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05169f102087f40436a3e7251e17f703 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05169f102087f40436a3e7251e17f703 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05169f102087f40436a3e7251e17f703 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05169f102087f40436a3e7251e17f703, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05169f102087f40436a3e7251e17f703->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05169f102087f40436a3e7251e17f703, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05169f102087f40436a3e7251e17f703,
        type_description_1,
        par_c1,
        par_c2
    );


    // Release cached frame.
    if ( frame_05169f102087f40436a3e7251e17f703 == cache_frame_05169f102087f40436a3e7251e17f703 )
    {
        Py_DECREF( frame_05169f102087f40436a3e7251e17f703 );
    }
    cache_frame_05169f102087f40436a3e7251e17f703 = NULL;

    assertFrameObject( frame_05169f102087f40436a3e7251e17f703 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_9_hermdiv );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_9_hermdiv );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_10_hermpow( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_pow = python_pars[ 1 ];
    PyObject *par_maxpower = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_1989168d2c3222232be2d15a49a309ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1989168d2c3222232be2d15a49a309ae = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1989168d2c3222232be2d15a49a309ae, codeobj_1989168d2c3222232be2d15a49a309ae, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1989168d2c3222232be2d15a49a309ae = cache_frame_1989168d2c3222232be2d15a49a309ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1989168d2c3222232be2d15a49a309ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1989168d2c3222232be2d15a49a309ae ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 572;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pow );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 572;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmul );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmul );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmul" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 572;
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
        frame_1989168d2c3222232be2d15a49a309ae->m_frame.f_lineno = 572;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 572;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1989168d2c3222232be2d15a49a309ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1989168d2c3222232be2d15a49a309ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1989168d2c3222232be2d15a49a309ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1989168d2c3222232be2d15a49a309ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1989168d2c3222232be2d15a49a309ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1989168d2c3222232be2d15a49a309ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1989168d2c3222232be2d15a49a309ae,
        type_description_1,
        par_c,
        par_pow,
        par_maxpower
    );


    // Release cached frame.
    if ( frame_1989168d2c3222232be2d15a49a309ae == cache_frame_1989168d2c3222232be2d15a49a309ae )
    {
        Py_DECREF( frame_1989168d2c3222232be2d15a49a309ae );
    }
    cache_frame_1989168d2c3222232be2d15a49a309ae = NULL;

    assertFrameObject( frame_1989168d2c3222232be2d15a49a309ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_10_hermpow );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_10_hermpow );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_11_hermder( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_c8b6a9e317ada024adbdf18992905d18;
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
    static struct Nuitka_FrameObject *cache_frame_c8b6a9e317ada024adbdf18992905d18 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c8b6a9e317ada024adbdf18992905d18, codeobj_c8b6a9e317ada024adbdf18992905d18, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c8b6a9e317ada024adbdf18992905d18 = cache_frame_c8b6a9e317ada024adbdf18992905d18;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c8b6a9e317ada024adbdf18992905d18 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c8b6a9e317ada024adbdf18992905d18 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 630;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_tuple_element_1 = par_c;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_264a7d97adf9df3f4beb0f489755c06f );
        frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 630;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
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


            exception_lineno = 631;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 631;
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


            exception_lineno = 631;
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


                exception_lineno = 632;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 632;
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

                exception_lineno = 632;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 632;
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


                exception_lineno = 632;
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 633;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_m );
        tmp_args_element_name_2 = par_m;
        tmp_args_element_name_3 = const_str_digest_1675a321a70de49f5c6425ba43a4fc81;
        frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 633;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 633;
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 634;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_4 = par_axis;
        tmp_args_element_name_5 = const_str_digest_70e3e648da9207a55990fb352e033d01;
        frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 634;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 634;
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


            exception_lineno = 635;
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
            frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 636;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 636;
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

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

            exception_lineno = 637;
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


            exception_lineno = 637;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 637;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
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


            exception_lineno = 639;
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
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 642;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_8 = par_c;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_9 = var_iaxis;
        tmp_args_element_name_10 = const_int_0;
        frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 642;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 642;
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


            exception_lineno = 643;
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


            exception_lineno = 644;
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


                exception_lineno = 645;
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


                exception_lineno = 645;
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


                exception_lineno = 647;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 647;
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
                    exception_lineno = 647;
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


                exception_lineno = 648;
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


                exception_lineno = 649;
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
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 650;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_7 = tmp_mvar_value_7;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_empty );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 650;
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

                exception_lineno = 650;
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

                exception_lineno = 650;
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

                exception_lineno = 650;
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

                exception_lineno = 650;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 650;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 650;
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
            tmp_xrange_high_1 = const_int_0;
            tmp_xrange_step_1 = const_int_neg_1;
            tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_2, tmp_xrange_high_1, tmp_xrange_step_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 651;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 651;
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
                    exception_lineno = 651;
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
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            tmp_left_name_6 = const_int_pos_2;
            CHECK_OBJECT( var_j );
            tmp_right_name_5 = var_j;
            tmp_left_name_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_6, tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 652;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_3 = par_c;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_3 = var_j;
            tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 652;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_ass_subvalue_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 652;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_der );
            tmp_ass_subscribed_1 = var_der;
            CHECK_OBJECT( var_j );
            tmp_left_name_7 = var_j;
            tmp_right_name_7 = const_int_pos_1;
            tmp_ass_subscript_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 652;
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


                exception_lineno = 652;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 651;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( var_der );
            tmp_assign_source_18 = var_der;
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_18;
                Py_INCREF( par_c );
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
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

        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 654;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_moveaxis );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
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

            exception_lineno = 654;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = par_c;
        tmp_args_element_name_12 = const_int_0;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_13 = var_iaxis;
        frame_c8b6a9e317ada024adbdf18992905d18->m_frame.f_lineno = 654;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            par_c = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8b6a9e317ada024adbdf18992905d18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8b6a9e317ada024adbdf18992905d18 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8b6a9e317ada024adbdf18992905d18 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8b6a9e317ada024adbdf18992905d18, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8b6a9e317ada024adbdf18992905d18->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8b6a9e317ada024adbdf18992905d18, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c8b6a9e317ada024adbdf18992905d18,
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
    if ( frame_c8b6a9e317ada024adbdf18992905d18 == cache_frame_c8b6a9e317ada024adbdf18992905d18 )
    {
        Py_DECREF( frame_c8b6a9e317ada024adbdf18992905d18 );
    }
    cache_frame_c8b6a9e317ada024adbdf18992905d18 = NULL;

    assertFrameObject( frame_c8b6a9e317ada024adbdf18992905d18 );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_11_hermder );
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_11_hermder );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_12_hermint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    struct Nuitka_FrameObject *frame_5a3477570ce246780b625a9555fc3d82;
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
    static struct Nuitka_FrameObject *cache_frame_5a3477570ce246780b625a9555fc3d82 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a3477570ce246780b625a9555fc3d82, codeobj_5a3477570ce246780b625a9555fc3d82, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a3477570ce246780b625a9555fc3d82 = cache_frame_5a3477570ce246780b625a9555fc3d82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a3477570ce246780b625a9555fc3d82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a3477570ce246780b625a9555fc3d82 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 741;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 741;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_tuple_element_1 = par_c;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_264a7d97adf9df3f4beb0f489755c06f );
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 741;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 741;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 742;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 742;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 742;
            type_description_1 = "oooooooooooo";
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


                exception_lineno = 743;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 743;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_double );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 743;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 743;
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


                exception_lineno = 743;
                type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 744;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_k );
        tmp_args_element_name_2 = par_k;
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 744;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_iterable, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 744;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 744;
            type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 746;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_m );
        tmp_args_element_name_3 = par_m;
        tmp_args_element_name_4 = const_str_digest_78c7de2afa5c4a3ff3c6d6b738a4dc7d;
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 746;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 746;
            type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 747;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_5 = par_axis;
        tmp_args_element_name_6 = const_str_digest_70e3e648da9207a55990fb352e033d01;
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 747;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 747;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 748;
            type_description_1 = "oooooooooooo";
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
            frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 749;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 749;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 750;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 750;
            type_description_1 = "oooooooooooo";
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
            frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 751;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 751;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 752;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_6;
        CHECK_OBJECT( par_lbnd );
        tmp_args_element_name_7 = par_lbnd;
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 752;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 752;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 752;
            type_description_1 = "oooooooooooo";
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
            frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 753;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 753;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 754;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_7;
        CHECK_OBJECT( par_scl );
        tmp_args_element_name_8 = par_scl;
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 754;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 754;
            type_description_1 = "oooooooooooo";
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
            frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 755;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 755;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

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

            exception_lineno = 756;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 756;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 756;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 756;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 758;
            type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 761;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_9;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_11 = par_c;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_12 = var_iaxis;
        tmp_args_element_name_13 = const_int_0;
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 761;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_6, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 761;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 762;
            type_description_1 = "oooooooooooo";
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

            exception_lineno = 762;
            type_description_1 = "oooooooooooo";
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

            exception_lineno = 762;
            type_description_1 = "oooooooooooo";
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

            exception_lineno = 762;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_LIST_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 762;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 763;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 763;
            type_description_1 = "oooooooooooo";
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
                type_description_1 = "oooooooooooo";
                exception_lineno = 763;
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


            exception_lineno = 764;
            type_description_1 = "oooooooooooo";
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


            exception_lineno = 765;
            type_description_1 = "oooooooooooo";
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
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 766;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_7 = tmp_mvar_value_10;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_all );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 766;
            type_description_1 = "oooooooooooo";
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

            exception_lineno = 766;
            type_description_1 = "oooooooooooo";
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

            exception_lineno = 766;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 766;
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


            exception_lineno = 766;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 766;
            type_description_1 = "oooooooooooo";
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


                exception_lineno = 767;
                type_description_1 = "oooooooooooo";
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

                exception_lineno = 767;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_3;
            }
            tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 767;
                type_description_1 = "oooooooooooo";
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


                exception_lineno = 767;
                type_description_1 = "oooooooooooo";
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
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 769;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_8 = tmp_mvar_value_11;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_empty );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 769;
                type_description_1 = "oooooooooooo";
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

                exception_lineno = 769;
                type_description_1 = "oooooooooooo";
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

                exception_lineno = 769;
                type_description_1 = "oooooooooooo";
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

                exception_lineno = 769;
                type_description_1 = "oooooooooooo";
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

                exception_lineno = 769;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 769;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 769;
                type_description_1 = "oooooooooooo";
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


                exception_lineno = 770;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_8 = const_int_0;
            tmp_ass_subvalue_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 770;
                type_description_1 = "oooooooooooo";
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


                exception_lineno = 770;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_9;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_right_name_9;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            int tmp_ass_subscript_res_2;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_6 = par_c;
            tmp_subscript_name_6 = const_int_0;
            tmp_left_name_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 771;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_9 = const_int_pos_2;
            tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 771;
                type_description_1 = "oooooooooooo";
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


                exception_lineno = 771;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_xrange_high_1;
            tmp_xrange_low_2 = const_int_pos_1;
            CHECK_OBJECT( var_n );
            tmp_xrange_high_1 = var_n;
            tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 772;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 772;
                type_description_1 = "oooooooooooo";
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
                    type_description_1 = "oooooooooooo";
                    exception_lineno = 772;
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
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_left_name_10;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_7 = par_c;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_7 = var_j;
            tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 773;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            tmp_left_name_11 = const_int_pos_2;
            CHECK_OBJECT( var_j );
            tmp_left_name_12 = var_j;
            tmp_right_name_12 = const_int_pos_1;
            tmp_right_name_11 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 773;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            tmp_right_name_10 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 773;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            tmp_ass_subvalue_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_ass_subvalue_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 773;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_tmp );
            tmp_ass_subscribed_4 = var_tmp;
            CHECK_OBJECT( var_j );
            tmp_left_name_13 = var_j;
            tmp_right_name_13 = const_int_pos_1;
            tmp_ass_subscript_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_ass_subscript_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_4 );

                exception_lineno = 773;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subscript_4 );
            Py_DECREF( tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 773;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 772;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
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
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( var_tmp );
            tmp_assign_source_20 = var_tmp;
            {
                PyObject *old = tmp_inplace_assign_subscr_2__target;
                tmp_inplace_assign_subscr_2__target = tmp_assign_source_20;
                Py_INCREF( tmp_inplace_assign_subscr_2__target );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = const_int_0;
            {
                PyObject *old = tmp_inplace_assign_subscr_2__subscript;
                tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_21;
                Py_INCREF( tmp_inplace_assign_subscr_2__subscript );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_left_name_14;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_right_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_right_name_15;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
            tmp_subscribed_name_8 = tmp_inplace_assign_subscr_2__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
            tmp_subscript_name_8 = tmp_inplace_assign_subscr_2__subscript;
            tmp_left_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_left_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( par_k );
            tmp_subscribed_name_9 = par_k;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_9 = var_i;
            tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_14 );

                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermval );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_left_name_14 );
                Py_DECREF( tmp_left_name_15 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermval" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_6 = tmp_mvar_value_12;
            CHECK_OBJECT( par_lbnd );
            tmp_args_element_name_15 = par_lbnd;
            CHECK_OBJECT( var_tmp );
            tmp_args_element_name_16 = var_tmp;
            frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 774;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_right_name_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_14 );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            tmp_right_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_right_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_14 );

                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            tmp_ass_subvalue_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_14, tmp_right_name_14 );
            Py_DECREF( tmp_left_name_14 );
            Py_DECREF( tmp_right_name_14 );
            if ( tmp_ass_subvalue_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
            tmp_ass_subscribed_5 = tmp_inplace_assign_subscr_2__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
            tmp_ass_subscript_5 = tmp_inplace_assign_subscr_2__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 774;
                type_description_1 = "oooooooooooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
        Py_DECREF( tmp_inplace_assign_subscr_2__target );
        tmp_inplace_assign_subscr_2__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
        tmp_inplace_assign_subscr_2__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
        Py_DECREF( tmp_inplace_assign_subscr_2__target );
        tmp_inplace_assign_subscr_2__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
        tmp_inplace_assign_subscr_2__subscript = NULL;

        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( var_tmp );
            tmp_assign_source_22 = var_tmp;
            {
                PyObject *old = par_c;
                assert( old != NULL );
                par_c = tmp_assign_source_22;
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


        exception_lineno = 763;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 776;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_13;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_17 = par_c;
        tmp_args_element_name_18 = const_int_0;
        CHECK_OBJECT( var_iaxis );
        tmp_args_element_name_19 = var_iaxis;
        frame_5a3477570ce246780b625a9555fc3d82->m_frame.f_lineno = 776;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_7, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 776;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a3477570ce246780b625a9555fc3d82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a3477570ce246780b625a9555fc3d82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a3477570ce246780b625a9555fc3d82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a3477570ce246780b625a9555fc3d82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a3477570ce246780b625a9555fc3d82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a3477570ce246780b625a9555fc3d82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a3477570ce246780b625a9555fc3d82,
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
        var_j
    );


    // Release cached frame.
    if ( frame_5a3477570ce246780b625a9555fc3d82 == cache_frame_5a3477570ce246780b625a9555fc3d82 )
    {
        Py_DECREF( frame_5a3477570ce246780b625a9555fc3d82 );
    }
    cache_frame_5a3477570ce246780b625a9555fc3d82 = NULL;

    assertFrameObject( frame_5a3477570ce246780b625a9555fc3d82 );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_12_hermint );
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

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_12_hermint );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_13_hermval( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_tensor = python_pars[ 2 ];
    PyObject *var_x2 = NULL;
    PyObject *var_c0 = NULL;
    PyObject *var_c1 = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tmp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b7d5b4dc5b89452b7e63e36f9c624587;
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
    static struct Nuitka_FrameObject *cache_frame_b7d5b4dc5b89452b7e63e36f9c624587 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7d5b4dc5b89452b7e63e36f9c624587, codeobj_b7d5b4dc5b89452b7e63e36f9c624587, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b7d5b4dc5b89452b7e63e36f9c624587 = cache_frame_b7d5b4dc5b89452b7e63e36f9c624587;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7d5b4dc5b89452b7e63e36f9c624587 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7d5b4dc5b89452b7e63e36f9c624587 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 849;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 849;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_tuple_element_1 = par_c;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_0aaf07bc1f9989227b8953d83057c37b );
        frame_b7d5b4dc5b89452b7e63e36f9c624587->m_frame.f_lineno = 849;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 849;
            type_description_1 = "ooooooooo";
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


            exception_lineno = 850;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 850;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 850;
            type_description_1 = "ooooooooo";
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


                exception_lineno = 851;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 851;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_double );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 851;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_b7d5b4dc5b89452b7e63e36f9c624587->m_frame.f_lineno = 851;
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


                exception_lineno = 851;
                type_description_1 = "ooooooooo";
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


            exception_lineno = 852;
            type_description_1 = "ooooooooo";
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
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 853;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_2 = par_x;
            frame_b7d5b4dc5b89452b7e63e36f9c624587->m_frame.f_lineno = 853;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 853;
                type_description_1 = "ooooooooo";
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 854;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 854;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        Py_DECREF( tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 854;
            type_description_1 = "ooooooooo";
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


            exception_lineno = 854;
            type_description_1 = "ooooooooo";
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


                exception_lineno = 855;
                type_description_1 = "ooooooooo";
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

                exception_lineno = 855;
                type_description_1 = "ooooooooo";
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

                exception_lineno = 855;
                type_description_1 = "ooooooooo";
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

                exception_lineno = 855;
                type_description_1 = "ooooooooo";
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

                exception_lineno = 855;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_b7d5b4dc5b89452b7e63e36f9c624587->m_frame.f_lineno = 855;
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


                exception_lineno = 855;
                type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_x );
        tmp_left_name_3 = par_x;
        tmp_right_name_3 = const_int_pos_2;
        tmp_assign_source_5 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 857;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x2 == NULL );
        var_x2 = tmp_assign_source_5;
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

            exception_lineno = 858;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = par_c;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 858;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_6;
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

                exception_lineno = 859;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 859;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c0 == NULL );
            var_c0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_int_0;
            assert( var_c1 == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_c1 = tmp_assign_source_7;
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

                exception_lineno = 861;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_len_arg_2 = par_c;
            tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 861;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_assign_source_8;
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

                    exception_lineno = 862;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_2 = par_c;
                tmp_subscript_name_2 = const_int_0;
                tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 862;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c0 == NULL );
                var_c0 = tmp_assign_source_8;
            }
            {
                PyObject *tmp_assign_source_9;
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

                    exception_lineno = 863;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_3 = par_c;
                tmp_subscript_name_3 = const_int_pos_1;
                tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 863;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c1 == NULL );
                var_c1 = tmp_assign_source_9;
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_len_arg_3;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 865;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_len_arg_3 = par_c;
                tmp_assign_source_10 = BUILTIN_LEN( tmp_len_arg_3 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 865;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_nd == NULL );
                var_nd = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
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

                    exception_lineno = 866;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_4 = par_c;
                tmp_subscript_name_4 = const_int_neg_2;
                tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -2 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 866;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c0 == NULL );
                var_c0 = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
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

                    exception_lineno = 867;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_5 = par_c;
                tmp_subscript_name_5 = const_int_neg_1;
                tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, -1 );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 867;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_c1 == NULL );
                var_c1 = tmp_assign_source_12;
            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_xrange_low_1;
                PyObject *tmp_xrange_high_1;
                PyObject *tmp_left_name_4;
                PyObject *tmp_len_arg_4;
                PyObject *tmp_right_name_4;
                tmp_xrange_low_1 = const_int_pos_3;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 868;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_len_arg_4 = par_c;
                tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_4 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 868;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_4 = const_int_pos_1;
                tmp_xrange_high_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                assert( !(tmp_xrange_high_1 == NULL) );
                tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
                Py_DECREF( tmp_xrange_high_1 );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 868;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 868;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_1__for_iterator == NULL );
                tmp_for_loop_1__for_iterator = tmp_assign_source_13;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_14 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooo";
                        exception_lineno = 868;
                        goto try_except_handler_2;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_14;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( tmp_for_loop_1__iter_value );
                tmp_assign_source_15 = tmp_for_loop_1__iter_value;
                {
                    PyObject *old = var_i;
                    var_i = tmp_assign_source_15;
                    Py_INCREF( var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_16;
                CHECK_OBJECT( var_c0 );
                tmp_assign_source_16 = var_c0;
                {
                    PyObject *old = var_tmp;
                    var_tmp = tmp_assign_source_16;
                    Py_INCREF( var_tmp );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( var_nd );
                tmp_left_name_5 = var_nd;
                tmp_right_name_5 = const_int_pos_1;
                tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 870;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_nd;
                    assert( old != NULL );
                    var_nd = tmp_assign_source_17;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_left_name_6;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                if ( par_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 871;
                    type_description_1 = "ooooooooo";
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


                    exception_lineno = 871;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscript_name_6 );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 871;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_c1 );
                tmp_left_name_7 = var_c1;
                tmp_left_name_8 = const_int_pos_2;
                CHECK_OBJECT( var_nd );
                tmp_left_name_9 = var_nd;
                tmp_right_name_9 = const_int_pos_1;
                tmp_right_name_8 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_6 );

                    exception_lineno = 871;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_7 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_right_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_6 );

                    exception_lineno = 871;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_6 );

                    exception_lineno = 871;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_assign_source_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 871;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_c0;
                    assert( old != NULL );
                    var_c0 = tmp_assign_source_18;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                CHECK_OBJECT( var_tmp );
                tmp_left_name_10 = var_tmp;
                CHECK_OBJECT( var_c1 );
                tmp_left_name_11 = var_c1;
                CHECK_OBJECT( var_x2 );
                tmp_right_name_11 = var_x2;
                tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_right_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 872;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 872;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_c1;
                    assert( old != NULL );
                    var_c1 = tmp_assign_source_19;
                    Py_DECREF( old );
                }

            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 868;
                type_description_1 = "ooooooooo";
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
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        if ( var_c0 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c0" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 873;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_12 = var_c0;
        if ( var_c1 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 873;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_13 = var_c1;
        CHECK_OBJECT( var_x2 );
        tmp_right_name_13 = var_x2;
        tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 873;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 873;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7d5b4dc5b89452b7e63e36f9c624587 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7d5b4dc5b89452b7e63e36f9c624587 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7d5b4dc5b89452b7e63e36f9c624587 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7d5b4dc5b89452b7e63e36f9c624587, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7d5b4dc5b89452b7e63e36f9c624587->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7d5b4dc5b89452b7e63e36f9c624587, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7d5b4dc5b89452b7e63e36f9c624587,
        type_description_1,
        par_x,
        par_c,
        par_tensor,
        var_x2,
        var_c0,
        var_c1,
        var_nd,
        var_i,
        var_tmp
    );


    // Release cached frame.
    if ( frame_b7d5b4dc5b89452b7e63e36f9c624587 == cache_frame_b7d5b4dc5b89452b7e63e36f9c624587 )
    {
        Py_DECREF( frame_b7d5b4dc5b89452b7e63e36f9c624587 );
    }
    cache_frame_b7d5b4dc5b89452b7e63e36f9c624587 = NULL;

    assertFrameObject( frame_b7d5b4dc5b89452b7e63e36f9c624587 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_13_hermval );
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

    CHECK_OBJECT( (PyObject *)var_x2 );
    Py_DECREF( var_x2 );
    var_x2 = NULL;

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

    Py_XDECREF( var_x2 );
    var_x2 = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_13_hermval );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_14_hermval2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_1ff59e5452da0d27d033bfac9e9c22ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ff59e5452da0d27d033bfac9e9c22ef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ff59e5452da0d27d033bfac9e9c22ef, codeobj_1ff59e5452da0d27d033bfac9e9c22ef, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1ff59e5452da0d27d033bfac9e9c22ef = cache_frame_1ff59e5452da0d27d033bfac9e9c22ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ff59e5452da0d27d033bfac9e9c22ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ff59e5452da0d27d033bfac9e9c22ef ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 922;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__valnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 922;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 922;
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
        frame_1ff59e5452da0d27d033bfac9e9c22ef->m_frame.f_lineno = 922;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 922;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff59e5452da0d27d033bfac9e9c22ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff59e5452da0d27d033bfac9e9c22ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff59e5452da0d27d033bfac9e9c22ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ff59e5452da0d27d033bfac9e9c22ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ff59e5452da0d27d033bfac9e9c22ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ff59e5452da0d27d033bfac9e9c22ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ff59e5452da0d27d033bfac9e9c22ef,
        type_description_1,
        par_x,
        par_y,
        par_c
    );


    // Release cached frame.
    if ( frame_1ff59e5452da0d27d033bfac9e9c22ef == cache_frame_1ff59e5452da0d27d033bfac9e9c22ef )
    {
        Py_DECREF( frame_1ff59e5452da0d27d033bfac9e9c22ef );
    }
    cache_frame_1ff59e5452da0d27d033bfac9e9c22ef = NULL;

    assertFrameObject( frame_1ff59e5452da0d27d033bfac9e9c22ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_14_hermval2d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_14_hermval2d );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_15_hermgrid2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_86b2fe7f772c782a019ab2eb4c786be7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86b2fe7f772c782a019ab2eb4c786be7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86b2fe7f772c782a019ab2eb4c786be7, codeobj_86b2fe7f772c782a019ab2eb4c786be7, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_86b2fe7f772c782a019ab2eb4c786be7 = cache_frame_86b2fe7f772c782a019ab2eb4c786be7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86b2fe7f772c782a019ab2eb4c786be7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86b2fe7f772c782a019ab2eb4c786be7 ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 975;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__gridnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 975;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 975;
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
        frame_86b2fe7f772c782a019ab2eb4c786be7->m_frame.f_lineno = 975;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 975;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b2fe7f772c782a019ab2eb4c786be7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b2fe7f772c782a019ab2eb4c786be7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86b2fe7f772c782a019ab2eb4c786be7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86b2fe7f772c782a019ab2eb4c786be7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86b2fe7f772c782a019ab2eb4c786be7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86b2fe7f772c782a019ab2eb4c786be7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86b2fe7f772c782a019ab2eb4c786be7,
        type_description_1,
        par_x,
        par_y,
        par_c
    );


    // Release cached frame.
    if ( frame_86b2fe7f772c782a019ab2eb4c786be7 == cache_frame_86b2fe7f772c782a019ab2eb4c786be7 )
    {
        Py_DECREF( frame_86b2fe7f772c782a019ab2eb4c786be7 );
    }
    cache_frame_86b2fe7f772c782a019ab2eb4c786be7 = NULL;

    assertFrameObject( frame_86b2fe7f772c782a019ab2eb4c786be7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_15_hermgrid2d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_15_hermgrid2d );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_16_hermval3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_e0e51f2761270a217034dacc81da0c90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0e51f2761270a217034dacc81da0c90 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e0e51f2761270a217034dacc81da0c90, codeobj_e0e51f2761270a217034dacc81da0c90, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e0e51f2761270a217034dacc81da0c90 = cache_frame_e0e51f2761270a217034dacc81da0c90;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e0e51f2761270a217034dacc81da0c90 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e0e51f2761270a217034dacc81da0c90 ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1026;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__valnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1026;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1026;
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
        frame_e0e51f2761270a217034dacc81da0c90->m_frame.f_lineno = 1026;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1026;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0e51f2761270a217034dacc81da0c90 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0e51f2761270a217034dacc81da0c90 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0e51f2761270a217034dacc81da0c90 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e0e51f2761270a217034dacc81da0c90, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e0e51f2761270a217034dacc81da0c90->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e0e51f2761270a217034dacc81da0c90, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e0e51f2761270a217034dacc81da0c90,
        type_description_1,
        par_x,
        par_y,
        par_z,
        par_c
    );


    // Release cached frame.
    if ( frame_e0e51f2761270a217034dacc81da0c90 == cache_frame_e0e51f2761270a217034dacc81da0c90 )
    {
        Py_DECREF( frame_e0e51f2761270a217034dacc81da0c90 );
    }
    cache_frame_e0e51f2761270a217034dacc81da0c90 = NULL;

    assertFrameObject( frame_e0e51f2761270a217034dacc81da0c90 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_16_hermval3d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_16_hermval3d );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_17_hermgrid3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_231740e22b7a8e6f9adcdf19fb53337e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_231740e22b7a8e6f9adcdf19fb53337e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_231740e22b7a8e6f9adcdf19fb53337e, codeobj_231740e22b7a8e6f9adcdf19fb53337e, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_231740e22b7a8e6f9adcdf19fb53337e = cache_frame_231740e22b7a8e6f9adcdf19fb53337e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_231740e22b7a8e6f9adcdf19fb53337e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_231740e22b7a8e6f9adcdf19fb53337e ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1082;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__gridnd );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1082;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermval );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermval" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1082;
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
        frame_231740e22b7a8e6f9adcdf19fb53337e->m_frame.f_lineno = 1082;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1082;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_231740e22b7a8e6f9adcdf19fb53337e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_231740e22b7a8e6f9adcdf19fb53337e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_231740e22b7a8e6f9adcdf19fb53337e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_231740e22b7a8e6f9adcdf19fb53337e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_231740e22b7a8e6f9adcdf19fb53337e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_231740e22b7a8e6f9adcdf19fb53337e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_231740e22b7a8e6f9adcdf19fb53337e,
        type_description_1,
        par_x,
        par_y,
        par_z,
        par_c
    );


    // Release cached frame.
    if ( frame_231740e22b7a8e6f9adcdf19fb53337e == cache_frame_231740e22b7a8e6f9adcdf19fb53337e )
    {
        Py_DECREF( frame_231740e22b7a8e6f9adcdf19fb53337e );
    }
    cache_frame_231740e22b7a8e6f9adcdf19fb53337e = NULL;

    assertFrameObject( frame_231740e22b7a8e6f9adcdf19fb53337e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_17_hermgrid3d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_17_hermgrid3d );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_18_hermvander( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_x2 = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8b6498cafcdbcbc1c400716df076e433;
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
    static struct Nuitka_FrameObject *cache_frame_8b6498cafcdbcbc1c400716df076e433 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b6498cafcdbcbc1c400716df076e433, codeobj_8b6498cafcdbcbc1c400716df076e433, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8b6498cafcdbcbc1c400716df076e433 = cache_frame_8b6498cafcdbcbc1c400716df076e433;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b6498cafcdbcbc1c400716df076e433 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b6498cafcdbcbc1c400716df076e433 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1129;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_1 = par_deg;
        tmp_args_element_name_2 = const_str_plain_deg;
        frame_8b6498cafcdbcbc1c400716df076e433->m_frame.f_lineno = 1129;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1129;
            type_description_1 = "oooooooo";
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


            exception_lineno = 1130;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_ea8c65b23281db7ee7660696e61ab360;
            frame_8b6498cafcdbcbc1c400716df076e433->m_frame.f_lineno = 1131;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1131;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1133;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1133;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_1eef64507cf3de8ea0ea857c5e7e1090 );
        frame_8b6498cafcdbcbc1c400716df076e433->m_frame.f_lineno = 1133;
        tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1133;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_0_0;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1133;
            type_description_1 = "oooooooo";
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


            exception_lineno = 1134;
            type_description_1 = "oooooooo";
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

            exception_lineno = 1134;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1134;
            type_description_1 = "oooooooo";
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


            exception_lineno = 1135;
            type_description_1 = "oooooooo";
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1136;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1136;
            type_description_1 = "oooooooo";
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
        frame_8b6498cafcdbcbc1c400716df076e433->m_frame.f_lineno = 1136;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1136;
            type_description_1 = "oooooooo";
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


            exception_lineno = 1137;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1137;
            type_description_1 = "oooooooo";
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


            exception_lineno = 1137;
            type_description_1 = "oooooooo";
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


            exception_lineno = 1138;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( par_x );
            tmp_left_name_6 = par_x;
            tmp_right_name_6 = const_int_pos_2;
            tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1139;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x2 == NULL );
            var_x2 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            int tmp_ass_subscript_res_2;
            CHECK_OBJECT( var_x2 );
            tmp_ass_subvalue_2 = var_x2;
            CHECK_OBJECT( var_v );
            tmp_ass_subscribed_2 = var_v;
            tmp_ass_subscript_2 = const_int_pos_1;
            tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
            if ( tmp_ass_subscript_res_2 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1140;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            tmp_xrange_low_1 = const_int_pos_2;
            CHECK_OBJECT( var_ideg );
            tmp_left_name_7 = var_ideg;
            tmp_right_name_7 = const_int_pos_1;
            tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_xrange_high_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1141;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
            Py_DECREF( tmp_xrange_high_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1141;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1141;
                type_description_1 = "oooooooo";
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
                    type_description_1 = "oooooooo";
                    exception_lineno = 1141;
                    goto try_except_handler_2;
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
                PyObject *old = var_i;
                var_i = tmp_assign_source_9;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_v );
            tmp_subscribed_name_1 = var_v;
            CHECK_OBJECT( var_i );
            tmp_left_name_10 = var_i;
            tmp_right_name_8 = const_int_pos_1;
            tmp_subscript_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_10, tmp_right_name_8 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_x2 );
            tmp_right_name_9 = var_x2;
            tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_v );
            tmp_subscribed_name_2 = var_v;
            CHECK_OBJECT( var_i );
            tmp_left_name_12 = var_i;
            tmp_right_name_11 = const_int_pos_2;
            tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_12, tmp_right_name_11 );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_13 = const_int_pos_2;
            CHECK_OBJECT( var_i );
            tmp_left_name_14 = var_i;
            tmp_right_name_14 = const_int_pos_1;
            tmp_right_name_13 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
            if ( tmp_right_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );
                Py_DECREF( tmp_left_name_11 );

                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_12 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            Py_DECREF( tmp_right_name_13 );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );
                Py_DECREF( tmp_left_name_11 );

                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_11 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1142;
                type_description_1 = "oooooooo";
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


                exception_lineno = 1142;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1141;
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

        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_3 = var_v;
        tmp_args_element_name_4 = const_int_0;
        tmp_args_element_name_5 = const_int_neg_1;
        frame_8b6498cafcdbcbc1c400716df076e433->m_frame.f_lineno = 1143;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_moveaxis, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1143;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b6498cafcdbcbc1c400716df076e433 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b6498cafcdbcbc1c400716df076e433 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b6498cafcdbcbc1c400716df076e433 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b6498cafcdbcbc1c400716df076e433, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b6498cafcdbcbc1c400716df076e433->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b6498cafcdbcbc1c400716df076e433, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b6498cafcdbcbc1c400716df076e433,
        type_description_1,
        par_x,
        par_deg,
        var_ideg,
        var_dims,
        var_dtyp,
        var_v,
        var_x2,
        var_i
    );


    // Release cached frame.
    if ( frame_8b6498cafcdbcbc1c400716df076e433 == cache_frame_8b6498cafcdbcbc1c400716df076e433 )
    {
        Py_DECREF( frame_8b6498cafcdbcbc1c400716df076e433 );
    }
    cache_frame_8b6498cafcdbcbc1c400716df076e433 = NULL;

    assertFrameObject( frame_8b6498cafcdbcbc1c400716df076e433 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_18_hermvander );
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

    Py_XDECREF( var_x2 );
    var_x2 = NULL;

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

    Py_XDECREF( var_x2 );
    var_x2 = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_18_hermvander );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_19_hermvander2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_deg = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_572f0b0d72a471bec8fe7f236cc6445c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_572f0b0d72a471bec8fe7f236cc6445c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_572f0b0d72a471bec8fe7f236cc6445c, codeobj_572f0b0d72a471bec8fe7f236cc6445c, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_572f0b0d72a471bec8fe7f236cc6445c = cache_frame_572f0b0d72a471bec8fe7f236cc6445c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_572f0b0d72a471bec8fe7f236cc6445c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_572f0b0d72a471bec8fe7f236cc6445c ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__vander2d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermvander );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermvander );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermvander" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1196;
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
        frame_572f0b0d72a471bec8fe7f236cc6445c->m_frame.f_lineno = 1196;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_572f0b0d72a471bec8fe7f236cc6445c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_572f0b0d72a471bec8fe7f236cc6445c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_572f0b0d72a471bec8fe7f236cc6445c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_572f0b0d72a471bec8fe7f236cc6445c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_572f0b0d72a471bec8fe7f236cc6445c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_572f0b0d72a471bec8fe7f236cc6445c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_572f0b0d72a471bec8fe7f236cc6445c,
        type_description_1,
        par_x,
        par_y,
        par_deg
    );


    // Release cached frame.
    if ( frame_572f0b0d72a471bec8fe7f236cc6445c == cache_frame_572f0b0d72a471bec8fe7f236cc6445c )
    {
        Py_DECREF( frame_572f0b0d72a471bec8fe7f236cc6445c );
    }
    cache_frame_572f0b0d72a471bec8fe7f236cc6445c = NULL;

    assertFrameObject( frame_572f0b0d72a471bec8fe7f236cc6445c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_19_hermvander2d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_19_hermvander2d );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_20_hermvander3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_ef197a857b3ae7aa3bfb35cc11915300;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef197a857b3ae7aa3bfb35cc11915300 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef197a857b3ae7aa3bfb35cc11915300, codeobj_ef197a857b3ae7aa3bfb35cc11915300, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ef197a857b3ae7aa3bfb35cc11915300 = cache_frame_ef197a857b3ae7aa3bfb35cc11915300;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef197a857b3ae7aa3bfb35cc11915300 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef197a857b3ae7aa3bfb35cc11915300 ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__vander3d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermvander );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermvander );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermvander" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1250;
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
        frame_ef197a857b3ae7aa3bfb35cc11915300->m_frame.f_lineno = 1250;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef197a857b3ae7aa3bfb35cc11915300 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef197a857b3ae7aa3bfb35cc11915300 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef197a857b3ae7aa3bfb35cc11915300 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef197a857b3ae7aa3bfb35cc11915300, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef197a857b3ae7aa3bfb35cc11915300->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef197a857b3ae7aa3bfb35cc11915300, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef197a857b3ae7aa3bfb35cc11915300,
        type_description_1,
        par_x,
        par_y,
        par_z,
        par_deg
    );


    // Release cached frame.
    if ( frame_ef197a857b3ae7aa3bfb35cc11915300 == cache_frame_ef197a857b3ae7aa3bfb35cc11915300 )
    {
        Py_DECREF( frame_ef197a857b3ae7aa3bfb35cc11915300 );
    }
    cache_frame_ef197a857b3ae7aa3bfb35cc11915300 = NULL;

    assertFrameObject( frame_ef197a857b3ae7aa3bfb35cc11915300 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_20_hermvander3d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_20_hermvander3d );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_21_hermfit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_37b2769ab4164b697716d6b7a66bbe52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_37b2769ab4164b697716d6b7a66bbe52 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37b2769ab4164b697716d6b7a66bbe52, codeobj_37b2769ab4164b697716d6b7a66bbe52, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_37b2769ab4164b697716d6b7a66bbe52 = cache_frame_37b2769ab4164b697716d6b7a66bbe52;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37b2769ab4164b697716d6b7a66bbe52 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37b2769ab4164b697716d6b7a66bbe52 ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1377;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fit );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1377;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermvander );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermvander );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermvander" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1377;
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
        frame_37b2769ab4164b697716d6b7a66bbe52->m_frame.f_lineno = 1377;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1377;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b2769ab4164b697716d6b7a66bbe52 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b2769ab4164b697716d6b7a66bbe52 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b2769ab4164b697716d6b7a66bbe52 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37b2769ab4164b697716d6b7a66bbe52, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37b2769ab4164b697716d6b7a66bbe52->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37b2769ab4164b697716d6b7a66bbe52, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37b2769ab4164b697716d6b7a66bbe52,
        type_description_1,
        par_x,
        par_y,
        par_deg,
        par_rcond,
        par_full,
        par_w
    );


    // Release cached frame.
    if ( frame_37b2769ab4164b697716d6b7a66bbe52 == cache_frame_37b2769ab4164b697716d6b7a66bbe52 )
    {
        Py_DECREF( frame_37b2769ab4164b697716d6b7a66bbe52 );
    }
    cache_frame_37b2769ab4164b697716d6b7a66bbe52 = NULL;

    assertFrameObject( frame_37b2769ab4164b697716d6b7a66bbe52 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_21_hermfit );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_21_hermfit );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_22_hermcompanion( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_bd13efed20bb61f02bf5d52c4f2b0739;
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
    static struct Nuitka_FrameObject *cache_frame_bd13efed20bb61f02bf5d52c4f2b0739 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd13efed20bb61f02bf5d52c4f2b0739, codeobj_bd13efed20bb61f02bf5d52c4f2b0739, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bd13efed20bb61f02bf5d52c4f2b0739 = cache_frame_bd13efed20bb61f02bf5d52c4f2b0739;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd13efed20bb61f02bf5d52c4f2b0739 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd13efed20bb61f02bf5d52c4f2b0739 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1407;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1407;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1407;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1407;
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
            exception_lineno = 1407;
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
                    exception_lineno = 1407;
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
            exception_lineno = 1407;
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


            exception_lineno = 1408;
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
            frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1409;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1409;
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


            exception_lineno = 1410;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1411;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_float_minus_0_5;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_int_0;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 1411;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 1411;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_2 = par_c;
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 1411;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_list_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 1411;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_2 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_3 );
            tmp_args_element_name_2 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
            frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1411;
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


                exception_lineno = 1411;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_c );
        tmp_len_arg_3 = par_c;
        tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1413;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
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
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1414;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1414;
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

            exception_lineno = 1414;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1414;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1414;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mat == NULL );
        var_mat = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hstack );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = const_float_1_0;
        tmp_args_element_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_3 );
        tmp_left_name_4 = const_float_1_0;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sqrt );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_float_2_0;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_arange );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_left_name_6 = var_n;
        tmp_right_name_6 = const_int_pos_1;
        tmp_args_element_name_5 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_6, tmp_right_name_6 );
        assert( !(tmp_args_element_name_5 == NULL) );
        tmp_args_element_name_6 = const_int_0;
        tmp_args_element_name_7 = const_int_neg_1;
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1415;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1415;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_3 );
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1415;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1415;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_scl == NULL );
        var_scl = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_multiply );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_scl );
        tmp_args_element_name_8 = var_scl;
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1416;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_subscribed_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_accumulate, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_slice_none_none_int_neg_1;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1416;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_scl;
            assert( old != NULL );
            var_scl = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_mat );
        tmp_called_instance_3 = var_mat;
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1417;
        tmp_subscribed_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1417;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = const_int_pos_1;
        tmp_stop_name_1 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_left_name_7 = var_n;
        tmp_right_name_7 = const_int_pos_1;
        tmp_step_name_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_7, tmp_right_name_7 );
        assert( !(tmp_step_name_1 == NULL) );
        tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_step_name_1 );
        assert( !(tmp_subscript_name_4 == NULL) );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1417;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_top == NULL );
        var_top = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_mat );
        tmp_called_instance_4 = var_mat;
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1418;
        tmp_subscribed_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1418;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_start_name_2 = var_n;
        tmp_stop_name_2 = Py_None;
        CHECK_OBJECT( var_n );
        tmp_left_name_8 = var_n;
        tmp_right_name_8 = const_int_pos_1;
        tmp_step_name_2 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_8, tmp_right_name_8 );
        assert( !(tmp_step_name_2 == NULL) );
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_step_name_2 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1418;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bot == NULL );
        var_bot = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1419;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_8;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sqrt );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1419;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = const_float_0_5;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1419;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_9;
        tmp_args_element_name_10 = const_int_pos_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_11 = var_n;
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1419;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_right_name_9 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_arange, call_args );
        }

        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 1419;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 1419;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame.f_lineno = 1419;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1419;
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


            exception_lineno = 1419;
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


            exception_lineno = 1420;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( var_mat );
        tmp_assign_source_10 = var_mat;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_10 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_10;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_6 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_name_6 = const_tuple_slice_none_none_none_int_neg_1_tuple;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1421;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_scl );
        tmp_left_name_12 = var_scl;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_7 = par_c;
        tmp_subscript_name_7 = const_slice_none_int_neg_1_none;
        tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 1421;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 1421;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_13 = const_float_2_0;
        CHECK_OBJECT( par_c );
        tmp_subscribed_name_8 = par_c;
        tmp_subscript_name_8 = const_int_neg_1;
        tmp_right_name_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, -1 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 1421;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_12 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 1421;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 1421;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1421;
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


            exception_lineno = 1421;
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
    RESTORE_FRAME_EXCEPTION( frame_bd13efed20bb61f02bf5d52c4f2b0739 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd13efed20bb61f02bf5d52c4f2b0739 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd13efed20bb61f02bf5d52c4f2b0739 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd13efed20bb61f02bf5d52c4f2b0739, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd13efed20bb61f02bf5d52c4f2b0739->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd13efed20bb61f02bf5d52c4f2b0739, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd13efed20bb61f02bf5d52c4f2b0739,
        type_description_1,
        par_c,
        var_n,
        var_mat,
        var_scl,
        var_top,
        var_bot
    );


    // Release cached frame.
    if ( frame_bd13efed20bb61f02bf5d52c4f2b0739 == cache_frame_bd13efed20bb61f02bf5d52c4f2b0739 )
    {
        Py_DECREF( frame_bd13efed20bb61f02bf5d52c4f2b0739 );
    }
    cache_frame_bd13efed20bb61f02bf5d52c4f2b0739 = NULL;

    assertFrameObject( frame_bd13efed20bb61f02bf5d52c4f2b0739 );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_22_hermcompanion );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_22_hermcompanion );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_23_hermroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_be38f0ab4a6d024eff485f087c75433c;
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
    static struct Nuitka_FrameObject *cache_frame_be38f0ab4a6d024eff485f087c75433c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be38f0ab4a6d024eff485f087c75433c, codeobj_be38f0ab4a6d024eff485f087c75433c, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be38f0ab4a6d024eff485f087c75433c = cache_frame_be38f0ab4a6d024eff485f087c75433c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be38f0ab4a6d024eff485f087c75433c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be38f0ab4a6d024eff485f087c75433c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1472;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_be38f0ab4a6d024eff485f087c75433c->m_frame.f_lineno = 1472;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_as_series, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1472;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1472;
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
            exception_lineno = 1472;
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
                    exception_lineno = 1472;
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
            exception_lineno = 1472;
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


            exception_lineno = 1473;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1474;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1474;
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

                exception_lineno = 1474;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_be38f0ab4a6d024eff485f087c75433c->m_frame.f_lineno = 1474;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1474;
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


            exception_lineno = 1475;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1476;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1476;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_float_minus_0_5;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_int_0;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1476;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1476;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_2 = par_c;
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 1476;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_list_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1476;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
            frame_be38f0ab4a6d024eff485f087c75433c->m_frame.f_lineno = 1476;
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


                exception_lineno = 1476;
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
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermcompanion );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermcompanion );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermcompanion" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1479;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_3 = par_c;
        frame_be38f0ab4a6d024eff485f087c75433c->m_frame.f_lineno = 1479;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_subscribed_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1479;
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


            exception_lineno = 1479;
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
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_la );

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

            exception_lineno = 1480;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_4 = var_m;
        frame_be38f0ab4a6d024eff485f087c75433c->m_frame.f_lineno = 1480;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_eigvals, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1480;
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
        frame_be38f0ab4a6d024eff485f087c75433c->m_frame.f_lineno = 1481;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_sort );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1481;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be38f0ab4a6d024eff485f087c75433c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be38f0ab4a6d024eff485f087c75433c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be38f0ab4a6d024eff485f087c75433c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be38f0ab4a6d024eff485f087c75433c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be38f0ab4a6d024eff485f087c75433c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be38f0ab4a6d024eff485f087c75433c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be38f0ab4a6d024eff485f087c75433c,
        type_description_1,
        par_c,
        var_m,
        var_r
    );


    // Release cached frame.
    if ( frame_be38f0ab4a6d024eff485f087c75433c == cache_frame_be38f0ab4a6d024eff485f087c75433c )
    {
        Py_DECREF( frame_be38f0ab4a6d024eff485f087c75433c );
    }
    cache_frame_be38f0ab4a6d024eff485f087c75433c = NULL;

    assertFrameObject( frame_be38f0ab4a6d024eff485f087c75433c );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_23_hermroots );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_23_hermroots );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_24__normed_hermite_n( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_c0 = NULL;
    PyObject *var_c1 = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tmp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_dbcb358a6969d8b08bf6ca98e46b5d93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_dbcb358a6969d8b08bf6ca98e46b5d93 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dbcb358a6969d8b08bf6ca98e46b5d93, codeobj_dbcb358a6969d8b08bf6ca98e46b5d93, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dbcb358a6969d8b08bf6ca98e46b5d93 = cache_frame_dbcb358a6969d8b08bf6ca98e46b5d93;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dbcb358a6969d8b08bf6ca98e46b5d93 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dbcb358a6969d8b08bf6ca98e46b5d93 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1514;
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_full );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_source_name_2 = par_x;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = const_int_pos_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sqrt );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sqrt );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pi );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1515;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1515;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1515;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1515;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_0;
        assert( var_c0 == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_c0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_7;
        tmp_left_name_2 = const_float_1_0;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sqrt );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sqrt );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_7;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pi );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1518;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1518;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1518;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c1 == NULL );
        var_c1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT( par_n );
        tmp_float_arg_1 = par_n;
        tmp_assign_source_3 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1519;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nd == NULL );
        var_nd = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_n );
        tmp_left_name_3 = par_n;
        tmp_right_name_3 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1520;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1520;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1520;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 1520;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( var_c0 );
        tmp_assign_source_7 = var_c0;
        {
            PyObject *old = var_tmp;
            var_tmp = tmp_assign_source_7;
            Py_INCREF( var_tmp );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_c1 );
        tmp_operand_name_1 = var_c1;
        tmp_left_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1522;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1522;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sqrt );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 1522;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_nd );
        tmp_left_name_6 = var_nd;
        tmp_right_name_5 = const_float_1_0;
        tmp_left_name_5 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 1522;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_nd );
        tmp_right_name_6 = var_nd;
        tmp_args_element_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 1522;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1522;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 1522;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1522;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_c0;
            assert( old != NULL );
            var_c0 = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_tmp );
        tmp_left_name_7 = var_tmp;
        CHECK_OBJECT( var_c1 );
        tmp_left_name_9 = var_c1;
        CHECK_OBJECT( par_x );
        tmp_right_name_8 = par_x;
        tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1523;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_left_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1523;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_sqrt );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 1523;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_10 = const_float_2_0;
        CHECK_OBJECT( var_nd );
        tmp_right_name_10 = var_nd;
        tmp_args_element_name_8 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 1523;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1523;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 1523;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1523;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1523;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_c1;
            assert( old != NULL );
            var_c1 = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( var_nd );
        tmp_left_name_11 = var_nd;
        tmp_right_name_11 = const_float_1_0;
        tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_FLOAT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1524;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_nd;
            assert( old != NULL );
            var_nd = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1520;
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

    {
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_10;
        CHECK_OBJECT( var_c0 );
        tmp_left_name_12 = var_c0;
        CHECK_OBJECT( var_c1 );
        tmp_left_name_14 = var_c1;
        CHECK_OBJECT( par_x );
        tmp_right_name_13 = par_x;
        tmp_left_name_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1525;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_left_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1525;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_10;
        frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame.f_lineno = 1525;
        tmp_right_name_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 1525;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1525;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1525;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbcb358a6969d8b08bf6ca98e46b5d93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbcb358a6969d8b08bf6ca98e46b5d93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbcb358a6969d8b08bf6ca98e46b5d93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dbcb358a6969d8b08bf6ca98e46b5d93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dbcb358a6969d8b08bf6ca98e46b5d93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dbcb358a6969d8b08bf6ca98e46b5d93, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dbcb358a6969d8b08bf6ca98e46b5d93,
        type_description_1,
        par_x,
        par_n,
        var_c0,
        var_c1,
        var_nd,
        var_i,
        var_tmp
    );


    // Release cached frame.
    if ( frame_dbcb358a6969d8b08bf6ca98e46b5d93 == cache_frame_dbcb358a6969d8b08bf6ca98e46b5d93 )
    {
        Py_DECREF( frame_dbcb358a6969d8b08bf6ca98e46b5d93 );
    }
    cache_frame_dbcb358a6969d8b08bf6ca98e46b5d93 = NULL;

    assertFrameObject( frame_dbcb358a6969d8b08bf6ca98e46b5d93 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_24__normed_hermite_n );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_24__normed_hermite_n );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_25_hermgauss( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_96bdb8738b57e4a2de78338435969a84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_96bdb8738b57e4a2de78338435969a84 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_96bdb8738b57e4a2de78338435969a84, codeobj_96bdb8738b57e4a2de78338435969a84, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_96bdb8738b57e4a2de78338435969a84 = cache_frame_96bdb8738b57e4a2de78338435969a84;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_96bdb8738b57e4a2de78338435969a84 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_96bdb8738b57e4a2de78338435969a84 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 1564;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_1 = par_deg;
        tmp_args_element_name_2 = const_str_plain_deg;
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1564;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__deprecate_as_int, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1564;
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


            exception_lineno = 1565;
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
            frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1566;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1566;
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
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1570;
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

            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = LIST_COPY( const_list_int_pos_1_list );
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_float64 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1570;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1570;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermcompanion );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermcompanion );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermcompanion" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1571;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_3 = var_c;
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1571;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1571;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_la );

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

            exception_lineno = 1572;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_4 = var_m;
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1572;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_eigvalsh, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1572;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain__normed_hermite_n );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__normed_hermite_n );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_normed_hermite_n" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_5 = var_x;
        CHECK_OBJECT( var_ideg );
        tmp_args_element_name_6 = var_ideg;
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1575;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1575;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dy == NULL );
        var_dy = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain__normed_hermite_n );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__normed_hermite_n );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_normed_hermite_n" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_7 = var_x;
        CHECK_OBJECT( var_ideg );
        tmp_left_name_4 = var_ideg;
        tmp_right_name_3 = const_int_pos_1;
        tmp_args_element_name_8 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1576;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_8;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sqrt );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_int_pos_2;
        CHECK_OBJECT( var_ideg );
        tmp_right_name_5 = var_ideg;
        tmp_args_element_name_9 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1576;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1576;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_df == NULL );
        var_df = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_x );
        tmp_left_name_6 = var_x;
        CHECK_OBJECT( var_dy );
        tmp_left_name_7 = var_dy;
        CHECK_OBJECT( var_df );
        tmp_right_name_7 = var_df;
        tmp_right_name_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1577;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_left_name_6;
        var_x = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain__normed_hermite_n );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__normed_hermite_n );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_normed_hermite_n" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_9;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_10 = var_x;
        CHECK_OBJECT( var_ideg );
        tmp_left_name_8 = var_ideg;
        tmp_right_name_8 = const_int_pos_1;
        tmp_args_element_name_11 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1581;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1581;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fm == NULL );
        var_fm = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( var_fm );
        tmp_left_name_9 = var_fm;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_10;
        CHECK_OBJECT( var_fm );
        tmp_args_element_name_12 = var_fm;
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1582;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abs, call_args );
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1582;
        tmp_right_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_max );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1582;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_left_name_9;
        var_fm = tmp_assign_source_9;

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        tmp_left_name_10 = const_int_pos_1;
        CHECK_OBJECT( var_fm );
        tmp_left_name_11 = var_fm;
        CHECK_OBJECT( var_fm );
        tmp_right_name_11 = var_fm;
        tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1583;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1583;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_w );
        tmp_left_name_13 = var_w;
        CHECK_OBJECT( var_w );
        tmp_subscribed_name_1 = var_w;
        tmp_subscript_name_1 = const_slice_none_none_int_neg_1;
        tmp_right_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1586;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1586;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = const_int_pos_2;
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_12, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1586;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_w;
            assert( old != NULL );
            var_w = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( var_x );
        tmp_left_name_15 = var_x;
        CHECK_OBJECT( var_x );
        tmp_subscribed_name_2 = var_x;
        tmp_subscript_name_2 = const_slice_none_none_int_neg_1;
        tmp_right_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1587;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1587;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_15 = const_int_pos_2;
        tmp_assign_source_12 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_14, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1587;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_right_name_17;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT( var_w );
        tmp_left_name_16 = var_w;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_11;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sqrt );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_12;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pi );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1590;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_left_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_w );
        tmp_called_instance_5 = var_w;
        frame_96bdb8738b57e4a2de78338435969a84->m_frame.f_lineno = 1590;
        tmp_right_name_17 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_sum );
        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1590;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = tmp_left_name_16;
        var_w = tmp_assign_source_13;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96bdb8738b57e4a2de78338435969a84 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96bdb8738b57e4a2de78338435969a84 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96bdb8738b57e4a2de78338435969a84, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96bdb8738b57e4a2de78338435969a84->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96bdb8738b57e4a2de78338435969a84, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_96bdb8738b57e4a2de78338435969a84,
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
    if ( frame_96bdb8738b57e4a2de78338435969a84 == cache_frame_96bdb8738b57e4a2de78338435969a84 )
    {
        Py_DECREF( frame_96bdb8738b57e4a2de78338435969a84 );
    }
    cache_frame_96bdb8738b57e4a2de78338435969a84 = NULL;

    assertFrameObject( frame_96bdb8738b57e4a2de78338435969a84 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_2 = var_x;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_w );
        tmp_tuple_element_2 = var_w;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_25_hermgauss );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_25_hermgauss );
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


static PyObject *impl_numpy$polynomial$hermite$$$function_26_hermweight( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_w = NULL;
    struct Nuitka_FrameObject *frame_f4cfd891a73cf6918202321b4120041e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4cfd891a73cf6918202321b4120041e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f4cfd891a73cf6918202321b4120041e, codeobj_f4cfd891a73cf6918202321b4120041e, module_numpy$polynomial$hermite, sizeof(void *)+sizeof(void *) );
    frame_f4cfd891a73cf6918202321b4120041e = cache_frame_f4cfd891a73cf6918202321b4120041e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f4cfd891a73cf6918202321b4120041e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f4cfd891a73cf6918202321b4120041e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 1619;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1619;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_left_name_1 = par_x;
        tmp_right_name_1 = const_int_pos_2;
        tmp_operand_name_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 1619;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 1619;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f4cfd891a73cf6918202321b4120041e->m_frame.f_lineno = 1619;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1619;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_w == NULL );
        var_w = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4cfd891a73cf6918202321b4120041e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4cfd891a73cf6918202321b4120041e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f4cfd891a73cf6918202321b4120041e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f4cfd891a73cf6918202321b4120041e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f4cfd891a73cf6918202321b4120041e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f4cfd891a73cf6918202321b4120041e,
        type_description_1,
        par_x,
        var_w
    );


    // Release cached frame.
    if ( frame_f4cfd891a73cf6918202321b4120041e == cache_frame_f4cfd891a73cf6918202321b4120041e )
    {
        Py_DECREF( frame_f4cfd891a73cf6918202321b4120041e );
    }
    cache_frame_f4cfd891a73cf6918202321b4120041e = NULL;

    assertFrameObject( frame_f4cfd891a73cf6918202321b4120041e );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_26_hermweight );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite$$$function_26_hermweight );
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



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_10_hermpow( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_10_hermpow,
        const_str_plain_hermpow,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1989168d2c3222232be2d15a49a309ae,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_da5501e8e216a8a52345697e4ca88221,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_11_hermder( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_11_hermder,
        const_str_plain_hermder,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c8b6a9e317ada024adbdf18992905d18,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_6269ee6747c1222fa2b7fc655c468505,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_12_hermint( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_12_hermint,
        const_str_plain_hermint,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a3477570ce246780b625a9555fc3d82,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_ec68a65009ef17bf791157b7ba885ede,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_13_hermval( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_13_hermval,
        const_str_plain_hermval,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7d5b4dc5b89452b7e63e36f9c624587,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_f5e0384f5553c51b1b3fd4f6e8d47e48,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_14_hermval2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_14_hermval2d,
        const_str_plain_hermval2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1ff59e5452da0d27d033bfac9e9c22ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_c2e2877902ed76c5634a254b79ca3070,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_15_hermgrid2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_15_hermgrid2d,
        const_str_plain_hermgrid2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_86b2fe7f772c782a019ab2eb4c786be7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_933bc4cb7fc43137efea1500cad0afd6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_16_hermval3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_16_hermval3d,
        const_str_plain_hermval3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e0e51f2761270a217034dacc81da0c90,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_a61f47dbac6795f2e00baa25f0097162,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_17_hermgrid3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_17_hermgrid3d,
        const_str_plain_hermgrid3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_231740e22b7a8e6f9adcdf19fb53337e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_87a48fe75220900c1afcbf4e8775f4cb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_18_hermvander(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_18_hermvander,
        const_str_plain_hermvander,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8b6498cafcdbcbc1c400716df076e433,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_299901cfab77045b8cccd2b7d620afab,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_19_hermvander2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_19_hermvander2d,
        const_str_plain_hermvander2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_572f0b0d72a471bec8fe7f236cc6445c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_d9bce18bf24a65c247ac08b5785d8edd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_1_poly2herm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_1_poly2herm,
        const_str_plain_poly2herm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_af998c58965844351af0643e7df4cfe3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_b042ae68f68c83ee53182cf1b0e39619,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_20_hermvander3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_20_hermvander3d,
        const_str_plain_hermvander3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ef197a857b3ae7aa3bfb35cc11915300,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_31dc77ee0bf9fe6d970cc8d226d2ed2e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_21_hermfit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_21_hermfit,
        const_str_plain_hermfit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_37b2769ab4164b697716d6b7a66bbe52,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_b816a0fb53b07c1aae7ad6c902f66814,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_22_hermcompanion(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_22_hermcompanion,
        const_str_plain_hermcompanion,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bd13efed20bb61f02bf5d52c4f2b0739,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_d0f21d4282709d5b1f4fff9eb523c00d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_23_hermroots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_23_hermroots,
        const_str_plain_hermroots,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be38f0ab4a6d024eff485f087c75433c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_76082d9373be91bf0e3f5df3d298febc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_24__normed_hermite_n(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_24__normed_hermite_n,
        const_str_plain__normed_hermite_n,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dbcb358a6969d8b08bf6ca98e46b5d93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_e51196dd8e0a5a3c6974e277f19d5b81,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_25_hermgauss(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_25_hermgauss,
        const_str_plain_hermgauss,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_96bdb8738b57e4a2de78338435969a84,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_79aa7845de5bdcc58f6772c7d8e3cb31,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_26_hermweight(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_26_hermweight,
        const_str_plain_hermweight,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f4cfd891a73cf6918202321b4120041e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_7bc9fee5de8fbb571d3e7de42f67b827,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_2_herm2poly(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_2_herm2poly,
        const_str_plain_herm2poly,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb388cac62d0ebf487b5733265b0dc34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_e344a2d6b68dd580ed7751d269b08212,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_3_hermline(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_3_hermline,
        const_str_plain_hermline,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0d62dfe155ee54c70f21a8be6be4e72,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_0233c512a75882bacf2ead42c82e440d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_4_hermfromroots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_4_hermfromroots,
        const_str_plain_hermfromroots,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_892654279eebf05e139684c5d4bb318e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_80e523600d02515b68df04cb10521fcf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_5_hermadd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_5_hermadd,
        const_str_plain_hermadd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ad3f27034cfe6f93a7af73e2aacf0403,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_8745b4d5e1169a38d182ce566a6d969b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_6_hermsub(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_6_hermsub,
        const_str_plain_hermsub,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f9bc3e8848bf762ea6422f8c590d852d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_6cda7ea5861e76d5f257a230b7c4c9d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_7_hermmulx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_7_hermmulx,
        const_str_plain_hermmulx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f04c530f047acfa63f56aa8b97d8a381,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_b4b22a53c630189423e63a82fc9efd13,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_8_hermmul(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_8_hermmul,
        const_str_plain_hermmul,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0d11145e8a866218dd724afe50f95234,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_ee85202f620e1efdba1ca0a717e3afaa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$hermite$$$function_9_hermdiv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$hermite$$$function_9_hermdiv,
        const_str_plain_hermdiv,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_05169f102087f40436a3e7251e17f703,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$hermite,
        const_str_digest_7f712a6292710d305d54789dfd034b2d,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial$hermite =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial.hermite",
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
MOD_ENTRY_DECL(numpy$polynomial$hermite)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(numpy$polynomial$hermite)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial$hermite );
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
    puts("numpy.polynomial.hermite: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.hermite: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.hermite: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$polynomial$hermite" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial$hermite = Py_InitModule4(
        "numpy.polynomial.hermite",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$polynomial$hermite = PyModule_Create( &mdef_numpy$polynomial$hermite );
#endif

    moduledict_numpy$polynomial$hermite = MODULE_DICT( module_numpy$polynomial$hermite );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$polynomial$hermite,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$polynomial$hermite,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$hermite,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$hermite,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$polynomial$hermite );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_556654d8c41102e6b648eeebe440c961, module_numpy$polynomial$hermite );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_f7e6c1fb8ba62f36967a8d9d9ed02e54;
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
    PyObject *locals_numpy$polynomial$hermite_1627 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_ac6dad3981b7e3a25c8c8eb922a0f3f8;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_6cae10ae7eb457611d7e08b7ab115f87;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f7e6c1fb8ba62f36967a8d9d9ed02e54 = MAKE_MODULE_FRAME( codeobj_f7e6c1fb8ba62f36967a8d9d9ed02e54, module_numpy$polynomial$hermite );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f7e6c1fb8ba62f36967a8d9d9ed02e54 );
    assert( Py_REFCNT( frame_f7e6c1fb8ba62f36967a8d9d9ed02e54 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_6cae10ae7eb457611d7e08b7ab115f87;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 61;
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


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$polynomial$hermite;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 63;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$polynomial$hermite;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 64;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
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
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$polynomial$hermite;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 65;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_linalg );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_la, tmp_assign_source_10 );
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
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$polynomial$hermite;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_normalize_axis_index_tuple;
        tmp_level_name_4 = const_int_0;
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 66;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_normalize_axis_index );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_normalize_axis_index, tmp_assign_source_11 );
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
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$polynomial$hermite;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_polyutils_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 68;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_numpy$polynomial$hermite,
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


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu, tmp_assign_source_12 );
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
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$polynomial$hermite;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_ABCPolyBase_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 69;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_numpy$polynomial$hermite,
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


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_ABCPolyBase, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = LIST_COPY( const_list_906a319729d646dc106ab9203973edb1_list );
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_pu );

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

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trimcoef );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermtrim, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_1_poly2herm(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_poly2herm, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_2_herm2poly(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_herm2poly, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_arg_element_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        tmp_call_arg_element_1 = LIST_COPY( const_list_int_neg_1_int_pos_1_list );
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1 };
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermdomain, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_arg_element_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        tmp_call_arg_element_2 = LIST_COPY( const_list_int_0_list );
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_call_arg_element_2 };
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_2 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermzero, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_arg_element_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        tmp_call_arg_element_3 = LIST_COPY( const_list_int_pos_1_list );
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_call_arg_element_3 };
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermone, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_arg_element_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        tmp_call_arg_element_4 = LIST_COPY( const_list_int_0_float_0_5_list );
        frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_call_arg_element_4 };
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_array, call_args );
        }

        Py_DECREF( tmp_call_arg_element_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermx, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_3_hermline(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermline, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_4_hermfromroots(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermfromroots, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_5_hermadd(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermadd, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_6_hermsub(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermsub, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_7_hermmulx(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmulx, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_8_hermmul(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmul, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_9_hermdiv(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermdiv, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_pos_16_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_10_hermpow( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermpow, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_pos_1_int_pos_1_int_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_11_hermder( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermder, tmp_assign_source_30 );
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
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_12_hermint( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermint, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_13_hermval( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_14_hermval2d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval2d, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_15_hermgrid2d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermgrid2d, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_16_hermval3d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval3d, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_17_hermgrid3d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermgrid3d, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_18_hermvander(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermvander, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_19_hermvander2d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermvander2d, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_20_hermvander3d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermvander3d, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = const_tuple_none_false_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_21_hermfit( tmp_defaults_5 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermfit, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_22_hermcompanion(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermcompanion, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_23_hermroots(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermroots, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_24__normed_hermite_n(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain__normed_hermite_n, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_25_hermgauss(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermgauss, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_numpy$polynomial$hermite$$$function_26_hermweight(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermweight, tmp_assign_source_45 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );

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

            exception_lineno = 1627;

            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        tmp_assign_source_46 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_47 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1627;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
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


            exception_lineno = 1627;

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


            exception_lineno = 1627;

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


            exception_lineno = 1627;

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


            exception_lineno = 1627;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1627;

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
        tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1627;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_49;
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


            exception_lineno = 1627;

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


            exception_lineno = 1627;

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
            PyObject *tmp_assign_source_50;
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


                exception_lineno = 1627;

                goto try_except_handler_2;
            }
            tmp_tuple_element_3 = const_str_plain_Hermite;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 1627;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1627;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_50;
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


                exception_lineno = 1627;

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


                    exception_lineno = 1627;

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

                    exception_lineno = 1627;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_4 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1627;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 1627;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_51;
            tmp_assign_source_51 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_51;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$polynomial$hermite_1627 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_556654d8c41102e6b648eeebe440c961;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1627;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_2ce4b48ec17c44472e33514d764e3d7c;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1627;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_Hermite;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1627;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2, codeobj_5d6aa0ad8a1decdfecdfcdf1b6007ce4, module_numpy$polynomial$hermite, sizeof(void *) );
        frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 = cache_frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_mvar_value_10;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1650;
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
            tmp_called_name_2 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1650;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1650;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermadd );

            if ( tmp_args_element_name_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermadd );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermadd );
                }

                if ( tmp_mvar_value_9 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermadd" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1650;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_1 = tmp_mvar_value_9;
                Py_INCREF( tmp_args_element_name_1 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1650;
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


                exception_lineno = 1650;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_staticmethod_arg_1 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermadd );

            if ( tmp_staticmethod_arg_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermadd );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermadd );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermadd" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1650;
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


                exception_lineno = 1650;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__add, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1650;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1651;
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
            tmp_called_name_3 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1651;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1651;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_2 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermsub );

            if ( tmp_args_element_name_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermsub );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermsub );
                }

                if ( tmp_mvar_value_11 == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermsub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1651;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_2 = tmp_mvar_value_11;
                Py_INCREF( tmp_args_element_name_2 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1651;
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


                exception_lineno = 1651;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_staticmethod_arg_2 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermsub );

            if ( tmp_staticmethod_arg_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermsub );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermsub );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermsub" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1651;
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


                exception_lineno = 1651;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__sub, tmp_dictset_value );
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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_staticmethod_arg_3;
            PyObject *tmp_mvar_value_14;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1652;
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
            tmp_called_name_4 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1652;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1652;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermmul );

            if ( tmp_args_element_name_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmul );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmul );
                }

                if ( tmp_mvar_value_13 == NULL )
                {
                    Py_DECREF( tmp_called_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmul" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1652;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_3 = tmp_mvar_value_13;
                Py_INCREF( tmp_args_element_name_3 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1652;
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


                exception_lineno = 1652;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_staticmethod_arg_3 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermmul );

            if ( tmp_staticmethod_arg_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermmul );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermmul );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermmul" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1652;
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


                exception_lineno = 1652;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__mul, tmp_dictset_value );
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
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_staticmethod_arg_4;
            PyObject *tmp_mvar_value_16;
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1653;
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
            tmp_called_name_5 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1653;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1653;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_4 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermdiv );

            if ( tmp_args_element_name_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermdiv );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermdiv );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_called_name_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermdiv" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1653;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_4 = tmp_mvar_value_15;
                Py_INCREF( tmp_args_element_name_4 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1653;
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


                exception_lineno = 1653;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_staticmethod_arg_4 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermdiv );

            if ( tmp_staticmethod_arg_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermdiv );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermdiv );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermdiv" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1653;
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


                exception_lineno = 1653;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__div, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1653;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1654;
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
            tmp_called_name_6 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermpow );

            if ( tmp_args_element_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermpow );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermpow );
                }

                if ( tmp_mvar_value_17 == NULL )
                {
                    Py_DECREF( tmp_called_name_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermpow" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1654;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_5 = tmp_mvar_value_17;
                Py_INCREF( tmp_args_element_name_5 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1654;
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


                exception_lineno = 1654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_staticmethod_arg_5 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermpow );

            if ( tmp_staticmethod_arg_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermpow );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermpow );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermpow" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1654;
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


                exception_lineno = 1654;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__pow, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1654;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1655;
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
            tmp_called_name_7 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1655;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1655;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_6 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermval );

            if ( tmp_args_element_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermval );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_called_name_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermval" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1655;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_6 = tmp_mvar_value_19;
                Py_INCREF( tmp_args_element_name_6 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1655;
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


                exception_lineno = 1655;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_staticmethod_arg_6 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermval );

            if ( tmp_staticmethod_arg_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermval );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermval );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermval" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1655;
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


                exception_lineno = 1655;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__val, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1655;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1656;
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
            tmp_called_name_8 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1656;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1656;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_7 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermint );

            if ( tmp_args_element_name_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermint );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermint );
                }

                if ( tmp_mvar_value_21 == NULL )
                {
                    Py_DECREF( tmp_called_name_8 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermint" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1656;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_7 = tmp_mvar_value_21;
                Py_INCREF( tmp_args_element_name_7 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1656;
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


                exception_lineno = 1656;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_staticmethod_arg_7 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermint );

            if ( tmp_staticmethod_arg_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermint );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermint );
                }

                if ( tmp_mvar_value_22 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermint" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1656;
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


                exception_lineno = 1656;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__int, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1656;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1657;
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
            tmp_called_name_9 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1657;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1657;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_8 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermder );

            if ( tmp_args_element_name_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermder );

                if (unlikely( tmp_mvar_value_23 == NULL ))
                {
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermder );
                }

                if ( tmp_mvar_value_23 == NULL )
                {
                    Py_DECREF( tmp_called_name_9 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermder" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1657;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_8 = tmp_mvar_value_23;
                Py_INCREF( tmp_args_element_name_8 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1657;
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


                exception_lineno = 1657;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_staticmethod_arg_8 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermder );

            if ( tmp_staticmethod_arg_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermder );

                if (unlikely( tmp_mvar_value_24 == NULL ))
                {
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermder );
                }

                if ( tmp_mvar_value_24 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermder" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1657;
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


                exception_lineno = 1657;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__der, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1657;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1658;
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
            tmp_called_name_10 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1658;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1658;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_9 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermfit );

            if ( tmp_args_element_name_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermfit );

                if (unlikely( tmp_mvar_value_25 == NULL ))
                {
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermfit );
                }

                if ( tmp_mvar_value_25 == NULL )
                {
                    Py_DECREF( tmp_called_name_10 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermfit" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1658;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_9 = tmp_mvar_value_25;
                Py_INCREF( tmp_args_element_name_9 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1658;
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


                exception_lineno = 1658;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_staticmethod_arg_9 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermfit );

            if ( tmp_staticmethod_arg_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermfit );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermfit );
                }

                if ( tmp_mvar_value_26 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermfit" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1658;
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


                exception_lineno = 1658;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__fit, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1658;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1659;
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
            tmp_called_name_11 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1659;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1659;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_10 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermline );

            if ( tmp_args_element_name_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermline );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermline );
                }

                if ( tmp_mvar_value_27 == NULL )
                {
                    Py_DECREF( tmp_called_name_11 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermline" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1659;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_10 = tmp_mvar_value_27;
                Py_INCREF( tmp_args_element_name_10 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1659;
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


                exception_lineno = 1659;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_staticmethod_arg_10 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermline );

            if ( tmp_staticmethod_arg_10 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermline );

                if (unlikely( tmp_mvar_value_28 == NULL ))
                {
                    tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermline );
                }

                if ( tmp_mvar_value_28 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermline" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1659;
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


                exception_lineno = 1659;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__line, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1659;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1660;
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
            tmp_called_name_12 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1660;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1660;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_11 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermroots );

            if ( tmp_args_element_name_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermroots );

                if (unlikely( tmp_mvar_value_29 == NULL ))
                {
                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermroots );
                }

                if ( tmp_mvar_value_29 == NULL )
                {
                    Py_DECREF( tmp_called_name_12 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1660;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_11 = tmp_mvar_value_29;
                Py_INCREF( tmp_args_element_name_11 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1660;
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


                exception_lineno = 1660;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_staticmethod_arg_11 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermroots );

            if ( tmp_staticmethod_arg_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermroots );

                if (unlikely( tmp_mvar_value_30 == NULL ))
                {
                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermroots );
                }

                if ( tmp_mvar_value_30 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1660;
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


                exception_lineno = 1660;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__roots, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1660;
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
            tmp_res = MAPPING_HAS_ITEM( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1661;
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
            tmp_called_name_13 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_staticmethod );

            if ( tmp_called_name_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1661;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1661;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_12 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermfromroots );

            if ( tmp_args_element_name_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermfromroots );

                if (unlikely( tmp_mvar_value_31 == NULL ))
                {
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermfromroots );
                }

                if ( tmp_mvar_value_31 == NULL )
                {
                    Py_DECREF( tmp_called_name_13 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermfromroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1661;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_12 = tmp_mvar_value_31;
                Py_INCREF( tmp_args_element_name_12 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1661;
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


                exception_lineno = 1661;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_staticmethod_arg_12 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermfromroots );

            if ( tmp_staticmethod_arg_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermfromroots );

                if (unlikely( tmp_mvar_value_32 == NULL ))
                {
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermfromroots );
                }

                if ( tmp_mvar_value_32 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermfromroots" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1661;
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


                exception_lineno = 1661;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain__fromroots, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1661;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = const_str_plain_herm;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_nickname, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1664;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_14;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_mvar_value_34;
            tmp_source_name_6 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_np );

            if ( tmp_source_name_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 1665;
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


                exception_lineno = 1665;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_13 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermdomain );

            if ( tmp_args_element_name_13 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermdomain );

                if (unlikely( tmp_mvar_value_34 == NULL ))
                {
                    tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermdomain );
                }

                if ( tmp_mvar_value_34 == NULL )
                {
                    Py_DECREF( tmp_called_name_14 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermdomain" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1665;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_13 = tmp_mvar_value_34;
                Py_INCREF( tmp_args_element_name_13 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1665;
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


                exception_lineno = 1665;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_domain, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1665;
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
            tmp_source_name_7 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_np );

            if ( tmp_source_name_7 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 1666;
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


                exception_lineno = 1666;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_14 = PyObject_GetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_hermdomain );

            if ( tmp_args_element_name_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_hermdomain );

                if (unlikely( tmp_mvar_value_36 == NULL ))
                {
                    tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hermdomain );
                }

                if ( tmp_mvar_value_36 == NULL )
                {
                    Py_DECREF( tmp_called_name_15 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hermdomain" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1666;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_args_element_name_14 = tmp_mvar_value_36;
                Py_INCREF( tmp_args_element_name_14 );
                }
            }

            frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame.f_lineno = 1666;
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


                exception_lineno = 1666;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_window, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1666;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = const_str_plain_H;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain_basis_name, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1667;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 == cache_frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 )
        {
            Py_DECREF( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 );
        }
        cache_frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 = NULL;

        assertFrameObject( frame_5d6aa0ad8a1decdfecdfcdf1b6007ce4_2 );

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


                exception_lineno = 1627;

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
            tmp_res = PyObject_SetItem( locals_numpy$polynomial$hermite_1627, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1627;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_16 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = const_str_plain_Hermite;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
            tmp_tuple_element_5 = locals_numpy$polynomial$hermite_1627;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame.f_lineno = 1627;
            tmp_assign_source_53 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1627;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_52 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_52 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_numpy$polynomial$hermite_1627 );
        locals_numpy$polynomial$hermite_1627 = NULL;
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

        Py_DECREF( locals_numpy$polynomial$hermite_1627 );
        locals_numpy$polynomial$hermite_1627 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite );
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
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$hermite );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 1627;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$hermite, (Nuitka_StringObject *)const_str_plain_Hermite, tmp_assign_source_52 );
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
    RESTORE_FRAME_EXCEPTION( frame_f7e6c1fb8ba62f36967a8d9d9ed02e54 );
#endif
    popFrameStack();

    assertFrameObject( frame_f7e6c1fb8ba62f36967a8d9d9ed02e54 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7e6c1fb8ba62f36967a8d9d9ed02e54 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7e6c1fb8ba62f36967a8d9d9ed02e54, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7e6c1fb8ba62f36967a8d9d9ed02e54->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7e6c1fb8ba62f36967a8d9d9ed02e54, exception_lineno );
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


    return MOD_RETURN_VALUE( module_numpy$polynomial$hermite );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
