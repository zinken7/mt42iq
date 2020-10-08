/* Generated code for Python module 'pyasn1.codec.cer.encoder'
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

/* The "_module_pyasn1$codec$cer$encoder" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$codec$cer$encoder;
PyDictObject *moduledict_pyasn1$codec$cer$encoder;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_UTCTime;
extern PyObject *const_int_pos_12;
static PyObject *const_tuple_str_chr_43_tuple;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_comps;
extern PyObject *const_str_plain_Set;
extern PyObject *const_tuple_int_pos_255_tuple;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_comp;
extern PyObject *const_str_chr_43;
extern PyObject *const_str_digest_7c8c58049edd248f8b1cb370445e702c;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a;
extern PyObject *const_str_plain__componentSortKey;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_tagSet;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_univ;
extern PyObject *const_str_plain__encodeComponents;
extern PyObject *const_str_plain_0;
extern PyObject *const_str_plain_fixedChunkSize;
static PyObject *const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple;
extern PyObject *const_str_plain_inconsistency;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_Encoder;
extern PyObject *const_str_plain_encode;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_Real;
extern PyObject *const_int_pos_19;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
extern PyObject *const_tuple_str_plain_useful_tuple;
extern PyObject *const_str_chr_0;
extern PyObject *const_str_plain_encodeFun;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_str_plain_maxChunkSize;
extern PyObject *const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32;
extern PyObject *const_str_plain_isOptional;
static PyObject *const_str_plain_Z_CHAR;
static PyObject *const_str_digest_ba12f4d8091703d841ce97647c64ebaa;
static PyObject *const_str_plain_MINUS_CHAR;
extern PyObject *const_str_plain_asn1Object;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple;
extern PyObject *const_tuple_str_plain_0_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_dot;
static PyObject *const_tuple_str_plain_x_str_plain_maxLen_str_plain_zero_tuple;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_plain_COMMA_CHAR;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_len;
extern PyObject *const_str_plain__dropFloatingPoint;
extern PyObject *const_str_plain_SequenceEncoder;
extern PyObject *const_str_plain_isSameTypeWith;
static PyObject *const_str_plain_ZERO_CHAR;
extern PyObject *const_str_plain_isDefaulted;
static PyObject *const_str_plain_GeneralizedTimeEncoder;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_ljust;
extern PyObject *const_str_plain_isInconsistent;
extern PyObject *const_str_plain_null;
static PyObject *const_tuple_str_plain_str2octs_str_plain_null_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_clone;
extern PyObject *const_str_plain_SetEncoder;
extern PyObject *const_str_digest_339682c9f90ab4eb0347ec2160c619ad;
extern PyObject *const_str_plain_pyasn1;
extern PyObject *const_str_plain_Z;
static PyObject *const_str_plain_paddedChunks;
static PyObject *const_str_digest_f59a53012f9f2ee140e08ee78ddf2542;
extern PyObject *const_str_digest_7a9b7848d7ad5a58475df9cb65303753;
static PyObject *const_str_plain_MIN_LENGTH;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_fixedDefLengthMode;
extern PyObject *const_str_plain_componentAndType;
static PyObject *const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple;
extern PyObject *const_str_plain__chooseEncBase;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_Choice;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_d7634e552d516b8de4e6126d0edbe41f;
static PyObject *const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple;
extern PyObject *const_tuple_str_plain_Z_tuple;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_UTCTimeEncoder;
extern PyObject *const_str_plain_str2octs;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_str_chr_45_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_omitEmptyOptionals;
extern PyObject *const_str_plain_GeneralizedTime;
extern PyObject *const_str_plain_numbers;
extern PyObject *const_list_str_plain_encode_list;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_5ad607bbfacb3f29d750778cb5976a68;
extern PyObject *const_int_pos_48;
extern PyObject *const_tuple_str_plain_ifNotEmpty_false_tuple;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_compType;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_minTagSet;
static PyObject *const_str_plain_TimeEncoderMixIn;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_b;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_MAX_LENGTH;
extern PyObject *const_str_plain_SetOf;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_46;
static PyObject *const_str_plain_isModified;
extern PyObject *const_tuple_228fc95661c156d678e175c67514cfc5_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_1503b6119cd6ba88e7612e541d27eba3;
extern PyObject *const_str_plain_chunks;
static PyObject *const_str_digest_bfaf690a2e40abebc140278673baccca;
extern PyObject *const_str_plain_Sequence;
static PyObject *const_str_plain_DOT_CHAR;
extern PyObject *const_str_plain_asNumbers;
extern PyObject *const_str_plain_ord;
extern PyObject *const_str_plain_IntegerEncoder;
extern PyObject *const_int_pos_1000;
extern PyObject *const_str_plain_RealEncoder;
extern PyObject *const_str_plain_SequenceOf;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_useful;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_Boolean;
extern PyObject *const_str_plain_component;
extern PyObject *const_tuple_str_plain_encoder_tuple;
static PyObject *const_str_digest_19fe853cab7f39edb3062603d9ffa90d;
extern PyObject *const_str_plain_componentType;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_PLUS_CHAR;
extern PyObject *const_int_pos_45;
extern PyObject *const_int_pos_90;
extern PyObject *const_str_plain_namedTypes;
static PyObject *const_str_plain_maxLen;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_zero;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_digest_d3da2704c0459ae5b4ac0ce56db80c11;
extern PyObject *const_str_plain_PyAsn1Error;
static PyObject *const_str_plain_SetOfEncoder;
extern PyObject *const_str_plain_asn1Spec;
static PyObject *const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple;
extern PyObject *const_str_plain_namedType;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_int_pos_44;
extern PyObject *const_str_plain_chunk;
static PyObject *const_str_plain_compsMap;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_values;
static PyObject *const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple;
extern PyObject *const_tuple_str_plain_univ_tuple;
static PyObject *const_str_digest_f84db2b3e8455fb2b959797c6b29806c;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_BooleanEncoder;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_digest_60685fcea8bf95c3a304455958b7e27d;
static PyObject *const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8;
extern PyObject *const_str_plain_ifNotEmpty;
static PyObject *const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_substrate;
extern PyObject *const_str_plain_encoder;
extern PyObject *const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_typeId;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_searchIndex;
extern PyObject *const_str_plain_SequenceOfEncoder;
extern PyObject *const_str_plain_tagMap;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain_typeMap;
extern PyObject *const_tuple_str_plain_error_tuple;
extern PyObject *const_str_plain_isValue;
extern PyObject *const_str_plain_OctetStringEncoder;
static PyObject *const_dict_df74de0c415278735c34f202f1b014d6;
static PyObject *const_tuple_str_chr_0_tuple;
extern PyObject *const_str_plain_openType;
extern PyObject *const_int_pos_43;
extern PyObject *const_str_plain_wrapType;
extern PyObject *const_int_pos_14;
extern PyObject *const_str_plain_encodeValue;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_chr_43_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_43_tuple, 0, const_str_chr_43 ); Py_INCREF( const_str_chr_43 );
    const_str_plain_comps = UNSTREAM_STRING_ASCII( &constant_bin[ 2550219 ], 5, 1 );
    const_str_plain_comp = UNSTREAM_STRING_ASCII( &constant_bin[ 6535 ], 4, 1 );
    const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a = UNSTREAM_STRING_ASCII( &constant_bin[ 2550224 ], 28, 0 );
    const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 2, const_str_plain_asn1Spec ); Py_INCREF( const_str_plain_asn1Spec );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 3, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 4, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 5, const_str_plain_substrate ); Py_INCREF( const_str_plain_substrate );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 6, const_str_plain_comps ); Py_INCREF( const_str_plain_comps );
    const_str_plain_compsMap = UNSTREAM_STRING_ASCII( &constant_bin[ 2550252 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 7, const_str_plain_compsMap ); Py_INCREF( const_str_plain_compsMap );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 8, const_str_plain_inconsistency ); Py_INCREF( const_str_plain_inconsistency );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 9, const_str_plain_namedTypes ); Py_INCREF( const_str_plain_namedTypes );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 10, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 11, const_str_plain_component ); Py_INCREF( const_str_plain_component );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 12, const_str_plain_namedType ); Py_INCREF( const_str_plain_namedType );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 13, const_str_plain_comp ); Py_INCREF( const_str_plain_comp );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 14, const_str_plain_compType ); Py_INCREF( const_str_plain_compType );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 15, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    PyTuple_SET_ITEM( const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 16, const_str_plain_wrapType ); Py_INCREF( const_str_plain_wrapType );
    const_str_digest_b6b8af7167af33ad6201188dc064ba6b = UNSTREAM_STRING_ASCII( &constant_bin[ 2550260 ], 24, 0 );
    const_str_plain_Z_CHAR = UNSTREAM_STRING_ASCII( &constant_bin[ 136815 ], 6, 1 );
    const_str_digest_ba12f4d8091703d841ce97647c64ebaa = UNSTREAM_STRING_ASCII( &constant_bin[ 2550284 ], 30, 0 );
    const_str_plain_MINUS_CHAR = UNSTREAM_STRING_ASCII( &constant_bin[ 2550314 ], 10, 1 );
    const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, 2, const_str_plain_asn1Spec ); Py_INCREF( const_str_plain_asn1Spec );
    PyTuple_SET_ITEM( const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, 3, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, 4, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, 5, const_str_plain_substrate ); Py_INCREF( const_str_plain_substrate );
    const_tuple_str_plain_x_str_plain_maxLen_str_plain_zero_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_maxLen_str_plain_zero_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_maxLen = UNSTREAM_STRING_ASCII( &constant_bin[ 2550324 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_maxLen_str_plain_zero_tuple, 1, const_str_plain_maxLen ); Py_INCREF( const_str_plain_maxLen );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_maxLen_str_plain_zero_tuple, 2, const_str_plain_zero ); Py_INCREF( const_str_plain_zero );
    const_str_plain_COMMA_CHAR = UNSTREAM_STRING_ASCII( &constant_bin[ 2550330 ], 10, 1 );
    const_str_plain_ZERO_CHAR = UNSTREAM_STRING_ASCII( &constant_bin[ 2550340 ], 9, 1 );
    const_str_plain_GeneralizedTimeEncoder = UNSTREAM_STRING_ASCII( &constant_bin[ 2550349 ], 22, 1 );
    const_tuple_str_plain_str2octs_str_plain_null_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_str2octs_str_plain_null_tuple, 0, const_str_plain_str2octs ); Py_INCREF( const_str_plain_str2octs );
    PyTuple_SET_ITEM( const_tuple_str_plain_str2octs_str_plain_null_tuple, 1, const_str_plain_null ); Py_INCREF( const_str_plain_null );
    const_str_plain_paddedChunks = UNSTREAM_STRING_ASCII( &constant_bin[ 2550371 ], 12, 1 );
    const_str_digest_f59a53012f9f2ee140e08ee78ddf2542 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550383 ], 94, 0 );
    const_str_plain_MIN_LENGTH = UNSTREAM_STRING_ASCII( &constant_bin[ 2550477 ], 10, 1 );
    const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple, 0, const_str_plain_componentAndType ); Py_INCREF( const_str_plain_componentAndType );
    PyTuple_SET_ITEM( const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple, 1, const_str_plain_component ); Py_INCREF( const_str_plain_component );
    PyTuple_SET_ITEM( const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple, 2, const_str_plain_asn1Spec ); Py_INCREF( const_str_plain_asn1Spec );
    const_str_digest_d7634e552d516b8de4e6126d0edbe41f = UNSTREAM_STRING_ASCII( &constant_bin[ 2550487 ], 24, 0 );
    const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 2, const_str_plain_asn1Spec ); Py_INCREF( const_str_plain_asn1Spec );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 3, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 4, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 5, const_str_plain_numbers ); Py_INCREF( const_str_plain_numbers );
    const_str_plain_isModified = UNSTREAM_STRING_ASCII( &constant_bin[ 2550511 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 6, const_str_plain_isModified ); Py_INCREF( const_str_plain_isModified );
    const_str_plain_searchIndex = UNSTREAM_STRING_ASCII( &constant_bin[ 2550521 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 7, const_str_plain_searchIndex ); Py_INCREF( const_str_plain_searchIndex );
    const_str_plain_UTCTimeEncoder = UNSTREAM_STRING_ASCII( &constant_bin[ 2550532 ], 14, 1 );
    const_str_digest_5ad607bbfacb3f29d750778cb5976a68 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550546 ], 55, 0 );
    const_str_plain_TimeEncoderMixIn = UNSTREAM_STRING_ASCII( &constant_bin[ 2550224 ], 16, 1 );
    const_str_plain_MAX_LENGTH = UNSTREAM_STRING_ASCII( &constant_bin[ 2550601 ], 10, 1 );
    const_str_digest_bfaf690a2e40abebc140278673baccca = UNSTREAM_STRING_ASCII( &constant_bin[ 2550611 ], 22, 0 );
    const_str_plain_DOT_CHAR = UNSTREAM_STRING_ASCII( &constant_bin[ 2550633 ], 8, 1 );
    const_str_digest_19fe853cab7f39edb3062603d9ffa90d = UNSTREAM_STRING_ASCII( &constant_bin[ 2550641 ], 20, 0 );
    const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550661 ], 33, 0 );
    const_str_plain_PLUS_CHAR = UNSTREAM_STRING_ASCII( &constant_bin[ 2550694 ], 9, 1 );
    const_str_plain_SetOfEncoder = UNSTREAM_STRING_ASCII( &constant_bin[ 2550487 ], 12, 1 );
    const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 2, const_str_plain_asn1Spec ); Py_INCREF( const_str_plain_asn1Spec );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 3, const_str_plain_encodeFun ); Py_INCREF( const_str_plain_encodeFun );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 4, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 5, const_str_plain_chunks ); Py_INCREF( const_str_plain_chunks );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 6, const_str_plain_zero ); Py_INCREF( const_str_plain_zero );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 7, const_str_plain_maxLen ); Py_INCREF( const_str_plain_maxLen );
    PyTuple_SET_ITEM( const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 8, const_str_plain_paddedChunks ); Py_INCREF( const_str_plain_paddedChunks );
    const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_f84db2b3e8455fb2b959797c6b29806c = UNSTREAM_STRING_ASCII( &constant_bin[ 2550703 ], 35, 0 );
    const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2550738 ], 42, 0 );
    const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b = UNSTREAM_STRING_ASCII( &constant_bin[ 2550780 ], 33, 0 );
    const_dict_df74de0c415278735c34f202f1b014d6 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_df74de0c415278735c34f202f1b014d6, const_str_plain_maxChunkSize, const_int_pos_1000 );
    assert( PyDict_Size( const_dict_df74de0c415278735c34f202f1b014d6 ) == 1 );
    const_tuple_str_chr_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_0_tuple, 0, const_str_chr_0 ); Py_INCREF( const_str_chr_0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$codec$cer$encoder( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0bca0f411ec96109f21cdd0c3130a601;
static PyCodeObject *codeobj_1381bb1f72251ce4ba79ef25ccfb5cf0;
static PyCodeObject *codeobj_75f080dff604d50f16fb8192ed0b093f;
static PyCodeObject *codeobj_a09478a030821b22f3370e6bab975c67;
static PyCodeObject *codeobj_4db03e31339cd27bef3db979c2bdaeaf;
static PyCodeObject *codeobj_6e0920d90e467b00f3f0aea6a7e44c56;
static PyCodeObject *codeobj_87235b2ecaa608360252bae08fc96c40;
static PyCodeObject *codeobj_68253a283e3613cf9710ac9813a61f4d;
static PyCodeObject *codeobj_38fb13731b53527f6dbdb73705b945da;
static PyCodeObject *codeobj_c77b8101cc231f63ea7f521a426ba1f6;
static PyCodeObject *codeobj_f9935761b385136b37356e20f41271d2;
static PyCodeObject *codeobj_0eda80154ae52d13fc3fa6b74119a978;
static PyCodeObject *codeobj_6b0e50f145d664790b3e37b1f26a08be;
static PyCodeObject *codeobj_01f6f1e0213b7f70610ff1f8b1398782;
static PyCodeObject *codeobj_354e0e76c24791410ab503e899c25891;
static PyCodeObject *codeobj_9f89bd212635a60dcb033c2d3465063f;
static PyCodeObject *codeobj_045449e43e057c8c1b2062df97542538;
static PyCodeObject *codeobj_f5053b6d55f799879943a72623992643;
static PyCodeObject *codeobj_b7244ccbe945f80acf4179952abb98d6;
static PyCodeObject *codeobj_b690629138b24a2f4c85818903c7501f;
static PyCodeObject *codeobj_ac96042fc79dc4d95223f350bb0915e9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5ad607bbfacb3f29d750778cb5976a68;
    codeobj_0bca0f411ec96109f21cdd0c3130a601 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 124, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1381bb1f72251ce4ba79ef25ccfb5cf0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 126, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_75f080dff604d50f16fb8192ed0b093f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 122, const_tuple_str_plain_x_str_plain_maxLen_str_plain_zero_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a09478a030821b22f3370e6bab975c67 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9c9eaf3ab497e9bdcc69e71fc40fb4e4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4db03e31339cd27bef3db979c2bdaeaf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BooleanEncoder, 16, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6e0920d90e467b00f3f0aea6a7e44c56 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Encoder, 262, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_87235b2ecaa608360252bae08fc96c40 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GeneralizedTimeEncoder, 102, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_68253a283e3613cf9710ac9813a61f4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RealEncoder, 25, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_38fb13731b53527f6dbdb73705b945da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SequenceEncoder, 233, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c77b8101cc231f63ea7f521a426ba1f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SequenceOfEncoder, 131, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_f9935761b385136b37356e20f41271d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SetEncoder, 143, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_0eda80154ae52d13fc3fa6b74119a978 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SetOfEncoder, 112, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6b0e50f145d664790b3e37b1f26a08be = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TimeEncoderMixIn, 33, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_01f6f1e0213b7f70610ff1f8b1398782 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UTCTimeEncoder, 107, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_354e0e76c24791410ab503e899c25891 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__chooseEncBase, 26, const_tuple_b0d4cc3f8f2ad68afddf2a64959c8627_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9f89bd212635a60dcb033c2d3465063f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__componentSortKey, 144, const_tuple_b79ca9eb8741a0fa22572be833a5da75_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_045449e43e057c8c1b2062df97542538 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 132, const_tuple_228fc95661c156d678e175c67514cfc5_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_f5053b6d55f799879943a72623992643 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 113, const_tuple_ae23d1cdd4c0d91666d0f75f9277797f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_b7244ccbe945f80acf4179952abb98d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 44, const_tuple_c09303f92f9b3adfb5b42ceaf24ff12f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_b690629138b24a2f4c85818903c7501f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 17, const_tuple_ff6a7f90929fcd1ec4a6f62f969a8dd7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ac96042fc79dc4d95223f350bb0915e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encodeValue, 163, const_tuple_61b1325bd4ab38193f8963406c6927c9_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_1_encodeValue(  );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_2__chooseEncBase(  );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_3_encodeValue(  );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_4_encodeValue(  );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_4_encodeValue$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_5_encodeValue(  );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_6__componentSortKey(  );


static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_7_encodeValue(  );


// The module function definitions.
static PyObject *impl_pyasn1$codec$cer$encoder$$$function_1_encodeValue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_asn1Spec = python_pars[ 2 ];
    PyObject *par_encodeFun = python_pars[ 3 ];
    PyObject *par_options = python_pars[ 4 ];
    PyObject *var_substrate = NULL;
    struct Nuitka_FrameObject *frame_b690629138b24a2f4c85818903c7501f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b690629138b24a2f4c85818903c7501f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b690629138b24a2f4c85818903c7501f, codeobj_b690629138b24a2f4c85818903c7501f, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b690629138b24a2f4c85818903c7501f = cache_frame_b690629138b24a2f4c85818903c7501f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b690629138b24a2f4c85818903c7501f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b690629138b24a2f4c85818903c7501f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_value );
        tmp_compexpr_left_1 = par_value;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oooooo";
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
            tmp_assign_source_1 = const_tuple_int_0_tuple;
            assert( var_substrate == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_substrate = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_tuple_int_pos_255_tuple;
            assert( var_substrate == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_substrate = tmp_assign_source_2;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b690629138b24a2f4c85818903c7501f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b690629138b24a2f4c85818903c7501f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b690629138b24a2f4c85818903c7501f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b690629138b24a2f4c85818903c7501f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b690629138b24a2f4c85818903c7501f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b690629138b24a2f4c85818903c7501f,
        type_description_1,
        par_self,
        par_value,
        par_asn1Spec,
        par_encodeFun,
        par_options,
        var_substrate
    );


    // Release cached frame.
    if ( frame_b690629138b24a2f4c85818903c7501f == cache_frame_b690629138b24a2f4c85818903c7501f )
    {
        Py_DECREF( frame_b690629138b24a2f4c85818903c7501f );
    }
    cache_frame_b690629138b24a2f4c85818903c7501f = NULL;

    assertFrameObject( frame_b690629138b24a2f4c85818903c7501f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_substrate );
        tmp_tuple_element_1 = var_substrate;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_1_encodeValue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_substrate );
    Py_DECREF( var_substrate );
    var_substrate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_1_encodeValue );
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function_2__chooseEncBase( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *var_m = NULL;
    PyObject *var_b = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_354e0e76c24791410ab503e899c25891;
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
    static struct Nuitka_FrameObject *cache_frame_354e0e76c24791410ab503e899c25891 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_354e0e76c24791410ab503e899c25891, codeobj_354e0e76c24791410ab503e899c25891, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_354e0e76c24791410ab503e899c25891 = cache_frame_354e0e76c24791410ab503e899c25891;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_354e0e76c24791410ab503e899c25891 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_354e0e76c24791410ab503e899c25891 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_value );
        tmp_iter_arg_1 = par_value;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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
            exception_lineno = 27;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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
            exception_lineno = 27;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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
            exception_lineno = 27;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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
                    exception_lineno = 27;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooo";
            exception_lineno = 27;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_m = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_b == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_b = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_e == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_e = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_1 = var_m;
        CHECK_OBJECT( var_b );
        tmp_args_element_name_2 = var_b;
        CHECK_OBJECT( var_e );
        tmp_args_element_name_3 = var_e;
        frame_354e0e76c24791410ab503e899c25891->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain__dropFloatingPoint, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_354e0e76c24791410ab503e899c25891 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_354e0e76c24791410ab503e899c25891 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_354e0e76c24791410ab503e899c25891 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_354e0e76c24791410ab503e899c25891, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_354e0e76c24791410ab503e899c25891->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_354e0e76c24791410ab503e899c25891, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_354e0e76c24791410ab503e899c25891,
        type_description_1,
        par_self,
        par_value,
        var_m,
        var_b,
        var_e
    );


    // Release cached frame.
    if ( frame_354e0e76c24791410ab503e899c25891 == cache_frame_354e0e76c24791410ab503e899c25891 )
    {
        Py_DECREF( frame_354e0e76c24791410ab503e899c25891 );
    }
    cache_frame_354e0e76c24791410ab503e899c25891 = NULL;

    assertFrameObject( frame_354e0e76c24791410ab503e899c25891 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_2__chooseEncBase );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_b );
    Py_DECREF( var_b );
    var_b = NULL;

    CHECK_OBJECT( (PyObject *)var_e );
    Py_DECREF( var_e );
    var_e = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_2__chooseEncBase );
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function_3_encodeValue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_asn1Spec = python_pars[ 2 ];
    PyObject *par_encodeFun = python_pars[ 3 ];
    PyObject *par_options = python_pars[ 4 ];
    PyObject *var_numbers = NULL;
    PyObject *var_isModified = NULL;
    PyObject *var_searchIndex = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_b7244ccbe945f80acf4179952abb98d6;
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
    static struct Nuitka_FrameObject *cache_frame_b7244ccbe945f80acf4179952abb98d6 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7244ccbe945f80acf4179952abb98d6, codeobj_b7244ccbe945f80acf4179952abb98d6, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b7244ccbe945f80acf4179952abb98d6 = cache_frame_b7244ccbe945f80acf4179952abb98d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7244ccbe945f80acf4179952abb98d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7244ccbe945f80acf4179952abb98d6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_asn1Spec );
        tmp_compexpr_left_1 = par_asn1Spec;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_asn1Spec );
            tmp_called_instance_1 = par_asn1Spec;
            CHECK_OBJECT( par_value );
            tmp_args_element_name_1 = par_value;
            frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_clone, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_value;
                assert( old != NULL );
                par_value = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_value );
        tmp_called_instance_2 = par_value;
        frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 55;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_asNumbers );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_numbers == NULL );
        var_numbers = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PLUS_CHAR );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_numbers );
        tmp_compexpr_right_2 = var_numbers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MINUS_CHAR );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_numbers );
        tmp_compexpr_right_3 = var_numbers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_PyAsn1Error );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = const_str_digest_19fe853cab7f39edb3062603d9ffa90d;
            CHECK_OBJECT( par_value );
            tmp_right_name_1 = par_value;
            tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 58;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 58;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_numbers );
        tmp_subscribed_name_1 = var_numbers;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Z_CHAR );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 60;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PyAsn1Error );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_str_digest_f84db2b3e8455fb2b959797c6b29806c;
            CHECK_OBJECT( par_value );
            tmp_right_name_2 = par_value;
            tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 61;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 61;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_COMMA_CHAR );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_numbers );
        tmp_compexpr_right_5 = var_numbers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_PyAsn1Error );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_3 = const_str_digest_4b61e25eb3e6fd083748d0b7230ffc7b;
            CHECK_OBJECT( par_value );
            tmp_right_name_3 = par_value;
            tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 64;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 64;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_DOT_CHAR );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_numbers );
        tmp_compexpr_right_6 = var_numbers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = Py_False;
            assert( var_isModified == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_isModified = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_list_arg_1;
            CHECK_OBJECT( var_numbers );
            tmp_list_arg_1 = var_numbers;
            tmp_assign_source_4 = PySequence_List( tmp_list_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_numbers;
                assert( old != NULL );
                var_numbers = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_10;
            PyObject *tmp_right_name_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_left_name_5;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_right_name_5;
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_4 != NULL );
            CHECK_OBJECT( var_numbers );
            tmp_source_name_9 = var_numbers;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_index );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_DOT_CHAR );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_4;
            tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_numbers );
            tmp_len_arg_1 = var_numbers;
            tmp_left_name_5 = BUILTIN_LEN( tmp_len_arg_1 );
            assert( !(tmp_left_name_5 == NULL) );
            tmp_right_name_5 = const_int_pos_1;
            tmp_args_element_name_7 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            assert( !(tmp_args_element_name_7 == NULL) );
            frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_7 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_searchIndex == NULL );
            var_searchIndex = tmp_assign_source_5;
        }
        loop_start_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( var_numbers );
            tmp_subscribed_name_2 = var_numbers;
            CHECK_OBJECT( var_searchIndex );
            tmp_subscript_name_2 = var_searchIndex;
            tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_DOT_CHAR );
            if ( tmp_compexpr_right_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_7 );

                exception_lineno = 74;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            Py_DECREF( tmp_compexpr_right_7 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            goto loop_end_1;
            branch_no_6:;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( var_numbers );
            tmp_subscribed_name_3 = var_numbers;
            CHECK_OBJECT( var_searchIndex );
            tmp_subscript_name_3 = var_searchIndex;
            tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ZERO_CHAR );
            if ( tmp_compexpr_right_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_8 );

                exception_lineno = 75;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            Py_DECREF( tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 75;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_delsubscr_target_1;
                PyObject *tmp_delsubscr_subscript_1;
                CHECK_OBJECT( var_numbers );
                tmp_delsubscr_target_1 = var_numbers;
                CHECK_OBJECT( var_searchIndex );
                tmp_delsubscr_subscript_1 = var_searchIndex;
                tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_6;
                tmp_assign_source_6 = Py_True;
                {
                    PyObject *old = var_isModified;
                    var_isModified = tmp_assign_source_6;
                    Py_INCREF( var_isModified );
                    Py_XDECREF( old );
                }

            }
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_searchIndex );
            tmp_left_name_6 = var_searchIndex;
            tmp_right_name_6 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_6;
            var_searchIndex = tmp_assign_source_7;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_1;
        loop_end_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( var_searchIndex );
            tmp_left_name_7 = var_searchIndex;
            tmp_right_name_7 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_7;
            var_searchIndex = tmp_assign_source_8;

        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( var_searchIndex );
            tmp_compexpr_left_9 = var_searchIndex;
            CHECK_OBJECT( var_numbers );
            tmp_len_arg_2 = var_numbers;
            tmp_compexpr_right_9 = BUILTIN_LEN( tmp_len_arg_2 );
            assert( !(tmp_compexpr_right_9 == NULL) );
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_source_name_13;
                CHECK_OBJECT( var_numbers );
                tmp_subscribed_name_4 = var_numbers;
                CHECK_OBJECT( var_searchIndex );
                tmp_subscript_name_4 = var_searchIndex;
                tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                if ( tmp_compexpr_left_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 84;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_13 = par_self;
                tmp_compexpr_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Z_CHAR );
                if ( tmp_compexpr_right_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_10 );

                    exception_lineno = 84;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                Py_DECREF( tmp_compexpr_left_10 );
                Py_DECREF( tmp_compexpr_right_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 84;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
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
                    PyObject *tmp_delsubscr_target_2;
                    PyObject *tmp_delsubscr_subscript_2;
                    PyObject *tmp_left_name_8;
                    PyObject *tmp_right_name_8;
                    CHECK_OBJECT( var_numbers );
                    tmp_delsubscr_target_2 = var_numbers;
                    CHECK_OBJECT( var_searchIndex );
                    tmp_left_name_8 = var_searchIndex;
                    tmp_right_name_8 = const_int_pos_1;
                    tmp_delsubscr_subscript_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
                    if ( tmp_delsubscr_subscript_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 86;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_2, tmp_delsubscr_subscript_2 );
                    Py_DECREF( tmp_delsubscr_subscript_2 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 86;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    PyObject *tmp_assign_source_9;
                    tmp_assign_source_9 = Py_True;
                    {
                        PyObject *old = var_isModified;
                        var_isModified = tmp_assign_source_9;
                        Py_INCREF( var_isModified );
                        Py_XDECREF( old );
                    }

                }
                branch_no_9:;
            }
            branch_no_8:;
        }
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_truth_name_1;
            if ( var_isModified == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "isModified" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 89;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_1 = CHECK_IF_TRUE( var_isModified );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_10 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_8;
                CHECK_OBJECT( par_value );
                tmp_called_instance_3 = par_value;
                CHECK_OBJECT( var_numbers );
                tmp_args_element_name_8 = var_numbers;
                frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 90;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_clone, call_args );
                }

                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_value;
                    assert( old != NULL );
                    par_value = tmp_assign_source_10;
                    Py_DECREF( old );
                }

            }
            branch_no_10:;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_len_arg_3;
            CHECK_OBJECT( var_numbers );
            tmp_len_arg_3 = var_numbers;
            tmp_assign_source_11 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_comparison_chain_1__operand_2 == NULL );
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_compexpr_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_MIN_LENGTH );
            if ( tmp_compexpr_left_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_right_11 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_12 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            Py_DECREF( tmp_compexpr_left_11 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_comparison_chain_1__comparison_result == NULL );
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_3;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_3 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF( tmp_operand_name_2 );
            goto try_return_handler_2;
            branch_no_12:;
        }
        {
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_left_12 = tmp_comparison_chain_1__operand_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_compexpr_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_MAX_LENGTH );
            if ( tmp_compexpr_right_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_operand_name_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            Py_DECREF( tmp_compexpr_right_12 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_3_encodeValue );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
        Py_DECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
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

        Py_XDECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_3_encodeValue );
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 93;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_4;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_PyAsn1Error );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_9 = const_str_digest_ba12f4d8091703d841ce97647c64ebaa;
            if ( par_value == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 93;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_9 = par_value;
            tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 93;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_raise_type_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_4;
            exception_lineno = 93;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_11:;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_17;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_options );
        tmp_source_name_17 = par_options;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_update );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_df74de0c415278735c34f202f1b014d6 );
        frame_b7244ccbe945f80acf4179952abb98d6->m_frame.f_lineno = 95;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_5;
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_OctetStringEncoder );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_encodeValue );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( par_value == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_value;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_asn1Spec );
        tmp_tuple_element_1 = par_asn1Spec;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_encodeFun );
        tmp_tuple_element_1 = par_encodeFun;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_options );
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_7_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7244ccbe945f80acf4179952abb98d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7244ccbe945f80acf4179952abb98d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7244ccbe945f80acf4179952abb98d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7244ccbe945f80acf4179952abb98d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7244ccbe945f80acf4179952abb98d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7244ccbe945f80acf4179952abb98d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7244ccbe945f80acf4179952abb98d6,
        type_description_1,
        par_self,
        par_value,
        par_asn1Spec,
        par_encodeFun,
        par_options,
        var_numbers,
        var_isModified,
        var_searchIndex
    );


    // Release cached frame.
    if ( frame_b7244ccbe945f80acf4179952abb98d6 == cache_frame_b7244ccbe945f80acf4179952abb98d6 )
    {
        Py_DECREF( frame_b7244ccbe945f80acf4179952abb98d6 );
    }
    cache_frame_b7244ccbe945f80acf4179952abb98d6 = NULL;

    assertFrameObject( frame_b7244ccbe945f80acf4179952abb98d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_3_encodeValue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_numbers );
    Py_DECREF( var_numbers );
    var_numbers = NULL;

    Py_XDECREF( var_isModified );
    var_isModified = NULL;

    Py_XDECREF( var_searchIndex );
    var_searchIndex = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_numbers );
    var_numbers = NULL;

    Py_XDECREF( var_isModified );
    var_isModified = NULL;

    Py_XDECREF( var_searchIndex );
    var_searchIndex = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_3_encodeValue );
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function_4_encodeValue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_asn1Spec = python_pars[ 2 ];
    PyObject *par_encodeFun = python_pars[ 3 ];
    PyObject *par_options = python_pars[ 4 ];
    PyObject *var_chunks = NULL;
    PyObject *var_zero = NULL;
    PyObject *var_maxLen = NULL;
    PyObject *var_paddedChunks = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f5053b6d55f799879943a72623992643;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_75f080dff604d50f16fb8192ed0b093f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_75f080dff604d50f16fb8192ed0b093f_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f5053b6d55f799879943a72623992643 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f5053b6d55f799879943a72623992643, codeobj_f5053b6d55f799879943a72623992643, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f5053b6d55f799879943a72623992643 = cache_frame_f5053b6d55f799879943a72623992643;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f5053b6d55f799879943a72623992643 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f5053b6d55f799879943a72623992643 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__encodeComponents );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_value );
        tmp_tuple_element_1 = par_value;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_asn1Spec );
        tmp_tuple_element_1 = par_asn1Spec;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_encodeFun );
        tmp_tuple_element_1 = par_encodeFun;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_options );
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_7_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_chunks == NULL );
        var_chunks = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_chunks );
        tmp_len_arg_1 = var_chunks;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str2octs );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str2octs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_f5053b6d55f799879943a72623992643->m_frame.f_lineno = 119;
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_zero == NULL );
            var_zero = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_2 != NULL );
            tmp_called_name_3 = (PyObject *)&PyMap_Type;
            tmp_args_element_name_2 = LOOKUP_BUILTIN( const_str_plain_len );
            assert( tmp_args_element_name_2 != NULL );
            CHECK_OBJECT( var_chunks );
            tmp_args_element_name_3 = var_chunks;
            frame_f5053b6d55f799879943a72623992643->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_f5053b6d55f799879943a72623992643->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_maxLen == NULL );
            var_maxLen = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            // Tried code:
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( var_chunks );
                tmp_iter_arg_1 = var_chunks;
                tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_5;
            }
            {
                PyObject *tmp_assign_source_6;
                tmp_assign_source_6 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_6;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_75f080dff604d50f16fb8192ed0b093f_2, codeobj_75f080dff604d50f16fb8192ed0b093f, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *) );
            frame_75f080dff604d50f16fb8192ed0b093f_2 = cache_frame_75f080dff604d50f16fb8192ed0b093f_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_75f080dff604d50f16fb8192ed0b093f_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_75f080dff604d50f16fb8192ed0b093f_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "ooo";
                        exception_lineno = 122;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_x;
                    outline_0_var_x = tmp_assign_source_8;
                    Py_INCREF( outline_0_var_x );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_x );
                tmp_called_instance_1 = outline_0_var_x;
                CHECK_OBJECT( var_maxLen );
                tmp_args_element_name_4 = var_maxLen;
                CHECK_OBJECT( var_zero );
                tmp_args_element_name_5 = var_zero;
                frame_75f080dff604d50f16fb8192ed0b093f_2->m_frame.f_lineno = 122;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_ljust, call_args );
                }

                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_append_value_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( outline_0_var_x );
                tmp_tuple_element_2 = outline_0_var_x;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_2 );
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_2 = "ooo";
                    goto try_except_handler_3;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_2 = "ooo";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_4 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_4 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
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
            RESTORE_FRAME_EXCEPTION( frame_75f080dff604d50f16fb8192ed0b093f_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_75f080dff604d50f16fb8192ed0b093f_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_75f080dff604d50f16fb8192ed0b093f_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_75f080dff604d50f16fb8192ed0b093f_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_75f080dff604d50f16fb8192ed0b093f_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_75f080dff604d50f16fb8192ed0b093f_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_75f080dff604d50f16fb8192ed0b093f_2,
                type_description_2,
                outline_0_var_x,
                var_maxLen,
                var_zero
            );


            // Release cached frame.
            if ( frame_75f080dff604d50f16fb8192ed0b093f_2 == cache_frame_75f080dff604d50f16fb8192ed0b093f_2 )
            {
                Py_DECREF( frame_75f080dff604d50f16fb8192ed0b093f_2 );
            }
            cache_frame_75f080dff604d50f16fb8192ed0b093f_2 = NULL;

            assertFrameObject( frame_75f080dff604d50f16fb8192ed0b093f_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

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

            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
            return NULL;
            outline_exception_1:;
            exception_lineno = 122;
            goto frame_exception_exit_1;
            outline_result_1:;
            assert( var_paddedChunks == NULL );
            var_paddedChunks = tmp_assign_source_4;
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            CHECK_OBJECT( var_paddedChunks );
            tmp_source_name_2 = var_paddedChunks;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sort );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_key;
            tmp_dict_value_1 = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_4_encodeValue$$$function_1_lambda(  );



            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_f5053b6d55f799879943a72623992643->m_frame.f_lineno = 124;
            tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_9;
            // Tried code:
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( var_paddedChunks );
                tmp_iter_arg_2 = var_paddedChunks;
                tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_listcomp_2__$0 == NULL );
                tmp_listcomp_2__$0 = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = PyList_New( 0 );
                assert( tmp_listcomp_2__contraction == NULL );
                tmp_listcomp_2__contraction = tmp_assign_source_11;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3, codeobj_1381bb1f72251ce4ba79ef25ccfb5cf0, module_pyasn1$codec$cer$encoder, sizeof(void *) );
            frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 = cache_frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_listcomp_2__$0 );
                tmp_next_source_2 = tmp_listcomp_2__$0;
                tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_12 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 126;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_2__iter_value_0;
                    tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
                tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
                {
                    PyObject *old = outline_1_var_x;
                    outline_1_var_x = tmp_assign_source_13;
                    Py_INCREF( outline_1_var_x );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_append_list_2 = tmp_listcomp_2__contraction;
                CHECK_OBJECT( outline_1_var_x );
                tmp_subscribed_name_1 = outline_1_var_x;
                tmp_subscript_name_1 = const_int_pos_1;
                tmp_append_value_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
                if ( tmp_append_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                Py_DECREF( tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_assign_source_9 = tmp_listcomp_2__contraction;
            Py_INCREF( tmp_assign_source_9 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
            Py_DECREF( tmp_listcomp_2__$0 );
            tmp_listcomp_2__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
            Py_DECREF( tmp_listcomp_2__contraction );
            tmp_listcomp_2__contraction = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_0 );
            tmp_listcomp_2__iter_value_0 = NULL;

            goto frame_return_exit_3;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
            Py_DECREF( tmp_listcomp_2__$0 );
            tmp_listcomp_2__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
            Py_DECREF( tmp_listcomp_2__contraction );
            tmp_listcomp_2__contraction = NULL;

            Py_XDECREF( tmp_listcomp_2__iter_value_0 );
            tmp_listcomp_2__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_4;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3,
                type_description_2,
                outline_1_var_x
            );


            // Release cached frame.
            if ( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 == cache_frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 )
            {
                Py_DECREF( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 );
            }
            cache_frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 = NULL;

            assertFrameObject( frame_1381bb1f72251ce4ba79ef25ccfb5cf0_3 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_2:;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
            skip_nested_handling_2:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            Py_XDECREF( outline_1_var_x );
            outline_1_var_x = NULL;

            goto outline_result_2;
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

            Py_XDECREF( outline_1_var_x );
            outline_1_var_x = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
            return NULL;
            outline_exception_2:;
            exception_lineno = 126;
            goto frame_exception_exit_1;
            outline_result_2:;
            {
                PyObject *old = var_chunks;
                assert( old != NULL );
                var_chunks = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_chunks );
        tmp_args_element_name_6 = var_chunks;
        frame_f5053b6d55f799879943a72623992643->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_tuple_element_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
        }

        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_True;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_True;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5053b6d55f799879943a72623992643 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5053b6d55f799879943a72623992643 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5053b6d55f799879943a72623992643 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5053b6d55f799879943a72623992643, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5053b6d55f799879943a72623992643->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5053b6d55f799879943a72623992643, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5053b6d55f799879943a72623992643,
        type_description_1,
        par_self,
        par_value,
        par_asn1Spec,
        par_encodeFun,
        par_options,
        var_chunks,
        var_zero,
        var_maxLen,
        var_paddedChunks
    );


    // Release cached frame.
    if ( frame_f5053b6d55f799879943a72623992643 == cache_frame_f5053b6d55f799879943a72623992643 )
    {
        Py_DECREF( frame_f5053b6d55f799879943a72623992643 );
    }
    cache_frame_f5053b6d55f799879943a72623992643 = NULL;

    assertFrameObject( frame_f5053b6d55f799879943a72623992643 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_chunks );
    Py_DECREF( var_chunks );
    var_chunks = NULL;

    Py_XDECREF( var_zero );
    var_zero = NULL;

    Py_XDECREF( var_maxLen );
    var_maxLen = NULL;

    Py_XDECREF( var_paddedChunks );
    var_paddedChunks = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    Py_XDECREF( var_zero );
    var_zero = NULL;

    Py_XDECREF( var_maxLen );
    var_maxLen = NULL;

    Py_XDECREF( var_paddedChunks );
    var_paddedChunks = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue );
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function_4_encodeValue$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0bca0f411ec96109f21cdd0c3130a601;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0bca0f411ec96109f21cdd0c3130a601 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0bca0f411ec96109f21cdd0c3130a601, codeobj_0bca0f411ec96109f21cdd0c3130a601, module_pyasn1$codec$cer$encoder, sizeof(void *) );
    frame_0bca0f411ec96109f21cdd0c3130a601 = cache_frame_0bca0f411ec96109f21cdd0c3130a601;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0bca0f411ec96109f21cdd0c3130a601 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0bca0f411ec96109f21cdd0c3130a601 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_1 = par_x;
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bca0f411ec96109f21cdd0c3130a601 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bca0f411ec96109f21cdd0c3130a601 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bca0f411ec96109f21cdd0c3130a601 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0bca0f411ec96109f21cdd0c3130a601, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0bca0f411ec96109f21cdd0c3130a601->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0bca0f411ec96109f21cdd0c3130a601, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0bca0f411ec96109f21cdd0c3130a601,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_0bca0f411ec96109f21cdd0c3130a601 == cache_frame_0bca0f411ec96109f21cdd0c3130a601 )
    {
        Py_DECREF( frame_0bca0f411ec96109f21cdd0c3130a601 );
    }
    cache_frame_0bca0f411ec96109f21cdd0c3130a601 = NULL;

    assertFrameObject( frame_0bca0f411ec96109f21cdd0c3130a601 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_4_encodeValue$$$function_1_lambda );
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function_5_encodeValue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_asn1Spec = python_pars[ 2 ];
    PyObject *par_encodeFun = python_pars[ 3 ];
    PyObject *par_options = python_pars[ 4 ];
    PyObject *var_chunks = NULL;
    struct Nuitka_FrameObject *frame_045449e43e057c8c1b2062df97542538;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_045449e43e057c8c1b2062df97542538 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_045449e43e057c8c1b2062df97542538, codeobj_045449e43e057c8c1b2062df97542538, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_045449e43e057c8c1b2062df97542538 = cache_frame_045449e43e057c8c1b2062df97542538;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_045449e43e057c8c1b2062df97542538 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_045449e43e057c8c1b2062df97542538 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_options );
        tmp_called_instance_1 = par_options;
        frame_045449e43e057c8c1b2062df97542538->m_frame.f_lineno = 134;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_ifNotEmpty_false_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        CHECK_OBJECT( par_value );
        tmp_len_arg_1 = par_value;
        tmp_operand_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 135;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_1;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = Py_True;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            tmp_tuple_element_1 = Py_True;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__encodeComponents );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_value );
        tmp_tuple_element_2 = par_value;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_asn1Spec );
        tmp_tuple_element_2 = par_asn1Spec;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_encodeFun );
        tmp_tuple_element_2 = par_encodeFun;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( par_options );
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_7_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_chunks == NULL );
        var_chunks = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_chunks );
        tmp_args_element_name_1 = var_chunks;
        frame_045449e43e057c8c1b2062df97542538->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
        }

        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_True;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_True;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_045449e43e057c8c1b2062df97542538 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_045449e43e057c8c1b2062df97542538 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_045449e43e057c8c1b2062df97542538 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_045449e43e057c8c1b2062df97542538, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_045449e43e057c8c1b2062df97542538->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_045449e43e057c8c1b2062df97542538, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_045449e43e057c8c1b2062df97542538,
        type_description_1,
        par_self,
        par_value,
        par_asn1Spec,
        par_encodeFun,
        par_options,
        var_chunks
    );


    // Release cached frame.
    if ( frame_045449e43e057c8c1b2062df97542538 == cache_frame_045449e43e057c8c1b2062df97542538 )
    {
        Py_DECREF( frame_045449e43e057c8c1b2062df97542538 );
    }
    cache_frame_045449e43e057c8c1b2062df97542538 = NULL;

    assertFrameObject( frame_045449e43e057c8c1b2062df97542538 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_5_encodeValue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_chunks );
    var_chunks = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_5_encodeValue );
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function_6__componentSortKey( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_componentAndType = python_pars[ 0 ];
    PyObject *var_component = NULL;
    PyObject *var_asn1Spec = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9f89bd212635a60dcb033c2d3465063f;
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
    static struct Nuitka_FrameObject *cache_frame_9f89bd212635a60dcb033c2d3465063f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f89bd212635a60dcb033c2d3465063f, codeobj_9f89bd212635a60dcb033c2d3465063f, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9f89bd212635a60dcb033c2d3465063f = cache_frame_9f89bd212635a60dcb033c2d3465063f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f89bd212635a60dcb033c2d3465063f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f89bd212635a60dcb033c2d3465063f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_componentAndType );
        tmp_iter_arg_1 = par_componentAndType;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
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


            type_description_1 = "ooo";
            exception_lineno = 150;
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


            type_description_1 = "ooo";
            exception_lineno = 150;
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

                    type_description_1 = "ooo";
                    exception_lineno = 150;
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

            type_description_1 = "ooo";
            exception_lineno = 150;
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
        assert( var_component == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_component = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_asn1Spec == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_asn1Spec = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_asn1Spec );
        tmp_compexpr_left_1 = var_asn1Spec;
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( var_component );
            tmp_assign_source_6 = var_component;
            {
                PyObject *old = var_asn1Spec;
                assert( old != NULL );
                var_asn1Spec = tmp_assign_source_6;
                Py_INCREF( var_asn1Spec );
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
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_asn1Spec );
        tmp_source_name_1 = var_asn1Spec;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_typeId );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Choice );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( var_asn1Spec );
        tmp_source_name_4 = var_asn1Spec;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_tagSet );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooo";
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
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_asn1Spec );
            tmp_source_name_5 = var_asn1Spec;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tagSet );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 156;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 156;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
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
                PyObject *tmp_source_name_6;
                CHECK_OBJECT( var_asn1Spec );
                tmp_source_name_6 = var_asn1Spec;
                tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tagSet );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 157;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT( var_asn1Spec );
                tmp_source_name_8 = var_asn1Spec;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_componentType );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 159;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_minTagSet );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 159;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( var_asn1Spec );
            tmp_source_name_9 = var_asn1Spec;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_tagSet );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f89bd212635a60dcb033c2d3465063f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f89bd212635a60dcb033c2d3465063f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f89bd212635a60dcb033c2d3465063f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f89bd212635a60dcb033c2d3465063f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f89bd212635a60dcb033c2d3465063f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f89bd212635a60dcb033c2d3465063f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f89bd212635a60dcb033c2d3465063f,
        type_description_1,
        par_componentAndType,
        var_component,
        var_asn1Spec
    );


    // Release cached frame.
    if ( frame_9f89bd212635a60dcb033c2d3465063f == cache_frame_9f89bd212635a60dcb033c2d3465063f )
    {
        Py_DECREF( frame_9f89bd212635a60dcb033c2d3465063f );
    }
    cache_frame_9f89bd212635a60dcb033c2d3465063f = NULL;

    assertFrameObject( frame_9f89bd212635a60dcb033c2d3465063f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_6__componentSortKey );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_componentAndType );
    Py_DECREF( par_componentAndType );
    par_componentAndType = NULL;

    CHECK_OBJECT( (PyObject *)var_component );
    Py_DECREF( var_component );
    var_component = NULL;

    CHECK_OBJECT( (PyObject *)var_asn1Spec );
    Py_DECREF( var_asn1Spec );
    var_asn1Spec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_componentAndType );
    Py_DECREF( par_componentAndType );
    par_componentAndType = NULL;

    Py_XDECREF( var_component );
    var_component = NULL;

    Py_XDECREF( var_asn1Spec );
    var_asn1Spec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_6__componentSortKey );
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


static PyObject *impl_pyasn1$codec$cer$encoder$$$function_7_encodeValue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_asn1Spec = python_pars[ 2 ];
    PyObject *par_encodeFun = python_pars[ 3 ];
    PyObject *par_options = python_pars[ 4 ];
    PyObject *var_substrate = NULL;
    PyObject *var_comps = NULL;
    PyObject *var_compsMap = NULL;
    PyObject *var_inconsistency = NULL;
    PyObject *var_namedTypes = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_component = NULL;
    PyObject *var_namedType = NULL;
    PyObject *var_comp = NULL;
    PyObject *var_compType = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_wrapType = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ac96042fc79dc4d95223f350bb0915e9;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_ac96042fc79dc4d95223f350bb0915e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ac96042fc79dc4d95223f350bb0915e9, codeobj_ac96042fc79dc4d95223f350bb0915e9, module_pyasn1$codec$cer$encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ac96042fc79dc4d95223f350bb0915e9 = cache_frame_ac96042fc79dc4d95223f350bb0915e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ac96042fc79dc4d95223f350bb0915e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ac96042fc79dc4d95223f350bb0915e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_1 = tmp_mvar_value_1;
        assert( var_substrate == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_substrate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( var_comps == NULL );
        var_comps = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert( var_compsMap == NULL );
        var_compsMap = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_asn1Spec );
        tmp_compexpr_left_1 = par_asn1Spec;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_value );
            tmp_source_name_1 = par_value;
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isInconsistent );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_inconsistency == NULL );
            var_inconsistency = tmp_assign_source_4;
        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_inconsistency );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_inconsistency );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( var_inconsistency );
                tmp_raise_type_1 = var_inconsistency;
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_lineno = 174;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_value );
            tmp_source_name_2 = par_value;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_componentType );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_namedTypes == NULL );
            var_namedTypes = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            tmp_called_name_1 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT( par_value );
            tmp_called_instance_1 = par_value;
            frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 178;
            tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooooooooooooo";
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
                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 178;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_7;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
            tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__source_iter;
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 178;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_1;
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_10 == NULL )
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


                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 178;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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

                        type_description_1 = "ooooooooooooooooo";
                        exception_lineno = 178;
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

                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 178;
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
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_idx;
                var_idx = tmp_assign_source_11;
                Py_INCREF( var_idx );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_component;
                var_component = tmp_assign_source_12;
                Py_INCREF( var_component );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_namedTypes );
            tmp_truth_name_2 = CHECK_IF_TRUE( var_namedTypes );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( var_namedTypes );
                tmp_subscribed_name_1 = var_namedTypes;
                CHECK_OBJECT( var_idx );
                tmp_subscript_name_1 = var_idx;
                tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_namedType;
                    var_namedType = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_4;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_attribute_value_1;
                int tmp_truth_name_3;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( var_namedType );
                tmp_source_name_3 = var_namedType;
                tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_isOptional );
                if ( tmp_attribute_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_1 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_attribute_value_1 );

                    exception_lineno = 182;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_and_left_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_attribute_value_1 );
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
                CHECK_OBJECT( var_component );
                tmp_source_name_4 = var_component;
                tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_isValue );
                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_4 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_4 = tmp_and_left_value_1;
                and_end_1:;
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_4;
                }
                else
                {
                    goto branch_no_4;
                }
                branch_yes_4:;
                goto loop_start_1;
                branch_no_4:;
            }
            {
                nuitka_bool tmp_condition_result_5;
                int tmp_and_left_truth_2;
                nuitka_bool tmp_and_left_value_2;
                nuitka_bool tmp_and_right_value_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_attribute_value_2;
                int tmp_truth_name_4;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_source_name_6;
                CHECK_OBJECT( var_namedType );
                tmp_source_name_5 = var_namedType;
                tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_isDefaulted );
                if ( tmp_attribute_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 185;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_attribute_value_2 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_attribute_value_2 );

                    exception_lineno = 185;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_and_left_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_attribute_value_2 );
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
                CHECK_OBJECT( var_component );
                tmp_compexpr_left_2 = var_component;
                CHECK_OBJECT( var_namedType );
                tmp_source_name_6 = var_namedType;
                tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_asn1Object );
                if ( tmp_compexpr_right_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 185;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                Py_DECREF( tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 185;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_5 = tmp_and_right_value_2;
                goto and_end_2;
                and_left_2:;
                tmp_condition_result_5 = tmp_and_left_value_2;
                and_end_2:;
                if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_5;
                }
                else
                {
                    goto branch_no_5;
                }
                branch_yes_5:;
                goto loop_start_1;
                branch_no_5:;
            }
            {
                PyObject *tmp_id_arg_1;
                CHECK_OBJECT( var_namedType );
                tmp_dictset_value = var_namedType;
                CHECK_OBJECT( var_compsMap );
                tmp_dictset_dict = var_compsMap;
                CHECK_OBJECT( var_component );
                tmp_id_arg_1 = var_component;
                tmp_dictset_key = PyLong_FromVoidPtr( tmp_id_arg_1 );
                assert( !(tmp_dictset_key == NULL) );
                tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                Py_DECREF( tmp_dictset_key );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 188;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_id_arg_2;
                tmp_dictset_value = Py_None;
                CHECK_OBJECT( var_compsMap );
                tmp_dictset_dict = var_compsMap;
                CHECK_OBJECT( var_component );
                tmp_id_arg_2 = var_component;
                tmp_dictset_key = PyLong_FromVoidPtr( tmp_id_arg_2 );
                assert( !(tmp_dictset_key == NULL) );
                tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                Py_DECREF( tmp_dictset_key );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 191;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_2;
                }
            }
            branch_end_3:;
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_comps );
            tmp_called_instance_2 = var_comps;
            CHECK_OBJECT( var_component );
            tmp_tuple_element_1 = var_component;
            tmp_args_element_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_asn1Spec );
            tmp_tuple_element_1 = par_asn1Spec;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
            frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 193;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooo";
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            tmp_called_name_2 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT( par_asn1Spec );
            tmp_source_name_8 = par_asn1Spec;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_componentType );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_namedTypes );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 197;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_14;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 197;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
            tmp_assign_source_16 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
            if ( tmp_assign_source_17 == NULL )
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


                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 197;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
            if ( tmp_assign_source_18 == NULL )
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


                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 197;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                        type_description_1 = "ooooooooooooooooo";
                        exception_lineno = 197;
                        goto try_except_handler_7;
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

                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 197;
                goto try_except_handler_7;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_4:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_idx;
                var_idx = tmp_assign_source_19;
                Py_INCREF( var_idx );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_namedType;
                var_namedType = tmp_assign_source_20;
                Py_INCREF( var_namedType );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_value );
            tmp_subscribed_name_2 = par_value;
            CHECK_OBJECT( var_namedType );
            tmp_source_name_9 = var_namedType;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_name );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_component;
                var_component = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
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

        if ( exception_keeper_tb_6 == NULL )
        {
            exception_keeper_tb_6 = MAKE_TRACEBACK( frame_ac96042fc79dc4d95223f350bb0915e9, exception_keeper_lineno_6 );
        }
        else if ( exception_keeper_lineno_6 != 0 )
        {
            exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_ac96042fc79dc4d95223f350bb0915e9, exception_keeper_lineno_6 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
        PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
        PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_3 = PyExc_KeyError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_9;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_source_name_11;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_9;
                }

                tmp_source_name_10 = tmp_mvar_value_2;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_PyAsn1Error );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_9;
                }
                tmp_left_name_1 = const_str_digest_d3da2704c0459ae5b4ac0ce56db80c11;
                CHECK_OBJECT( var_namedType );
                tmp_source_name_11 = var_namedType;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_name );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_9;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_value );
                tmp_tuple_element_2 = par_value;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_9;
                }
                frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 203;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_9;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 203;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_9;
            }
            goto branch_end_6;
            branch_no_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 199;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_ac96042fc79dc4d95223f350bb0915e9->m_frame) frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_9;
            branch_end_6:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_7_encodeValue );
        return NULL;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_5;
        // End of try:
        // End of try:
        try_end_6:;
        {
            nuitka_bool tmp_condition_result_7;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_attribute_value_3;
            int tmp_truth_name_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( var_namedType );
            tmp_source_name_12 = var_namedType;
            tmp_attribute_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_isOptional );
            if ( tmp_attribute_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_attribute_value_3 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_3 );

                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_and_left_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_3 );
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_3 == 1 )
            {
                goto and_right_3;
            }
            else
            {
                goto and_left_3;
            }
            and_right_3:;
            CHECK_OBJECT( var_namedType );
            tmp_source_name_13 = var_namedType;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_name );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( par_value );
            tmp_compexpr_right_4 = par_value;
            tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_and_right_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_7 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_7 = tmp_and_left_value_3;
            and_end_3:;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            goto loop_start_2;
            branch_no_7:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_and_left_truth_4;
            nuitka_bool tmp_and_left_value_4;
            nuitka_bool tmp_and_right_value_4;
            PyObject *tmp_source_name_14;
            PyObject *tmp_attribute_value_4;
            int tmp_truth_name_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( var_namedType );
            tmp_source_name_14 = var_namedType;
            tmp_attribute_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_isDefaulted );
            if ( tmp_attribute_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_truth_name_6 = CHECK_IF_TRUE( tmp_attribute_value_4 );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_4 );

                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_and_left_value_4 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_4 );
            tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_4 == 1 )
            {
                goto and_right_4;
            }
            else
            {
                goto and_left_4;
            }
            and_right_4:;
            CHECK_OBJECT( var_component );
            tmp_compexpr_left_5 = var_component;
            CHECK_OBJECT( var_namedType );
            tmp_source_name_15 = var_namedType;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_asn1Object );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_8 = tmp_and_right_value_4;
            goto and_end_4;
            and_left_4:;
            tmp_condition_result_8 = tmp_and_left_value_4;
            and_end_4:;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            goto loop_start_2;
            branch_no_8:;
        }
        {
            PyObject *tmp_id_arg_3;
            CHECK_OBJECT( var_namedType );
            tmp_dictset_value = var_namedType;
            CHECK_OBJECT( var_compsMap );
            tmp_dictset_dict = var_compsMap;
            CHECK_OBJECT( var_component );
            tmp_id_arg_3 = var_component;
            tmp_dictset_key = PyLong_FromVoidPtr( tmp_id_arg_3 );
            assert( !(tmp_dictset_key == NULL) );
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_key );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_16;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_comps );
            tmp_source_name_16 = var_comps;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_append );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_component );
            tmp_tuple_element_3 = var_component;
            tmp_args_element_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_asn1Spec );
            tmp_subscribed_name_3 = par_asn1Spec;
            CHECK_OBJECT( var_idx );
            tmp_subscript_name_3 = var_idx;
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_3 );
            frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
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
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_7:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_17;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_called_name_5 != NULL );
        CHECK_OBJECT( var_comps );
        tmp_tuple_element_4 = var_comps;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
        tmp_dict_key_1 = const_str_plain_key;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__componentSortKey );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 214;
        tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_3__for_iterator == NULL );
        tmp_for_loop_3__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_23 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooo";
                exception_lineno = 214;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_iter_arg_6 = tmp_for_loop_3__iter_value;
        tmp_assign_source_24 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_6 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_25 == NULL )
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 214;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
        if ( tmp_assign_source_26 == NULL )
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 214;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 214;
                    goto try_except_handler_12;
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

            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 214;
            goto try_except_handler_12;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_27 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_comp;
            var_comp = tmp_assign_source_27;
            Py_INCREF( var_comp );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_28 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_compType;
            var_compType = tmp_assign_source_28;
            Py_INCREF( var_compType );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_id_arg_4;
        CHECK_OBJECT( var_compsMap );
        tmp_dict_name_1 = var_compsMap;
        CHECK_OBJECT( var_comp );
        tmp_id_arg_4 = var_comp;
        tmp_key_name_1 = PyLong_FromVoidPtr( tmp_id_arg_4 );
        assert( !(tmp_key_name_1 == NULL) );
        tmp_assign_source_29 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
        Py_DECREF( tmp_key_name_1 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_namedType;
            var_namedType = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_7;
        CHECK_OBJECT( var_namedType );
        tmp_truth_name_7 = CHECK_IF_TRUE( var_namedType );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_9 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_18;
            PyObject *tmp_call_result_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( par_options );
            tmp_source_name_18 = par_options;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_update );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_dict_key_2 = const_str_plain_ifNotEmpty;
            CHECK_OBJECT( var_namedType );
            tmp_source_name_19 = var_namedType;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_isOptional );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 218;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 218;
            tmp_call_result_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_encodeFun );
        tmp_dircall_arg1_1 = par_encodeFun;
        CHECK_OBJECT( var_comp );
        tmp_tuple_element_5 = var_comp;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_compType );
        tmp_tuple_element_5 = var_compType;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_5 );
        CHECK_OBJECT( par_options );
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_30 = impl___internal__$$$function_7_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_30;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        int tmp_truth_name_8;
        PyObject *tmp_source_name_20;
        PyObject *tmp_attribute_value_5;
        int tmp_truth_name_9;
        CHECK_OBJECT( var_namedType );
        tmp_truth_name_8 = CHECK_IF_TRUE( var_namedType );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_and_left_value_5 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_5 == 1 )
        {
            goto and_right_5;
        }
        else
        {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT( var_namedType );
        tmp_source_name_20 = var_namedType;
        tmp_attribute_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_openType );
        if ( tmp_attribute_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE( tmp_attribute_value_5 );
        if ( tmp_truth_name_9 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_5 );

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_and_right_value_5 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_5 );
        tmp_condition_result_10 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_10 = tmp_and_left_value_5;
        and_end_5:;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_source_name_21;
            CHECK_OBJECT( var_namedType );
            tmp_source_name_21 = var_namedType;
            tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_asn1Object );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = var_wrapType;
                var_wrapType = tmp_assign_source_31;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_11;
            int tmp_and_left_truth_6;
            nuitka_bool tmp_and_left_value_6;
            nuitka_bool tmp_and_right_value_6;
            PyObject *tmp_source_name_22;
            PyObject *tmp_attribute_value_6;
            int tmp_truth_name_10;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_wrapType );
            tmp_source_name_22 = var_wrapType;
            tmp_attribute_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_tagSet );
            if ( tmp_attribute_value_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_truth_name_10 = CHECK_IF_TRUE( tmp_attribute_value_6 );
            if ( tmp_truth_name_10 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_6 );

                exception_lineno = 225;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_and_left_value_6 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_6 );
            tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_6 == 1 )
            {
                goto and_right_6;
            }
            else
            {
                goto and_left_6;
            }
            and_right_6:;
            CHECK_OBJECT( var_wrapType );
            tmp_called_instance_3 = var_wrapType;
            CHECK_OBJECT( var_comp );
            tmp_args_element_name_6 = var_comp;
            frame_ac96042fc79dc4d95223f350bb0915e9->m_frame.f_lineno = 225;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isSameTypeWith, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "ooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_and_right_value_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_11 = tmp_and_right_value_6;
            goto and_end_6;
            and_left_6:;
            tmp_condition_result_11 = tmp_and_left_value_6;
            and_end_6:;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_assign_source_32;
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_dircall_arg3_2;
                CHECK_OBJECT( par_encodeFun );
                tmp_dircall_arg1_2 = par_encodeFun;
                CHECK_OBJECT( var_chunk );
                tmp_tuple_element_6 = var_chunk;
                tmp_dircall_arg2_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( var_wrapType );
                tmp_tuple_element_6 = var_wrapType;
                Py_INCREF( tmp_tuple_element_6 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_6 );
                CHECK_OBJECT( par_options );
                tmp_dircall_arg3_2 = par_options;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg3_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                    tmp_assign_source_32 = impl___internal__$$$function_7_complex_call_helper_pos_star_dict( dir_call_args );
                }
                if ( tmp_assign_source_32 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 226;
                    type_description_1 = "ooooooooooooooooo";
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = var_chunk;
                    assert( old != NULL );
                    var_chunk = tmp_assign_source_32;
                    Py_DECREF( old );
                }

            }
            branch_no_11:;
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_substrate );
        tmp_left_name_2 = var_substrate;
        if ( var_chunk == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_right_name_2 = var_chunk;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_33 = tmp_left_name_2;
        var_substrate = tmp_assign_source_33;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac96042fc79dc4d95223f350bb0915e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac96042fc79dc4d95223f350bb0915e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ac96042fc79dc4d95223f350bb0915e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ac96042fc79dc4d95223f350bb0915e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ac96042fc79dc4d95223f350bb0915e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ac96042fc79dc4d95223f350bb0915e9,
        type_description_1,
        par_self,
        par_value,
        par_asn1Spec,
        par_encodeFun,
        par_options,
        var_substrate,
        var_comps,
        var_compsMap,
        var_inconsistency,
        var_namedTypes,
        var_idx,
        var_component,
        var_namedType,
        var_comp,
        var_compType,
        var_chunk,
        var_wrapType
    );


    // Release cached frame.
    if ( frame_ac96042fc79dc4d95223f350bb0915e9 == cache_frame_ac96042fc79dc4d95223f350bb0915e9 )
    {
        Py_DECREF( frame_ac96042fc79dc4d95223f350bb0915e9 );
    }
    cache_frame_ac96042fc79dc4d95223f350bb0915e9 = NULL;

    assertFrameObject( frame_ac96042fc79dc4d95223f350bb0915e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_tuple_element_7;
        CHECK_OBJECT( var_substrate );
        tmp_tuple_element_7 = var_substrate;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
        tmp_tuple_element_7 = Py_True;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
        tmp_tuple_element_7 = Py_True;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_7 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_7_encodeValue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_substrate );
    Py_DECREF( var_substrate );
    var_substrate = NULL;

    CHECK_OBJECT( (PyObject *)var_comps );
    Py_DECREF( var_comps );
    var_comps = NULL;

    CHECK_OBJECT( (PyObject *)var_compsMap );
    Py_DECREF( var_compsMap );
    var_compsMap = NULL;

    Py_XDECREF( var_inconsistency );
    var_inconsistency = NULL;

    Py_XDECREF( var_namedTypes );
    var_namedTypes = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_component );
    var_component = NULL;

    Py_XDECREF( var_namedType );
    var_namedType = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    Py_XDECREF( var_compType );
    var_compType = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_wrapType );
    var_wrapType = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_asn1Spec );
    Py_DECREF( par_asn1Spec );
    par_asn1Spec = NULL;

    CHECK_OBJECT( (PyObject *)par_encodeFun );
    Py_DECREF( par_encodeFun );
    par_encodeFun = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_substrate );
    var_substrate = NULL;

    Py_XDECREF( var_comps );
    var_comps = NULL;

    Py_XDECREF( var_compsMap );
    var_compsMap = NULL;

    Py_XDECREF( var_inconsistency );
    var_inconsistency = NULL;

    Py_XDECREF( var_namedTypes );
    var_namedTypes = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_component );
    var_component = NULL;

    Py_XDECREF( var_namedType );
    var_namedType = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    Py_XDECREF( var_compType );
    var_compType = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_wrapType );
    var_wrapType = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder$$$function_7_encodeValue );
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



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_1_encodeValue(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_1_encodeValue,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 300
        const_str_digest_47e96fbdb7ce29f2a13ccac6b9601e71,
#endif
        codeobj_b690629138b24a2f4c85818903c7501f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_2__chooseEncBase(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_2__chooseEncBase,
        const_str_plain__chooseEncBase,
#if PYTHON_VERSION >= 300
        const_str_digest_e78bd2aeb7c7d6af72ae0205fec3ca32,
#endif
        codeobj_354e0e76c24791410ab503e899c25891,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_3_encodeValue(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_3_encodeValue,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 300
        const_str_digest_4c7127341aa20f0e8c4f8dfc5b9e017a,
#endif
        codeobj_b7244ccbe945f80acf4179952abb98d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_4_encodeValue(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_4_encodeValue,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 300
        const_str_digest_d7634e552d516b8de4e6126d0edbe41f,
#endif
        codeobj_f5053b6d55f799879943a72623992643,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_4_encodeValue$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_4_encodeValue$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_86229657ebeffe0ecf9ec4c0cfdaffa8,
#endif
        codeobj_0bca0f411ec96109f21cdd0c3130a601,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_5_encodeValue(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_5_encodeValue,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 300
        const_str_digest_7a9b7848d7ad5a58475df9cb65303753,
#endif
        codeobj_045449e43e057c8c1b2062df97542538,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_6__componentSortKey(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_6__componentSortKey,
        const_str_plain__componentSortKey,
#if PYTHON_VERSION >= 300
        const_str_digest_339682c9f90ab4eb0347ec2160c619ad,
#endif
        codeobj_9f89bd212635a60dcb033c2d3465063f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        const_str_digest_f59a53012f9f2ee140e08ee78ddf2542,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_7_encodeValue(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$codec$cer$encoder$$$function_7_encodeValue,
        const_str_plain_encodeValue,
#if PYTHON_VERSION >= 300
        const_str_digest_bfaf690a2e40abebc140278673baccca,
#endif
        codeobj_ac96042fc79dc4d95223f350bb0915e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$codec$cer$encoder,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$codec$cer$encoder =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.codec.cer.encoder",
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
MOD_ENTRY_DECL(pyasn1$codec$cer$encoder)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1$codec$cer$encoder)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$codec$cer$encoder );
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
    puts("pyasn1.codec.cer.encoder: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.codec.cer.encoder: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.codec.cer.encoder: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$codec$cer$encoder" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$codec$cer$encoder = Py_InitModule4(
        "pyasn1.codec.cer.encoder",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$codec$cer$encoder = PyModule_Create( &mdef_pyasn1$codec$cer$encoder );
#endif

    moduledict_pyasn1$codec$cer$encoder = MODULE_DICT( module_pyasn1$codec$cer$encoder );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1$codec$cer$encoder,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$codec$cer$encoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$cer$encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$codec$cer$encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$codec$cer$encoder );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b6b8af7167af33ad6201188dc064ba6b, module_pyasn1$codec$cer$encoder );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a09478a030821b22f3370e6bab975c67;
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
    PyObject *locals_pyasn1$codec$cer$encoder_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4db03e31339cd27bef3db979c2bdaeaf_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4db03e31339cd27bef3db979c2bdaeaf_2 = NULL;
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
    PyObject *locals_pyasn1$codec$cer$encoder_25 = NULL;
    struct Nuitka_FrameObject *frame_68253a283e3613cf9710ac9813a61f4d_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_68253a283e3613cf9710ac9813a61f4d_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_pyasn1$codec$cer$encoder_33 = NULL;
    struct Nuitka_FrameObject *frame_6b0e50f145d664790b3e37b1f26a08be_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6b0e50f145d664790b3e37b1f26a08be_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_pyasn1$codec$cer$encoder_102 = NULL;
    struct Nuitka_FrameObject *frame_87235b2ecaa608360252bae08fc96c40_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_87235b2ecaa608360252bae08fc96c40_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_pyasn1$codec$cer$encoder_107 = NULL;
    struct Nuitka_FrameObject *frame_01f6f1e0213b7f70610ff1f8b1398782_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_01f6f1e0213b7f70610ff1f8b1398782_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_pyasn1$codec$cer$encoder_112 = NULL;
    struct Nuitka_FrameObject *frame_0eda80154ae52d13fc3fa6b74119a978_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0eda80154ae52d13fc3fa6b74119a978_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_pyasn1$codec$cer$encoder_131 = NULL;
    struct Nuitka_FrameObject *frame_c77b8101cc231f63ea7f521a426ba1f6_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c77b8101cc231f63ea7f521a426ba1f6_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_pyasn1$codec$cer$encoder_143 = NULL;
    struct Nuitka_FrameObject *frame_f9935761b385136b37356e20f41271d2_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f9935761b385136b37356e20f41271d2_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_pyasn1$codec$cer$encoder_233 = NULL;
    struct Nuitka_FrameObject *frame_38fb13731b53527f6dbdb73705b945da_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_38fb13731b53527f6dbdb73705b945da_10 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_pyasn1$codec$cer$encoder_262 = NULL;
    struct Nuitka_FrameObject *frame_6e0920d90e467b00f3f0aea6a7e44c56_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6e0920d90e467b00f3f0aea6a7e44c56_11 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5ad607bbfacb3f29d750778cb5976a68;
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a09478a030821b22f3370e6bab975c67 = MAKE_MODULE_FRAME( codeobj_a09478a030821b22f3370e6bab975c67, module_pyasn1$codec$cer$encoder );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a09478a030821b22f3370e6bab975c67 );
    assert( Py_REFCNT( frame_a09478a030821b22f3370e6bab975c67 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_5ad607bbfacb3f29d750778cb5976a68;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_pyasn1;
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_error_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_error );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_1503b6119cd6ba88e7612e541d27eba3;
        tmp_globals_name_2 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_encoder_tuple;
        tmp_level_name_2 = const_int_0;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_encoder );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_60685fcea8bf95c3a304455958b7e27d;
        tmp_globals_name_3 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_str2octs_str_plain_null_tuple;
        tmp_level_name_3 = const_int_0;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 9;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_str2octs );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_str2octs, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_null );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_null, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_7c8c58049edd248f8b1cb370445e702c;
        tmp_globals_name_4 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_univ_tuple;
        tmp_level_name_4 = const_int_0;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 10;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_univ );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_7c8c58049edd248f8b1cb370445e702c;
        tmp_globals_name_5 = (PyObject *)moduledict_pyasn1$codec$cer$encoder;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_useful_tuple;
        tmp_level_name_5 = const_int_0;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 11;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_useful );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_str_plain_encode_list );
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_IntegerEncoder );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_assign_source_12 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 16;

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


            exception_lineno = 16;

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


            exception_lineno = 16;

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


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

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
        tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
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


            exception_lineno = 16;

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


            exception_lineno = 16;

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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_BooleanEncoder;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 16;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
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


                exception_lineno = 16;

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
                PyObject *tmp_tuple_element_3;
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
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 16;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_5 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 16;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 16;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 16;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyasn1$codec$cer$encoder_16 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_16, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_BooleanEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_16, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4db03e31339cd27bef3db979c2bdaeaf_2, codeobj_4db03e31339cd27bef3db979c2bdaeaf, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_4db03e31339cd27bef3db979c2bdaeaf_2 = cache_frame_4db03e31339cd27bef3db979c2bdaeaf_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4db03e31339cd27bef3db979c2bdaeaf_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4db03e31339cd27bef3db979c2bdaeaf_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_1_encodeValue(  );



        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_16, const_str_plain_encodeValue, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4db03e31339cd27bef3db979c2bdaeaf_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4db03e31339cd27bef3db979c2bdaeaf_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4db03e31339cd27bef3db979c2bdaeaf_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4db03e31339cd27bef3db979c2bdaeaf_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4db03e31339cd27bef3db979c2bdaeaf_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4db03e31339cd27bef3db979c2bdaeaf_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_4db03e31339cd27bef3db979c2bdaeaf_2 == cache_frame_4db03e31339cd27bef3db979c2bdaeaf_2 )
        {
            Py_DECREF( frame_4db03e31339cd27bef3db979c2bdaeaf_2 );
        }
        cache_frame_4db03e31339cd27bef3db979c2bdaeaf_2 = NULL;

        assertFrameObject( frame_4db03e31339cd27bef3db979c2bdaeaf_2 );

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
            nuitka_bool tmp_condition_result_6;
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


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_16, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_BooleanEncoder;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_pyasn1$codec$cer$encoder_16;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 16;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_16 );
        locals_pyasn1$codec$cer$encoder_16 = NULL;
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

        Py_DECREF( locals_pyasn1$codec$cer$encoder_16 );
        locals_pyasn1$codec$cer$encoder_16 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
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
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 16;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_BooleanEncoder, tmp_assign_source_18 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto try_except_handler_5;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_RealEncoder );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        tmp_assign_source_20 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_21 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_7 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___prepare__ );
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_8 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_5;
            }
            tmp_tuple_element_6 = const_str_plain_RealEncoder;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 25;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_9 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_5;
            }
            tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_10;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_5;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_10 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_10 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_10 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 25;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 25;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 25;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_25;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyasn1$codec$cer$encoder_25 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_25, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_RealEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_25, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_68253a283e3613cf9710ac9813a61f4d_3, codeobj_68253a283e3613cf9710ac9813a61f4d, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_68253a283e3613cf9710ac9813a61f4d_3 = cache_frame_68253a283e3613cf9710ac9813a61f4d_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_68253a283e3613cf9710ac9813a61f4d_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_68253a283e3613cf9710ac9813a61f4d_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_2__chooseEncBase(  );



        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_25, const_str_plain__chooseEncBase, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_68253a283e3613cf9710ac9813a61f4d_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_68253a283e3613cf9710ac9813a61f4d_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_68253a283e3613cf9710ac9813a61f4d_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_68253a283e3613cf9710ac9813a61f4d_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_68253a283e3613cf9710ac9813a61f4d_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_68253a283e3613cf9710ac9813a61f4d_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_68253a283e3613cf9710ac9813a61f4d_3 == cache_frame_68253a283e3613cf9710ac9813a61f4d_3 )
        {
            Py_DECREF( frame_68253a283e3613cf9710ac9813a61f4d_3 );
        }
        cache_frame_68253a283e3613cf9710ac9813a61f4d_3 = NULL;

        assertFrameObject( frame_68253a283e3613cf9710ac9813a61f4d_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_7;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_25, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_7;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_RealEncoder;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_pyasn1$codec$cer$encoder_25;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 25;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_7;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_26 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_25 );
        locals_pyasn1$codec$cer$encoder_25 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_25 );
        locals_pyasn1$codec$cer$encoder_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 25;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_RealEncoder, tmp_assign_source_26 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases_orig );
    Py_DECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_28 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_type_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_30 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_8;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_11 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___prepare__ );
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_12 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto try_except_handler_8;
            }
            tmp_tuple_element_9 = const_str_plain_TimeEncoderMixIn;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 33;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_31;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_13 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto try_except_handler_8;
            }
            tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_14;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_10 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 33;

                    goto try_except_handler_8;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_10 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_14 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_14 == NULL) );
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_14 );
                if ( tmp_tuple_element_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 33;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_10 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 33;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 33;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_32;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyasn1$codec$cer$encoder_33 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_TimeEncoderMixIn;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_6b0e50f145d664790b3e37b1f26a08be_4, codeobj_6b0e50f145d664790b3e37b1f26a08be, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_6b0e50f145d664790b3e37b1f26a08be_4 = cache_frame_6b0e50f145d664790b3e37b1f26a08be_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_6b0e50f145d664790b3e37b1f26a08be_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_6b0e50f145d664790b3e37b1f26a08be_4 ) == 2 ); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_name_6;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_18 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_7;
            }
            else
            {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_name_6 = PyObject_GetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6b0e50f145d664790b3e37b1f26a08be_4->m_frame.f_lineno = 34;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_plain_Z_tuple, 0 ) );

            Py_DECREF( tmp_called_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_dictset_value = const_int_pos_90;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_7:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_Z_CHAR, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_name_7;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_19 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_8;
            }
            else
            {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_name_7 = PyObject_GetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6b0e50f145d664790b3e37b1f26a08be_4->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_chr_43_tuple, 0 ) );

            Py_DECREF( tmp_called_name_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_dictset_value = const_int_pos_43;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_8:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_PLUS_CHAR, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_name_8;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_20 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_9;
            }
            else
            {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_name_8 = PyObject_GetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6b0e50f145d664790b3e37b1f26a08be_4->m_frame.f_lineno = 36;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

            Py_DECREF( tmp_called_name_8 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_dictset_value = const_int_pos_45;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_9:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_MINUS_CHAR, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_name_9;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_21 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_10;
            }
            else
            {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_name_9 = PyObject_GetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6b0e50f145d664790b3e37b1f26a08be_4->m_frame.f_lineno = 37;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

            Py_DECREF( tmp_called_name_9 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_dictset_value = const_int_pos_44;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_10:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_COMMA_CHAR, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_name_10;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_22 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_11;
            }
            else
            {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_name_10 = PyObject_GetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6b0e50f145d664790b3e37b1f26a08be_4->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

            Py_DECREF( tmp_called_name_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_dictset_value = const_int_pos_46;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_11:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_DOT_CHAR, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_name_11;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_23 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_12;
            }
            else
            {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_name_11 = PyObject_GetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ord );

            if ( tmp_called_name_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ord" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_6b0e50f145d664790b3e37b1f26a08be_4->m_frame.f_lineno = 39;
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_plain_0_tuple, 0 ) );

            Py_DECREF( tmp_called_name_11 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_dictset_value = const_int_pos_48;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_12:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_ZERO_CHAR, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = const_int_pos_12;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_MIN_LENGTH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = const_int_pos_19;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_MAX_LENGTH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_3_encodeValue(  );



        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain_encodeValue, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6b0e50f145d664790b3e37b1f26a08be_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6b0e50f145d664790b3e37b1f26a08be_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_6b0e50f145d664790b3e37b1f26a08be_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_6b0e50f145d664790b3e37b1f26a08be_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_6b0e50f145d664790b3e37b1f26a08be_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_6b0e50f145d664790b3e37b1f26a08be_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_6b0e50f145d664790b3e37b1f26a08be_4 == cache_frame_6b0e50f145d664790b3e37b1f26a08be_4 )
        {
            Py_DECREF( frame_6b0e50f145d664790b3e37b1f26a08be_4 );
        }
        cache_frame_6b0e50f145d664790b3e37b1f26a08be_4 = NULL;

        assertFrameObject( frame_6b0e50f145d664790b3e37b1f26a08be_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            tmp_compexpr_right_3 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto try_except_handler_10;
            }
            tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_33, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto try_except_handler_10;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = const_str_plain_TimeEncoderMixIn;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_11 );
            tmp_tuple_element_11 = locals_pyasn1$codec$cer$encoder_33;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 33;
            tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;

                goto try_except_handler_10;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_33 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_33 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_33 );
        locals_pyasn1$codec$cer$encoder_33 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_33 );
        locals_pyasn1$codec$cer$encoder_33 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 33;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_TimeEncoderMixIn, tmp_assign_source_33 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_TimeEncoderMixIn );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeEncoderMixIn );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeEncoderMixIn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto try_except_handler_11;
        }

        tmp_tuple_element_12 = tmp_mvar_value_5;
        tmp_assign_source_35 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_12 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_35 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;

            goto try_except_handler_11;
        }

        tmp_source_name_15 = tmp_mvar_value_6;
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_OctetStringEncoder );
        if ( tmp_tuple_element_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_35 );

            exception_lineno = 102;

            goto try_except_handler_11;
        }
        PyTuple_SET_ITEM( tmp_assign_source_35, 1, tmp_tuple_element_12 );
        assert( tmp_class_creation_4__bases_orig == NULL );
        tmp_class_creation_4__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT( tmp_class_creation_4__bases_orig );
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF( tmp_dircall_arg1_4 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_36 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_13;
        }
        else
        {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        tmp_condition_result_26 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_14;
        }
        else
        {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_4 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_type_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
        Py_DECREF( tmp_type_arg_7 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_4 );
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_38 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_11;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_16 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_16, const_str_plain___prepare__ );
        tmp_condition_result_28 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_17;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_17 = tmp_class_creation_4__metaclass;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___prepare__ );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_11;
            }
            tmp_tuple_element_13 = const_str_plain_GeneralizedTimeEncoder;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_13 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 102;
            tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_11;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_39;
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_18 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_18, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_11;
            }
            tmp_condition_result_29 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_19;
                PyObject *tmp_type_arg_8;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_14 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 102;

                    goto try_except_handler_11;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_14 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_8 = tmp_class_creation_4__prepared;
                tmp_source_name_19 = BUILTIN_TYPE1( tmp_type_arg_8 );
                assert( !(tmp_source_name_19 == NULL) );
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_19 );
                if ( tmp_tuple_element_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 102;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_14 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 102;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 102;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_11;
            }
            branch_no_15:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_40;
            tmp_assign_source_40 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_40;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyasn1$codec$cer$encoder_102 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_102, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain_GeneralizedTimeEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_102, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_13;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_87235b2ecaa608360252bae08fc96c40_5, codeobj_87235b2ecaa608360252bae08fc96c40, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_87235b2ecaa608360252bae08fc96c40_5 = cache_frame_87235b2ecaa608360252bae08fc96c40_5;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_87235b2ecaa608360252bae08fc96c40_5 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_87235b2ecaa608360252bae08fc96c40_5 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_12;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_102, const_str_plain_MIN_LENGTH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = const_int_pos_20;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_102, const_str_plain_MAX_LENGTH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_87235b2ecaa608360252bae08fc96c40_5 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_87235b2ecaa608360252bae08fc96c40_5 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_87235b2ecaa608360252bae08fc96c40_5, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_87235b2ecaa608360252bae08fc96c40_5->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_87235b2ecaa608360252bae08fc96c40_5, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_87235b2ecaa608360252bae08fc96c40_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_87235b2ecaa608360252bae08fc96c40_5 == cache_frame_87235b2ecaa608360252bae08fc96c40_5 )
        {
            Py_DECREF( frame_87235b2ecaa608360252bae08fc96c40_5 );
        }
        cache_frame_87235b2ecaa608360252bae08fc96c40_5 = NULL;

        assertFrameObject( frame_87235b2ecaa608360252bae08fc96c40_5 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT( tmp_class_creation_4__bases_orig );
            tmp_compexpr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_13;
            }
            tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_16;
            }
            else
            {
                goto branch_no_16;
            }
            branch_yes_16:;
            CHECK_OBJECT( tmp_class_creation_4__bases_orig );
            tmp_dictset_value = tmp_class_creation_4__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_102, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_13;
            }
            branch_no_16:;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_14 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_15 = const_str_plain_GeneralizedTimeEncoder;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_15 );
            tmp_tuple_element_15 = locals_pyasn1$codec$cer$encoder_102;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 102;
            tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto try_except_handler_13;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_41 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_41 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_102 );
        locals_pyasn1$codec$cer$encoder_102 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_102 );
        locals_pyasn1$codec$cer$encoder_102 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 102;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder, tmp_assign_source_41 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases_orig );
    tmp_class_creation_4__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases_orig );
    Py_DECREF( tmp_class_creation_4__bases_orig );
    tmp_class_creation_4__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_TimeEncoderMixIn );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeEncoderMixIn );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeEncoderMixIn" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto try_except_handler_14;
        }

        tmp_tuple_element_16 = tmp_mvar_value_7;
        tmp_assign_source_43 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_16 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assign_source_43 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;

            goto try_except_handler_14;
        }

        tmp_source_name_20 = tmp_mvar_value_8;
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_OctetStringEncoder );
        if ( tmp_tuple_element_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_43 );

            exception_lineno = 107;

            goto try_except_handler_14;
        }
        PyTuple_SET_ITEM( tmp_assign_source_43, 1, tmp_tuple_element_16 );
        assert( tmp_class_creation_5__bases_orig == NULL );
        tmp_class_creation_5__bases_orig = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT( tmp_class_creation_5__bases_orig );
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF( tmp_dircall_arg1_5 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_44 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert( tmp_class_creation_5__class_decl_dict == NULL );
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        tmp_condition_result_31 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_15;
        }
        else
        {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = const_str_plain_metaclass;
        tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_class_creation_5__bases );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        tmp_condition_result_32 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_32 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_16;
        }
        else
        {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_subscribed_name_5 = tmp_class_creation_5__bases;
        tmp_subscript_name_5 = const_int_0;
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        if ( tmp_type_arg_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
        Py_DECREF( tmp_type_arg_9 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_5 );
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
        Py_DECREF( tmp_metaclass_name_5 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        tmp_condition_result_33 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_33 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_14;
        }
        branch_no_17:;
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_source_name_21 = tmp_class_creation_5__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_21, const_str_plain___prepare__ );
        tmp_condition_result_34 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_34 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_22;
            PyObject *tmp_args_name_9;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kw_name_9;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_source_name_22 = tmp_class_creation_5__metaclass;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
            if ( tmp_called_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;

                goto try_except_handler_14;
            }
            tmp_tuple_element_17 = const_str_plain_UTCTimeEncoder;
            tmp_args_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_17 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_17 );
            PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_17 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 107;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_name_9 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;

                goto try_except_handler_14;
            }
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_source_name_23;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_source_name_23 = tmp_class_creation_5__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_23, const_str_plain___getitem__ );
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;

                goto try_except_handler_14;
            }
            tmp_condition_result_35 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_35 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_19;
            }
            else
            {
                goto branch_no_19;
            }
            branch_yes_19:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_raise_value_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_getattr_target_5;
                PyObject *tmp_getattr_attr_5;
                PyObject *tmp_getattr_default_5;
                PyObject *tmp_source_name_24;
                PyObject *tmp_type_arg_10;
                tmp_raise_type_5 = PyExc_TypeError;
                tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_5__metaclass );
                tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
                tmp_getattr_attr_5 = const_str_plain___name__;
                tmp_getattr_default_5 = const_str_angle_metaclass;
                tmp_tuple_element_18 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
                if ( tmp_tuple_element_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 107;

                    goto try_except_handler_14;
                }
                tmp_right_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_18 );
                CHECK_OBJECT( tmp_class_creation_5__prepared );
                tmp_type_arg_10 = tmp_class_creation_5__prepared;
                tmp_source_name_24 = BUILTIN_TYPE1( tmp_type_arg_10 );
                assert( !(tmp_source_name_24 == NULL) );
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_24 );
                if ( tmp_tuple_element_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_5 );

                    exception_lineno = 107;

                    goto try_except_handler_14;
                }
                PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_18 );
                tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_raise_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 107;

                    goto try_except_handler_14;
                }
                exception_type = tmp_raise_type_5;
                Py_INCREF( tmp_raise_type_5 );
                exception_value = tmp_raise_value_5;
                exception_lineno = 107;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_14;
            }
            branch_no_19:;
        }
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_48;
        }
        branch_end_18:;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyasn1$codec$cer$encoder_107 = tmp_set_locals_5;
            Py_INCREF( tmp_set_locals_5 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_107, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_16;
        }
        tmp_dictset_value = const_str_plain_UTCTimeEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_107, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto try_except_handler_16;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_01f6f1e0213b7f70610ff1f8b1398782_6, codeobj_01f6f1e0213b7f70610ff1f8b1398782, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_01f6f1e0213b7f70610ff1f8b1398782_6 = cache_frame_01f6f1e0213b7f70610ff1f8b1398782_6;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_01f6f1e0213b7f70610ff1f8b1398782_6 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_01f6f1e0213b7f70610ff1f8b1398782_6 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_10;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_107, const_str_plain_MIN_LENGTH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = const_int_pos_14;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_107, const_str_plain_MAX_LENGTH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_01f6f1e0213b7f70610ff1f8b1398782_6 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_01f6f1e0213b7f70610ff1f8b1398782_6 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_01f6f1e0213b7f70610ff1f8b1398782_6, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_01f6f1e0213b7f70610ff1f8b1398782_6->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_01f6f1e0213b7f70610ff1f8b1398782_6, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_01f6f1e0213b7f70610ff1f8b1398782_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame.
        if ( frame_01f6f1e0213b7f70610ff1f8b1398782_6 == cache_frame_01f6f1e0213b7f70610ff1f8b1398782_6 )
        {
            Py_DECREF( frame_01f6f1e0213b7f70610ff1f8b1398782_6 );
        }
        cache_frame_01f6f1e0213b7f70610ff1f8b1398782_6 = NULL;

        assertFrameObject( frame_01f6f1e0213b7f70610ff1f8b1398782_6 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_compexpr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT( tmp_class_creation_5__bases_orig );
            tmp_compexpr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;

                goto try_except_handler_16;
            }
            tmp_condition_result_36 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_36 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_20;
            }
            else
            {
                goto branch_no_20;
            }
            branch_yes_20:;
            CHECK_OBJECT( tmp_class_creation_5__bases_orig );
            tmp_dictset_value = tmp_class_creation_5__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_107, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;

                goto try_except_handler_16;
            }
            branch_no_20:;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_called_name_16 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_19 = const_str_plain_UTCTimeEncoder;
            tmp_args_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_19 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_19 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_19 );
            tmp_tuple_element_19 = locals_pyasn1$codec$cer$encoder_107;
            Py_INCREF( tmp_tuple_element_19 );
            PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_19 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 107;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;

                goto try_except_handler_16;
            }
            assert( outline_4_var___class__ == NULL );
            outline_4_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT( outline_4_var___class__ );
        tmp_assign_source_49 = outline_4_var___class__;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_107 );
        locals_pyasn1$codec$cer$encoder_107 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_107 );
        locals_pyasn1$codec$cer$encoder_107 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
        Py_DECREF( outline_4_var___class__ );
        outline_4_var___class__ = NULL;

        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 107;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder, tmp_assign_source_49 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases_orig );
    tmp_class_creation_5__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases_orig );
    Py_DECREF( tmp_class_creation_5__bases_orig );
    tmp_class_creation_5__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto try_except_handler_17;
        }

        tmp_source_name_25 = tmp_mvar_value_9;
        tmp_tuple_element_20 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_SequenceOfEncoder );
        if ( tmp_tuple_element_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        tmp_assign_source_51 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_51, 0, tmp_tuple_element_20 );
        assert( tmp_class_creation_6__bases_orig == NULL );
        tmp_class_creation_6__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT( tmp_class_creation_6__bases_orig );
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF( tmp_dircall_arg1_6 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_52 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = PyDict_New();
        assert( tmp_class_creation_6__class_decl_dict == NULL );
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_key_name_17;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        tmp_condition_result_37 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_37 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_17;
        }
        else
        {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = const_str_plain_metaclass;
        tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_truth_name_6 = CHECK_IF_TRUE( tmp_class_creation_6__bases );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        tmp_condition_result_38 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_38 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_18;
        }
        else
        {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_subscribed_name_6 = tmp_class_creation_6__bases;
        tmp_subscript_name_6 = const_int_0;
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        if ( tmp_type_arg_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_11 );
        Py_DECREF( tmp_type_arg_11 );
        if ( tmp_metaclass_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_6 );
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
        Py_DECREF( tmp_metaclass_name_6 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_name_18;
        tmp_key_name_18 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        tmp_condition_result_39 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_39 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_21;
        }
        else
        {
            goto branch_no_21;
        }
        branch_yes_21:;
        CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_17;
        }
        branch_no_21:;
    }
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_source_name_26;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_source_name_26 = tmp_class_creation_6__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_26, const_str_plain___prepare__ );
        tmp_condition_result_40 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_40 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_22;
        }
        else
        {
            goto branch_no_22;
        }
        branch_yes_22:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_27;
            PyObject *tmp_args_name_11;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kw_name_11;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_source_name_27 = tmp_class_creation_6__metaclass;
            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain___prepare__ );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto try_except_handler_17;
            }
            tmp_tuple_element_21 = const_str_plain_SetOfEncoder;
            tmp_args_name_11 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_21 );
            PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_21 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_21 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_21 );
            PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_21 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 112;
            tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_11, tmp_kw_name_11 );
            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_name_11 );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto try_except_handler_17;
            }
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_55;
        }
        {
            nuitka_bool tmp_condition_result_41;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_source_name_28;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_source_name_28 = tmp_class_creation_6__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_28, const_str_plain___getitem__ );
            tmp_operand_name_6 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto try_except_handler_17;
            }
            tmp_condition_result_41 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_41 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_23;
            }
            else
            {
                goto branch_no_23;
            }
            branch_yes_23:;
            {
                PyObject *tmp_raise_type_6;
                PyObject *tmp_raise_value_6;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_getattr_target_6;
                PyObject *tmp_getattr_attr_6;
                PyObject *tmp_getattr_default_6;
                PyObject *tmp_source_name_29;
                PyObject *tmp_type_arg_12;
                tmp_raise_type_6 = PyExc_TypeError;
                tmp_left_name_6 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_6__metaclass );
                tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
                tmp_getattr_attr_6 = const_str_plain___name__;
                tmp_getattr_default_6 = const_str_angle_metaclass;
                tmp_tuple_element_22 = BUILTIN_GETATTR( tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6 );
                if ( tmp_tuple_element_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;

                    goto try_except_handler_17;
                }
                tmp_right_name_6 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_22 );
                CHECK_OBJECT( tmp_class_creation_6__prepared );
                tmp_type_arg_12 = tmp_class_creation_6__prepared;
                tmp_source_name_29 = BUILTIN_TYPE1( tmp_type_arg_12 );
                assert( !(tmp_source_name_29 == NULL) );
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_29 );
                if ( tmp_tuple_element_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_6 );

                    exception_lineno = 112;

                    goto try_except_handler_17;
                }
                PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_22 );
                tmp_raise_value_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_raise_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;

                    goto try_except_handler_17;
                }
                exception_type = tmp_raise_type_6;
                Py_INCREF( tmp_raise_type_6 );
                exception_value = tmp_raise_value_6;
                exception_lineno = 112;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_17;
            }
            branch_no_23:;
        }
        goto branch_end_22;
        branch_no_22:;
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = PyDict_New();
            assert( tmp_class_creation_6__prepared == NULL );
            tmp_class_creation_6__prepared = tmp_assign_source_56;
        }
        branch_end_22:;
    }
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT( tmp_class_creation_6__prepared );
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyasn1$codec$cer$encoder_112 = tmp_set_locals_6;
            Py_INCREF( tmp_set_locals_6 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_112, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_19;
        }
        tmp_dictset_value = const_str_plain_SetOfEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_112, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto try_except_handler_19;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0eda80154ae52d13fc3fa6b74119a978_7, codeobj_0eda80154ae52d13fc3fa6b74119a978, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_0eda80154ae52d13fc3fa6b74119a978_7 = cache_frame_0eda80154ae52d13fc3fa6b74119a978_7;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0eda80154ae52d13fc3fa6b74119a978_7 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0eda80154ae52d13fc3fa6b74119a978_7 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_4_encodeValue(  );



        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_112, const_str_plain_encodeValue, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0eda80154ae52d13fc3fa6b74119a978_7 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0eda80154ae52d13fc3fa6b74119a978_7 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0eda80154ae52d13fc3fa6b74119a978_7, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0eda80154ae52d13fc3fa6b74119a978_7->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0eda80154ae52d13fc3fa6b74119a978_7, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0eda80154ae52d13fc3fa6b74119a978_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame.
        if ( frame_0eda80154ae52d13fc3fa6b74119a978_7 == cache_frame_0eda80154ae52d13fc3fa6b74119a978_7 )
        {
            Py_DECREF( frame_0eda80154ae52d13fc3fa6b74119a978_7 );
        }
        cache_frame_0eda80154ae52d13fc3fa6b74119a978_7 = NULL;

        assertFrameObject( frame_0eda80154ae52d13fc3fa6b74119a978_7 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_compexpr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT( tmp_class_creation_6__bases_orig );
            tmp_compexpr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto try_except_handler_19;
            }
            tmp_condition_result_42 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_42 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_24;
            }
            else
            {
                goto branch_no_24;
            }
            branch_yes_24:;
            CHECK_OBJECT( tmp_class_creation_6__bases_orig );
            tmp_dictset_value = tmp_class_creation_6__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_112, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto try_except_handler_19;
            }
            branch_no_24:;
        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kw_name_12;
            CHECK_OBJECT( tmp_class_creation_6__metaclass );
            tmp_called_name_18 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_23 = const_str_plain_SetOfEncoder;
            tmp_args_name_12 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_23 );
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_tuple_element_23 = tmp_class_creation_6__bases;
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_23 );
            tmp_tuple_element_23 = locals_pyasn1$codec$cer$encoder_112;
            Py_INCREF( tmp_tuple_element_23 );
            PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_23 );
            CHECK_OBJECT( tmp_class_creation_6__class_decl_dict );
            tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 112;
            tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_12, tmp_kw_name_12 );
            Py_DECREF( tmp_args_name_12 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;

                goto try_except_handler_19;
            }
            assert( outline_5_var___class__ == NULL );
            outline_5_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT( outline_5_var___class__ );
        tmp_assign_source_57 = outline_5_var___class__;
        Py_INCREF( tmp_assign_source_57 );
        goto try_return_handler_19;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_112 );
        locals_pyasn1$codec$cer$encoder_112 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_112 );
        locals_pyasn1$codec$cer$encoder_112 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
        Py_DECREF( outline_5_var___class__ );
        outline_5_var___class__ = NULL;

        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_6:;
        exception_lineno = 112;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetOfEncoder, tmp_assign_source_57 );
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases_orig );
    tmp_class_creation_6__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases_orig );
    Py_DECREF( tmp_class_creation_6__bases_orig );
    tmp_class_creation_6__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;

            goto try_except_handler_20;
        }

        tmp_source_name_30 = tmp_mvar_value_10;
        tmp_tuple_element_24 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_SequenceOfEncoder );
        if ( tmp_tuple_element_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        tmp_assign_source_59 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_59, 0, tmp_tuple_element_24 );
        assert( tmp_class_creation_7__bases_orig == NULL );
        tmp_class_creation_7__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT( tmp_class_creation_7__bases_orig );
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF( tmp_dircall_arg1_7 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_60 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        assert( tmp_class_creation_7__bases == NULL );
        tmp_class_creation_7__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = PyDict_New();
        assert( tmp_class_creation_7__class_decl_dict == NULL );
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_name_19;
        PyObject *tmp_dict_name_20;
        PyObject *tmp_key_name_20;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        tmp_condition_result_43 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_43 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_19;
        }
        else
        {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = const_str_plain_metaclass;
        tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_truth_name_7 = CHECK_IF_TRUE( tmp_class_creation_7__bases );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        tmp_condition_result_44 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_44 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_20;
        }
        else
        {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_subscribed_name_7 = tmp_class_creation_7__bases;
        tmp_subscript_name_7 = const_int_0;
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_type_arg_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_13 );
        Py_DECREF( tmp_type_arg_13 );
        if ( tmp_metaclass_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_7 );
        condexpr_end_20:;
        condexpr_end_19:;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_62 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
        Py_DECREF( tmp_metaclass_name_7 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_62;
    }
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_name_21;
        tmp_key_name_21 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        tmp_condition_result_45 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_45 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_25;
        }
        else
        {
            goto branch_no_25;
        }
        branch_yes_25:;
        CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_20;
        }
        branch_no_25:;
    }
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_source_name_31;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_source_name_31 = tmp_class_creation_7__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_31, const_str_plain___prepare__ );
        tmp_condition_result_46 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_46 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_26;
        }
        else
        {
            goto branch_no_26;
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_name_19;
            PyObject *tmp_source_name_32;
            PyObject *tmp_args_name_13;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kw_name_13;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_source_name_32 = tmp_class_creation_7__metaclass;
            tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain___prepare__ );
            if ( tmp_called_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;

                goto try_except_handler_20;
            }
            tmp_tuple_element_25 = const_str_plain_SequenceOfEncoder;
            tmp_args_name_13 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_25 );
            PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_25 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_25 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_25 );
            PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_25 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 131;
            tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_13, tmp_kw_name_13 );
            Py_DECREF( tmp_called_name_19 );
            Py_DECREF( tmp_args_name_13 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;

                goto try_except_handler_20;
            }
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_63;
        }
        {
            nuitka_bool tmp_condition_result_47;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_source_name_33;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_source_name_33 = tmp_class_creation_7__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_33, const_str_plain___getitem__ );
            tmp_operand_name_7 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;

                goto try_except_handler_20;
            }
            tmp_condition_result_47 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_47 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_27;
            }
            else
            {
                goto branch_no_27;
            }
            branch_yes_27:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_raise_value_7;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_getattr_target_7;
                PyObject *tmp_getattr_attr_7;
                PyObject *tmp_getattr_default_7;
                PyObject *tmp_source_name_34;
                PyObject *tmp_type_arg_14;
                tmp_raise_type_7 = PyExc_TypeError;
                tmp_left_name_7 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_7__metaclass );
                tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
                tmp_getattr_attr_7 = const_str_plain___name__;
                tmp_getattr_default_7 = const_str_angle_metaclass;
                tmp_tuple_element_26 = BUILTIN_GETATTR( tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7 );
                if ( tmp_tuple_element_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 131;

                    goto try_except_handler_20;
                }
                tmp_right_name_7 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_26 );
                CHECK_OBJECT( tmp_class_creation_7__prepared );
                tmp_type_arg_14 = tmp_class_creation_7__prepared;
                tmp_source_name_34 = BUILTIN_TYPE1( tmp_type_arg_14 );
                assert( !(tmp_source_name_34 == NULL) );
                tmp_tuple_element_26 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_34 );
                if ( tmp_tuple_element_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_7 );

                    exception_lineno = 131;

                    goto try_except_handler_20;
                }
                PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_26 );
                tmp_raise_value_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_raise_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 131;

                    goto try_except_handler_20;
                }
                exception_type = tmp_raise_type_7;
                Py_INCREF( tmp_raise_type_7 );
                exception_value = tmp_raise_value_7;
                exception_lineno = 131;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_20;
            }
            branch_no_27:;
        }
        goto branch_end_26;
        branch_no_26:;
        {
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = PyDict_New();
            assert( tmp_class_creation_7__prepared == NULL );
            tmp_class_creation_7__prepared = tmp_assign_source_64;
        }
        branch_end_26:;
    }
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT( tmp_class_creation_7__prepared );
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyasn1$codec$cer$encoder_131 = tmp_set_locals_7;
            Py_INCREF( tmp_set_locals_7 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_131, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_22;
        }
        tmp_dictset_value = const_str_plain_SequenceOfEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_131, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto try_except_handler_22;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c77b8101cc231f63ea7f521a426ba1f6_8, codeobj_c77b8101cc231f63ea7f521a426ba1f6, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_c77b8101cc231f63ea7f521a426ba1f6_8 = cache_frame_c77b8101cc231f63ea7f521a426ba1f6_8;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c77b8101cc231f63ea7f521a426ba1f6_8 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c77b8101cc231f63ea7f521a426ba1f6_8 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_5_encodeValue(  );



        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_131, const_str_plain_encodeValue, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c77b8101cc231f63ea7f521a426ba1f6_8 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c77b8101cc231f63ea7f521a426ba1f6_8 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c77b8101cc231f63ea7f521a426ba1f6_8, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c77b8101cc231f63ea7f521a426ba1f6_8->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c77b8101cc231f63ea7f521a426ba1f6_8, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c77b8101cc231f63ea7f521a426ba1f6_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame.
        if ( frame_c77b8101cc231f63ea7f521a426ba1f6_8 == cache_frame_c77b8101cc231f63ea7f521a426ba1f6_8 )
        {
            Py_DECREF( frame_c77b8101cc231f63ea7f521a426ba1f6_8 );
        }
        cache_frame_c77b8101cc231f63ea7f521a426ba1f6_8 = NULL;

        assertFrameObject( frame_c77b8101cc231f63ea7f521a426ba1f6_8 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_compexpr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT( tmp_class_creation_7__bases_orig );
            tmp_compexpr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;

                goto try_except_handler_22;
            }
            tmp_condition_result_48 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_48 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_28;
            }
            else
            {
                goto branch_no_28;
            }
            branch_yes_28:;
            CHECK_OBJECT( tmp_class_creation_7__bases_orig );
            tmp_dictset_value = tmp_class_creation_7__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_131, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;

                goto try_except_handler_22;
            }
            branch_no_28:;
        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kw_name_14;
            CHECK_OBJECT( tmp_class_creation_7__metaclass );
            tmp_called_name_20 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_27 = const_str_plain_SequenceOfEncoder;
            tmp_args_name_14 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_27 );
            PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_27 );
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_tuple_element_27 = tmp_class_creation_7__bases;
            Py_INCREF( tmp_tuple_element_27 );
            PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_27 );
            tmp_tuple_element_27 = locals_pyasn1$codec$cer$encoder_131;
            Py_INCREF( tmp_tuple_element_27 );
            PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_27 );
            CHECK_OBJECT( tmp_class_creation_7__class_decl_dict );
            tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 131;
            tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_14, tmp_kw_name_14 );
            Py_DECREF( tmp_args_name_14 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;

                goto try_except_handler_22;
            }
            assert( outline_6_var___class__ == NULL );
            outline_6_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT( outline_6_var___class__ );
        tmp_assign_source_65 = outline_6_var___class__;
        Py_INCREF( tmp_assign_source_65 );
        goto try_return_handler_22;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_131 );
        locals_pyasn1$codec$cer$encoder_131 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_131 );
        locals_pyasn1$codec$cer$encoder_131 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
        Py_DECREF( outline_6_var___class__ );
        outline_6_var___class__ = NULL;

        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_7:;
        exception_lineno = 131;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SequenceOfEncoder, tmp_assign_source_65 );
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases_orig );
    tmp_class_creation_7__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases_orig );
    Py_DECREF( tmp_class_creation_7__bases_orig );
    tmp_class_creation_7__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_source_name_35;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;

            goto try_except_handler_23;
        }

        tmp_source_name_35 = tmp_mvar_value_11;
        tmp_tuple_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_SequenceEncoder );
        if ( tmp_tuple_element_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        tmp_assign_source_67 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_67, 0, tmp_tuple_element_28 );
        assert( tmp_class_creation_8__bases_orig == NULL );
        tmp_class_creation_8__bases_orig = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT( tmp_class_creation_8__bases_orig );
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF( tmp_dircall_arg1_8 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_68 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        assert( tmp_class_creation_8__bases == NULL );
        tmp_class_creation_8__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = PyDict_New();
        assert( tmp_class_creation_8__class_decl_dict == NULL );
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_name_22;
        PyObject *tmp_dict_name_23;
        PyObject *tmp_key_name_23;
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        tmp_condition_result_49 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_49 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_21;
        }
        else
        {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = const_str_plain_metaclass;
        tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
        if ( tmp_metaclass_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_truth_name_8 = CHECK_IF_TRUE( tmp_class_creation_8__bases );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        tmp_condition_result_50 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_50 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_22;
        }
        else
        {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_subscribed_name_8 = tmp_class_creation_8__bases;
        tmp_subscript_name_8 = const_int_0;
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
        if ( tmp_type_arg_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_15 );
        Py_DECREF( tmp_type_arg_15 );
        if ( tmp_metaclass_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_8 );
        condexpr_end_22:;
        condexpr_end_21:;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_bases_name_8 = tmp_class_creation_8__bases;
        tmp_assign_source_70 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
        Py_DECREF( tmp_metaclass_name_8 );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        assert( tmp_class_creation_8__metaclass == NULL );
        tmp_class_creation_8__metaclass = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_name_24;
        tmp_key_name_24 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        tmp_condition_result_51 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_51 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_29;
        }
        else
        {
            goto branch_no_29;
        }
        branch_yes_29:;
        CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_23;
        }
        branch_no_29:;
    }
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_source_name_36;
        CHECK_OBJECT( tmp_class_creation_8__metaclass );
        tmp_source_name_36 = tmp_class_creation_8__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_36, const_str_plain___prepare__ );
        tmp_condition_result_52 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_52 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_30;
        }
        else
        {
            goto branch_no_30;
        }
        branch_yes_30:;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_called_name_21;
            PyObject *tmp_source_name_37;
            PyObject *tmp_args_name_15;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kw_name_15;
            CHECK_OBJECT( tmp_class_creation_8__metaclass );
            tmp_source_name_37 = tmp_class_creation_8__metaclass;
            tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain___prepare__ );
            if ( tmp_called_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto try_except_handler_23;
            }
            tmp_tuple_element_29 = const_str_plain_SetEncoder;
            tmp_args_name_15 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_29 );
            PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_29 );
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_tuple_element_29 = tmp_class_creation_8__bases;
            Py_INCREF( tmp_tuple_element_29 );
            PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_29 );
            CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
            tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 143;
            tmp_assign_source_71 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_15, tmp_kw_name_15 );
            Py_DECREF( tmp_called_name_21 );
            Py_DECREF( tmp_args_name_15 );
            if ( tmp_assign_source_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto try_except_handler_23;
            }
            assert( tmp_class_creation_8__prepared == NULL );
            tmp_class_creation_8__prepared = tmp_assign_source_71;
        }
        {
            nuitka_bool tmp_condition_result_53;
            PyObject *tmp_operand_name_8;
            PyObject *tmp_source_name_38;
            CHECK_OBJECT( tmp_class_creation_8__prepared );
            tmp_source_name_38 = tmp_class_creation_8__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_38, const_str_plain___getitem__ );
            tmp_operand_name_8 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto try_except_handler_23;
            }
            tmp_condition_result_53 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_53 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_31;
            }
            else
            {
                goto branch_no_31;
            }
            branch_yes_31:;
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_raise_value_8;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_getattr_target_8;
                PyObject *tmp_getattr_attr_8;
                PyObject *tmp_getattr_default_8;
                PyObject *tmp_source_name_39;
                PyObject *tmp_type_arg_16;
                tmp_raise_type_8 = PyExc_TypeError;
                tmp_left_name_8 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_8__metaclass );
                tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
                tmp_getattr_attr_8 = const_str_plain___name__;
                tmp_getattr_default_8 = const_str_angle_metaclass;
                tmp_tuple_element_30 = BUILTIN_GETATTR( tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8 );
                if ( tmp_tuple_element_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 143;

                    goto try_except_handler_23;
                }
                tmp_right_name_8 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_30 );
                CHECK_OBJECT( tmp_class_creation_8__prepared );
                tmp_type_arg_16 = tmp_class_creation_8__prepared;
                tmp_source_name_39 = BUILTIN_TYPE1( tmp_type_arg_16 );
                assert( !(tmp_source_name_39 == NULL) );
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_39 );
                if ( tmp_tuple_element_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_8 );

                    exception_lineno = 143;

                    goto try_except_handler_23;
                }
                PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_30 );
                tmp_raise_value_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_raise_value_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 143;

                    goto try_except_handler_23;
                }
                exception_type = tmp_raise_type_8;
                Py_INCREF( tmp_raise_type_8 );
                exception_value = tmp_raise_value_8;
                exception_lineno = 143;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_23;
            }
            branch_no_31:;
        }
        goto branch_end_30;
        branch_no_30:;
        {
            PyObject *tmp_assign_source_72;
            tmp_assign_source_72 = PyDict_New();
            assert( tmp_class_creation_8__prepared == NULL );
            tmp_class_creation_8__prepared = tmp_assign_source_72;
        }
        branch_end_30:;
    }
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT( tmp_class_creation_8__prepared );
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pyasn1$codec$cer$encoder_143 = tmp_set_locals_8;
            Py_INCREF( tmp_set_locals_8 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_143, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_25;
        }
        tmp_dictset_value = const_str_plain_SetEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_143, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto try_except_handler_25;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_f9935761b385136b37356e20f41271d2_9, codeobj_f9935761b385136b37356e20f41271d2, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_f9935761b385136b37356e20f41271d2_9 = cache_frame_f9935761b385136b37356e20f41271d2_9;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_f9935761b385136b37356e20f41271d2_9 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_f9935761b385136b37356e20f41271d2_9 ) == 2 ); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM( locals_pyasn1$codec$cer$encoder_143, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_condition_result_54 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_54 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_23;
            }
            else
            {
                goto condexpr_false_23;
            }
            condexpr_true_23:;
            tmp_called_name_22 = PyObject_GetItem( locals_pyasn1$codec$cer$encoder_143, const_str_plain_staticmethod );

            if ( tmp_called_name_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }

            if ( tmp_called_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_6__componentSortKey(  );



            frame_f9935761b385136b37356e20f41271d2_9->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
            }

            Py_DECREF( tmp_called_name_22 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            goto condexpr_end_23;
            condexpr_false_23:;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_6__componentSortKey(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            condexpr_end_23:;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_143, const_str_plain__componentSortKey, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_pyasn1$codec$cer$encoder$$$function_7_encodeValue(  );



        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_143, const_str_plain_encodeValue, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f9935761b385136b37356e20f41271d2_9 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f9935761b385136b37356e20f41271d2_9 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_f9935761b385136b37356e20f41271d2_9, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_f9935761b385136b37356e20f41271d2_9->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_f9935761b385136b37356e20f41271d2_9, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f9935761b385136b37356e20f41271d2_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame.
        if ( frame_f9935761b385136b37356e20f41271d2_9 == cache_frame_f9935761b385136b37356e20f41271d2_9 )
        {
            Py_DECREF( frame_f9935761b385136b37356e20f41271d2_9 );
        }
        cache_frame_f9935761b385136b37356e20f41271d2_9 = NULL;

        assertFrameObject( frame_f9935761b385136b37356e20f41271d2_9 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_25;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_55;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_compexpr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT( tmp_class_creation_8__bases_orig );
            tmp_compexpr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto try_except_handler_25;
            }
            tmp_condition_result_55 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_55 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_32;
            }
            else
            {
                goto branch_no_32;
            }
            branch_yes_32:;
            CHECK_OBJECT( tmp_class_creation_8__bases_orig );
            tmp_dictset_value = tmp_class_creation_8__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_143, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto try_except_handler_25;
            }
            branch_no_32:;
        }
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_name_23;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kw_name_16;
            CHECK_OBJECT( tmp_class_creation_8__metaclass );
            tmp_called_name_23 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_31 = const_str_plain_SetEncoder;
            tmp_args_name_16 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_31 );
            PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_31 );
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_tuple_element_31 = tmp_class_creation_8__bases;
            Py_INCREF( tmp_tuple_element_31 );
            PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_31 );
            tmp_tuple_element_31 = locals_pyasn1$codec$cer$encoder_143;
            Py_INCREF( tmp_tuple_element_31 );
            PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_31 );
            CHECK_OBJECT( tmp_class_creation_8__class_decl_dict );
            tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 143;
            tmp_assign_source_74 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_16, tmp_kw_name_16 );
            Py_DECREF( tmp_args_name_16 );
            if ( tmp_assign_source_74 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;

                goto try_except_handler_25;
            }
            assert( outline_7_var___class__ == NULL );
            outline_7_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT( outline_7_var___class__ );
        tmp_assign_source_73 = outline_7_var___class__;
        Py_INCREF( tmp_assign_source_73 );
        goto try_return_handler_25;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_143 );
        locals_pyasn1$codec$cer$encoder_143 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_143 );
        locals_pyasn1$codec$cer$encoder_143 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
        Py_DECREF( outline_7_var___class__ );
        outline_7_var___class__ = NULL;

        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_8:;
        exception_lineno = 143;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetEncoder, tmp_assign_source_73 );
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases_orig );
    tmp_class_creation_8__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases_orig );
    Py_DECREF( tmp_class_creation_8__bases_orig );
    tmp_class_creation_8__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_source_name_40;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;

            goto try_except_handler_26;
        }

        tmp_source_name_40 = tmp_mvar_value_12;
        tmp_tuple_element_32 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_SequenceEncoder );
        if ( tmp_tuple_element_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        tmp_assign_source_75 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_75, 0, tmp_tuple_element_32 );
        assert( tmp_class_creation_9__bases_orig == NULL );
        tmp_class_creation_9__bases_orig = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT( tmp_class_creation_9__bases_orig );
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF( tmp_dircall_arg1_9 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_76 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        assert( tmp_class_creation_9__bases == NULL );
        tmp_class_creation_9__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = PyDict_New();
        assert( tmp_class_creation_9__class_decl_dict == NULL );
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_metaclass_name_9;
        nuitka_bool tmp_condition_result_56;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_name_25;
        PyObject *tmp_dict_name_26;
        PyObject *tmp_key_name_26;
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_bases_name_9;
        tmp_key_name_25 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        tmp_condition_result_56 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_56 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_24;
        }
        else
        {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_name_26 = const_str_plain_metaclass;
        tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
        if ( tmp_metaclass_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_truth_name_9 = CHECK_IF_TRUE( tmp_class_creation_9__bases );
        if ( tmp_truth_name_9 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        tmp_condition_result_57 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_57 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_25;
        }
        else
        {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_subscribed_name_9 = tmp_class_creation_9__bases;
        tmp_subscript_name_9 = const_int_0;
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, 0 );
        if ( tmp_type_arg_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_17 );
        Py_DECREF( tmp_type_arg_17 );
        if ( tmp_metaclass_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_9 );
        condexpr_end_25:;
        condexpr_end_24:;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_bases_name_9 = tmp_class_creation_9__bases;
        tmp_assign_source_78 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
        Py_DECREF( tmp_metaclass_name_9 );
        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        assert( tmp_class_creation_9__metaclass == NULL );
        tmp_class_creation_9__metaclass = tmp_assign_source_78;
    }
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_name_27;
        tmp_key_name_27 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        tmp_condition_result_58 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_58 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_33;
        }
        else
        {
            goto branch_no_33;
        }
        branch_yes_33:;
        CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_26;
        }
        branch_no_33:;
    }
    {
        nuitka_bool tmp_condition_result_59;
        PyObject *tmp_source_name_41;
        CHECK_OBJECT( tmp_class_creation_9__metaclass );
        tmp_source_name_41 = tmp_class_creation_9__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_41, const_str_plain___prepare__ );
        tmp_condition_result_59 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_59 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_34;
        }
        else
        {
            goto branch_no_34;
        }
        branch_yes_34:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_called_name_24;
            PyObject *tmp_source_name_42;
            PyObject *tmp_args_name_17;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kw_name_17;
            CHECK_OBJECT( tmp_class_creation_9__metaclass );
            tmp_source_name_42 = tmp_class_creation_9__metaclass;
            tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain___prepare__ );
            if ( tmp_called_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;

                goto try_except_handler_26;
            }
            tmp_tuple_element_33 = const_str_plain_SequenceEncoder;
            tmp_args_name_17 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_33 );
            PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_33 );
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_tuple_element_33 = tmp_class_creation_9__bases;
            Py_INCREF( tmp_tuple_element_33 );
            PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_33 );
            CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
            tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 233;
            tmp_assign_source_79 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_17, tmp_kw_name_17 );
            Py_DECREF( tmp_called_name_24 );
            Py_DECREF( tmp_args_name_17 );
            if ( tmp_assign_source_79 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;

                goto try_except_handler_26;
            }
            assert( tmp_class_creation_9__prepared == NULL );
            tmp_class_creation_9__prepared = tmp_assign_source_79;
        }
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_operand_name_9;
            PyObject *tmp_source_name_43;
            CHECK_OBJECT( tmp_class_creation_9__prepared );
            tmp_source_name_43 = tmp_class_creation_9__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_43, const_str_plain___getitem__ );
            tmp_operand_name_9 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;

                goto try_except_handler_26;
            }
            tmp_condition_result_60 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_60 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_35;
            }
            else
            {
                goto branch_no_35;
            }
            branch_yes_35:;
            {
                PyObject *tmp_raise_type_9;
                PyObject *tmp_raise_value_9;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_getattr_target_9;
                PyObject *tmp_getattr_attr_9;
                PyObject *tmp_getattr_default_9;
                PyObject *tmp_source_name_44;
                PyObject *tmp_type_arg_18;
                tmp_raise_type_9 = PyExc_TypeError;
                tmp_left_name_9 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_9__metaclass );
                tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
                tmp_getattr_attr_9 = const_str_plain___name__;
                tmp_getattr_default_9 = const_str_angle_metaclass;
                tmp_tuple_element_34 = BUILTIN_GETATTR( tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9 );
                if ( tmp_tuple_element_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 233;

                    goto try_except_handler_26;
                }
                tmp_right_name_9 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_34 );
                CHECK_OBJECT( tmp_class_creation_9__prepared );
                tmp_type_arg_18 = tmp_class_creation_9__prepared;
                tmp_source_name_44 = BUILTIN_TYPE1( tmp_type_arg_18 );
                assert( !(tmp_source_name_44 == NULL) );
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_44 );
                if ( tmp_tuple_element_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_9 );

                    exception_lineno = 233;

                    goto try_except_handler_26;
                }
                PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_34 );
                tmp_raise_value_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_raise_value_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 233;

                    goto try_except_handler_26;
                }
                exception_type = tmp_raise_type_9;
                Py_INCREF( tmp_raise_type_9 );
                exception_value = tmp_raise_value_9;
                exception_lineno = 233;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_26;
            }
            branch_no_35:;
        }
        goto branch_end_34;
        branch_no_34:;
        {
            PyObject *tmp_assign_source_80;
            tmp_assign_source_80 = PyDict_New();
            assert( tmp_class_creation_9__prepared == NULL );
            tmp_class_creation_9__prepared = tmp_assign_source_80;
        }
        branch_end_34:;
    }
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT( tmp_class_creation_9__prepared );
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_pyasn1$codec$cer$encoder_233 = tmp_set_locals_9;
            Py_INCREF( tmp_set_locals_9 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_233, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_28;
        }
        tmp_dictset_value = const_str_plain_SequenceEncoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_233, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto try_except_handler_28;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_38fb13731b53527f6dbdb73705b945da_10, codeobj_38fb13731b53527f6dbdb73705b945da, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_38fb13731b53527f6dbdb73705b945da_10 = cache_frame_38fb13731b53527f6dbdb73705b945da_10;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_38fb13731b53527f6dbdb73705b945da_10 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_38fb13731b53527f6dbdb73705b945da_10 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_233, const_str_plain_omitEmptyOptionals, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_38fb13731b53527f6dbdb73705b945da_10 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_38fb13731b53527f6dbdb73705b945da_10 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_38fb13731b53527f6dbdb73705b945da_10, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_38fb13731b53527f6dbdb73705b945da_10->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_38fb13731b53527f6dbdb73705b945da_10, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_38fb13731b53527f6dbdb73705b945da_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame.
        if ( frame_38fb13731b53527f6dbdb73705b945da_10 == cache_frame_38fb13731b53527f6dbdb73705b945da_10 )
        {
            Py_DECREF( frame_38fb13731b53527f6dbdb73705b945da_10 );
        }
        cache_frame_38fb13731b53527f6dbdb73705b945da_10 = NULL;

        assertFrameObject( frame_38fb13731b53527f6dbdb73705b945da_10 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_28;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_61;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_compexpr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT( tmp_class_creation_9__bases_orig );
            tmp_compexpr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;

                goto try_except_handler_28;
            }
            tmp_condition_result_61 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_61 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_36;
            }
            else
            {
                goto branch_no_36;
            }
            branch_yes_36:;
            CHECK_OBJECT( tmp_class_creation_9__bases_orig );
            tmp_dictset_value = tmp_class_creation_9__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_233, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;

                goto try_except_handler_28;
            }
            branch_no_36:;
        }
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kw_name_18;
            CHECK_OBJECT( tmp_class_creation_9__metaclass );
            tmp_called_name_25 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_35 = const_str_plain_SequenceEncoder;
            tmp_args_name_18 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_35 );
            PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_35 );
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_tuple_element_35 = tmp_class_creation_9__bases;
            Py_INCREF( tmp_tuple_element_35 );
            PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_35 );
            tmp_tuple_element_35 = locals_pyasn1$codec$cer$encoder_233;
            Py_INCREF( tmp_tuple_element_35 );
            PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_35 );
            CHECK_OBJECT( tmp_class_creation_9__class_decl_dict );
            tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 233;
            tmp_assign_source_82 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_18, tmp_kw_name_18 );
            Py_DECREF( tmp_args_name_18 );
            if ( tmp_assign_source_82 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;

                goto try_except_handler_28;
            }
            assert( outline_8_var___class__ == NULL );
            outline_8_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT( outline_8_var___class__ );
        tmp_assign_source_81 = outline_8_var___class__;
        Py_INCREF( tmp_assign_source_81 );
        goto try_return_handler_28;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_233 );
        locals_pyasn1$codec$cer$encoder_233 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_233 );
        locals_pyasn1$codec$cer$encoder_233 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
        Py_DECREF( outline_8_var___class__ );
        outline_8_var___class__ = NULL;

        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_9:;
        exception_lineno = 233;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SequenceEncoder, tmp_assign_source_81 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases_orig );
    tmp_class_creation_9__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases_orig );
    Py_DECREF( tmp_class_creation_9__bases_orig );
    tmp_class_creation_9__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_45;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }

        tmp_source_name_45 = tmp_mvar_value_13;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_tagMap );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 237;
        tmp_assign_source_83 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_tagMap, tmp_assign_source_83 );
    }
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_source_name_46;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_47;
        PyObject *tmp_source_name_48;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_49;
        PyObject *tmp_source_name_50;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_51;
        PyObject *tmp_source_name_52;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_53;
        PyObject *tmp_source_name_54;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_called_name_30;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_55;
        PyObject *tmp_source_name_56;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_called_name_31;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_57;
        PyObject *tmp_source_name_58;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_called_name_32;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_tagMap );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_source_name_46 = tmp_mvar_value_14;
        tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_update );
        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }

        tmp_source_name_48 = tmp_mvar_value_15;
        tmp_source_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_Boolean );
        if ( tmp_source_name_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_47 );
        if ( tmp_dict_key_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_BooleanEncoder );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BooleanEncoder );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_dict_key_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BooleanEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_16;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 239;
        tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_27 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_dict_key_1 );

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }

        tmp_source_name_50 = tmp_mvar_value_17;
        tmp_source_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_Real );
        if ( tmp_source_name_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_49 );
        if ( tmp_dict_key_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_RealEncoder );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RealEncoder );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RealEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }

        tmp_called_name_28 = tmp_mvar_value_18;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 240;
        tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_28 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_2 );

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useful );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "useful" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }

        tmp_source_name_52 = tmp_mvar_value_19;
        tmp_source_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_GeneralizedTime );
        if ( tmp_source_name_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_51 );
        if ( tmp_dict_key_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GeneralizedTimeEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_20;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 241;
        tmp_dict_value_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_29 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_3 );

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useful );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "useful" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }

        tmp_source_name_54 = tmp_mvar_value_21;
        tmp_source_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_UTCTime );
        if ( tmp_source_name_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_53 );
        if ( tmp_dict_key_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTCTimeEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }

        tmp_called_name_30 = tmp_mvar_value_22;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 242;
        tmp_dict_value_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_30 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_4 );

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }

        tmp_source_name_56 = tmp_mvar_value_23;
        tmp_source_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_SetOf );
        if ( tmp_source_name_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_tagSet );
        Py_DECREF( tmp_source_name_55 );
        if ( tmp_dict_key_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetOfEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }

        tmp_called_name_31 = tmp_mvar_value_24;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 244;
        tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_31 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_5 );

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        Py_DECREF( tmp_dict_key_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_25 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }

        tmp_source_name_58 = tmp_mvar_value_25;
        tmp_source_name_57 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_Sequence );
        if ( tmp_source_name_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_57 );
        if ( tmp_dict_key_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SequenceEncoder );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SequenceEncoder );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SequenceEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }

        tmp_called_name_32 = tmp_mvar_value_26;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 245;
        tmp_dict_value_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_32 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_dict_key_6 );

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        Py_DECREF( tmp_dict_key_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_26 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_59;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }

        tmp_source_name_59 = tmp_mvar_value_27;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_typeMap );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 248;
        tmp_assign_source_84 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_84 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_typeMap, tmp_assign_source_84 );
    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_source_name_60;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_61;
        PyObject *tmp_source_name_62;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_called_name_34;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_63;
        PyObject *tmp_source_name_64;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_called_name_35;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_source_name_65;
        PyObject *tmp_source_name_66;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_called_name_36;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_source_name_67;
        PyObject *tmp_source_name_68;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_called_name_37;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_source_name_69;
        PyObject *tmp_source_name_70;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_called_name_38;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_source_name_71;
        PyObject *tmp_source_name_72;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_called_name_39;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_source_name_73;
        PyObject *tmp_source_name_74;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_called_name_40;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_source_name_75;
        PyObject *tmp_source_name_76;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_called_name_41;
        PyObject *tmp_mvar_value_44;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_typeMap );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
        }

        CHECK_OBJECT( tmp_mvar_value_28 );
        tmp_source_name_60 = tmp_mvar_value_28;
        tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_update );
        if ( tmp_called_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_29 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }

        tmp_source_name_62 = tmp_mvar_value_29;
        tmp_source_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_Boolean );
        if ( tmp_source_name_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_61 );
        if ( tmp_dict_key_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_BooleanEncoder );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BooleanEncoder );
        }

        if ( tmp_mvar_value_30 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_dict_key_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BooleanEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }

        tmp_called_name_34 = tmp_mvar_value_30;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 250;
        tmp_dict_value_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_34 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_dict_key_7 );

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        Py_DECREF( tmp_dict_key_7 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_31 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }

        tmp_source_name_64 = tmp_mvar_value_31;
        tmp_source_name_63 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_Real );
        if ( tmp_source_name_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_63 );
        if ( tmp_dict_key_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_RealEncoder );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RealEncoder );
        }

        if ( tmp_mvar_value_32 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RealEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }

        tmp_called_name_35 = tmp_mvar_value_32;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 251;
        tmp_dict_value_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_35 );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_8 );

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        Py_DECREF( tmp_dict_key_8 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useful );
        }

        if ( tmp_mvar_value_33 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "useful" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }

        tmp_source_name_66 = tmp_mvar_value_33;
        tmp_source_name_65 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_GeneralizedTime );
        if ( tmp_source_name_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_65 );
        if ( tmp_dict_key_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GeneralizedTimeEncoder );
        }

        if ( tmp_mvar_value_34 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GeneralizedTimeEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }

        tmp_called_name_36 = tmp_mvar_value_34;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 252;
        tmp_dict_value_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_36 );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_9 );

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        Py_DECREF( tmp_dict_key_9 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_useful );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_useful );
        }

        if ( tmp_mvar_value_35 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "useful" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 253;

            goto frame_exception_exit_1;
        }

        tmp_source_name_68 = tmp_mvar_value_35;
        tmp_source_name_67 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_UTCTime );
        if ( tmp_source_name_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_67 );
        if ( tmp_dict_key_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTCTimeEncoder );
        }

        if ( tmp_mvar_value_36 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTCTimeEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 253;

            goto frame_exception_exit_1;
        }

        tmp_called_name_37 = tmp_mvar_value_36;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 253;
        tmp_dict_value_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_37 );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_10 );

            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        Py_DECREF( tmp_dict_key_10 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_37 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }

        tmp_source_name_70 = tmp_mvar_value_37;
        tmp_source_name_69 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_Set );
        if ( tmp_source_name_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_11 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_69 );
        if ( tmp_dict_key_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetEncoder );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetEncoder );
        }

        if ( tmp_mvar_value_38 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }

        tmp_called_name_38 = tmp_mvar_value_38;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 255;
        tmp_dict_value_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_38 );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_11 );

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        Py_DECREF( tmp_dict_key_11 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_39 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }

        tmp_source_name_72 = tmp_mvar_value_39;
        tmp_source_name_71 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_SetOf );
        if ( tmp_source_name_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_12 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_71 );
        if ( tmp_dict_key_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetOfEncoder );
        }

        if ( tmp_mvar_value_40 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetOfEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }

        tmp_called_name_39 = tmp_mvar_value_40;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 256;
        tmp_dict_value_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_39 );
        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_12 );

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        Py_DECREF( tmp_dict_key_12 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_41 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }

        tmp_source_name_74 = tmp_mvar_value_41;
        tmp_source_name_73 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_Sequence );
        if ( tmp_source_name_73 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_13 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_73 );
        if ( tmp_dict_key_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SequenceEncoder );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SequenceEncoder );
        }

        if ( tmp_mvar_value_42 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SequenceEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }

        tmp_called_name_40 = tmp_mvar_value_42;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 257;
        tmp_dict_value_13 = CALL_FUNCTION_NO_ARGS( tmp_called_name_40 );
        if ( tmp_dict_value_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_13 );

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_13, tmp_dict_value_13 );
        Py_DECREF( tmp_dict_value_13 );
        Py_DECREF( tmp_dict_key_13 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_univ );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_univ );
        }

        if ( tmp_mvar_value_43 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "univ" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }

        tmp_source_name_76 = tmp_mvar_value_43;
        tmp_source_name_75 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_SequenceOf );
        if ( tmp_source_name_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_14 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_typeId );
        Py_DECREF( tmp_source_name_75 );
        if ( tmp_dict_key_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_SequenceOfEncoder );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SequenceOfEncoder );
        }

        if ( tmp_mvar_value_44 == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SequenceOfEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }

        tmp_called_name_41 = tmp_mvar_value_44;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 258;
        tmp_dict_value_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_41 );
        if ( tmp_dict_value_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_dict_key_14 );

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_args_element_name_3, tmp_dict_key_14, tmp_dict_value_14 );
        Py_DECREF( tmp_dict_value_14 );
        Py_DECREF( tmp_dict_key_14 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
        }

        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_source_name_77;
        PyObject *tmp_mvar_value_45;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encoder );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encoder );
        }

        if ( tmp_mvar_value_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 262;

            goto try_except_handler_29;
        }

        tmp_source_name_77 = tmp_mvar_value_45;
        tmp_tuple_element_36 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_Encoder );
        if ( tmp_tuple_element_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        tmp_assign_source_85 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_85, 0, tmp_tuple_element_36 );
        assert( tmp_class_creation_10__bases_orig == NULL );
        tmp_class_creation_10__bases_orig = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT( tmp_class_creation_10__bases_orig );
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF( tmp_dircall_arg1_10 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_86 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        assert( tmp_class_creation_10__bases == NULL );
        tmp_class_creation_10__bases = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = PyDict_New();
        assert( tmp_class_creation_10__class_decl_dict == NULL );
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_metaclass_name_10;
        nuitka_bool tmp_condition_result_62;
        PyObject *tmp_key_name_28;
        PyObject *tmp_dict_name_28;
        PyObject *tmp_dict_name_29;
        PyObject *tmp_key_name_29;
        nuitka_bool tmp_condition_result_63;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_bases_name_10;
        tmp_key_name_28 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dict_name_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_28, tmp_key_name_28 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        tmp_condition_result_62 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_62 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_26;
        }
        else
        {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dict_name_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_name_29 = const_str_plain_metaclass;
        tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
        if ( tmp_metaclass_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        CHECK_OBJECT( tmp_class_creation_10__bases );
        tmp_truth_name_10 = CHECK_IF_TRUE( tmp_class_creation_10__bases );
        if ( tmp_truth_name_10 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        tmp_condition_result_63 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_63 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_27;
        }
        else
        {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT( tmp_class_creation_10__bases );
        tmp_subscribed_name_10 = tmp_class_creation_10__bases;
        tmp_subscript_name_10 = const_int_0;
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, 0 );
        if ( tmp_type_arg_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_19 );
        Py_DECREF( tmp_type_arg_19 );
        if ( tmp_metaclass_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_10 );
        condexpr_end_27:;
        condexpr_end_26:;
        CHECK_OBJECT( tmp_class_creation_10__bases );
        tmp_bases_name_10 = tmp_class_creation_10__bases;
        tmp_assign_source_88 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
        Py_DECREF( tmp_metaclass_name_10 );
        if ( tmp_assign_source_88 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        assert( tmp_class_creation_10__metaclass == NULL );
        tmp_class_creation_10__metaclass = tmp_assign_source_88;
    }
    {
        nuitka_bool tmp_condition_result_64;
        PyObject *tmp_key_name_30;
        PyObject *tmp_dict_name_30;
        tmp_key_name_30 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dict_name_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_30, tmp_key_name_30 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        tmp_condition_result_64 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_64 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_37;
        }
        else
        {
            goto branch_no_37;
        }
        branch_yes_37:;
        CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_29;
        }
        branch_no_37:;
    }
    {
        nuitka_bool tmp_condition_result_65;
        PyObject *tmp_source_name_78;
        CHECK_OBJECT( tmp_class_creation_10__metaclass );
        tmp_source_name_78 = tmp_class_creation_10__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_78, const_str_plain___prepare__ );
        tmp_condition_result_65 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_65 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_38;
        }
        else
        {
            goto branch_no_38;
        }
        branch_yes_38:;
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_called_name_42;
            PyObject *tmp_source_name_79;
            PyObject *tmp_args_name_19;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kw_name_19;
            CHECK_OBJECT( tmp_class_creation_10__metaclass );
            tmp_source_name_79 = tmp_class_creation_10__metaclass;
            tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain___prepare__ );
            if ( tmp_called_name_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_29;
            }
            tmp_tuple_element_37 = const_str_plain_Encoder;
            tmp_args_name_19 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_37 );
            PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_37 );
            CHECK_OBJECT( tmp_class_creation_10__bases );
            tmp_tuple_element_37 = tmp_class_creation_10__bases;
            Py_INCREF( tmp_tuple_element_37 );
            PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_37 );
            CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
            tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 262;
            tmp_assign_source_89 = CALL_FUNCTION( tmp_called_name_42, tmp_args_name_19, tmp_kw_name_19 );
            Py_DECREF( tmp_called_name_42 );
            Py_DECREF( tmp_args_name_19 );
            if ( tmp_assign_source_89 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_29;
            }
            assert( tmp_class_creation_10__prepared == NULL );
            tmp_class_creation_10__prepared = tmp_assign_source_89;
        }
        {
            nuitka_bool tmp_condition_result_66;
            PyObject *tmp_operand_name_10;
            PyObject *tmp_source_name_80;
            CHECK_OBJECT( tmp_class_creation_10__prepared );
            tmp_source_name_80 = tmp_class_creation_10__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_80, const_str_plain___getitem__ );
            tmp_operand_name_10 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_29;
            }
            tmp_condition_result_66 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_66 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_39;
            }
            else
            {
                goto branch_no_39;
            }
            branch_yes_39:;
            {
                PyObject *tmp_raise_type_10;
                PyObject *tmp_raise_value_10;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_getattr_target_10;
                PyObject *tmp_getattr_attr_10;
                PyObject *tmp_getattr_default_10;
                PyObject *tmp_source_name_81;
                PyObject *tmp_type_arg_20;
                tmp_raise_type_10 = PyExc_TypeError;
                tmp_left_name_10 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_10__metaclass );
                tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
                tmp_getattr_attr_10 = const_str_plain___name__;
                tmp_getattr_default_10 = const_str_angle_metaclass;
                tmp_tuple_element_38 = BUILTIN_GETATTR( tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10 );
                if ( tmp_tuple_element_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;

                    goto try_except_handler_29;
                }
                tmp_right_name_10 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_10, 0, tmp_tuple_element_38 );
                CHECK_OBJECT( tmp_class_creation_10__prepared );
                tmp_type_arg_20 = tmp_class_creation_10__prepared;
                tmp_source_name_81 = BUILTIN_TYPE1( tmp_type_arg_20 );
                assert( !(tmp_source_name_81 == NULL) );
                tmp_tuple_element_38 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_81 );
                if ( tmp_tuple_element_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_10 );

                    exception_lineno = 262;

                    goto try_except_handler_29;
                }
                PyTuple_SET_ITEM( tmp_right_name_10, 1, tmp_tuple_element_38 );
                tmp_raise_value_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_raise_value_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;

                    goto try_except_handler_29;
                }
                exception_type = tmp_raise_type_10;
                Py_INCREF( tmp_raise_type_10 );
                exception_value = tmp_raise_value_10;
                exception_lineno = 262;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_29;
            }
            branch_no_39:;
        }
        goto branch_end_38;
        branch_no_38:;
        {
            PyObject *tmp_assign_source_90;
            tmp_assign_source_90 = PyDict_New();
            assert( tmp_class_creation_10__prepared == NULL );
            tmp_class_creation_10__prepared = tmp_assign_source_90;
        }
        branch_end_38:;
    }
    {
        PyObject *tmp_assign_source_91;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT( tmp_class_creation_10__prepared );
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_pyasn1$codec$cer$encoder_262 = tmp_set_locals_10;
            Py_INCREF( tmp_set_locals_10 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6b8af7167af33ad6201188dc064ba6b;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_262, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_31;
        }
        tmp_dictset_value = const_str_plain_Encoder;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_262, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto try_except_handler_31;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_6e0920d90e467b00f3f0aea6a7e44c56_11, codeobj_6e0920d90e467b00f3f0aea6a7e44c56, module_pyasn1$codec$cer$encoder, sizeof(void *) );
        frame_6e0920d90e467b00f3f0aea6a7e44c56_11 = cache_frame_6e0920d90e467b00f3f0aea6a7e44c56_11;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_6e0920d90e467b00f3f0aea6a7e44c56_11 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_6e0920d90e467b00f3f0aea6a7e44c56_11 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_262, const_str_plain_fixedDefLengthMode, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        tmp_dictset_value = const_int_pos_1000;
        tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_262, const_str_plain_fixedChunkSize, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6e0920d90e467b00f3f0aea6a7e44c56_11 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_6e0920d90e467b00f3f0aea6a7e44c56_11 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_6e0920d90e467b00f3f0aea6a7e44c56_11, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_6e0920d90e467b00f3f0aea6a7e44c56_11->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_6e0920d90e467b00f3f0aea6a7e44c56_11, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_6e0920d90e467b00f3f0aea6a7e44c56_11,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame.
        if ( frame_6e0920d90e467b00f3f0aea6a7e44c56_11 == cache_frame_6e0920d90e467b00f3f0aea6a7e44c56_11 )
        {
            Py_DECREF( frame_6e0920d90e467b00f3f0aea6a7e44c56_11 );
        }
        cache_frame_6e0920d90e467b00f3f0aea6a7e44c56_11 = NULL;

        assertFrameObject( frame_6e0920d90e467b00f3f0aea6a7e44c56_11 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_31;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_67;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT( tmp_class_creation_10__bases );
            tmp_compexpr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT( tmp_class_creation_10__bases_orig );
            tmp_compexpr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_31;
            }
            tmp_condition_result_67 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_67 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_40;
            }
            else
            {
                goto branch_no_40;
            }
            branch_yes_40:;
            CHECK_OBJECT( tmp_class_creation_10__bases_orig );
            tmp_dictset_value = tmp_class_creation_10__bases_orig;
            tmp_res = PyObject_SetItem( locals_pyasn1$codec$cer$encoder_262, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_31;
            }
            branch_no_40:;
        }
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_name_43;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kw_name_20;
            CHECK_OBJECT( tmp_class_creation_10__metaclass );
            tmp_called_name_43 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_39 = const_str_plain_Encoder;
            tmp_args_name_20 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_39 );
            PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_39 );
            CHECK_OBJECT( tmp_class_creation_10__bases );
            tmp_tuple_element_39 = tmp_class_creation_10__bases;
            Py_INCREF( tmp_tuple_element_39 );
            PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_39 );
            tmp_tuple_element_39 = locals_pyasn1$codec$cer$encoder_262;
            Py_INCREF( tmp_tuple_element_39 );
            PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_39 );
            CHECK_OBJECT( tmp_class_creation_10__class_decl_dict );
            tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;
            frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 262;
            tmp_assign_source_92 = CALL_FUNCTION( tmp_called_name_43, tmp_args_name_20, tmp_kw_name_20 );
            Py_DECREF( tmp_args_name_20 );
            if ( tmp_assign_source_92 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;

                goto try_except_handler_31;
            }
            assert( outline_9_var___class__ == NULL );
            outline_9_var___class__ = tmp_assign_source_92;
        }
        CHECK_OBJECT( outline_9_var___class__ );
        tmp_assign_source_91 = outline_9_var___class__;
        Py_INCREF( tmp_assign_source_91 );
        goto try_return_handler_31;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF( locals_pyasn1$codec$cer$encoder_262 );
        locals_pyasn1$codec$cer$encoder_262 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_pyasn1$codec$cer$encoder_262 );
        locals_pyasn1$codec$cer$encoder_262 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
        Py_DECREF( outline_9_var___class__ );
        outline_9_var___class__ = NULL;

        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyasn1$codec$cer$encoder );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_10:;
        exception_lineno = 262;
        goto try_except_handler_29;
        outline_result_10:;
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_Encoder, tmp_assign_source_91 );
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases_orig );
    tmp_class_creation_10__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases_orig );
    Py_DECREF( tmp_class_creation_10__bases_orig );
    tmp_class_creation_10__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__prepared );
    Py_DECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_name_44;
        PyObject *tmp_mvar_value_46;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_48;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_Encoder );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Encoder );
        }

        if ( tmp_mvar_value_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Encoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }

        tmp_called_name_44 = tmp_mvar_value_46;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_tagMap );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tagMap );
        }

        if ( tmp_mvar_value_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tagMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_47;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_typeMap );

        if (unlikely( tmp_mvar_value_48 == NULL ))
        {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_typeMap );
        }

        if ( tmp_mvar_value_48 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "typeMap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_48;
        frame_a09478a030821b22f3370e6bab975c67->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_44, call_args );
        }

        if ( tmp_assign_source_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1$codec$cer$encoder, (Nuitka_StringObject *)const_str_plain_encode, tmp_assign_source_93 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a09478a030821b22f3370e6bab975c67 );
#endif
    popFrameStack();

    assertFrameObject( frame_a09478a030821b22f3370e6bab975c67 );

    goto frame_no_exception_11;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a09478a030821b22f3370e6bab975c67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a09478a030821b22f3370e6bab975c67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a09478a030821b22f3370e6bab975c67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a09478a030821b22f3370e6bab975c67, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_11:;

    return MOD_RETURN_VALUE( module_pyasn1$codec$cer$encoder );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
