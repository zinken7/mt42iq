/* Generated code for Python module 'gspread.utils'
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

/* The "_module_gspread$utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gspread$utils;
PyDictObject *moduledict_gspread$utils;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_seq;
extern PyObject *const_str_plain_itertools;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_ae17463721f24542093320bfa1bb6d26;
extern PyObject *const_slice_int_neg_2_none_none;
static PyObject *const_tuple_f4b09382a8de949af14b84e0e8f56143_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_extract_id_from_url;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_rowcol_to_a1;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_defaultdict;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_fill_gaps;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_input;
static PyObject *const_tuple_str_plain_wid_str_plain_widval_str_plain_xorval_tuple;
static PyObject *const_tuple_str_digest_e142fd607fff07aa901ad9406f615b22_tuple;
extern PyObject *const_str_plain_empty2zero;
extern PyObject *const_str_plain_func;
static PyObject *const_str_digest_8d17a2257971c4787678c2ca4ab5a005;
static PyObject *const_tuple_str_plain_row_str_plain_max_cols_tuple;
extern PyObject *const_str_plain_IncorrectCellLabel;
static PyObject *const_str_plain_col_offset;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
extern PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple;
extern PyObject *const_str_plain_allow_underscores_in_numeric_literals;
extern PyObject *const_str_plain___debug__;
static PyObject *const_tuple_str_empty_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_L;
static PyObject *const_str_digest_80c7ac92e268f43134ee4112bbe1ed59;
static PyObject *const_str_plain_rect_cols;
static PyObject *const_str_digest_7b154f47201d8b63f6fc17a008ce03d4;
extern PyObject *const_str_plain_quote;
extern PyObject *const_str_plain_m1;
extern PyObject *const_str_plain_urllib;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_range_name;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain_CELL_ADDR_RE;
static PyObject *const_str_plain_widval;
extern PyObject *const_str_plain_label;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_cell_list;
extern PyObject *const_str_plain_wraps;
extern PyObject *const_str_digest_d76462298f66c95b4d3ee22e9427a916;
extern PyObject *const_int_neg_2;
static PyObject *const_str_digest_a77714d796441206b4ba53af8abfdd68;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_url_str_plain_m2_str_plain_m1_tuple;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_m2;
static PyObject *const_str_digest_6a4b12f882c9e9268db48e65f57192db;
extern PyObject *const_str_plain_keys;
static PyObject *const_str_digest_483f7dda801a1faf1217c4713967e5ff;
static PyObject *const_str_digest_ba66be6ab37da40c4645732f9e030c5d;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
static PyObject *const_tuple_f832ce1d404d3e55ff36979173accfb5_tuple;
static PyObject *const_tuple_str_plain_value_str_plain_safe_str_plain_encoding_tuple;
extern PyObject *const_str_plain_major;
static PyObject *const_str_digest_75750390bac1fe53da003e90f0bce283;
extern PyObject *const_str_plain_reversed;
static PyObject *const_str_plain_numericise;
static PyObject *const_tuple_0b94216dc32ce2a9554dea428724b04f_tuple;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_plain_MAGIC_NUMBER;
static PyObject *const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple;
static PyObject *const_tuple_str_digest_7b154f47201d8b63f6fc17a008ce03d4_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_digest_49637f19771a6b7cf302e33dfe3d5eae;
extern PyObject *const_str_plain_match;
static PyObject *const_str_plain_wid_to_gid;
extern PyObject *const_str_plain_rows;
static PyObject *const_tuple_str_plain_j_str_plain_rows_str_plain_i_tuple;
static PyObject *const_str_plain_xorval;
extern PyObject *const_str_plain_from_iterable;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_1d67ccfeb021278f6628b049e4a5c7fb;
extern PyObject *const_slice_int_pos_4_none_none;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_tuple_str_plain_wraps_tuple;
static PyObject *const_str_plain_rect_rows;
extern PyObject *const_int_pos_26;
static PyObject *const_tuple_str_plain_func_str_plain_seq_tuple;
extern PyObject *const_str_plain_encoding;
static PyObject *const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple;
extern PyObject *const_str_plain_col;
static PyObject *const_tuple_deb6e23af1e20367f4666781c5103300_tuple;
static PyObject *const_tuple_str_plain_chain_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_cell_list_to_rect;
extern PyObject *const_str_plain_row;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_plain_URL_KEY_V2_RE;
extern PyObject *const_str_plain_NoValidUrlKeyFound;
static PyObject *const_str_plain_URL_KEY_V1_RE;
extern PyObject *const_str_plain_search;
extern PyObject *const_list_str_empty_list;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_3daaa270ec72d93d91cff513ca8de833_tuple;
extern PyObject *const_str_plain_cell;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_list_list_empty_list;
extern PyObject *const_str_plain_c;
extern PyObject *const_int_pos_64;
static PyObject *const_str_digest_e74701bdc714ac258751c96e40fa5996;
static PyObject *const_str_plain_max_len;
extern PyObject *const_int_pos_36;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_safe;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_plain_wid;
static PyObject *const_str_plain_range_end;
extern PyObject *const_str_plain_default_blank;
static PyObject *const_tuple_str_plain_method_str_plain_wrapper_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_IncorrectCellLabel_str_plain_NoValidUrlKeyFound_tuple;
extern PyObject *const_str_plain__;
static PyObject *const_str_plain_pad_rows;
static PyObject *const_str_plain_all_row_keys;
extern PyObject *const_str_plain_functools;
extern PyObject *const_str_plain_a1_to_rowcol;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_558f471621e847736e5b7b157448374e;
static PyObject *const_int_pos_31578;
static PyObject *const_tuple_str_plain_i_str_plain_rect_cols_str_plain_rows_tuple;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_row_tuple;
extern PyObject *const_str_plain_finditem;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_2fa85e5ba9401dfbbe078b3e4eb223a3;
extern PyObject *const_str_plain_values;
static PyObject *const_str_plain_pad_len;
static PyObject *const_tuple_str_digest_80c7ac92e268f43134ee4112bbe1ed59_tuple;
extern PyObject *const_str_plain_div;
static PyObject *const_str_digest_085f9db6ec56ee75fbf43efec5bdb1f8;
extern PyObject *const_str_plain_chain;
static PyObject *const_str_plain_rightpad;
static PyObject *const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple;
static PyObject *const_int_pos_474;
static PyObject *const_str_plain_column_label;
extern PyObject *const_int_pos_3;
extern PyObject *const_tuple_str_plain_defaultdict_tuple;
extern PyObject *const_str_plain_cols;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_5f7c7c1a107a492dec58f083ef6a08ab;
extern PyObject *const_str_plain_version_info;
static PyObject *const_tuple_false_str_empty_false_tuple;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_range_start;
static PyObject *const_tuple_str_plain_row_str_plain_max_len_str_plain_pad_len_tuple;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_max_rows;
static PyObject *const_str_digest_31d70a05bfb0e0ebe08713001eb2df75;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_mod;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_e142fd607fff07aa901ad9406f615b22;
extern PyObject *const_str_plain_row_offset;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_66c45c5efb6076184dcd93a608dd1685;
static PyObject *const_str_digest_307f7ce55745bfb6ee6994656fa8535b;
extern PyObject *const_str_plain_numericise_all;
extern PyObject *const_str_plain_cast_to_a1_notation;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_max_cols;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_ae17463721f24542093320bfa1bb6d26 = UNSTREAM_STRING_ASCII( &constant_bin[ 444000 ], 35, 0 );
    const_tuple_f4b09382a8de949af14b84e0e8f56143_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_f4b09382a8de949af14b84e0e8f56143_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_f4b09382a8de949af14b84e0e8f56143_tuple, 1, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    PyTuple_SET_ITEM( const_tuple_f4b09382a8de949af14b84e0e8f56143_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_tuple_str_plain_wid_str_plain_widval_str_plain_xorval_tuple = PyTuple_New( 3 );
    const_str_plain_wid = UNSTREAM_STRING_ASCII( &constant_bin[ 153 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wid_str_plain_widval_str_plain_xorval_tuple, 0, const_str_plain_wid ); Py_INCREF( const_str_plain_wid );
    const_str_plain_widval = UNSTREAM_STRING_ASCII( &constant_bin[ 444035 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wid_str_plain_widval_str_plain_xorval_tuple, 1, const_str_plain_widval ); Py_INCREF( const_str_plain_widval );
    const_str_plain_xorval = UNSTREAM_STRING_ASCII( &constant_bin[ 444041 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wid_str_plain_widval_str_plain_xorval_tuple, 2, const_str_plain_xorval ); Py_INCREF( const_str_plain_xorval );
    const_tuple_str_digest_e142fd607fff07aa901ad9406f615b22_tuple = PyTuple_New( 1 );
    const_str_digest_e142fd607fff07aa901ad9406f615b22 = UNSTREAM_STRING_ASCII( &constant_bin[ 444047 ], 12, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e142fd607fff07aa901ad9406f615b22_tuple, 0, const_str_digest_e142fd607fff07aa901ad9406f615b22 ); Py_INCREF( const_str_digest_e142fd607fff07aa901ad9406f615b22 );
    const_str_digest_8d17a2257971c4787678c2ca4ab5a005 = UNSTREAM_STRING_ASCII( &constant_bin[ 444059 ], 36, 0 );
    const_tuple_str_plain_row_str_plain_max_cols_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_max_cols_tuple, 0, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    const_str_plain_max_cols = UNSTREAM_STRING_ASCII( &constant_bin[ 444095 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_max_cols_tuple, 1, const_str_plain_max_cols ); Py_INCREF( const_str_plain_max_cols );
    const_str_plain_col_offset = UNSTREAM_STRING_ASCII( &constant_bin[ 444103 ], 10, 1 );
    const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple, 0, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple, 1, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple, 2, const_str_plain_cols ); Py_INCREF( const_str_plain_cols );
    PyTuple_SET_ITEM( const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple, 3, const_str_plain_max_cols ); Py_INCREF( const_str_plain_max_cols );
    PyTuple_SET_ITEM( const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple, 4, const_str_plain_max_rows ); Py_INCREF( const_str_plain_max_rows );
    const_str_plain_pad_rows = UNSTREAM_STRING_ASCII( &constant_bin[ 444113 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple, 5, const_str_plain_pad_rows ); Py_INCREF( const_str_plain_pad_rows );
    const_tuple_str_empty_str_digest_c075052d723d6707083e869a0e3659bb_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_empty_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_str_empty_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 1, const_str_digest_c075052d723d6707083e869a0e3659bb ); Py_INCREF( const_str_digest_c075052d723d6707083e869a0e3659bb );
    const_str_digest_80c7ac92e268f43134ee4112bbe1ed59 = UNSTREAM_STRING_ASCII( &constant_bin[ 444121 ], 32, 0 );
    const_str_plain_rect_cols = UNSTREAM_STRING_ASCII( &constant_bin[ 444153 ], 9, 1 );
    const_str_digest_7b154f47201d8b63f6fc17a008ce03d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 444162 ], 21, 0 );
    const_str_plain_range_name = UNSTREAM_STRING_ASCII( &constant_bin[ 444183 ], 10, 1 );
    const_str_plain_CELL_ADDR_RE = UNSTREAM_STRING_ASCII( &constant_bin[ 444193 ], 12, 1 );
    const_str_digest_a77714d796441206b4ba53af8abfdd68 = UNSTREAM_STRING_ASCII( &constant_bin[ 444205 ], 44, 0 );
    const_tuple_str_plain_url_str_plain_m2_str_plain_m1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_m2_str_plain_m1_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_m2_str_plain_m1_tuple, 1, const_str_plain_m2 ); Py_INCREF( const_str_plain_m2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_m2_str_plain_m1_tuple, 2, const_str_plain_m1 ); Py_INCREF( const_str_plain_m1 );
    const_str_digest_6a4b12f882c9e9268db48e65f57192db = UNSTREAM_STRING_ASCII( &constant_bin[ 81887 ], 8, 0 );
    const_str_digest_483f7dda801a1faf1217c4713967e5ff = UNSTREAM_STRING_ASCII( &constant_bin[ 444249 ], 94, 0 );
    const_str_digest_ba66be6ab37da40c4645732f9e030c5d = UNSTREAM_STRING_ASCII( &constant_bin[ 444343 ], 36, 0 );
    const_tuple_f832ce1d404d3e55ff36979173accfb5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f832ce1d404d3e55ff36979173accfb5_tuple, 0, const_str_plain_input ); Py_INCREF( const_str_plain_input );
    PyTuple_SET_ITEM( const_tuple_f832ce1d404d3e55ff36979173accfb5_tuple, 1, const_str_plain_empty2zero ); Py_INCREF( const_str_plain_empty2zero );
    PyTuple_SET_ITEM( const_tuple_f832ce1d404d3e55ff36979173accfb5_tuple, 2, const_str_plain_default_blank ); Py_INCREF( const_str_plain_default_blank );
    PyTuple_SET_ITEM( const_tuple_f832ce1d404d3e55ff36979173accfb5_tuple, 3, const_str_plain_allow_underscores_in_numeric_literals ); Py_INCREF( const_str_plain_allow_underscores_in_numeric_literals );
    const_tuple_str_plain_value_str_plain_safe_str_plain_encoding_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_safe_str_plain_encoding_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_safe_str_plain_encoding_tuple, 1, const_str_plain_safe ); Py_INCREF( const_str_plain_safe );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_safe_str_plain_encoding_tuple, 2, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_str_digest_75750390bac1fe53da003e90f0bce283 = UNSTREAM_STRING_ASCII( &constant_bin[ 444379 ], 49, 0 );
    const_str_plain_numericise = UNSTREAM_STRING_ASCII( &constant_bin[ 433352 ], 10, 1 );
    const_tuple_0b94216dc32ce2a9554dea428724b04f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0b94216dc32ce2a9554dea428724b04f_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_0b94216dc32ce2a9554dea428724b04f_tuple, 1, const_str_plain_empty2zero ); Py_INCREF( const_str_plain_empty2zero );
    PyTuple_SET_ITEM( const_tuple_0b94216dc32ce2a9554dea428724b04f_tuple, 2, const_str_plain_default_blank ); Py_INCREF( const_str_plain_default_blank );
    PyTuple_SET_ITEM( const_tuple_0b94216dc32ce2a9554dea428724b04f_tuple, 3, const_str_plain_allow_underscores_in_numeric_literals ); Py_INCREF( const_str_plain_allow_underscores_in_numeric_literals );
    const_str_plain_MAGIC_NUMBER = UNSTREAM_STRING_ASCII( &constant_bin[ 444428 ], 12, 1 );
    const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 0, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    PyTuple_SET_ITEM( const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_column_label = UNSTREAM_STRING_ASCII( &constant_bin[ 444440 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 2, const_str_plain_column_label ); Py_INCREF( const_str_plain_column_label );
    PyTuple_SET_ITEM( const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 3, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 4, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 6, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_tuple_str_digest_7b154f47201d8b63f6fc17a008ce03d4_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7b154f47201d8b63f6fc17a008ce03d4_tuple, 0, const_str_digest_7b154f47201d8b63f6fc17a008ce03d4 ); Py_INCREF( const_str_digest_7b154f47201d8b63f6fc17a008ce03d4 );
    const_str_digest_49637f19771a6b7cf302e33dfe3d5eae = UNSTREAM_STRING_ASCII( &constant_bin[ 444452 ], 350, 0 );
    const_str_plain_wid_to_gid = UNSTREAM_STRING_ASCII( &constant_bin[ 444802 ], 10, 1 );
    const_tuple_str_plain_j_str_plain_rows_str_plain_i_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_j_str_plain_rows_str_plain_i_tuple, 0, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_str_plain_j_str_plain_rows_str_plain_i_tuple, 1, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_str_plain_j_str_plain_rows_str_plain_i_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_1d67ccfeb021278f6628b049e4a5c7fb = UNSTREAM_STRING_ASCII( &constant_bin[ 444812 ], 22, 0 );
    const_tuple_str_plain_wraps_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wraps_tuple, 0, const_str_plain_wraps ); Py_INCREF( const_str_plain_wraps );
    const_str_plain_rect_rows = UNSTREAM_STRING_ASCII( &constant_bin[ 444834 ], 9, 1 );
    const_tuple_str_plain_func_str_plain_seq_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_seq_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_seq_tuple, 1, const_str_plain_seq ); Py_INCREF( const_str_plain_seq );
    const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_range_start = UNSTREAM_STRING_ASCII( &constant_bin[ 444843 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 3, const_str_plain_range_start ); Py_INCREF( const_str_plain_range_start );
    const_str_plain_range_end = UNSTREAM_STRING_ASCII( &constant_bin[ 444854 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 4, const_str_plain_range_end ); Py_INCREF( const_str_plain_range_end );
    PyTuple_SET_ITEM( const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 5, const_str_plain_range_name ); Py_INCREF( const_str_plain_range_name );
    PyTuple_SET_ITEM( const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 6, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_tuple_deb6e23af1e20367f4666781c5103300_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 0, const_str_plain_cell_list ); Py_INCREF( const_str_plain_cell_list );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 1, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 2, const_str_plain_row_offset ); Py_INCREF( const_str_plain_row_offset );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 3, const_str_plain_col_offset ); Py_INCREF( const_str_plain_col_offset );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 4, const_str_plain_cell ); Py_INCREF( const_str_plain_cell );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 5, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    const_str_plain_all_row_keys = UNSTREAM_STRING_ASCII( &constant_bin[ 444863 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 6, const_str_plain_all_row_keys ); Py_INCREF( const_str_plain_all_row_keys );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 7, const_str_plain_rect_cols ); Py_INCREF( const_str_plain_rect_cols );
    PyTuple_SET_ITEM( const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 8, const_str_plain_rect_rows ); Py_INCREF( const_str_plain_rect_rows );
    const_tuple_str_plain_chain_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_chain_tuple, 0, const_str_plain_chain ); Py_INCREF( const_str_plain_chain );
    const_str_plain_URL_KEY_V2_RE = UNSTREAM_STRING_ASCII( &constant_bin[ 444875 ], 13, 1 );
    const_str_plain_URL_KEY_V1_RE = UNSTREAM_STRING_ASCII( &constant_bin[ 444888 ], 13, 1 );
    const_tuple_3daaa270ec72d93d91cff513ca8de833_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3daaa270ec72d93d91cff513ca8de833_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_3daaa270ec72d93d91cff513ca8de833_tuple, 1, const_str_plain_empty2zero ); Py_INCREF( const_str_plain_empty2zero );
    PyTuple_SET_ITEM( const_tuple_3daaa270ec72d93d91cff513ca8de833_tuple, 2, const_str_plain_default_blank ); Py_INCREF( const_str_plain_default_blank );
    PyTuple_SET_ITEM( const_tuple_3daaa270ec72d93d91cff513ca8de833_tuple, 3, const_str_plain_allow_underscores_in_numeric_literals ); Py_INCREF( const_str_plain_allow_underscores_in_numeric_literals );
    const_list_list_empty_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_list_empty_list, 0, const_list_empty ); Py_INCREF( const_list_empty );
    const_str_digest_e74701bdc714ac258751c96e40fa5996 = UNSTREAM_STRING_ASCII( &constant_bin[ 444901 ], 42, 0 );
    const_str_plain_max_len = UNSTREAM_STRING_ASCII( &constant_bin[ 444943 ], 7, 1 );
    const_tuple_str_plain_method_str_plain_wrapper_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_method_str_plain_wrapper_tuple, 0, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_str_plain_method_str_plain_wrapper_tuple, 1, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    const_tuple_str_plain_IncorrectCellLabel_str_plain_NoValidUrlKeyFound_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_IncorrectCellLabel_str_plain_NoValidUrlKeyFound_tuple, 0, const_str_plain_IncorrectCellLabel ); Py_INCREF( const_str_plain_IncorrectCellLabel );
    PyTuple_SET_ITEM( const_tuple_str_plain_IncorrectCellLabel_str_plain_NoValidUrlKeyFound_tuple, 1, const_str_plain_NoValidUrlKeyFound ); Py_INCREF( const_str_plain_NoValidUrlKeyFound );
    const_str_digest_558f471621e847736e5b7b157448374e = UNSTREAM_STRING_ASCII( &constant_bin[ 444820 ], 13, 0 );
    const_int_pos_31578 = PyLong_FromUnsignedLong( 31578ul );
    const_tuple_str_plain_i_str_plain_rect_cols_str_plain_rows_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_rect_cols_str_plain_rows_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_rect_cols_str_plain_rows_tuple, 1, const_str_plain_rect_cols ); Py_INCREF( const_str_plain_rect_cols );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_rect_cols_str_plain_rows_tuple, 2, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_row_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_row_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_row_tuple, 1, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    const_str_digest_2fa85e5ba9401dfbbe078b3e4eb223a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 444950 ], 76, 0 );
    const_str_plain_pad_len = UNSTREAM_STRING_ASCII( &constant_bin[ 445026 ], 7, 1 );
    const_tuple_str_digest_80c7ac92e268f43134ee4112bbe1ed59_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_80c7ac92e268f43134ee4112bbe1ed59_tuple, 0, const_str_digest_80c7ac92e268f43134ee4112bbe1ed59 ); Py_INCREF( const_str_digest_80c7ac92e268f43134ee4112bbe1ed59 );
    const_str_digest_085f9db6ec56ee75fbf43efec5bdb1f8 = UNSTREAM_STRING_ASCII( &constant_bin[ 445033 ], 838, 0 );
    const_str_plain_rightpad = UNSTREAM_STRING_ASCII( &constant_bin[ 445871 ], 8, 1 );
    const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple, 0, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple, 1, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple, 2, const_str_plain_div ); Py_INCREF( const_str_plain_div );
    PyTuple_SET_ITEM( const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple, 3, const_str_plain_column_label ); Py_INCREF( const_str_plain_column_label );
    PyTuple_SET_ITEM( const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple, 4, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    PyTuple_SET_ITEM( const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple, 5, const_str_plain_label ); Py_INCREF( const_str_plain_label );
    const_int_pos_474 = PyLong_FromUnsignedLong( 474ul );
    const_str_digest_5f7c7c1a107a492dec58f083ef6a08ab = UNSTREAM_STRING_ASCII( &constant_bin[ 445879 ], 27, 0 );
    const_tuple_false_str_empty_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_false_str_empty_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_str_empty_false_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_false_str_empty_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_row_str_plain_max_len_str_plain_pad_len_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_max_len_str_plain_pad_len_tuple, 0, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_max_len_str_plain_pad_len_tuple, 1, const_str_plain_max_len ); Py_INCREF( const_str_plain_max_len );
    PyTuple_SET_ITEM( const_tuple_str_plain_row_str_plain_max_len_str_plain_pad_len_tuple, 2, const_str_plain_pad_len ); Py_INCREF( const_str_plain_pad_len );
    const_str_digest_31d70a05bfb0e0ebe08713001eb2df75 = UNSTREAM_STRING_ASCII( &constant_bin[ 445906 ], 28, 0 );
    const_str_digest_66c45c5efb6076184dcd93a608dd1685 = UNSTREAM_STRING_ASCII( &constant_bin[ 445934 ], 71, 0 );
    const_str_digest_307f7ce55745bfb6ee6994656fa8535b = UNSTREAM_STRING_ASCII( &constant_bin[ 446005 ], 425, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gspread$utils( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7561bb5de22eb1e499fda49e14c9a6a7;
static PyCodeObject *codeobj_793e37a2f203dad5a676582a705c0813;
static PyCodeObject *codeobj_67c506a639ec5b0abed3b04303cff13b;
static PyCodeObject *codeobj_1ba0d269ebc0c4e438ff16604c7e75f9;
static PyCodeObject *codeobj_eca9df9037f877c926b191fc543b2472;
static PyCodeObject *codeobj_8134214aec5a129fd22300f08fe9c3b7;
static PyCodeObject *codeobj_72b46117f6e66833e86178765834a710;
static PyCodeObject *codeobj_801a195bd93844f05069ea2d605519b1;
static PyCodeObject *codeobj_5fff5d4c5e3c6fe13caad7b721798973;
static PyCodeObject *codeobj_796f997d45aca317a197617a7f26e49b;
static PyCodeObject *codeobj_73ab027c1263a505abfb550234e4301e;
static PyCodeObject *codeobj_d0bf746c5a62d1e1836b6235f313fd8e;
static PyCodeObject *codeobj_581586c040efa8a130b801f9046573d8;
static PyCodeObject *codeobj_5554bdcb02399e9f8ef483ea6ac02907;
static PyCodeObject *codeobj_5062ecf136a4a3fba49c8218cb283f94;
static PyCodeObject *codeobj_a576b2e9e16c3b1d308640180e9c27d1;
static PyCodeObject *codeobj_33b5674cbb0d88614ffef50c2449c591;
static PyCodeObject *codeobj_28a055fadf705baf80b0dfe325d00404;
static PyCodeObject *codeobj_00a4693fb6516ea3122b51e145b8c0dc;
static PyCodeObject *codeobj_21030f00baa901942cbfbe95b80c8e29;
static PyCodeObject *codeobj_c24750e755d36993809441c1044249fc;
static PyCodeObject *codeobj_2e355d6f512c174d8dd4f9916c334946;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a77714d796441206b4ba53af8abfdd68;
    codeobj_7561bb5de22eb1e499fda49e14c9a6a7 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 37, const_tuple_f4b09382a8de949af14b84e0e8f56143_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_793e37a2f203dad5a676582a705c0813 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 216, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_row_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_67c506a639ec5b0abed3b04303cff13b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 243, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_row_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ba0d269ebc0c4e438ff16604c7e75f9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 231, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eca9df9037f877c926b191fc543b2472 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 251, const_tuple_str_plain_i_str_plain_rect_cols_str_plain_rows_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8134214aec5a129fd22300f08fe9c3b7 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 251, const_tuple_str_plain_j_str_plain_rows_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72b46117f6e66833e86178765834a710 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 224, const_tuple_str_plain_row_str_plain_max_cols_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_801a195bd93844f05069ea2d605519b1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 92, const_tuple_0b94216dc32ce2a9554dea428724b04f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5fff5d4c5e3c6fe13caad7b721798973 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1d67ccfeb021278f6628b049e4a5c7fb, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_796f997d45aca317a197617a7f26e49b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_a1_to_rowcol, 135, const_tuple_9e40ab6cb37c07a1aaff509617c6d2e8_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_73ab027c1263a505abfb550234e4301e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cast_to_a1_notation, 165, const_tuple_str_plain_method_str_plain_wrapper_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0bf746c5a62d1e1836b6235f313fd8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cell_list_to_rect, 227, const_tuple_deb6e23af1e20367f4666781c5103300_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_581586c040efa8a130b801f9046573d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extract_id_from_url, 190, const_tuple_str_plain_url_str_plain_m2_str_plain_m1_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5554bdcb02399e9f8ef483ea6ac02907 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fill_gaps, 214, const_tuple_55ee74ae391bab2528cd42fc4ae66681_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5062ecf136a4a3fba49c8218cb283f94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finditem, 33, const_tuple_str_plain_func_str_plain_seq_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a576b2e9e16c3b1d308640180e9c27d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_numericise, 40, const_tuple_3daaa270ec72d93d91cff513ca8de833_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_33b5674cbb0d88614ffef50c2449c591 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_numericise_all, 90, const_tuple_f832ce1d404d3e55ff36979173accfb5_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_28a055fadf705baf80b0dfe325d00404 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_quote, 254, const_tuple_str_plain_value_str_plain_safe_str_plain_encoding_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_00a4693fb6516ea3122b51e145b8c0dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rightpad, 209, const_tuple_str_plain_row_str_plain_max_len_str_plain_pad_len_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_21030f00baa901942cbfbe95b80c8e29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rowcol_to_a1, 95, const_tuple_5d8490867fe8324fd827fa0f430295b9_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c24750e755d36993809441c1044249fc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wid_to_gid, 202, const_tuple_str_plain_wid_str_plain_widval_str_plain_xorval_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2e355d6f512c174d8dd4f9916c334946 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapper, 170, const_tuple_6d1e15536709dd1a7c96f571991d7eb5_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
}

// The module function declarations.
static PyObject *gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_maker( void );


static PyObject *gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_maker( void );


static PyObject *gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_10_fill_gaps( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_11_cell_list_to_rect(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_11_cell_list_to_rect$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_12_quote( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_1_finditem(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_2_numericise( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_3_numericise_all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_4_rowcol_to_a1(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_5_a1_to_rowcol(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_6_cast_to_a1_notation(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_7_extract_id_from_url(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_8_wid_to_gid(  );


static PyObject *MAKE_FUNCTION_gspread$utils$$$function_9_rightpad(  );


// The module function definitions.
static PyObject *impl_gspread$utils$$$function_1_finditem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_seq = python_pars[ 1 ];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_5062ecf136a4a3fba49c8218cb283f94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5062ecf136a4a3fba49c8218cb283f94 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5062ecf136a4a3fba49c8218cb283f94, codeobj_5062ecf136a4a3fba49c8218cb283f94, module_gspread$utils, sizeof(void *)+sizeof(void *) );
    frame_5062ecf136a4a3fba49c8218cb283f94 = cache_frame_5062ecf136a4a3fba49c8218cb283f94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5062ecf136a4a3fba49c8218cb283f94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5062ecf136a4a3fba49c8218cb283f94 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_seq );
            tmp_iter_arg_1 = par_seq;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_1 = "co";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        tmp_value_name_1 = gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_value_name_1)->m_closure[0] = par_func;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_value_name_1)->m_closure[0] );
        ((struct Nuitka_GeneratorObject *)tmp_value_name_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_1_finditem );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_1_finditem );
        return NULL;
        outline_result_1:;
        tmp_return_value = ITERATOR_NEXT( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_return_value == NULL )
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


            type_description_1 = "co";
            exception_lineno = 37;
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5062ecf136a4a3fba49c8218cb283f94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5062ecf136a4a3fba49c8218cb283f94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5062ecf136a4a3fba49c8218cb283f94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5062ecf136a4a3fba49c8218cb283f94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5062ecf136a4a3fba49c8218cb283f94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5062ecf136a4a3fba49c8218cb283f94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5062ecf136a4a3fba49c8218cb283f94,
        type_description_1,
        par_func,
        par_seq
    );


    // Release cached frame.
    if ( frame_5062ecf136a4a3fba49c8218cb283f94 == cache_frame_5062ecf136a4a3fba49c8218cb283f94 )
    {
        Py_DECREF( frame_5062ecf136a4a3fba49c8218cb283f94 );
    }
    cache_frame_5062ecf136a4a3fba49c8218cb283f94 = NULL;

    assertFrameObject( frame_5062ecf136a4a3fba49c8218cb283f94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_1_finditem );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_1_finditem );
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



struct gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_locals {
    PyObject *var_item;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_locals *generator_heap = (struct gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_item = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_7561bb5de22eb1e499fda49e14c9a6a7, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[1] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[1] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 37;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_item;
            generator_heap->var_item = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_item );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 37;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
        CHECK_OBJECT( generator_heap->var_item );
        tmp_args_element_name_1 = generator_heap->var_item;
        generator->m_frame->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 37;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_call_result_1 );

            generator_heap->exception_lineno = 37;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_expression_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_item );
            tmp_expression_name_1 = generator_heap->var_item;
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_name_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_called_name_1, sizeof(PyObject *), &tmp_call_result_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 37;
                generator_heap->type_description_1 = "Noc";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 37;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_item,
            generator->m_closure[0]
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_item );
    generator_heap->var_item = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_item );
    generator_heap->var_item = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_context,
        module_gspread$utils,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_5f7c7c1a107a492dec58f083ef6a08ab,
#endif
        codeobj_7561bb5de22eb1e499fda49e14c9a6a7,
        2,
        sizeof(struct gspread$utils$$$function_1_finditem$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_gspread$utils$$$function_2_numericise( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_empty2zero = python_pars[ 1 ];
    PyObject *par_default_blank = python_pars[ 2 ];
    PyObject *par_allow_underscores_in_numeric_literals = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_a576b2e9e16c3b1d308640180e9c27d1;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a576b2e9e16c3b1d308640180e9c27d1 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a576b2e9e16c3b1d308640180e9c27d1, codeobj_a576b2e9e16c3b1d308640180e9c27d1, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a576b2e9e16c3b1d308640180e9c27d1 = cache_frame_a576b2e9e16c3b1d308640180e9c27d1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a576b2e9e16c3b1d308640180e9c27d1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a576b2e9e16c3b1d308640180e9c27d1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_value );
        tmp_compexpr_left_1 = par_value;
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
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_operand_name_1;
            tmp_compexpr_left_2 = const_str_plain__;
            CHECK_OBJECT( par_value );
            tmp_compexpr_right_2 = par_value;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_allow_underscores_in_numeric_literals );
            tmp_operand_name_1 = par_allow_underscores_in_numeric_literals;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_value );
            tmp_return_value = par_value;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_2:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT( par_value );
            tmp_int_arg_1 = par_value;
            tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = par_value;
                assert( old != NULL );
                par_value = tmp_assign_source_1;
                Py_DECREF( old );
            }

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

        // Preserve existing published exception.
        exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_2 );
        exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_2 );
        exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_2 );

        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a576b2e9e16c3b1d308640180e9c27d1, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a576b2e9e16c3b1d308640180e9c27d1, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_3 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "oooo";
                goto try_except_handler_3;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_float_arg_1;
                CHECK_OBJECT( par_value );
                tmp_float_arg_1 = par_value;
                tmp_assign_source_2 = TO_FLOAT( tmp_float_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = par_value;
                    assert( old != NULL );
                    par_value = tmp_assign_source_2;
                    Py_DECREF( old );
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

            // Preserve existing published exception.
            exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_type_1 );
            exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
            Py_XINCREF( exception_preserved_value_1 );
            exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
            Py_XINCREF( exception_preserved_tb_1 );

            if ( exception_keeper_tb_2 == NULL )
            {
                exception_keeper_tb_2 = MAKE_TRACEBACK( frame_a576b2e9e16c3b1d308640180e9c27d1, exception_keeper_lineno_2 );
            }
            else if ( exception_keeper_lineno_2 != 0 )
            {
                exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_a576b2e9e16c3b1d308640180e9c27d1, exception_keeper_lineno_2 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
            PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
            PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
            // Tried code:
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_4 = PyExc_ValueError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;
                    type_description_1 = "oooo";
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
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    CHECK_OBJECT( par_value );
                    tmp_compexpr_left_5 = par_value;
                    tmp_compexpr_right_5 = const_str_empty;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 81;
                        type_description_1 = "oooo";
                        goto try_except_handler_5;
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
                        nuitka_bool tmp_condition_result_6;
                        int tmp_truth_name_1;
                        CHECK_OBJECT( par_empty2zero );
                        tmp_truth_name_1 = CHECK_IF_TRUE( par_empty2zero );
                        if ( tmp_truth_name_1 == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 82;
                            type_description_1 = "oooo";
                            goto try_except_handler_5;
                        }
                        tmp_condition_result_6 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                            PyObject *tmp_assign_source_3;
                            tmp_assign_source_3 = const_int_0;
                            {
                                PyObject *old = par_value;
                                assert( old != NULL );
                                par_value = tmp_assign_source_3;
                                Py_INCREF( par_value );
                                Py_DECREF( old );
                            }

                        }
                        goto branch_end_6;
                        branch_no_6:;
                        {
                            PyObject *tmp_assign_source_4;
                            CHECK_OBJECT( par_default_blank );
                            tmp_assign_source_4 = par_default_blank;
                            {
                                PyObject *old = par_value;
                                assert( old != NULL );
                                par_value = tmp_assign_source_4;
                                Py_INCREF( par_value );
                                Py_DECREF( old );
                            }

                        }
                        branch_end_6:;
                    }
                    branch_no_5:;
                }
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 78;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_a576b2e9e16c3b1d308640180e9c27d1->m_frame) frame_a576b2e9e16c3b1d308640180e9c27d1->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto try_except_handler_5;
                branch_end_4:;
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

            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_3;
            // End of try:
            try_end_3:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
            goto try_end_2;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_2_numericise );
            return NULL;
            // End of try:
            try_end_2:;
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 75;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_a576b2e9e16c3b1d308640180e9c27d1->m_frame) frame_a576b2e9e16c3b1d308640180e9c27d1->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto try_except_handler_3;
            branch_end_3:;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_2_numericise );
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_1:;
    }
    if ( par_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_value;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a576b2e9e16c3b1d308640180e9c27d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a576b2e9e16c3b1d308640180e9c27d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a576b2e9e16c3b1d308640180e9c27d1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a576b2e9e16c3b1d308640180e9c27d1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a576b2e9e16c3b1d308640180e9c27d1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a576b2e9e16c3b1d308640180e9c27d1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a576b2e9e16c3b1d308640180e9c27d1,
        type_description_1,
        par_value,
        par_empty2zero,
        par_default_blank,
        par_allow_underscores_in_numeric_literals
    );


    // Release cached frame.
    if ( frame_a576b2e9e16c3b1d308640180e9c27d1 == cache_frame_a576b2e9e16c3b1d308640180e9c27d1 )
    {
        Py_DECREF( frame_a576b2e9e16c3b1d308640180e9c27d1 );
    }
    cache_frame_a576b2e9e16c3b1d308640180e9c27d1 = NULL;

    assertFrameObject( frame_a576b2e9e16c3b1d308640180e9c27d1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_2_numericise );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_empty2zero );
    Py_DECREF( par_empty2zero );
    par_empty2zero = NULL;

    CHECK_OBJECT( (PyObject *)par_default_blank );
    Py_DECREF( par_default_blank );
    par_default_blank = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_underscores_in_numeric_literals );
    Py_DECREF( par_allow_underscores_in_numeric_literals );
    par_allow_underscores_in_numeric_literals = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_empty2zero );
    Py_DECREF( par_empty2zero );
    par_empty2zero = NULL;

    CHECK_OBJECT( (PyObject *)par_default_blank );
    Py_DECREF( par_default_blank );
    par_default_blank = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_underscores_in_numeric_literals );
    Py_DECREF( par_allow_underscores_in_numeric_literals );
    par_allow_underscores_in_numeric_literals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_2_numericise );
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


static PyObject *impl_gspread$utils$$$function_3_numericise_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input = python_pars[ 0 ];
    PyObject *par_empty2zero = python_pars[ 1 ];
    PyObject *par_default_blank = python_pars[ 2 ];
    PyObject *par_allow_underscores_in_numeric_literals = python_pars[ 3 ];
    PyObject *outline_0_var_s = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_33b5674cbb0d88614ffef50c2449c591;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_801a195bd93844f05069ea2d605519b1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_801a195bd93844f05069ea2d605519b1_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_33b5674cbb0d88614ffef50c2449c591 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_33b5674cbb0d88614ffef50c2449c591, codeobj_33b5674cbb0d88614ffef50c2449c591, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_33b5674cbb0d88614ffef50c2449c591 = cache_frame_33b5674cbb0d88614ffef50c2449c591;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_33b5674cbb0d88614ffef50c2449c591 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_33b5674cbb0d88614ffef50c2449c591 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_input );
        tmp_iter_arg_1 = par_input;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_listcomp_1__$0 == NULL );
        tmp_listcomp_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( tmp_listcomp_1__contraction == NULL );
        tmp_listcomp_1__contraction = tmp_assign_source_2;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_801a195bd93844f05069ea2d605519b1_2, codeobj_801a195bd93844f05069ea2d605519b1, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_801a195bd93844f05069ea2d605519b1_2 = cache_frame_801a195bd93844f05069ea2d605519b1_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_801a195bd93844f05069ea2d605519b1_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_801a195bd93844f05069ea2d605519b1_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_listcomp_1__$0 );
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_2 = "oooo";
                exception_lineno = 92;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
        tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_s;
            outline_0_var_s = tmp_assign_source_4;
            Py_INCREF( outline_0_var_s );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_numericise );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numericise );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numericise" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_2 = "oooo";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( outline_0_var_s );
        tmp_args_element_name_1 = outline_0_var_s;
        CHECK_OBJECT( par_empty2zero );
        tmp_args_element_name_2 = par_empty2zero;
        CHECK_OBJECT( par_default_blank );
        tmp_args_element_name_3 = par_default_blank;
        CHECK_OBJECT( par_allow_underscores_in_numeric_literals );
        tmp_args_element_name_4 = par_allow_underscores_in_numeric_literals;
        frame_801a195bd93844f05069ea2d605519b1_2->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_2 = "oooo";
            goto try_except_handler_3;
        }
        assert( PyList_Check( tmp_append_list_1 ) );
        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
        Py_DECREF( tmp_append_value_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_2 = "oooo";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_2 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_3_numericise_all );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_801a195bd93844f05069ea2d605519b1_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_801a195bd93844f05069ea2d605519b1_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_801a195bd93844f05069ea2d605519b1_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_801a195bd93844f05069ea2d605519b1_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_801a195bd93844f05069ea2d605519b1_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_801a195bd93844f05069ea2d605519b1_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_801a195bd93844f05069ea2d605519b1_2,
        type_description_2,
        outline_0_var_s,
        par_empty2zero,
        par_default_blank,
        par_allow_underscores_in_numeric_literals
    );


    // Release cached frame.
    if ( frame_801a195bd93844f05069ea2d605519b1_2 == cache_frame_801a195bd93844f05069ea2d605519b1_2 )
    {
        Py_DECREF( frame_801a195bd93844f05069ea2d605519b1_2 );
    }
    cache_frame_801a195bd93844f05069ea2d605519b1_2 = NULL;

    assertFrameObject( frame_801a195bd93844f05069ea2d605519b1_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_3_numericise_all );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_s );
    outline_0_var_s = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_s );
    outline_0_var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_3_numericise_all );
    return NULL;
    outline_exception_1:;
    exception_lineno = 92;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33b5674cbb0d88614ffef50c2449c591 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_33b5674cbb0d88614ffef50c2449c591 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33b5674cbb0d88614ffef50c2449c591 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33b5674cbb0d88614ffef50c2449c591, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33b5674cbb0d88614ffef50c2449c591->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33b5674cbb0d88614ffef50c2449c591, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_33b5674cbb0d88614ffef50c2449c591,
        type_description_1,
        par_input,
        par_empty2zero,
        par_default_blank,
        par_allow_underscores_in_numeric_literals
    );


    // Release cached frame.
    if ( frame_33b5674cbb0d88614ffef50c2449c591 == cache_frame_33b5674cbb0d88614ffef50c2449c591 )
    {
        Py_DECREF( frame_33b5674cbb0d88614ffef50c2449c591 );
    }
    cache_frame_33b5674cbb0d88614ffef50c2449c591 = NULL;

    assertFrameObject( frame_33b5674cbb0d88614ffef50c2449c591 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_3_numericise_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_input );
    Py_DECREF( par_input );
    par_input = NULL;

    CHECK_OBJECT( (PyObject *)par_empty2zero );
    Py_DECREF( par_empty2zero );
    par_empty2zero = NULL;

    CHECK_OBJECT( (PyObject *)par_default_blank );
    Py_DECREF( par_default_blank );
    par_default_blank = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_underscores_in_numeric_literals );
    Py_DECREF( par_allow_underscores_in_numeric_literals );
    par_allow_underscores_in_numeric_literals = NULL;

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

    CHECK_OBJECT( (PyObject *)par_input );
    Py_DECREF( par_input );
    par_input = NULL;

    CHECK_OBJECT( (PyObject *)par_empty2zero );
    Py_DECREF( par_empty2zero );
    par_empty2zero = NULL;

    CHECK_OBJECT( (PyObject *)par_default_blank );
    Py_DECREF( par_default_blank );
    par_default_blank = NULL;

    CHECK_OBJECT( (PyObject *)par_allow_underscores_in_numeric_literals );
    Py_DECREF( par_allow_underscores_in_numeric_literals );
    par_allow_underscores_in_numeric_literals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_3_numericise_all );
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


static PyObject *impl_gspread$utils$$$function_4_rowcol_to_a1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_row = python_pars[ 0 ];
    PyObject *par_col = python_pars[ 1 ];
    PyObject *var_div = NULL;
    PyObject *var_column_label = NULL;
    PyObject *var_mod = NULL;
    PyObject *var_label = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_21030f00baa901942cbfbe95b80c8e29;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_21030f00baa901942cbfbe95b80c8e29 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21030f00baa901942cbfbe95b80c8e29, codeobj_21030f00baa901942cbfbe95b80c8e29, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_21030f00baa901942cbfbe95b80c8e29 = cache_frame_21030f00baa901942cbfbe95b80c8e29;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21030f00baa901942cbfbe95b80c8e29 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21030f00baa901942cbfbe95b80c8e29 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT( par_row );
        tmp_int_arg_1 = par_row;
        tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_row;
            assert( old != NULL );
            par_row = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT( par_col );
        tmp_int_arg_2 = par_col;
        tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_col;
            assert( old != NULL );
            par_col = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_row );
        tmp_compexpr_left_1 = par_row;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_col );
        tmp_compexpr_left_2 = par_col;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IncorrectCellLabel" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 118;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_left_name_1 = const_str_digest_6a4b12f882c9e9268db48e65f57192db;
            CHECK_OBJECT( par_row );
            tmp_tuple_element_1 = par_row;
            tmp_right_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_col );
            tmp_tuple_element_1 = par_col;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_21030f00baa901942cbfbe95b80c8e29->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 118;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( par_col );
        tmp_assign_source_3 = par_col;
        assert( var_div == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_div = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_empty;
        assert( var_column_label == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_column_label = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_div );
        tmp_operand_name_1 = var_div;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooo";
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
        goto loop_end_1;
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_div );
        tmp_left_name_2 = var_div;
        tmp_right_name_2 = const_int_pos_26;
        tmp_iter_arg_1 = BUILTIN_DIVMOD( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooo";
            exception_lineno = 124;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_7 == NULL )
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
            exception_lineno = 124;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

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
                    exception_lineno = 124;
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
            exception_lineno = 124;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_div;
            assert( old != NULL );
            var_div = tmp_assign_source_8;
            Py_INCREF( var_div );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_mod;
            var_mod = tmp_assign_source_9;
            Py_INCREF( var_mod );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_mod );
        tmp_compexpr_left_3 = var_mod;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
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
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = const_int_pos_26;
            {
                PyObject *old = var_mod;
                assert( old != NULL );
                var_mod = tmp_assign_source_10;
                Py_INCREF( var_mod );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_div );
            tmp_left_name_3 = var_div;
            tmp_right_name_3 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = tmp_left_name_3;
            var_div = tmp_assign_source_11;

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_4;
        PyObject *tmp_chr_arg_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_mod );
        tmp_left_name_5 = var_mod;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_MAGIC_NUMBER );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_NUMBER );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_NUMBER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_4 = tmp_mvar_value_2;
        tmp_chr_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_chr_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BUILTIN_CHR( tmp_chr_arg_1 );
        Py_DECREF( tmp_chr_arg_1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_column_label );
        tmp_right_name_5 = var_column_label;
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_column_label;
            assert( old != NULL );
            var_column_label = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_2;
        tmp_left_name_6 = const_str_digest_d76462298f66c95b4d3ee22e9427a916;
        CHECK_OBJECT( var_column_label );
        tmp_tuple_element_2 = var_column_label;
        tmp_right_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_row );
        tmp_tuple_element_2 = par_row;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_2 );
        tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_label == NULL );
        var_label = tmp_assign_source_13;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21030f00baa901942cbfbe95b80c8e29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21030f00baa901942cbfbe95b80c8e29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21030f00baa901942cbfbe95b80c8e29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21030f00baa901942cbfbe95b80c8e29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21030f00baa901942cbfbe95b80c8e29, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21030f00baa901942cbfbe95b80c8e29,
        type_description_1,
        par_row,
        par_col,
        var_div,
        var_column_label,
        var_mod,
        var_label
    );


    // Release cached frame.
    if ( frame_21030f00baa901942cbfbe95b80c8e29 == cache_frame_21030f00baa901942cbfbe95b80c8e29 )
    {
        Py_DECREF( frame_21030f00baa901942cbfbe95b80c8e29 );
    }
    cache_frame_21030f00baa901942cbfbe95b80c8e29 = NULL;

    assertFrameObject( frame_21030f00baa901942cbfbe95b80c8e29 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_label );
    tmp_return_value = var_label;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_4_rowcol_to_a1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    CHECK_OBJECT( (PyObject *)var_div );
    Py_DECREF( var_div );
    var_div = NULL;

    CHECK_OBJECT( (PyObject *)var_column_label );
    Py_DECREF( var_column_label );
    var_column_label = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    CHECK_OBJECT( (PyObject *)var_label );
    Py_DECREF( var_label );
    var_label = NULL;

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

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_col );
    Py_DECREF( par_col );
    par_col = NULL;

    Py_XDECREF( var_div );
    var_div = NULL;

    Py_XDECREF( var_column_label );
    var_column_label = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_4_rowcol_to_a1 );
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


static PyObject *impl_gspread$utils$$$function_5_a1_to_rowcol( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_label = python_pars[ 0 ];
    PyObject *var_m = NULL;
    PyObject *var_column_label = NULL;
    PyObject *var_row = NULL;
    PyObject *var_col = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_796f997d45aca317a197617a7f26e49b;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_796f997d45aca317a197617a7f26e49b = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_796f997d45aca317a197617a7f26e49b, codeobj_796f997d45aca317a197617a7f26e49b, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_796f997d45aca317a197617a7f26e49b = cache_frame_796f997d45aca317a197617a7f26e49b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_796f997d45aca317a197617a7f26e49b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_796f997d45aca317a197617a7f26e49b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_CELL_ADDR_RE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CELL_ADDR_RE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CELL_ADDR_RE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_label );
        tmp_args_element_name_1 = par_label;
        frame_796f997d45aca317a197617a7f26e49b->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_m );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var_m );
            tmp_called_instance_3 = var_m;
            frame_796f997d45aca317a197617a7f26e49b->m_frame.f_lineno = 153;
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_796f997d45aca317a197617a7f26e49b->m_frame.f_lineno = 153;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_upper );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_column_label == NULL );
            var_column_label = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_m );
            tmp_called_instance_4 = var_m;
            frame_796f997d45aca317a197617a7f26e49b->m_frame.f_lineno = 154;
            tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_row == NULL );
            var_row = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_int_0;
            assert( var_col == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_col = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_1 = (PyObject *)&PyEnum_Type;
            tmp_called_name_2 = (PyObject *)&PyReversed_Type;
            CHECK_OBJECT( var_column_label );
            tmp_args_element_name_3 = var_column_label;
            frame_796f997d45aca317a197617a7f26e49b->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_796f997d45aca317a197617a7f26e49b->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooo";
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
                    type_description_1 = "ooooooo";
                    exception_lineno = 157;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
            tmp_assign_source_7 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__source_iter;
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_8 == NULL )
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
                exception_lineno = 157;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_1;
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_9 == NULL )
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
                exception_lineno = 157;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

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
                        exception_lineno = 157;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooo";
                exception_lineno = 157;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_10;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_c;
                var_c = tmp_assign_source_11;
                Py_INCREF( var_c );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_ord_arg_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_col );
            tmp_left_name_1 = var_col;
            CHECK_OBJECT( var_c );
            tmp_ord_arg_1 = var_c;
            tmp_left_name_3 = BUILTIN_ORD( tmp_ord_arg_1 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_MAGIC_NUMBER );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAGIC_NUMBER );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_left_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAGIC_NUMBER" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 158;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_right_name_2 = tmp_mvar_value_2;
            tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_4 = const_int_pos_26;
            CHECK_OBJECT( var_i );
            tmp_right_name_4 = var_i;
            tmp_right_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 158;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_12 = tmp_left_name_1;
            var_col = tmp_assign_source_12;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_1 = "ooooooo";
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

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IncorrectCellLabel" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 160;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_label );
            tmp_args_element_name_4 = par_label;
            frame_796f997d45aca317a197617a7f26e49b->m_frame.f_lineno = 160;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 160;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_tuple_element_1;
        if ( var_row == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "row" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_row;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_col == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "col" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_col;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_796f997d45aca317a197617a7f26e49b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_796f997d45aca317a197617a7f26e49b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_796f997d45aca317a197617a7f26e49b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_796f997d45aca317a197617a7f26e49b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_796f997d45aca317a197617a7f26e49b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_796f997d45aca317a197617a7f26e49b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_796f997d45aca317a197617a7f26e49b,
        type_description_1,
        par_label,
        var_m,
        var_column_label,
        var_row,
        var_col,
        var_i,
        var_c
    );


    // Release cached frame.
    if ( frame_796f997d45aca317a197617a7f26e49b == cache_frame_796f997d45aca317a197617a7f26e49b )
    {
        Py_DECREF( frame_796f997d45aca317a197617a7f26e49b );
    }
    cache_frame_796f997d45aca317a197617a7f26e49b = NULL;

    assertFrameObject( frame_796f997d45aca317a197617a7f26e49b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_5_a1_to_rowcol );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_label );
    Py_DECREF( par_label );
    par_label = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_column_label );
    var_column_label = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_label );
    Py_DECREF( par_label );
    par_label = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_column_label );
    var_column_label = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_5_a1_to_rowcol );
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


static PyObject *impl_gspread$utils$$$function_6_cast_to_a1_notation( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_method = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_73ab027c1263a505abfb550234e4301e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_73ab027c1263a505abfb550234e4301e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_73ab027c1263a505abfb550234e4301e, codeobj_73ab027c1263a505abfb550234e4301e, module_gspread$utils, sizeof(void *)+sizeof(void *) );
    frame_73ab027c1263a505abfb550234e4301e = cache_frame_73ab027c1263a505abfb550234e4301e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_73ab027c1263a505abfb550234e4301e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_73ab027c1263a505abfb550234e4301e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_wraps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wraps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wraps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_method ) );
        tmp_args_element_name_1 = PyCell_GET( par_method );
        frame_73ab027c1263a505abfb550234e4301e->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = MAKE_FUNCTION_gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] = par_method;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] );


        frame_73ab027c1263a505abfb550234e4301e->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( var_wrapper == NULL );
        var_wrapper = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73ab027c1263a505abfb550234e4301e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73ab027c1263a505abfb550234e4301e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_73ab027c1263a505abfb550234e4301e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_73ab027c1263a505abfb550234e4301e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_73ab027c1263a505abfb550234e4301e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_73ab027c1263a505abfb550234e4301e,
        type_description_1,
        par_method,
        var_wrapper
    );


    // Release cached frame.
    if ( frame_73ab027c1263a505abfb550234e4301e == cache_frame_73ab027c1263a505abfb550234e4301e )
    {
        Py_DECREF( frame_73ab027c1263a505abfb550234e4301e );
    }
    cache_frame_73ab027c1263a505abfb550234e4301e = NULL;

    assertFrameObject( frame_73ab027c1263a505abfb550234e4301e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_wrapper );
    tmp_return_value = var_wrapper;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_6_cast_to_a1_notation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)var_wrapper );
    Py_DECREF( var_wrapper );
    var_wrapper = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_6_cast_to_a1_notation );
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


static PyObject *impl_gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_range_start = NULL;
    PyObject *var_range_end = NULL;
    PyObject *var_range_name = NULL;
    struct Nuitka_FrameObject *frame_2e355d6f512c174d8dd4f9916c334946;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2e355d6f512c174d8dd4f9916c334946 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e355d6f512c174d8dd4f9916c334946, codeobj_2e355d6f512c174d8dd4f9916c334946, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2e355d6f512c174d8dd4f9916c334946 = cache_frame_2e355d6f512c174d8dd4f9916c334946;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e355d6f512c174d8dd4f9916c334946 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e355d6f512c174d8dd4f9916c334946 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_args );
        tmp_len_arg_1 = par_args;
        tmp_capi_result_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_capi_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_capi_result_1 );

            exception_lineno = 173;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_capi_result_1 );
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
            PyObject *tmp_int_arg_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_capi_result_2;
            CHECK_OBJECT( par_args );
            tmp_subscribed_name_1 = par_args;
            tmp_subscript_name_1 = const_int_0;
            tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooc";
                goto try_except_handler_2;
            }
            tmp_capi_result_2 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_capi_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooc";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_capi_result_2 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_rowcol_to_a1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rowcol_to_a1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rowcol_to_a1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_args );
        tmp_subscribed_name_2 = par_args;
        tmp_subscript_name_2 = const_slice_none_int_pos_2_none;
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert( var_range_start == NULL );
        var_range_start = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_rowcol_to_a1 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rowcol_to_a1 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rowcol_to_a1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_args );
        tmp_subscribed_name_3 = par_args;
        tmp_subscript_name_3 = const_slice_int_neg_2_none_none;
        tmp_dircall_arg2_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_dircall_arg2_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_2 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert( var_range_end == NULL );
        var_range_end = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_instance_1 = const_str_chr_58;
        CHECK_OBJECT( var_range_start );
        tmp_tuple_element_1 = var_range_start;
        tmp_args_element_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_range_end );
        tmp_tuple_element_1 = var_range_end;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        frame_2e355d6f512c174d8dd4f9916c334946->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_join, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        assert( var_range_name == NULL );
        var_range_name = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_range_name );
        tmp_tuple_element_2 = var_range_name;
        tmp_left_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_args );
        tmp_subscribed_name_4 = par_args;
        tmp_subscript_name_4 = const_slice_int_pos_4_none_none;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 181;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_TUPLE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ooooooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_args;
            assert( old != NULL );
            par_args = tmp_assign_source_4;
            Py_DECREF( old );
        }

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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2e355d6f512c174d8dd4f9916c334946, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2e355d6f512c174d8dd4f9916c334946, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooc";
            goto try_except_handler_3;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 172;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2e355d6f512c174d8dd4f9916c334946->m_frame) frame_2e355d6f512c174d8dd4f9916c334946->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooc";
        goto try_except_handler_3;
        branch_no_2:;
    }
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_dircall_arg2_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_3 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_self );
        tmp_tuple_element_3 = par_self;
        tmp_dircall_arg2_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_3 );
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e355d6f512c174d8dd4f9916c334946 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e355d6f512c174d8dd4f9916c334946 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e355d6f512c174d8dd4f9916c334946 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e355d6f512c174d8dd4f9916c334946, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e355d6f512c174d8dd4f9916c334946->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e355d6f512c174d8dd4f9916c334946, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e355d6f512c174d8dd4f9916c334946,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_range_start,
        var_range_end,
        var_range_name,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_2e355d6f512c174d8dd4f9916c334946 == cache_frame_2e355d6f512c174d8dd4f9916c334946 )
    {
        Py_DECREF( frame_2e355d6f512c174d8dd4f9916c334946 );
    }
    cache_frame_2e355d6f512c174d8dd4f9916c334946 = NULL;

    assertFrameObject( frame_2e355d6f512c174d8dd4f9916c334946 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_range_start );
    var_range_start = NULL;

    Py_XDECREF( var_range_end );
    var_range_end = NULL;

    Py_XDECREF( var_range_name );
    var_range_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_range_start );
    var_range_start = NULL;

    Py_XDECREF( var_range_end );
    var_range_end = NULL;

    Py_XDECREF( var_range_name );
    var_range_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper );
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


static PyObject *impl_gspread$utils$$$function_7_extract_id_from_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *var_m2 = NULL;
    PyObject *var_m1 = NULL;
    struct Nuitka_FrameObject *frame_581586c040efa8a130b801f9046573d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_581586c040efa8a130b801f9046573d8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_581586c040efa8a130b801f9046573d8, codeobj_581586c040efa8a130b801f9046573d8, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_581586c040efa8a130b801f9046573d8 = cache_frame_581586c040efa8a130b801f9046573d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_581586c040efa8a130b801f9046573d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_581586c040efa8a130b801f9046573d8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_URL_KEY_V2_RE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URL_KEY_V2_RE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URL_KEY_V2_RE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_1 = par_url;
        frame_581586c040efa8a130b801f9046573d8->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_search, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_m2 == NULL );
        var_m2 = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_m2 );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_m2 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var_m2 );
            tmp_called_instance_2 = var_m2;
            frame_581586c040efa8a130b801f9046573d8->m_frame.f_lineno = 193;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_URL_KEY_V1_RE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_URL_KEY_V1_RE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "URL_KEY_V1_RE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_2 = par_url;
        frame_581586c040efa8a130b801f9046573d8->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_search, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_m1 == NULL );
        var_m1 = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_m1 );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_m1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_m1 );
            tmp_called_instance_4 = var_m1;
            frame_581586c040efa8a130b801f9046573d8->m_frame.f_lineno = 197;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_NoValidUrlKeyFound );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoValidUrlKeyFound );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NoValidUrlKeyFound" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_raise_type_1 = tmp_mvar_value_3;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 199;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_581586c040efa8a130b801f9046573d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_581586c040efa8a130b801f9046573d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_581586c040efa8a130b801f9046573d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_581586c040efa8a130b801f9046573d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_581586c040efa8a130b801f9046573d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_581586c040efa8a130b801f9046573d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_581586c040efa8a130b801f9046573d8,
        type_description_1,
        par_url,
        var_m2,
        var_m1
    );


    // Release cached frame.
    if ( frame_581586c040efa8a130b801f9046573d8 == cache_frame_581586c040efa8a130b801f9046573d8 )
    {
        Py_DECREF( frame_581586c040efa8a130b801f9046573d8 );
    }
    cache_frame_581586c040efa8a130b801f9046573d8 = NULL;

    assertFrameObject( frame_581586c040efa8a130b801f9046573d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_7_extract_id_from_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)var_m2 );
    Py_DECREF( var_m2 );
    var_m2 = NULL;

    Py_XDECREF( var_m1 );
    var_m1 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_m2 );
    var_m2 = NULL;

    Py_XDECREF( var_m1 );
    var_m1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_7_extract_id_from_url );
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


static PyObject *impl_gspread$utils$$$function_8_wid_to_gid( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_wid = python_pars[ 0 ];
    PyObject *var_widval = NULL;
    PyObject *var_xorval = NULL;
    struct Nuitka_FrameObject *frame_c24750e755d36993809441c1044249fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c24750e755d36993809441c1044249fc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c24750e755d36993809441c1044249fc, codeobj_c24750e755d36993809441c1044249fc, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c24750e755d36993809441c1044249fc = cache_frame_c24750e755d36993809441c1044249fc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c24750e755d36993809441c1044249fc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c24750e755d36993809441c1044249fc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_wid );
        tmp_len_arg_1 = par_wid;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
        CHECK_OBJECT( par_wid );
        tmp_subscribed_name_1 = par_wid;
        tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_wid );
        tmp_assign_source_1 = par_wid;
        Py_INCREF( tmp_assign_source_1 );
        condexpr_end_1:;
        assert( var_widval == NULL );
        var_widval = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_wid );
        tmp_len_arg_2 = par_wid;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_2 = const_int_pos_474;
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_2 = const_int_pos_31578;
        condexpr_end_2:;
        assert( var_xorval == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_xorval = tmp_assign_source_2;
    }
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_value_name_1;
        PyObject *tmp_base_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_widval );
        tmp_value_name_1 = var_widval;
        tmp_base_name_1 = const_int_pos_36;
        tmp_left_name_1 = BUILTIN_INT2( tmp_value_name_1, tmp_base_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_xorval );
        tmp_right_name_1 = var_xorval;
        tmp_unicode_arg_1 = BINARY_OPERATION( PyNumber_Xor, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_unicode_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
        Py_DECREF( tmp_unicode_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c24750e755d36993809441c1044249fc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c24750e755d36993809441c1044249fc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c24750e755d36993809441c1044249fc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c24750e755d36993809441c1044249fc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c24750e755d36993809441c1044249fc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c24750e755d36993809441c1044249fc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c24750e755d36993809441c1044249fc,
        type_description_1,
        par_wid,
        var_widval,
        var_xorval
    );


    // Release cached frame.
    if ( frame_c24750e755d36993809441c1044249fc == cache_frame_c24750e755d36993809441c1044249fc )
    {
        Py_DECREF( frame_c24750e755d36993809441c1044249fc );
    }
    cache_frame_c24750e755d36993809441c1044249fc = NULL;

    assertFrameObject( frame_c24750e755d36993809441c1044249fc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_8_wid_to_gid );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_wid );
    Py_DECREF( par_wid );
    par_wid = NULL;

    CHECK_OBJECT( (PyObject *)var_widval );
    Py_DECREF( var_widval );
    var_widval = NULL;

    CHECK_OBJECT( (PyObject *)var_xorval );
    Py_DECREF( var_xorval );
    var_xorval = NULL;

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

    CHECK_OBJECT( (PyObject *)par_wid );
    Py_DECREF( par_wid );
    par_wid = NULL;

    Py_XDECREF( var_widval );
    var_widval = NULL;

    Py_XDECREF( var_xorval );
    var_xorval = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_8_wid_to_gid );
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


static PyObject *impl_gspread$utils$$$function_9_rightpad( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_row = python_pars[ 0 ];
    PyObject *par_max_len = python_pars[ 1 ];
    PyObject *var_pad_len = NULL;
    struct Nuitka_FrameObject *frame_00a4693fb6516ea3122b51e145b8c0dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_00a4693fb6516ea3122b51e145b8c0dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_00a4693fb6516ea3122b51e145b8c0dc, codeobj_00a4693fb6516ea3122b51e145b8c0dc, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_00a4693fb6516ea3122b51e145b8c0dc = cache_frame_00a4693fb6516ea3122b51e145b8c0dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_00a4693fb6516ea3122b51e145b8c0dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_00a4693fb6516ea3122b51e145b8c0dc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_max_len );
        tmp_left_name_1 = par_max_len;
        CHECK_OBJECT( par_row );
        tmp_len_arg_1 = par_row;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_pad_len == NULL );
        var_pad_len = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_pad_len );
        tmp_compexpr_left_1 = var_pad_len;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_row );
        tmp_left_name_2 = par_row;
        tmp_left_name_3 = LIST_COPY( const_list_str_empty_list );
        CHECK_OBJECT( var_pad_len );
        tmp_right_name_3 = var_pad_len;
        tmp_right_name_2 = BINARY_OPERATION_MUL_LIST_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_row );
        tmp_return_value = par_row;
        Py_INCREF( tmp_return_value );
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00a4693fb6516ea3122b51e145b8c0dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_00a4693fb6516ea3122b51e145b8c0dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00a4693fb6516ea3122b51e145b8c0dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_00a4693fb6516ea3122b51e145b8c0dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_00a4693fb6516ea3122b51e145b8c0dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_00a4693fb6516ea3122b51e145b8c0dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_00a4693fb6516ea3122b51e145b8c0dc,
        type_description_1,
        par_row,
        par_max_len,
        var_pad_len
    );


    // Release cached frame.
    if ( frame_00a4693fb6516ea3122b51e145b8c0dc == cache_frame_00a4693fb6516ea3122b51e145b8c0dc )
    {
        Py_DECREF( frame_00a4693fb6516ea3122b51e145b8c0dc );
    }
    cache_frame_00a4693fb6516ea3122b51e145b8c0dc = NULL;

    assertFrameObject( frame_00a4693fb6516ea3122b51e145b8c0dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_9_rightpad );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_max_len );
    Py_DECREF( par_max_len );
    par_max_len = NULL;

    CHECK_OBJECT( (PyObject *)var_pad_len );
    Py_DECREF( var_pad_len );
    var_pad_len = NULL;

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

    CHECK_OBJECT( (PyObject *)par_row );
    Py_DECREF( par_row );
    par_row = NULL;

    CHECK_OBJECT( (PyObject *)par_max_len );
    Py_DECREF( par_max_len );
    par_max_len = NULL;

    Py_XDECREF( var_pad_len );
    var_pad_len = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_9_rightpad );
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


static PyObject *impl_gspread$utils$$$function_10_fill_gaps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_L = python_pars[ 0 ];
    PyObject *par_rows = python_pars[ 1 ];
    PyObject *par_cols = python_pars[ 2 ];
    PyObject *var_max_cols = NULL;
    PyObject *var_max_rows = NULL;
    PyObject *var_pad_rows = NULL;
    PyObject *outline_0_var_row = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5554bdcb02399e9f8ef483ea6ac02907;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_72b46117f6e66833e86178765834a710_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_72b46117f6e66833e86178765834a710_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5554bdcb02399e9f8ef483ea6ac02907 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5554bdcb02399e9f8ef483ea6ac02907, codeobj_5554bdcb02399e9f8ef483ea6ac02907, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5554bdcb02399e9f8ef483ea6ac02907 = cache_frame_5554bdcb02399e9f8ef483ea6ac02907;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5554bdcb02399e9f8ef483ea6ac02907 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5554bdcb02399e9f8ef483ea6ac02907 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_cols );
        tmp_compexpr_left_1 = par_cols;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_1 != NULL );
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_L );
            tmp_iter_arg_1 = par_L;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_args_element_name_1 = gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_10_fill_gaps );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_10_fill_gaps );
        return NULL;
        outline_result_1:;
        frame_5554bdcb02399e9f8ef483ea6ac02907->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_cols );
        tmp_assign_source_1 = par_cols;
        Py_INCREF( tmp_assign_source_1 );
        condexpr_end_1:;
        assert( var_max_cols == NULL );
        var_max_cols = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_rows );
        tmp_compexpr_left_2 = par_rows;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( par_L );
        tmp_len_arg_1 = par_L;
        tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( par_rows );
        tmp_assign_source_3 = par_rows;
        Py_INCREF( tmp_assign_source_3 );
        condexpr_end_2:;
        assert( var_max_rows == NULL );
        var_max_rows = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( var_max_rows );
        tmp_left_name_1 = var_max_rows;
        CHECK_OBJECT( par_L );
        tmp_len_arg_2 = par_L;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pad_rows == NULL );
        var_pad_rows = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_pad_rows );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_pad_rows );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_L );
            tmp_left_name_2 = par_L;
            tmp_left_name_3 = DEEP_COPY( const_list_list_empty_list );
            CHECK_OBJECT( var_pad_rows );
            tmp_right_name_3 = var_pad_rows;
            tmp_right_name_2 = BINARY_OPERATION_MUL_LIST_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_L;
                assert( old != NULL );
                par_L = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( par_L );
        tmp_iter_arg_2 = par_L;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        assert( tmp_listcomp_1__$0 == NULL );
        tmp_listcomp_1__$0 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyList_New( 0 );
        assert( tmp_listcomp_1__contraction == NULL );
        tmp_listcomp_1__contraction = tmp_assign_source_7;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_72b46117f6e66833e86178765834a710_2, codeobj_72b46117f6e66833e86178765834a710, module_gspread$utils, sizeof(void *)+sizeof(void *) );
    frame_72b46117f6e66833e86178765834a710_2 = cache_frame_72b46117f6e66833e86178765834a710_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72b46117f6e66833e86178765834a710_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72b46117f6e66833e86178765834a710_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_listcomp_1__$0 );
        tmp_next_source_1 = tmp_listcomp_1__$0;
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
                type_description_2 = "oo";
                exception_lineno = 224;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
        tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_row;
            outline_0_var_row = tmp_assign_source_9;
            Py_INCREF( outline_0_var_row );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_rightpad );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rightpad );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rightpad" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 224;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( outline_0_var_row );
        tmp_args_element_name_2 = outline_0_var_row;
        CHECK_OBJECT( var_max_cols );
        tmp_args_element_name_3 = var_max_cols;
        frame_72b46117f6e66833e86178765834a710_2->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }
        assert( PyList_Check( tmp_append_list_1 ) );
        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
        Py_DECREF( tmp_append_value_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_2 = "oo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_10_fill_gaps );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72b46117f6e66833e86178765834a710_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72b46117f6e66833e86178765834a710_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_3;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72b46117f6e66833e86178765834a710_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72b46117f6e66833e86178765834a710_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72b46117f6e66833e86178765834a710_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72b46117f6e66833e86178765834a710_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72b46117f6e66833e86178765834a710_2,
        type_description_2,
        outline_0_var_row,
        var_max_cols
    );


    // Release cached frame.
    if ( frame_72b46117f6e66833e86178765834a710_2 == cache_frame_72b46117f6e66833e86178765834a710_2 )
    {
        Py_DECREF( frame_72b46117f6e66833e86178765834a710_2 );
    }
    cache_frame_72b46117f6e66833e86178765834a710_2 = NULL;

    assertFrameObject( frame_72b46117f6e66833e86178765834a710_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_10_fill_gaps );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( outline_0_var_row );
    outline_0_var_row = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_0_var_row );
    outline_0_var_row = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_10_fill_gaps );
    return NULL;
    outline_exception_1:;
    exception_lineno = 224;
    goto frame_exception_exit_1;
    outline_result_2:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5554bdcb02399e9f8ef483ea6ac02907 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5554bdcb02399e9f8ef483ea6ac02907 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5554bdcb02399e9f8ef483ea6ac02907 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5554bdcb02399e9f8ef483ea6ac02907, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5554bdcb02399e9f8ef483ea6ac02907->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5554bdcb02399e9f8ef483ea6ac02907, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5554bdcb02399e9f8ef483ea6ac02907,
        type_description_1,
        par_L,
        par_rows,
        par_cols,
        var_max_cols,
        var_max_rows,
        var_pad_rows
    );


    // Release cached frame.
    if ( frame_5554bdcb02399e9f8ef483ea6ac02907 == cache_frame_5554bdcb02399e9f8ef483ea6ac02907 )
    {
        Py_DECREF( frame_5554bdcb02399e9f8ef483ea6ac02907 );
    }
    cache_frame_5554bdcb02399e9f8ef483ea6ac02907 = NULL;

    assertFrameObject( frame_5554bdcb02399e9f8ef483ea6ac02907 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_10_fill_gaps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_L );
    Py_DECREF( par_L );
    par_L = NULL;

    CHECK_OBJECT( (PyObject *)par_rows );
    Py_DECREF( par_rows );
    par_rows = NULL;

    CHECK_OBJECT( (PyObject *)par_cols );
    Py_DECREF( par_cols );
    par_cols = NULL;

    CHECK_OBJECT( (PyObject *)var_max_cols );
    Py_DECREF( var_max_cols );
    var_max_cols = NULL;

    CHECK_OBJECT( (PyObject *)var_max_rows );
    Py_DECREF( var_max_rows );
    var_max_rows = NULL;

    CHECK_OBJECT( (PyObject *)var_pad_rows );
    Py_DECREF( var_pad_rows );
    var_pad_rows = NULL;

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

    Py_XDECREF( par_L );
    par_L = NULL;

    CHECK_OBJECT( (PyObject *)par_rows );
    Py_DECREF( par_rows );
    par_rows = NULL;

    CHECK_OBJECT( (PyObject *)par_cols );
    Py_DECREF( par_cols );
    par_cols = NULL;

    Py_XDECREF( var_max_cols );
    var_max_cols = NULL;

    Py_XDECREF( var_max_rows );
    var_max_rows = NULL;

    Py_XDECREF( var_pad_rows );
    var_pad_rows = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_10_fill_gaps );
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



struct gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_locals {
    PyObject *var_row;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_locals *generator_heap = (struct gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_row = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_793e37a2f203dad5a676582a705c0813, module_gspread$utils, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 216;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_row;
            generator_heap->var_row = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_row );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_len_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_row );
        tmp_len_arg_1 = generator_heap->var_row;
        tmp_expression_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 216;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_len_arg_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_len_arg_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 216;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 216;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_row
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_row );
    generator_heap->var_row = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_row );
    generator_heap->var_row = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_context,
        module_gspread$utils,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_31d70a05bfb0e0ebe08713001eb2df75,
#endif
        codeobj_793e37a2f203dad5a676582a705c0813,
        1,
        sizeof(struct gspread$utils$$$function_10_fill_gaps$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_gspread$utils$$$function_11_cell_list_to_rect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cell_list = python_pars[ 0 ];
    PyObject *var_rows = NULL;
    PyObject *var_row_offset = NULL;
    PyObject *var_col_offset = NULL;
    PyObject *var_cell = NULL;
    PyObject *var_row = NULL;
    PyObject *var_all_row_keys = NULL;
    PyObject *var_rect_cols = NULL;
    PyObject *var_rect_rows = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_1_var_j = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_d0bf746c5a62d1e1836b6235f313fd8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_FrameObject *frame_eca9df9037f877c926b191fc543b2472_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_FrameObject *frame_8134214aec5a129fd22300f08fe9c3b7_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_8134214aec5a129fd22300f08fe9c3b7_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_eca9df9037f877c926b191fc543b2472_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_d0bf746c5a62d1e1836b6235f313fd8e = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0bf746c5a62d1e1836b6235f313fd8e, codeobj_d0bf746c5a62d1e1836b6235f313fd8e, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0bf746c5a62d1e1836b6235f313fd8e = cache_frame_d0bf746c5a62d1e1836b6235f313fd8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0bf746c5a62d1e1836b6235f313fd8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0bf746c5a62d1e1836b6235f313fd8e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_cell_list );
        tmp_operand_name_1 = par_cell_list;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
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
        tmp_return_value = PyList_New( 0 );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_defaultdict );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defaultdict );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "defaultdict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = MAKE_FUNCTION_gspread$utils$$$function_11_cell_list_to_rect$$$function_1_lambda(  );



        frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rows == NULL );
        var_rows = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_cell_list );
        tmp_subscribed_name_1 = par_cell_list;
        tmp_subscript_name_1 = const_int_0;
        tmp_source_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_row_offset == NULL );
        var_row_offset = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_cell_list );
        tmp_subscribed_name_2 = par_cell_list;
        tmp_subscript_name_2 = const_int_0;
        tmp_source_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_col_offset == NULL );
        var_col_offset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_cell_list );
        tmp_iter_arg_1 = par_cell_list;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooo";
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
                type_description_1 = "ooooooooo";
                exception_lineno = 236;
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
            PyObject *old = var_cell;
            var_cell = tmp_assign_source_6;
            Py_INCREF( var_cell );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_rows );
        tmp_source_name_3 = var_rows;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setdefault );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_cell );
        tmp_source_name_4 = var_cell;
        tmp_int_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_row );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_row_offset );
        tmp_right_name_1 = var_row_offset;
        tmp_args_element_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_3 = PyDict_New();
        frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_cell );
        tmp_source_name_5 = var_cell;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_value );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_row );
        tmp_ass_subscribed_1 = var_row;
        CHECK_OBJECT( var_cell );
        tmp_source_name_6 = var_cell;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_col );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 238;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_col_offset );
        tmp_right_name_2 = var_col_offset;
        tmp_ass_subscript_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 238;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
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

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_rows );
        tmp_operand_name_2 = var_rows;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooo";
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
        tmp_return_value = PyList_New( 0 );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_chain );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chain );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chain" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 243;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_from_iterable );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_rows );
            tmp_called_instance_1 = var_rows;
            frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame.f_lineno = 243;
            tmp_iter_arg_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_9;
        }
        // Tried code:
        tmp_args_element_name_4 = gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_4)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
        return NULL;
        outline_result_1:;
        frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_all_row_keys == NULL );
        var_all_row_keys = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_right_name_3;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( var_all_row_keys );
        tmp_args_element_name_5 = var_all_row_keys;
        frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_xrange_low_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rect_cols == NULL );
        var_rect_cols = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_right_name_4;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_5 != NULL );
        CHECK_OBJECT( var_rows );
        tmp_called_instance_2 = var_rows;
        frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame.f_lineno = 245;
        tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_keys );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_xrange_low_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_xrange_low_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BUILTIN_XRANGE1( tmp_xrange_low_2 );
        Py_DECREF( tmp_xrange_low_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rect_rows == NULL );
        var_rect_rows = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( var_rect_rows );
        tmp_iter_arg_3 = var_rect_rows;
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_listcomp_1__$0 == NULL );
        tmp_listcomp_1__$0 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyList_New( 0 );
        assert( tmp_listcomp_1__contraction == NULL );
        tmp_listcomp_1__contraction = tmp_assign_source_13;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_eca9df9037f877c926b191fc543b2472_2, codeobj_eca9df9037f877c926b191fc543b2472, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eca9df9037f877c926b191fc543b2472_2 = cache_frame_eca9df9037f877c926b191fc543b2472_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eca9df9037f877c926b191fc543b2472_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eca9df9037f877c926b191fc543b2472_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_listcomp_1__$0 );
        tmp_next_source_2 = tmp_listcomp_1__$0;
        tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_2 = "ooo";
                exception_lineno = 251;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
        tmp_assign_source_15 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_i;
            outline_0_var_i = tmp_assign_source_15;
            Py_INCREF( outline_0_var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( var_rect_cols );
            tmp_iter_arg_4 = var_rect_cols;
            tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_listcomp$listcomp_1__$0;
                tmp_listcomp$listcomp_1__$0 = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyList_New( 0 );
            {
                PyObject *old = tmp_listcomp$listcomp_1__contraction;
                tmp_listcomp$listcomp_1__contraction = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        MAKE_OR_REUSE_FRAME( cache_frame_8134214aec5a129fd22300f08fe9c3b7_3, codeobj_8134214aec5a129fd22300f08fe9c3b7, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
        frame_8134214aec5a129fd22300f08fe9c3b7_3 = cache_frame_8134214aec5a129fd22300f08fe9c3b7_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8134214aec5a129fd22300f08fe9c3b7_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8134214aec5a129fd22300f08fe9c3b7_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_listcomp$listcomp_1__$0 );
            tmp_next_source_3 = tmp_listcomp$listcomp_1__$0;
            tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_3 = "ooo";
                    exception_lineno = 251;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_listcomp$listcomp_1__iter_value_0 );
            tmp_assign_source_19 = tmp_listcomp$listcomp_1__iter_value_0;
            {
                PyObject *old = outline_1_var_j;
                outline_1_var_j = tmp_assign_source_19;
                Py_INCREF( outline_1_var_j );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( tmp_listcomp$listcomp_1__contraction );
            tmp_append_list_2 = tmp_listcomp$listcomp_1__contraction;
            CHECK_OBJECT( var_rows );
            tmp_subscribed_name_3 = var_rows;
            CHECK_OBJECT( outline_0_var_i );
            tmp_subscript_name_3 = outline_0_var_i;
            tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_3 = "ooo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT( outline_1_var_j );
            tmp_args_element_name_7 = outline_1_var_j;
            frame_8134214aec5a129fd22300f08fe9c3b7_3->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_append_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_3 = "ooo";
                goto try_except_handler_7;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_3 = "ooo";
                goto try_except_handler_7;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_3 = "ooo";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_listcomp$listcomp_1__contraction );
        tmp_append_value_1 = tmp_listcomp$listcomp_1__contraction;
        Py_INCREF( tmp_append_value_1 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__$0 );
        Py_DECREF( tmp_listcomp$listcomp_1__$0 );
        tmp_listcomp$listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__contraction );
        Py_DECREF( tmp_listcomp$listcomp_1__contraction );
        tmp_listcomp$listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp$listcomp_1__iter_value_0 );
        tmp_listcomp$listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__$0 );
        Py_DECREF( tmp_listcomp$listcomp_1__$0 );
        tmp_listcomp$listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp$listcomp_1__contraction );
        Py_DECREF( tmp_listcomp$listcomp_1__contraction );
        tmp_listcomp$listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp$listcomp_1__iter_value_0 );
        tmp_listcomp$listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8134214aec5a129fd22300f08fe9c3b7_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_8134214aec5a129fd22300f08fe9c3b7_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8134214aec5a129fd22300f08fe9c3b7_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8134214aec5a129fd22300f08fe9c3b7_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8134214aec5a129fd22300f08fe9c3b7_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8134214aec5a129fd22300f08fe9c3b7_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8134214aec5a129fd22300f08fe9c3b7_3,
            type_description_3,
            outline_1_var_j,
            var_rows,
            outline_0_var_i
        );


        // Release cached frame.
        if ( frame_8134214aec5a129fd22300f08fe9c3b7_3 == cache_frame_8134214aec5a129fd22300f08fe9c3b7_3 )
        {
            Py_DECREF( frame_8134214aec5a129fd22300f08fe9c3b7_3 );
        }
        cache_frame_8134214aec5a129fd22300f08fe9c3b7_3 = NULL;

        assertFrameObject( frame_8134214aec5a129fd22300f08fe9c3b7_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_2:;
        type_description_2 = "ooo";
        goto try_except_handler_6;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF( outline_1_var_j );
        outline_1_var_j = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( outline_1_var_j );
        outline_1_var_j = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
        return NULL;
        outline_exception_2:;
        exception_lineno = 251;
        goto try_except_handler_5;
        outline_result_3:;
        assert( PyList_Check( tmp_append_list_1 ) );
        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
        Py_DECREF( tmp_append_value_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_2 = "ooo";
            goto try_except_handler_5;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_2 = "ooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    CHECK_OBJECT( tmp_listcomp_1__contraction );
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eca9df9037f877c926b191fc543b2472_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eca9df9037f877c926b191fc543b2472_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eca9df9037f877c926b191fc543b2472_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eca9df9037f877c926b191fc543b2472_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eca9df9037f877c926b191fc543b2472_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eca9df9037f877c926b191fc543b2472_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eca9df9037f877c926b191fc543b2472_2,
        type_description_2,
        outline_0_var_i,
        var_rect_cols,
        var_rows
    );


    // Release cached frame.
    if ( frame_eca9df9037f877c926b191fc543b2472_2 == cache_frame_eca9df9037f877c926b191fc543b2472_2 )
    {
        Py_DECREF( frame_eca9df9037f877c926b191fc543b2472_2 );
    }
    cache_frame_eca9df9037f877c926b191fc543b2472_2 = NULL;

    assertFrameObject( frame_eca9df9037f877c926b191fc543b2472_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_1:;
    type_description_1 = "ooooooooo";
    goto try_except_handler_4;
    skip_nested_handling_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( outline_0_var_i );
    outline_0_var_i = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_i );
    outline_0_var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
    return NULL;
    outline_exception_1:;
    exception_lineno = 251;
    goto frame_exception_exit_1;
    outline_result_2:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0bf746c5a62d1e1836b6235f313fd8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0bf746c5a62d1e1836b6235f313fd8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0bf746c5a62d1e1836b6235f313fd8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0bf746c5a62d1e1836b6235f313fd8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0bf746c5a62d1e1836b6235f313fd8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0bf746c5a62d1e1836b6235f313fd8e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0bf746c5a62d1e1836b6235f313fd8e,
        type_description_1,
        par_cell_list,
        var_rows,
        var_row_offset,
        var_col_offset,
        var_cell,
        var_row,
        var_all_row_keys,
        var_rect_cols,
        var_rect_rows
    );


    // Release cached frame.
    if ( frame_d0bf746c5a62d1e1836b6235f313fd8e == cache_frame_d0bf746c5a62d1e1836b6235f313fd8e )
    {
        Py_DECREF( frame_d0bf746c5a62d1e1836b6235f313fd8e );
    }
    cache_frame_d0bf746c5a62d1e1836b6235f313fd8e = NULL;

    assertFrameObject( frame_d0bf746c5a62d1e1836b6235f313fd8e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cell_list );
    Py_DECREF( par_cell_list );
    par_cell_list = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_row_offset );
    var_row_offset = NULL;

    Py_XDECREF( var_col_offset );
    var_col_offset = NULL;

    Py_XDECREF( var_cell );
    var_cell = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_all_row_keys );
    var_all_row_keys = NULL;

    Py_XDECREF( var_rect_cols );
    var_rect_cols = NULL;

    Py_XDECREF( var_rect_rows );
    var_rect_rows = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cell_list );
    Py_DECREF( par_cell_list );
    par_cell_list = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( var_row_offset );
    var_row_offset = NULL;

    Py_XDECREF( var_col_offset );
    var_col_offset = NULL;

    Py_XDECREF( var_cell );
    var_cell = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_all_row_keys );
    var_all_row_keys = NULL;

    Py_XDECREF( var_rect_cols );
    var_rect_cols = NULL;

    Py_XDECREF( var_rect_rows );
    var_rect_rows = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect );
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


static PyObject *impl_gspread$utils$$$function_11_cell_list_to_rect$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = PyDict_New();
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_11_cell_list_to_rect$$$function_1_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_locals {
    PyObject *var_row;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_locals *generator_heap = (struct gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_row = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_67c506a639ec5b0abed3b04303cff13b, module_gspread$utils, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 243;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_row;
            generator_heap->var_row = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_row );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_row );
        tmp_called_instance_1 = generator_heap->var_row;
        generator->m_frame->m_frame.f_lineno = 243;
        tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 243;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_row
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_row );
    generator_heap->var_row = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_row );
    generator_heap->var_row = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_context,
        module_gspread$utils,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_8d17a2257971c4787678c2ca4ab5a005,
#endif
        codeobj_67c506a639ec5b0abed3b04303cff13b,
        1,
        sizeof(struct gspread$utils$$$function_11_cell_list_to_rect$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_gspread$utils$$$function_12_quote( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_safe = python_pars[ 1 ];
    PyObject *par_encoding = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_28a055fadf705baf80b0dfe325d00404;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28a055fadf705baf80b0dfe325d00404 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28a055fadf705baf80b0dfe325d00404, codeobj_28a055fadf705baf80b0dfe325d00404, module_gspread$utils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_28a055fadf705baf80b0dfe325d00404 = cache_frame_28a055fadf705baf80b0dfe325d00404;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28a055fadf705baf80b0dfe325d00404 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28a055fadf705baf80b0dfe325d00404 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_urllib );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urllib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_quote );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_value );
        tmp_called_instance_1 = par_value;
        CHECK_OBJECT( par_encoding );
        tmp_args_element_name_2 = par_encoding;
        frame_28a055fadf705baf80b0dfe325d00404->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_safe );
        tmp_args_element_name_3 = par_safe;
        frame_28a055fadf705baf80b0dfe325d00404->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28a055fadf705baf80b0dfe325d00404 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28a055fadf705baf80b0dfe325d00404 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28a055fadf705baf80b0dfe325d00404 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28a055fadf705baf80b0dfe325d00404, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28a055fadf705baf80b0dfe325d00404->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28a055fadf705baf80b0dfe325d00404, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28a055fadf705baf80b0dfe325d00404,
        type_description_1,
        par_value,
        par_safe,
        par_encoding
    );


    // Release cached frame.
    if ( frame_28a055fadf705baf80b0dfe325d00404 == cache_frame_28a055fadf705baf80b0dfe325d00404 )
    {
        Py_DECREF( frame_28a055fadf705baf80b0dfe325d00404 );
    }
    cache_frame_28a055fadf705baf80b0dfe325d00404 = NULL;

    assertFrameObject( frame_28a055fadf705baf80b0dfe325d00404 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_12_quote );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_safe );
    Py_DECREF( par_safe );
    par_safe = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_safe );
    Py_DECREF( par_safe );
    par_safe = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gspread$utils$$$function_12_quote );
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



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_10_fill_gaps( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_10_fill_gaps,
        const_str_plain_fill_gaps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5554bdcb02399e9f8ef483ea6ac02907,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_11_cell_list_to_rect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_11_cell_list_to_rect,
        const_str_plain_cell_list_to_rect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0bf746c5a62d1e1836b6235f313fd8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_11_cell_list_to_rect$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_11_cell_list_to_rect$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_ae17463721f24542093320bfa1bb6d26,
#endif
        codeobj_1ba0d269ebc0c4e438ff16604c7e75f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_12_quote( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_12_quote,
        const_str_plain_quote,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_28a055fadf705baf80b0dfe325d00404,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_1_finditem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_1_finditem,
        const_str_plain_finditem,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5062ecf136a4a3fba49c8218cb283f94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        const_str_digest_2fa85e5ba9401dfbbe078b3e4eb223a3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_2_numericise( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_2_numericise,
        const_str_plain_numericise,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a576b2e9e16c3b1d308640180e9c27d1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        const_str_digest_085f9db6ec56ee75fbf43efec5bdb1f8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_3_numericise_all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_3_numericise_all,
        const_str_plain_numericise_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_33b5674cbb0d88614ffef50c2449c591,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        const_str_digest_75750390bac1fe53da003e90f0bce283,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_4_rowcol_to_a1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_4_rowcol_to_a1,
        const_str_plain_rowcol_to_a1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_21030f00baa901942cbfbe95b80c8e29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        const_str_digest_307f7ce55745bfb6ee6994656fa8535b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_5_a1_to_rowcol(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_5_a1_to_rowcol,
        const_str_plain_a1_to_rowcol,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_796f997d45aca317a197617a7f26e49b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        const_str_digest_49637f19771a6b7cf302e33dfe3d5eae,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_6_cast_to_a1_notation(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_6_cast_to_a1_notation,
        const_str_plain_cast_to_a1_notation,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_73ab027c1263a505abfb550234e4301e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        const_str_digest_483f7dda801a1faf1217c4713967e5ff,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_6_cast_to_a1_notation$$$function_1_wrapper,
        const_str_plain_wrapper,
#if PYTHON_VERSION >= 300
        const_str_digest_ba66be6ab37da40c4645732f9e030c5d,
#endif
        codeobj_2e355d6f512c174d8dd4f9916c334946,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_7_extract_id_from_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_7_extract_id_from_url,
        const_str_plain_extract_id_from_url,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_581586c040efa8a130b801f9046573d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_8_wid_to_gid(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_8_wid_to_gid,
        const_str_plain_wid_to_gid,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c24750e755d36993809441c1044249fc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        const_str_digest_e74701bdc714ac258751c96e40fa5996,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gspread$utils$$$function_9_rightpad(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gspread$utils$$$function_9_rightpad,
        const_str_plain_rightpad,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_00a4693fb6516ea3122b51e145b8c0dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gspread$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gspread$utils =
{
    PyModuleDef_HEAD_INIT,
    "gspread.utils",
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
MOD_ENTRY_DECL(gspread$utils)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(gspread$utils)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gspread$utils );
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
    puts("gspread.utils: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gspread.utils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gspread.utils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgspread$utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gspread$utils = Py_InitModule4(
        "gspread.utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_gspread$utils = PyModule_Create( &mdef_gspread$utils );
#endif

    moduledict_gspread$utils = MODULE_DICT( module_gspread$utils );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_gspread$utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_gspread$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_gspread$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_gspread$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_gspread$utils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_558f471621e847736e5b7b157448374e, module_gspread$utils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_5fff5d4c5e3c6fe13caad7b721798973;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_66c45c5efb6076184dcd93a608dd1685;
        UPDATE_STRING_DICT0( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_a77714d796441206b4ba53af8abfdd68;
        UPDATE_STRING_DICT0( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_5fff5d4c5e3c6fe13caad7b721798973 = MAKE_MODULE_FRAME( codeobj_5fff5d4c5e3c6fe13caad7b721798973, module_gspread$utils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5fff5d4c5e3c6fe13caad7b721798973 );
    assert( Py_REFCNT( frame_5fff5d4c5e3c6fe13caad7b721798973 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_a77714d796441206b4ba53af8abfdd68;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_gspread$utils;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_gspread$utils;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_functools;
        tmp_globals_name_3 = (PyObject *)moduledict_gspread$utils;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_wraps_tuple;
        tmp_level_name_3 = const_int_0;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 13;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_wraps );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_wraps, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_collections;
        tmp_globals_name_4 = (PyObject *)moduledict_gspread$utils;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_defaultdict_tuple;
        tmp_level_name_4 = const_int_0;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 14;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_defaultdict );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_defaultdict, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_itertools;
        tmp_globals_name_5 = (PyObject *)moduledict_gspread$utils;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_chain_tuple;
        tmp_level_name_5 = const_int_0;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 15;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        assert( !(tmp_import_name_from_3 == NULL) );
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_chain );
        Py_DECREF( tmp_import_name_from_3 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_chain, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_exceptions;
        tmp_globals_name_6 = (PyObject *)moduledict_gspread$utils;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_IncorrectCellLabel_str_plain_NoValidUrlKeyFound_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 17;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_gspread$utils,
                const_str_plain_IncorrectCellLabel,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_IncorrectCellLabel );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_IncorrectCellLabel, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_gspread$utils,
                const_str_plain_NoValidUrlKeyFound,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_NoValidUrlKeyFound );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_NoValidUrlKeyFound, tmp_assign_source_11 );
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_major );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_name_name_7;
            PyObject *tmp_globals_name_7;
            PyObject *tmp_locals_name_7;
            PyObject *tmp_fromlist_name_7;
            PyObject *tmp_level_name_7;
            tmp_name_name_7 = const_str_plain_urllib;
            tmp_globals_name_7 = (PyObject *)moduledict_gspread$utils;
            tmp_locals_name_7 = Py_None;
            tmp_fromlist_name_7 = Py_None;
            tmp_level_name_7 = const_int_0;
            frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 21;
            tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_urllib, tmp_assign_source_12 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 22;

                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_version_info );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_major );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_3;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_import_name_from_6;
                PyObject *tmp_name_name_8;
                PyObject *tmp_globals_name_8;
                PyObject *tmp_locals_name_8;
                PyObject *tmp_fromlist_name_8;
                PyObject *tmp_level_name_8;
                tmp_name_name_8 = const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
                tmp_globals_name_8 = (PyObject *)moduledict_gspread$utils;
                tmp_locals_name_8 = Py_None;
                tmp_fromlist_name_8 = Py_None;
                tmp_level_name_8 = const_int_0;
                frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 23;
                tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
                if ( tmp_import_name_from_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 23;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_parse );
                Py_DECREF( tmp_import_name_from_6 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 23;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_urllib, tmp_assign_source_13 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_pos_64;
        UPDATE_STRING_DICT0( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_MAGIC_NUMBER, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 27;
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_7b154f47201d8b63f6fc17a008ce03d4_tuple, 0 ) );

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_CELL_ADDR_RE, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_6;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 29;
        tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_e142fd607fff07aa901ad9406f615b22_tuple, 0 ) );

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_URL_KEY_V1_RE, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_7;
        frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame.f_lineno = 30;
        tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_80c7ac92e268f43134ee4112bbe1ed59_tuple, 0 ) );

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_URL_KEY_V2_RE, tmp_assign_source_17 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fff5d4c5e3c6fe13caad7b721798973 );
#endif
    popFrameStack();

    assertFrameObject( frame_5fff5d4c5e3c6fe13caad7b721798973 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fff5d4c5e3c6fe13caad7b721798973 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5fff5d4c5e3c6fe13caad7b721798973, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5fff5d4c5e3c6fe13caad7b721798973->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5fff5d4c5e3c6fe13caad7b721798973, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_gspread$utils$$$function_1_finditem(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_finditem, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_str_empty_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_19 = MAKE_FUNCTION_gspread$utils$$$function_2_numericise( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_numericise, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_str_empty_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_20 = MAKE_FUNCTION_gspread$utils$$$function_3_numericise_all( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_numericise_all, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_gspread$utils$$$function_4_rowcol_to_a1(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_rowcol_to_a1, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_gspread$utils$$$function_5_a1_to_rowcol(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_a1_to_rowcol, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_gspread$utils$$$function_6_cast_to_a1_notation(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_cast_to_a1_notation, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_gspread$utils$$$function_7_extract_id_from_url(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_extract_id_from_url, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_gspread$utils$$$function_8_wid_to_gid(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_wid_to_gid, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_gspread$utils$$$function_9_rightpad(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_rightpad, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_27 = MAKE_FUNCTION_gspread$utils$$$function_10_fill_gaps( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_fill_gaps, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_gspread$utils$$$function_11_cell_list_to_rect(  );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_cell_list_to_rect, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_str_empty_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_29 = MAKE_FUNCTION_gspread$utils$$$function_12_quote( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_gspread$utils, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_29 );
    }

    return MOD_RETURN_VALUE( module_gspread$utils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
