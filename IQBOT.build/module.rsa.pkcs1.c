/* Generated code for Python module 'rsa.pkcs1'
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

/* The "_module_rsa$pkcs1" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$pkcs1;
PyDictObject *moduledict_rsa$pkcs1;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_91012c747d1826684889b0187ce7d184;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___name__;
static PyObject *const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_bytes_digest_927e3ed82a7a127e3baf8195a1ef8d41;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_plain_DecryptionError;
static PyObject *const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple;
static PyObject *const_str_plain_hasher;
static PyObject *const_str_digest_51ddb104c0c56080abe1880e7c52c746;
extern PyObject *const_str_plain_items;
static PyObject *const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40;
extern PyObject *const_str_plain_VerificationError;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_rsa;
static PyObject *const_str_plain_blocksize;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain_payload;
extern PyObject *const_int_pos_5;
static PyObject *const_bytes_digest_55b73a6d4f50381148af7e3a84b646b0;
extern PyObject *const_str_plain_MD5;
extern PyObject *const_int_pos_1024;
static PyObject *const_str_plain_pub_key;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_72c5192cfcd05152e099e5b0075f6917;
extern PyObject *const_str_plain_block;
static PyObject *const_str_digest_d7a29c45b99ee667623099ac956e8dd9;
static PyObject *const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple;
static PyObject *const_str_plain_new_padding;
static PyObject *const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_padding;
static PyObject *const_str_digest_8e6c146abea2e9a74bbae52248e9fe41;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_needed_bytes;
extern PyObject *const_str_plain_hashlib;
static PyObject *const_str_digest_0f45a4b52906bf9db9551d5b86ec7760;
static PyObject *const_str_digest_812da8a29ca127380db23416adbaf925;
static PyObject *const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple;
static PyObject *const_str_plain_keylength;
static PyObject *const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple;
extern PyObject *const_str_plain_encrypt_int;
static PyObject *const_str_digest_7330fab1d7073751f2d5bfc9ad7b70de;
extern PyObject *const_str_plain_transform;
extern PyObject *const_str_plain_sha512;
extern PyObject *const_tuple_str_plain_range_tuple;
static PyObject *const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8;
extern PyObject *const_str_digest_1e080f858ef601c43605cc71a556333d;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_CryptoError;
static PyObject *const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple;
extern PyObject *const_str_plain_message;
static PyObject *const_str_plain_sep_idx;
static PyObject *const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8;
static PyObject *const_str_plain_HASH_METHODS;
static PyObject *const_str_plain_hash_method;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_crypto;
static PyObject *const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple;
static PyObject *const_str_digest_3eb4481563a33d714bf11d2347041c54;
extern PyObject *const_str_plain_sign;
static PyObject *const_str_plain__find_method_hash;
static PyObject *const_str_plain_message_hash;
static PyObject *const_str_plain_target_length;
extern PyObject *const_str_plain_encrypted;
extern PyObject *const_str_digest_97dcb4754378a8f54936024697d0d59e;
static PyObject *const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c;
static PyObject *const_str_digest_1de70dca33ce419c934a309ef8124470;
extern PyObject *const_str_plain_compute_hash;
static PyObject *const_str_plain_hash_value;
static PyObject *const_tuple_bytes_chr_0_bytes_empty_tuple;
extern PyObject *const_str_plain_urandom;
extern PyObject *const_str_plain_expected;
static PyObject *const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple;
extern PyObject *const_str_plain_encrypt;
static PyObject *const_list_c5a99d18a43567ed28454d8b2a4a6a21_list;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_36bfa1361832794c1e78e5a2976574b0;
static PyObject *const_str_plain_max_msglength;
static PyObject *const_str_plain__pad_for_encryption;
static PyObject *const_str_digest_8df157174a1e079df3585a3201ee9cb5;
extern PyObject *const_int_0;
static PyObject *const_bytes_digest_1c0012a226d9b64ad2f11974abc94be6;
static PyObject *const_str_plain_hashname;
static PyObject *const_str_plain_cleartext;
static PyObject *const_str_plain_HASH_ASN1;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_bytes_chr_0_int_pos_2_tuple;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_decrypted;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_tuple_str_plain_common_str_plain_transform_str_plain_core_tuple;
static PyObject *const_str_digest_a61e0f945542e8bf2cc6323b95f66edb;
static PyObject *const_str_plain__pad_for_signing;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_plain_padding_length;
static PyObject *const_str_plain_msg_hash;
extern PyObject *const_str_plain_method_name;
extern PyObject *const_str_plain_int2bytes;
static PyObject *const_str_plain_clearsig;
static PyObject *const_str_digest_c315618cbf868730bbbe33199e90e11d;
extern PyObject *const_str_plain_type;
extern PyObject *const_bytes_empty;
static PyObject *const_str_digest_8fe9f611640f521c7c0f4491b64948d3;
static PyObject *const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple;
extern PyObject *const_tuple_type_Exception_tuple;
static PyObject *const_str_plain_asn1code;
static PyObject *const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple;
extern PyObject *const_str_plain_decrypt_int;
extern PyObject *const_str_plain___module__;
static PyObject *const_bytes_digest_189fdd00ee2d47791cf23326c8496596;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_infile;
extern PyObject *const_str_plain_replace;
static PyObject *const_str_digest_200d74a8d89d6c50593485fee41c8c7a;
extern PyObject *const_str_plain_sign_hash;
static PyObject *const_str_digest_32ca4c5448b5ef80153ec1e314460588;
extern PyObject *const_str_plain_byte_size;
extern PyObject *const_str_plain_digest;
static PyObject *const_str_digest_13616ed0239e00d0446f4afcc75f4919;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_bytes2int;
extern PyObject *const_str_plain_decrypt;
static PyObject *const_bytes_digest_856d14d0885eed60a2b265bd55d3fced;
static PyObject *const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple;
extern PyObject *const_str_plain_md5;
static PyObject *const_str_plain_priv_key;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain___call__;
static PyObject *const_str_digest_af0498b3a85009ae34a3ad96476d8206;
static PyObject *const_str_digest_bc321a0ae8399bdea023d1a6bb95c877;
static PyObject *const_str_plain_sha224;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_bytes_chr_255;
extern PyObject *const_int_pos_2;
extern PyObject *const_bytes_chr_0;
extern PyObject *const_str_plain_blinded_decrypt;
static PyObject *const_str_plain_yield_fixedblocks;
static PyObject *const_dict_b3b804f3a7045b1019f724e56da33528;
extern PyObject *const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
extern PyObject *const_str_plain_padded;
extern PyObject *const_str_plain_common;
extern PyObject *const_str_plain_read_bytes;
extern PyObject *const_str_plain_find_signature_hash;
static PyObject *const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple;
static PyObject *const_bytes_digest_6e18f5153f6f1b5bc59217164755bc77;
extern PyObject *const_str_plain_blinded_encrypt;
static PyObject *const_str_plain_msglength;
extern PyObject *const_slice_int_0_int_pos_2_none;
static PyObject *const_str_plain_sha384;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple, 1, const_str_plain_method_name ); Py_INCREF( const_str_plain_method_name );
    PyTuple_SET_ITEM( const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple, 2, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_str_plain_hasher = UNSTREAM_STRING_ASCII( &constant_bin[ 2735324 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple, 3, const_str_plain_hasher ); Py_INCREF( const_str_plain_hasher );
    PyTuple_SET_ITEM( const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple, 4, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    const_bytes_digest_927e3ed82a7a127e3baf8195a1ef8d41 = UNSTREAM_BYTES( &constant_bin[ 2735330 ], 19 );
    const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, 0, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    const_str_plain_pub_key = UNSTREAM_STRING_ASCII( &constant_bin[ 2735349 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, 1, const_str_plain_pub_key ); Py_INCREF( const_str_plain_pub_key );
    const_str_plain_keylength = UNSTREAM_STRING_ASCII( &constant_bin[ 2735356 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, 2, const_str_plain_keylength ); Py_INCREF( const_str_plain_keylength );
    PyTuple_SET_ITEM( const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, 3, const_str_plain_encrypted ); Py_INCREF( const_str_plain_encrypted );
    PyTuple_SET_ITEM( const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, 4, const_str_plain_decrypted ); Py_INCREF( const_str_plain_decrypted );
    const_str_plain_clearsig = UNSTREAM_STRING_ASCII( &constant_bin[ 2735365 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, 5, const_str_plain_clearsig ); Py_INCREF( const_str_plain_clearsig );
    const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple, 0, const_str_plain_clearsig ); Py_INCREF( const_str_plain_clearsig );
    const_str_plain_hashname = UNSTREAM_STRING_ASCII( &constant_bin[ 2735373 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple, 1, const_str_plain_hashname ); Py_INCREF( const_str_plain_hashname );
    const_str_plain_asn1code = UNSTREAM_STRING_ASCII( &constant_bin[ 2735381 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple, 2, const_str_plain_asn1code ); Py_INCREF( const_str_plain_asn1code );
    const_str_digest_51ddb104c0c56080abe1880e7c52c746 = UNSTREAM_STRING_ASCII( &constant_bin[ 2735389 ], 240, 0 );
    const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40 = UNSTREAM_BYTES( &constant_bin[ 106100 ], 2 );
    const_str_plain_blocksize = UNSTREAM_STRING_ASCII( &constant_bin[ 2735423 ], 9, 1 );
    const_bytes_digest_55b73a6d4f50381148af7e3a84b646b0 = UNSTREAM_BYTES( &constant_bin[ 2735629 ], 15 );
    const_str_digest_72c5192cfcd05152e099e5b0075f6917 = UNSTREAM_STRING_ASCII( &constant_bin[ 2735644 ], 179, 0 );
    const_str_digest_d7a29c45b99ee667623099ac956e8dd9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2735823 ], 677, 0 );
    const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple = PyTuple_New( 4 );
    const_str_plain_infile = UNSTREAM_STRING_ASCII( &constant_bin[ 2735472 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 0, const_str_plain_infile ); Py_INCREF( const_str_plain_infile );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 1, const_str_plain_blocksize ); Py_INCREF( const_str_plain_blocksize );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 2, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    PyTuple_SET_ITEM( const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 3, const_str_plain_read_bytes ); Py_INCREF( const_str_plain_read_bytes );
    const_str_plain_new_padding = UNSTREAM_STRING_ASCII( &constant_bin[ 2736500 ], 11, 1 );
    const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01 = UNSTREAM_STRING_ASCII( &constant_bin[ 2736511 ], 259, 0 );
    const_str_digest_8e6c146abea2e9a74bbae52248e9fe41 = UNSTREAM_STRING_ASCII( &constant_bin[ 2736314 ], 7, 0 );
    const_str_digest_0f45a4b52906bf9db9551d5b86ec7760 = UNSTREAM_STRING_ASCII( &constant_bin[ 2736770 ], 308, 0 );
    const_str_digest_812da8a29ca127380db23416adbaf925 = UNSTREAM_STRING_ASCII( &constant_bin[ 2737078 ], 23, 0 );
    const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_plain_target_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2737101 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple, 1, const_str_plain_target_length ); Py_INCREF( const_str_plain_target_length );
    const_str_plain_max_msglength = UNSTREAM_STRING_ASCII( &constant_bin[ 2737114 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple, 2, const_str_plain_max_msglength ); Py_INCREF( const_str_plain_max_msglength );
    const_str_plain_msglength = UNSTREAM_STRING_ASCII( &constant_bin[ 2737118 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple, 3, const_str_plain_msglength ); Py_INCREF( const_str_plain_msglength );
    const_str_plain_padding_length = UNSTREAM_STRING_ASCII( &constant_bin[ 2737127 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple, 4, const_str_plain_padding_length ); Py_INCREF( const_str_plain_padding_length );
    const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 1, const_str_plain_target_length ); Py_INCREF( const_str_plain_target_length );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 2, const_str_plain_max_msglength ); Py_INCREF( const_str_plain_max_msglength );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 3, const_str_plain_msglength ); Py_INCREF( const_str_plain_msglength );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 4, const_str_plain_padding ); Py_INCREF( const_str_plain_padding );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 5, const_str_plain_padding_length ); Py_INCREF( const_str_plain_padding_length );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 6, const_str_plain_needed_bytes ); Py_INCREF( const_str_plain_needed_bytes );
    PyTuple_SET_ITEM( const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 7, const_str_plain_new_padding ); Py_INCREF( const_str_plain_new_padding );
    const_str_digest_7330fab1d7073751f2d5bfc9ad7b70de = UNSTREAM_STRING_ASCII( &constant_bin[ 2737141 ], 17, 0 );
    const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2737158 ], 1633, 0 );
    const_str_plain_CryptoError = UNSTREAM_STRING_ASCII( &constant_bin[ 2738791 ], 11, 1 );
    const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 1, const_str_plain_pub_key ); Py_INCREF( const_str_plain_pub_key );
    PyTuple_SET_ITEM( const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 2, const_str_plain_keylength ); Py_INCREF( const_str_plain_keylength );
    PyTuple_SET_ITEM( const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 3, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 4, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyTuple_SET_ITEM( const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 5, const_str_plain_encrypted ); Py_INCREF( const_str_plain_encrypted );
    PyTuple_SET_ITEM( const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 6, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    const_str_plain_sep_idx = UNSTREAM_STRING_ASCII( &constant_bin[ 2738802 ], 7, 1 );
    const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8 = UNSTREAM_BYTES( &constant_bin[ 105255 ], 2 );
    const_str_plain_HASH_METHODS = UNSTREAM_STRING_ASCII( &constant_bin[ 2737058 ], 12, 1 );
    const_str_plain_hash_method = UNSTREAM_STRING_ASCII( &constant_bin[ 2736235 ], 11, 1 );
    const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple = PyTuple_New( 1 );
    const_str_digest_200d74a8d89d6c50593485fee41c8c7a = UNSTREAM_STRING_ASCII( &constant_bin[ 2738809 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple, 0, const_str_digest_200d74a8d89d6c50593485fee41c8c7a ); Py_INCREF( const_str_digest_200d74a8d89d6c50593485fee41c8c7a );
    const_str_digest_3eb4481563a33d714bf11d2347041c54 = UNSTREAM_STRING_ASCII( &constant_bin[ 2738828 ], 31, 0 );
    const_str_plain__find_method_hash = UNSTREAM_STRING_ASCII( &constant_bin[ 2738859 ], 17, 1 );
    const_str_plain_message_hash = UNSTREAM_STRING_ASCII( &constant_bin[ 2738876 ], 12, 1 );
    const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c = UNSTREAM_STRING_ASCII( &constant_bin[ 2738888 ], 706, 0 );
    const_str_digest_1de70dca33ce419c934a309ef8124470 = UNSTREAM_STRING_ASCII( &constant_bin[ 2739594 ], 45, 0 );
    const_str_plain_hash_value = UNSTREAM_STRING_ASCII( &constant_bin[ 2736034 ], 10, 1 );
    const_tuple_bytes_chr_0_bytes_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_0_bytes_empty_tuple, 0, const_bytes_chr_0 ); Py_INCREF( const_bytes_chr_0 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_0_bytes_empty_tuple, 1, const_bytes_empty ); Py_INCREF( const_bytes_empty );
    const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 1, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 2, const_str_plain_pub_key ); Py_INCREF( const_str_plain_pub_key );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 3, const_str_plain_keylength ); Py_INCREF( const_str_plain_keylength );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 4, const_str_plain_encrypted ); Py_INCREF( const_str_plain_encrypted );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 5, const_str_plain_decrypted ); Py_INCREF( const_str_plain_decrypted );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 6, const_str_plain_clearsig ); Py_INCREF( const_str_plain_clearsig );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 7, const_str_plain_method_name ); Py_INCREF( const_str_plain_method_name );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 8, const_str_plain_message_hash ); Py_INCREF( const_str_plain_message_hash );
    const_str_plain_cleartext = UNSTREAM_STRING_ASCII( &constant_bin[ 2716632 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 9, const_str_plain_cleartext ); Py_INCREF( const_str_plain_cleartext );
    PyTuple_SET_ITEM( const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 10, const_str_plain_expected ); Py_INCREF( const_str_plain_expected );
    const_list_c5a99d18a43567ed28454d8b2a4a6a21_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list, 0, const_str_plain_encrypt ); Py_INCREF( const_str_plain_encrypt );
    PyList_SET_ITEM( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list, 1, const_str_plain_decrypt ); Py_INCREF( const_str_plain_decrypt );
    PyList_SET_ITEM( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list, 2, const_str_plain_sign ); Py_INCREF( const_str_plain_sign );
    PyList_SET_ITEM( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list, 3, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyList_SET_ITEM( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list, 4, const_str_plain_DecryptionError ); Py_INCREF( const_str_plain_DecryptionError );
    PyList_SET_ITEM( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list, 5, const_str_plain_VerificationError ); Py_INCREF( const_str_plain_VerificationError );
    PyList_SET_ITEM( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list, 6, const_str_plain_CryptoError ); Py_INCREF( const_str_plain_CryptoError );
    const_str_digest_36bfa1361832794c1e78e5a2976574b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2739639 ], 59, 0 );
    const_str_plain__pad_for_encryption = UNSTREAM_STRING_ASCII( &constant_bin[ 2736634 ], 19, 1 );
    const_str_digest_8df157174a1e079df3585a3201ee9cb5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2739698 ], 29, 0 );
    const_bytes_digest_1c0012a226d9b64ad2f11974abc94be6 = UNSTREAM_BYTES( &constant_bin[ 2739727 ], 19 );
    const_str_plain_HASH_ASN1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2739746 ], 9, 1 );
    const_tuple_bytes_chr_0_int_pos_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_0_int_pos_2_tuple, 0, const_bytes_chr_0 ); Py_INCREF( const_bytes_chr_0 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_0_int_pos_2_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_tuple_str_plain_common_str_plain_transform_str_plain_core_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_str_plain_transform_str_plain_core_tuple, 0, const_str_plain_common ); Py_INCREF( const_str_plain_common );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_str_plain_transform_str_plain_core_tuple, 1, const_str_plain_transform ); Py_INCREF( const_str_plain_transform );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_str_plain_transform_str_plain_core_tuple, 2, const_str_plain_core ); Py_INCREF( const_str_plain_core );
    const_str_digest_a61e0f945542e8bf2cc6323b95f66edb = UNSTREAM_STRING_ASCII( &constant_bin[ 2739755 ], 362, 0 );
    const_str_plain__pad_for_signing = UNSTREAM_STRING_ASCII( &constant_bin[ 2739924 ], 16, 1 );
    const_str_plain_msg_hash = UNSTREAM_STRING_ASCII( &constant_bin[ 2740117 ], 8, 1 );
    const_str_digest_c315618cbf868730bbbe33199e90e11d = UNSTREAM_STRING_ASCII( &constant_bin[ 2740125 ], 586, 0 );
    const_str_digest_8fe9f611640f521c7c0f4491b64948d3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2740711 ], 40, 0 );
    const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b = UNSTREAM_STRING_ASCII( &constant_bin[ 2740751 ], 610, 0 );
    const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 0, const_str_plain_hash_value ); Py_INCREF( const_str_plain_hash_value );
    const_str_plain_priv_key = UNSTREAM_STRING_ASCII( &constant_bin[ 2736170 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 1, const_str_plain_priv_key ); Py_INCREF( const_str_plain_priv_key );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 2, const_str_plain_hash_method ); Py_INCREF( const_str_plain_hash_method );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 3, const_str_plain_asn1code ); Py_INCREF( const_str_plain_asn1code );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 4, const_str_plain_cleartext ); Py_INCREF( const_str_plain_cleartext );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 5, const_str_plain_keylength ); Py_INCREF( const_str_plain_keylength );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 6, const_str_plain_padded ); Py_INCREF( const_str_plain_padded );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 7, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 8, const_str_plain_encrypted ); Py_INCREF( const_str_plain_encrypted );
    PyTuple_SET_ITEM( const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 9, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple, 0, const_str_digest_7330fab1d7073751f2d5bfc9ad7b70de ); Py_INCREF( const_str_digest_7330fab1d7073751f2d5bfc9ad7b70de );
    const_bytes_digest_189fdd00ee2d47791cf23326c8496596 = UNSTREAM_BYTES( &constant_bin[ 2741361 ], 19 );
    const_str_digest_32ca4c5448b5ef80153ec1e314460588 = UNSTREAM_STRING_ASCII( &constant_bin[ 2741380 ], 717, 0 );
    const_str_digest_13616ed0239e00d0446f4afcc75f4919 = UNSTREAM_STRING_ASCII( &constant_bin[ 2736335 ], 7, 0 );
    const_bytes_digest_856d14d0885eed60a2b265bd55d3fced = UNSTREAM_BYTES( &constant_bin[ 2742097 ], 18 );
    const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple, 1, const_str_plain_priv_key ); Py_INCREF( const_str_plain_priv_key );
    PyTuple_SET_ITEM( const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple, 2, const_str_plain_hash_method ); Py_INCREF( const_str_plain_hash_method );
    PyTuple_SET_ITEM( const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple, 3, const_str_plain_msg_hash ); Py_INCREF( const_str_plain_msg_hash );
    const_str_digest_af0498b3a85009ae34a3ad96476d8206 = UNSTREAM_STRING_ASCII( &constant_bin[ 2742115 ], 391, 0 );
    const_str_digest_bc321a0ae8399bdea023d1a6bb95c877 = UNSTREAM_STRING_ASCII( &constant_bin[ 2742506 ], 18, 0 );
    const_str_plain_sha224 = UNSTREAM_STRING_ASCII( &constant_bin[ 2742524 ], 6, 1 );
    const_str_plain_yield_fixedblocks = UNSTREAM_STRING_ASCII( &constant_bin[ 2742530 ], 17, 1 );
    const_dict_b3b804f3a7045b1019f724e56da33528 = _PyDict_NewPresized( 6 );
    PyDict_SetItem( const_dict_b3b804f3a7045b1019f724e56da33528, const_str_plain_MD5, const_bytes_digest_856d14d0885eed60a2b265bd55d3fced );
    PyDict_SetItem( const_dict_b3b804f3a7045b1019f724e56da33528, const_str_digest_97dcb4754378a8f54936024697d0d59e, const_bytes_digest_55b73a6d4f50381148af7e3a84b646b0 );
    const_bytes_digest_6e18f5153f6f1b5bc59217164755bc77 = UNSTREAM_BYTES( &constant_bin[ 2742547 ], 19 );
    PyDict_SetItem( const_dict_b3b804f3a7045b1019f724e56da33528, const_str_digest_8e6c146abea2e9a74bbae52248e9fe41, const_bytes_digest_6e18f5153f6f1b5bc59217164755bc77 );
    PyDict_SetItem( const_dict_b3b804f3a7045b1019f724e56da33528, const_str_digest_1e080f858ef601c43605cc71a556333d, const_bytes_digest_927e3ed82a7a127e3baf8195a1ef8d41 );
    PyDict_SetItem( const_dict_b3b804f3a7045b1019f724e56da33528, const_str_digest_13616ed0239e00d0446f4afcc75f4919, const_bytes_digest_189fdd00ee2d47791cf23326c8496596 );
    PyDict_SetItem( const_dict_b3b804f3a7045b1019f724e56da33528, const_str_digest_91012c747d1826684889b0187ce7d184, const_bytes_digest_1c0012a226d9b64ad2f11974abc94be6 );
    assert( PyDict_Size( const_dict_b3b804f3a7045b1019f724e56da33528 ) == 6 );
    const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 0, const_str_plain_crypto ); Py_INCREF( const_str_plain_crypto );
    PyTuple_SET_ITEM( const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 1, const_str_plain_priv_key ); Py_INCREF( const_str_plain_priv_key );
    PyTuple_SET_ITEM( const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 2, const_str_plain_blocksize ); Py_INCREF( const_str_plain_blocksize );
    PyTuple_SET_ITEM( const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 3, const_str_plain_encrypted ); Py_INCREF( const_str_plain_encrypted );
    PyTuple_SET_ITEM( const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 4, const_str_plain_decrypted ); Py_INCREF( const_str_plain_decrypted );
    PyTuple_SET_ITEM( const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 5, const_str_plain_cleartext ); Py_INCREF( const_str_plain_cleartext );
    PyTuple_SET_ITEM( const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 6, const_str_plain_sep_idx ); Py_INCREF( const_str_plain_sep_idx );
    const_str_plain_sha384 = UNSTREAM_STRING_ASCII( &constant_bin[ 2742566 ], 6, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$pkcs1( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4a9c47a869b8d9ed604e6608e44ba7d3;
static PyCodeObject *codeobj_93d0c5bcab0448069948d6096339a37b;
static PyCodeObject *codeobj_dc420676f9d5f1a957c6708922762f70;
static PyCodeObject *codeobj_5aa42ed6eb8250e15b370a4c0b98e6f2;
static PyCodeObject *codeobj_d107fbf2ce3b602e5db000e75d64434e;
static PyCodeObject *codeobj_3308d39f5eb12d8bfd0182ae002ec81e;
static PyCodeObject *codeobj_d9b90ce508918ed69a5f15f2dfe13b22;
static PyCodeObject *codeobj_90931bf1c4276c254e6a5cf85e4cbae9;
static PyCodeObject *codeobj_c21ce98dcbcf27d7094c1acd1a90f0dc;
static PyCodeObject *codeobj_babc0cf3e74bb574b9d470fea5457ee1;
static PyCodeObject *codeobj_20d4cef26eec48ddc606d1586e19e08f;
static PyCodeObject *codeobj_4752363262f8a503be242410b3cba459;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8fe9f611640f521c7c0f4491b64948d3;
    codeobj_4a9c47a869b8d9ed604e6608e44ba7d3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bc321a0ae8399bdea023d1a6bb95c877, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_93d0c5bcab0448069948d6096339a37b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find_method_hash, 409, const_tuple_str_plain_clearsig_str_plain_hashname_str_plain_asn1code_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dc420676f9d5f1a957c6708922762f70 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pad_for_encryption, 69, const_tuple_44dfa175efc8ea04840f589fa45674b3_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5aa42ed6eb8250e15b370a4c0b98e6f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pad_for_signing, 115, const_tuple_facb14fc90c17762d50a0f0b6bcde72b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d107fbf2ce3b602e5db000e75d64434e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compute_hash, 381, const_tuple_0f05faef1c179f8822f536cfa549b4e6_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3308d39f5eb12d8bfd0182ae002ec81e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decrypt, 181, const_tuple_a07ced6fb185790e3829c2938026f0b7_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9b90ce508918ed69a5f15f2dfe13b22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encrypt, 149, const_tuple_28a1ab3f22fd89e51320622850b7c164_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_90931bf1c4276c254e6a5cf85e4cbae9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_find_signature_hash, 341, const_tuple_2f738c600f7e1c2dee68f86dc7a5c55a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c21ce98dcbcf27d7094c1acd1a90f0dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 284, const_tuple_ef07aa358d7115cf7097a106edb8e089_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_babc0cf3e74bb574b9d470fea5457ee1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign_hash, 250, const_tuple_99a82e22b86cb1701667044b0966ab4d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20d4cef26eec48ddc606d1586e19e08f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 306, const_tuple_b7b1d2a93d14fe3fb5d920906b61fe22_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4752363262f8a503be242410b3cba459 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_yield_fixedblocks, 360, const_tuple_ae97b766754d2e1d3a3368efeafcec64_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_10_compute_hash(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_11__find_method_hash(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_1__pad_for_encryption(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_2__pad_for_signing(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_3_encrypt(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_4_decrypt(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_5_sign_hash(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_6_sign(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_7_verify(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_8_find_signature_hash(  );


static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_9_yield_fixedblocks(  );


// The module function definitions.
static PyObject *impl_rsa$pkcs1$$$function_1__pad_for_encryption( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_target_length = python_pars[ 1 ];
    PyObject *var_max_msglength = NULL;
    PyObject *var_msglength = NULL;
    PyObject *var_padding = NULL;
    PyObject *var_padding_length = NULL;
    PyObject *var_needed_bytes = NULL;
    PyObject *var_new_padding = NULL;
    struct Nuitka_FrameObject *frame_dc420676f9d5f1a957c6708922762f70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dc420676f9d5f1a957c6708922762f70 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dc420676f9d5f1a957c6708922762f70, codeobj_dc420676f9d5f1a957c6708922762f70, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dc420676f9d5f1a957c6708922762f70 = cache_frame_dc420676f9d5f1a957c6708922762f70;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dc420676f9d5f1a957c6708922762f70 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dc420676f9d5f1a957c6708922762f70 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_target_length );
        tmp_left_name_1 = par_target_length;
        tmp_right_name_1 = const_int_pos_11;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_max_msglength == NULL );
        var_max_msglength = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_message );
        tmp_len_arg_1 = par_message;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_msglength == NULL );
        var_msglength = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_msglength );
        tmp_compexpr_left_1 = var_msglength;
        CHECK_OBJECT( var_max_msglength );
        tmp_compexpr_right_1 = var_max_msglength;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_2 = const_str_digest_36bfa1361832794c1e78e5a2976574b0;
            CHECK_OBJECT( var_msglength );
            tmp_tuple_element_1 = var_msglength;
            tmp_right_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_max_msglength );
            tmp_tuple_element_1 = var_max_msglength;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_dc420676f9d5f1a957c6708922762f70->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_OverflowError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 88;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_bytes_empty;
        assert( var_padding == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_padding = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_target_length );
        tmp_left_name_4 = par_target_length;
        CHECK_OBJECT( var_msglength );
        tmp_right_name_3 = var_msglength;
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_3;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_padding_length == NULL );
        var_padding_length = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( var_padding );
        tmp_len_arg_2 = var_padding;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_padding_length );
        tmp_compexpr_right_2 = var_padding_length;
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( var_padding_length );
        tmp_left_name_5 = var_padding_length;
        CHECK_OBJECT( var_padding );
        tmp_len_arg_3 = var_padding;
        tmp_right_name_5 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_needed_bytes;
            var_needed_bytes = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urandom );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_needed_bytes );
        tmp_left_name_6 = var_needed_bytes;
        tmp_right_name_6 = const_int_pos_5;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_dc420676f9d5f1a957c6708922762f70->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_padding;
            var_new_padding = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_new_padding );
        tmp_called_instance_1 = var_new_padding;
        frame_dc420676f9d5f1a957c6708922762f70->m_frame.f_lineno = 104;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_bytes_chr_0_bytes_empty_tuple, 0 ) );

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_new_padding;
            assert( old != NULL );
            var_new_padding = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_padding );
        tmp_left_name_7 = var_padding;
        CHECK_OBJECT( var_new_padding );
        tmp_subscribed_name_1 = var_new_padding;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_needed_bytes );
        tmp_stop_name_1 = var_needed_bytes;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_padding;
            assert( old != NULL );
            var_padding = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT( var_padding );
        tmp_len_arg_4 = var_padding;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_padding_length );
        tmp_compexpr_right_3 = var_padding_length;
        tmp_operand_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_raise_type_2;
            tmp_raise_type_2 = PyExc_AssertionError;
            exception_type = tmp_raise_type_2;
            Py_INCREF( tmp_raise_type_2 );
            exception_lineno = 107;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_list_element_1;
        tmp_called_instance_2 = const_bytes_empty;
        tmp_list_element_1 = const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8;
        tmp_args_element_name_2 = PyList_New( 4 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_padding );
        tmp_list_element_1 = var_padding;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 1, tmp_list_element_1 );
        tmp_list_element_1 = const_bytes_chr_0;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 2, tmp_list_element_1 );
        CHECK_OBJECT( par_message );
        tmp_list_element_1 = par_message;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 3, tmp_list_element_1 );
        frame_dc420676f9d5f1a957c6708922762f70->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_join, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc420676f9d5f1a957c6708922762f70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc420676f9d5f1a957c6708922762f70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc420676f9d5f1a957c6708922762f70 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dc420676f9d5f1a957c6708922762f70, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dc420676f9d5f1a957c6708922762f70->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dc420676f9d5f1a957c6708922762f70, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dc420676f9d5f1a957c6708922762f70,
        type_description_1,
        par_message,
        par_target_length,
        var_max_msglength,
        var_msglength,
        var_padding,
        var_padding_length,
        var_needed_bytes,
        var_new_padding
    );


    // Release cached frame.
    if ( frame_dc420676f9d5f1a957c6708922762f70 == cache_frame_dc420676f9d5f1a957c6708922762f70 )
    {
        Py_DECREF( frame_dc420676f9d5f1a957c6708922762f70 );
    }
    cache_frame_dc420676f9d5f1a957c6708922762f70 = NULL;

    assertFrameObject( frame_dc420676f9d5f1a957c6708922762f70 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_1__pad_for_encryption );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_target_length );
    Py_DECREF( par_target_length );
    par_target_length = NULL;

    CHECK_OBJECT( (PyObject *)var_max_msglength );
    Py_DECREF( var_max_msglength );
    var_max_msglength = NULL;

    CHECK_OBJECT( (PyObject *)var_msglength );
    Py_DECREF( var_msglength );
    var_msglength = NULL;

    CHECK_OBJECT( (PyObject *)var_padding );
    Py_DECREF( var_padding );
    var_padding = NULL;

    CHECK_OBJECT( (PyObject *)var_padding_length );
    Py_DECREF( var_padding_length );
    var_padding_length = NULL;

    Py_XDECREF( var_needed_bytes );
    var_needed_bytes = NULL;

    Py_XDECREF( var_new_padding );
    var_new_padding = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_target_length );
    Py_DECREF( par_target_length );
    par_target_length = NULL;

    Py_XDECREF( var_max_msglength );
    var_max_msglength = NULL;

    Py_XDECREF( var_msglength );
    var_msglength = NULL;

    Py_XDECREF( var_padding );
    var_padding = NULL;

    Py_XDECREF( var_padding_length );
    var_padding_length = NULL;

    Py_XDECREF( var_needed_bytes );
    var_needed_bytes = NULL;

    Py_XDECREF( var_new_padding );
    var_new_padding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_1__pad_for_encryption );
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


static PyObject *impl_rsa$pkcs1$$$function_2__pad_for_signing( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_target_length = python_pars[ 1 ];
    PyObject *var_max_msglength = NULL;
    PyObject *var_msglength = NULL;
    PyObject *var_padding_length = NULL;
    struct Nuitka_FrameObject *frame_5aa42ed6eb8250e15b370a4c0b98e6f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5aa42ed6eb8250e15b370a4c0b98e6f2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5aa42ed6eb8250e15b370a4c0b98e6f2, codeobj_5aa42ed6eb8250e15b370a4c0b98e6f2, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5aa42ed6eb8250e15b370a4c0b98e6f2 = cache_frame_5aa42ed6eb8250e15b370a4c0b98e6f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_target_length );
        tmp_left_name_1 = par_target_length;
        tmp_right_name_1 = const_int_pos_11;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_max_msglength == NULL );
        var_max_msglength = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_message );
        tmp_len_arg_1 = par_message;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_msglength == NULL );
        var_msglength = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_msglength );
        tmp_compexpr_left_1 = var_msglength;
        CHECK_OBJECT( var_max_msglength );
        tmp_compexpr_right_1 = var_max_msglength;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_2 = const_str_digest_36bfa1361832794c1e78e5a2976574b0;
            CHECK_OBJECT( var_msglength );
            tmp_tuple_element_1 = var_msglength;
            tmp_right_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_max_msglength );
            tmp_tuple_element_1 = var_max_msglength;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_5aa42ed6eb8250e15b370a4c0b98e6f2->m_frame.f_lineno = 138;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_OverflowError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 138;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_target_length );
        tmp_left_name_4 = par_target_length;
        CHECK_OBJECT( var_msglength );
        tmp_right_name_3 = var_msglength;
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_3;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_padding_length == NULL );
        var_padding_length = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_source_name_1 = const_bytes_empty;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_list_element_1 = const_bytes_digest_edd34ccaf3601e7d40e83e6a42a0da40;
        tmp_args_element_name_1 = PyList_New( 4 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_padding_length );
        tmp_left_name_5 = var_padding_length;
        tmp_right_name_5 = const_bytes_chr_255;
        tmp_list_element_1 = BINARY_OPERATION_MUL_OBJECT_BYTES( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        tmp_list_element_1 = const_bytes_chr_0;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 2, tmp_list_element_1 );
        CHECK_OBJECT( par_message );
        tmp_list_element_1 = par_message;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 3, tmp_list_element_1 );
        frame_5aa42ed6eb8250e15b370a4c0b98e6f2->m_frame.f_lineno = 143;
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


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5aa42ed6eb8250e15b370a4c0b98e6f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5aa42ed6eb8250e15b370a4c0b98e6f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5aa42ed6eb8250e15b370a4c0b98e6f2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5aa42ed6eb8250e15b370a4c0b98e6f2,
        type_description_1,
        par_message,
        par_target_length,
        var_max_msglength,
        var_msglength,
        var_padding_length
    );


    // Release cached frame.
    if ( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 == cache_frame_5aa42ed6eb8250e15b370a4c0b98e6f2 )
    {
        Py_DECREF( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 );
    }
    cache_frame_5aa42ed6eb8250e15b370a4c0b98e6f2 = NULL;

    assertFrameObject( frame_5aa42ed6eb8250e15b370a4c0b98e6f2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_2__pad_for_signing );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_target_length );
    Py_DECREF( par_target_length );
    par_target_length = NULL;

    CHECK_OBJECT( (PyObject *)var_max_msglength );
    Py_DECREF( var_max_msglength );
    var_max_msglength = NULL;

    CHECK_OBJECT( (PyObject *)var_msglength );
    Py_DECREF( var_msglength );
    var_msglength = NULL;

    CHECK_OBJECT( (PyObject *)var_padding_length );
    Py_DECREF( var_padding_length );
    var_padding_length = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_target_length );
    Py_DECREF( par_target_length );
    par_target_length = NULL;

    Py_XDECREF( var_max_msglength );
    var_max_msglength = NULL;

    Py_XDECREF( var_msglength );
    var_msglength = NULL;

    Py_XDECREF( var_padding_length );
    var_padding_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_2__pad_for_signing );
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


static PyObject *impl_rsa$pkcs1$$$function_3_encrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_pub_key = python_pars[ 1 ];
    PyObject *var_keylength = NULL;
    PyObject *var_padded = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_encrypted = NULL;
    PyObject *var_block = NULL;
    struct Nuitka_FrameObject *frame_d9b90ce508918ed69a5f15f2dfe13b22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9b90ce508918ed69a5f15f2dfe13b22 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9b90ce508918ed69a5f15f2dfe13b22, codeobj_d9b90ce508918ed69a5f15f2dfe13b22, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9b90ce508918ed69a5f15f2dfe13b22 = cache_frame_d9b90ce508918ed69a5f15f2dfe13b22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9b90ce508918ed69a5f15f2dfe13b22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9b90ce508918ed69a5f15f2dfe13b22 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_common );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byte_size );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_2 = par_pub_key;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9b90ce508918ed69a5f15f2dfe13b22->m_frame.f_lineno = 171;
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


            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keylength == NULL );
        var_keylength = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__pad_for_encryption );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pad_for_encryption );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pad_for_encryption" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_2 = par_message;
        CHECK_OBJECT( var_keylength );
        tmp_args_element_name_3 = var_keylength;
        frame_d9b90ce508918ed69a5f15f2dfe13b22->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_padded == NULL );
        var_padded = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_padded );
        tmp_args_element_name_4 = var_padded;
        frame_d9b90ce508918ed69a5f15f2dfe13b22->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bytes2int, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_payload == NULL );
        var_payload = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_core );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_core );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "core" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_encrypt_int );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_payload );
        tmp_args_element_name_5 = var_payload;
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_4 = par_pub_key;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_e );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_5 = par_pub_key;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_n );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9b90ce508918ed69a5f15f2dfe13b22->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_encrypted == NULL );
        var_encrypted = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        CHECK_OBJECT( var_encrypted );
        tmp_args_element_name_8 = var_encrypted;
        CHECK_OBJECT( var_keylength );
        tmp_args_element_name_9 = var_keylength;
        frame_d9b90ce508918ed69a5f15f2dfe13b22->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_int2bytes, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_block == NULL );
        var_block = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9b90ce508918ed69a5f15f2dfe13b22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9b90ce508918ed69a5f15f2dfe13b22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9b90ce508918ed69a5f15f2dfe13b22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9b90ce508918ed69a5f15f2dfe13b22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9b90ce508918ed69a5f15f2dfe13b22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9b90ce508918ed69a5f15f2dfe13b22,
        type_description_1,
        par_message,
        par_pub_key,
        var_keylength,
        var_padded,
        var_payload,
        var_encrypted,
        var_block
    );


    // Release cached frame.
    if ( frame_d9b90ce508918ed69a5f15f2dfe13b22 == cache_frame_d9b90ce508918ed69a5f15f2dfe13b22 )
    {
        Py_DECREF( frame_d9b90ce508918ed69a5f15f2dfe13b22 );
    }
    cache_frame_d9b90ce508918ed69a5f15f2dfe13b22 = NULL;

    assertFrameObject( frame_d9b90ce508918ed69a5f15f2dfe13b22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_block );
    tmp_return_value = var_block;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_3_encrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pub_key );
    Py_DECREF( par_pub_key );
    par_pub_key = NULL;

    CHECK_OBJECT( (PyObject *)var_keylength );
    Py_DECREF( var_keylength );
    var_keylength = NULL;

    CHECK_OBJECT( (PyObject *)var_padded );
    Py_DECREF( var_padded );
    var_padded = NULL;

    CHECK_OBJECT( (PyObject *)var_payload );
    Py_DECREF( var_payload );
    var_payload = NULL;

    CHECK_OBJECT( (PyObject *)var_encrypted );
    Py_DECREF( var_encrypted );
    var_encrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_block );
    Py_DECREF( var_block );
    var_block = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_pub_key );
    Py_DECREF( par_pub_key );
    par_pub_key = NULL;

    Py_XDECREF( var_keylength );
    var_keylength = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    Py_XDECREF( var_payload );
    var_payload = NULL;

    Py_XDECREF( var_encrypted );
    var_encrypted = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_3_encrypt );
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


static PyObject *impl_rsa$pkcs1$$$function_4_decrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_crypto = python_pars[ 0 ];
    PyObject *par_priv_key = python_pars[ 1 ];
    PyObject *var_blocksize = NULL;
    PyObject *var_encrypted = NULL;
    PyObject *var_decrypted = NULL;
    PyObject *var_cleartext = NULL;
    PyObject *var_sep_idx = NULL;
    struct Nuitka_FrameObject *frame_3308d39f5eb12d8bfd0182ae002ec81e;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3308d39f5eb12d8bfd0182ae002ec81e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3308d39f5eb12d8bfd0182ae002ec81e, codeobj_3308d39f5eb12d8bfd0182ae002ec81e, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3308d39f5eb12d8bfd0182ae002ec81e = cache_frame_3308d39f5eb12d8bfd0182ae002ec81e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3308d39f5eb12d8bfd0182ae002ec81e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3308d39f5eb12d8bfd0182ae002ec81e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_common );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byte_size );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_priv_key );
        tmp_source_name_2 = par_priv_key;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = 232;
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


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_blocksize == NULL );
        var_blocksize = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_crypto );
        tmp_args_element_name_2 = par_crypto;
        frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bytes2int, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_encrypted == NULL );
        var_encrypted = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_priv_key );
        tmp_called_instance_2 = par_priv_key;
        CHECK_OBJECT( var_encrypted );
        tmp_args_element_name_3 = var_encrypted;
        frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_blinded_decrypt, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_decrypted == NULL );
        var_decrypted = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_decrypted );
        tmp_args_element_name_4 = var_decrypted;
        CHECK_OBJECT( var_blocksize );
        tmp_args_element_name_5 = var_blocksize;
        frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_int2bytes, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cleartext == NULL );
        var_cleartext = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_cleartext );
        tmp_subscribed_name_1 = var_cleartext;
        tmp_subscript_name_1 = const_slice_int_0_int_pos_2_none;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_bytes_digest_9a2bb00eeadd7f9a36ea9bb9096c65a8;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_DecryptionError );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DecryptionError );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DecryptionError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 239;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = 239;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 239;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( var_cleartext );
        tmp_called_instance_4 = var_cleartext;
        frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = 243;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_index, &PyTuple_GET_ITEM( const_tuple_bytes_chr_0_int_pos_2_tuple, 0 ) );

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert( var_sep_idx == NULL );
        var_sep_idx = tmp_assign_source_5;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_3308d39f5eb12d8bfd0182ae002ec81e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_3308d39f5eb12d8bfd0182ae002ec81e, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_2 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_DecryptionError );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DecryptionError );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DecryptionError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 245;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = 245;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_7330fab1d7073751f2d5bfc9ad7b70de_tuple, 0 ) );

            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 245;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 242;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame) frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_4_decrypt );
    return NULL;
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
    try_end_1:;
    {
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_cleartext );
        tmp_subscribed_name_2 = var_cleartext;
        CHECK_OBJECT( var_sep_idx );
        tmp_left_name_1 = var_sep_idx;
        tmp_right_name_1 = const_int_pos_1;
        tmp_start_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_start_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_start_name_1 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3308d39f5eb12d8bfd0182ae002ec81e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3308d39f5eb12d8bfd0182ae002ec81e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3308d39f5eb12d8bfd0182ae002ec81e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3308d39f5eb12d8bfd0182ae002ec81e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3308d39f5eb12d8bfd0182ae002ec81e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3308d39f5eb12d8bfd0182ae002ec81e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3308d39f5eb12d8bfd0182ae002ec81e,
        type_description_1,
        par_crypto,
        par_priv_key,
        var_blocksize,
        var_encrypted,
        var_decrypted,
        var_cleartext,
        var_sep_idx
    );


    // Release cached frame.
    if ( frame_3308d39f5eb12d8bfd0182ae002ec81e == cache_frame_3308d39f5eb12d8bfd0182ae002ec81e )
    {
        Py_DECREF( frame_3308d39f5eb12d8bfd0182ae002ec81e );
    }
    cache_frame_3308d39f5eb12d8bfd0182ae002ec81e = NULL;

    assertFrameObject( frame_3308d39f5eb12d8bfd0182ae002ec81e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_4_decrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_crypto );
    Py_DECREF( par_crypto );
    par_crypto = NULL;

    CHECK_OBJECT( (PyObject *)par_priv_key );
    Py_DECREF( par_priv_key );
    par_priv_key = NULL;

    CHECK_OBJECT( (PyObject *)var_blocksize );
    Py_DECREF( var_blocksize );
    var_blocksize = NULL;

    CHECK_OBJECT( (PyObject *)var_encrypted );
    Py_DECREF( var_encrypted );
    var_encrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_decrypted );
    Py_DECREF( var_decrypted );
    var_decrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_cleartext );
    Py_DECREF( var_cleartext );
    var_cleartext = NULL;

    CHECK_OBJECT( (PyObject *)var_sep_idx );
    Py_DECREF( var_sep_idx );
    var_sep_idx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_crypto );
    Py_DECREF( par_crypto );
    par_crypto = NULL;

    CHECK_OBJECT( (PyObject *)par_priv_key );
    Py_DECREF( par_priv_key );
    par_priv_key = NULL;

    Py_XDECREF( var_blocksize );
    var_blocksize = NULL;

    Py_XDECREF( var_encrypted );
    var_encrypted = NULL;

    Py_XDECREF( var_decrypted );
    var_decrypted = NULL;

    Py_XDECREF( var_cleartext );
    var_cleartext = NULL;

    Py_XDECREF( var_sep_idx );
    var_sep_idx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_4_decrypt );
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


static PyObject *impl_rsa$pkcs1$$$function_5_sign_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hash_value = python_pars[ 0 ];
    PyObject *par_priv_key = python_pars[ 1 ];
    PyObject *par_hash_method = python_pars[ 2 ];
    PyObject *var_asn1code = NULL;
    PyObject *var_cleartext = NULL;
    PyObject *var_keylength = NULL;
    PyObject *var_padded = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_encrypted = NULL;
    PyObject *var_block = NULL;
    struct Nuitka_FrameObject *frame_babc0cf3e74bb574b9d470fea5457ee1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_babc0cf3e74bb574b9d470fea5457ee1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_babc0cf3e74bb574b9d470fea5457ee1, codeobj_babc0cf3e74bb574b9d470fea5457ee1, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_babc0cf3e74bb574b9d470fea5457ee1 = cache_frame_babc0cf3e74bb574b9d470fea5457ee1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_babc0cf3e74bb574b9d470fea5457ee1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_babc0cf3e74bb574b9d470fea5457ee1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_hash_method );
        tmp_compexpr_left_1 = par_hash_method;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASH_ASN1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 268;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_812da8a29ca127380db23416adbaf925;
            CHECK_OBJECT( par_hash_method );
            tmp_right_name_1 = par_hash_method;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_babc0cf3e74bb574b9d470fea5457ee1->m_frame.f_lineno = 269;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 269;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASH_ASN1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 270;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_hash_method );
        tmp_subscript_name_1 = par_hash_method;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_asn1code == NULL );
        var_asn1code = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_asn1code );
        tmp_left_name_2 = var_asn1code;
        CHECK_OBJECT( par_hash_value );
        tmp_right_name_2 = par_hash_value;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cleartext == NULL );
        var_cleartext = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_common );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byte_size );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_priv_key );
        tmp_source_name_2 = par_priv_key;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_babc0cf3e74bb574b9d470fea5457ee1->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keylength == NULL );
        var_keylength = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__pad_for_signing );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pad_for_signing );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pad_for_signing" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 275;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_cleartext );
        tmp_args_element_name_2 = var_cleartext;
        CHECK_OBJECT( var_keylength );
        tmp_args_element_name_3 = var_keylength;
        frame_babc0cf3e74bb574b9d470fea5457ee1->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_padded == NULL );
        var_padded = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        CHECK_OBJECT( var_padded );
        tmp_args_element_name_4 = var_padded;
        frame_babc0cf3e74bb574b9d470fea5457ee1->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bytes2int, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_payload == NULL );
        var_payload = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_priv_key );
        tmp_called_instance_2 = par_priv_key;
        CHECK_OBJECT( var_payload );
        tmp_args_element_name_5 = var_payload;
        frame_babc0cf3e74bb574b9d470fea5457ee1->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_blinded_encrypt, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_encrypted == NULL );
        var_encrypted = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 279;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_encrypted );
        tmp_args_element_name_6 = var_encrypted;
        CHECK_OBJECT( var_keylength );
        tmp_args_element_name_7 = var_keylength;
        frame_babc0cf3e74bb574b9d470fea5457ee1->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_int2bytes, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_block == NULL );
        var_block = tmp_assign_source_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_babc0cf3e74bb574b9d470fea5457ee1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_babc0cf3e74bb574b9d470fea5457ee1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_babc0cf3e74bb574b9d470fea5457ee1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_babc0cf3e74bb574b9d470fea5457ee1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_babc0cf3e74bb574b9d470fea5457ee1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_babc0cf3e74bb574b9d470fea5457ee1,
        type_description_1,
        par_hash_value,
        par_priv_key,
        par_hash_method,
        var_asn1code,
        var_cleartext,
        var_keylength,
        var_padded,
        var_payload,
        var_encrypted,
        var_block
    );


    // Release cached frame.
    if ( frame_babc0cf3e74bb574b9d470fea5457ee1 == cache_frame_babc0cf3e74bb574b9d470fea5457ee1 )
    {
        Py_DECREF( frame_babc0cf3e74bb574b9d470fea5457ee1 );
    }
    cache_frame_babc0cf3e74bb574b9d470fea5457ee1 = NULL;

    assertFrameObject( frame_babc0cf3e74bb574b9d470fea5457ee1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_block );
    tmp_return_value = var_block;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_5_sign_hash );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hash_value );
    Py_DECREF( par_hash_value );
    par_hash_value = NULL;

    CHECK_OBJECT( (PyObject *)par_priv_key );
    Py_DECREF( par_priv_key );
    par_priv_key = NULL;

    CHECK_OBJECT( (PyObject *)par_hash_method );
    Py_DECREF( par_hash_method );
    par_hash_method = NULL;

    CHECK_OBJECT( (PyObject *)var_asn1code );
    Py_DECREF( var_asn1code );
    var_asn1code = NULL;

    CHECK_OBJECT( (PyObject *)var_cleartext );
    Py_DECREF( var_cleartext );
    var_cleartext = NULL;

    CHECK_OBJECT( (PyObject *)var_keylength );
    Py_DECREF( var_keylength );
    var_keylength = NULL;

    CHECK_OBJECT( (PyObject *)var_padded );
    Py_DECREF( var_padded );
    var_padded = NULL;

    CHECK_OBJECT( (PyObject *)var_payload );
    Py_DECREF( var_payload );
    var_payload = NULL;

    CHECK_OBJECT( (PyObject *)var_encrypted );
    Py_DECREF( var_encrypted );
    var_encrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_block );
    Py_DECREF( var_block );
    var_block = NULL;

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

    CHECK_OBJECT( (PyObject *)par_hash_value );
    Py_DECREF( par_hash_value );
    par_hash_value = NULL;

    CHECK_OBJECT( (PyObject *)par_priv_key );
    Py_DECREF( par_priv_key );
    par_priv_key = NULL;

    CHECK_OBJECT( (PyObject *)par_hash_method );
    Py_DECREF( par_hash_method );
    par_hash_method = NULL;

    Py_XDECREF( var_asn1code );
    var_asn1code = NULL;

    Py_XDECREF( var_cleartext );
    var_cleartext = NULL;

    Py_XDECREF( var_keylength );
    var_keylength = NULL;

    Py_XDECREF( var_padded );
    var_padded = NULL;

    Py_XDECREF( var_payload );
    var_payload = NULL;

    Py_XDECREF( var_encrypted );
    var_encrypted = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_5_sign_hash );
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


static PyObject *impl_rsa$pkcs1$$$function_6_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_priv_key = python_pars[ 1 ];
    PyObject *par_hash_method = python_pars[ 2 ];
    PyObject *var_msg_hash = NULL;
    struct Nuitka_FrameObject *frame_c21ce98dcbcf27d7094c1acd1a90f0dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c21ce98dcbcf27d7094c1acd1a90f0dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c21ce98dcbcf27d7094c1acd1a90f0dc, codeobj_c21ce98dcbcf27d7094c1acd1a90f0dc, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c21ce98dcbcf27d7094c1acd1a90f0dc = cache_frame_c21ce98dcbcf27d7094c1acd1a90f0dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c21ce98dcbcf27d7094c1acd1a90f0dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c21ce98dcbcf27d7094c1acd1a90f0dc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_compute_hash );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_hash );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_hash" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_1 = par_message;
        CHECK_OBJECT( par_hash_method );
        tmp_args_element_name_2 = par_hash_method;
        frame_c21ce98dcbcf27d7094c1acd1a90f0dc->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_msg_hash == NULL );
        var_msg_hash = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_sign_hash );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sign_hash );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sign_hash" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_msg_hash );
        tmp_args_element_name_3 = var_msg_hash;
        CHECK_OBJECT( par_priv_key );
        tmp_args_element_name_4 = par_priv_key;
        CHECK_OBJECT( par_hash_method );
        tmp_args_element_name_5 = par_hash_method;
        frame_c21ce98dcbcf27d7094c1acd1a90f0dc->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c21ce98dcbcf27d7094c1acd1a90f0dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c21ce98dcbcf27d7094c1acd1a90f0dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c21ce98dcbcf27d7094c1acd1a90f0dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c21ce98dcbcf27d7094c1acd1a90f0dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c21ce98dcbcf27d7094c1acd1a90f0dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c21ce98dcbcf27d7094c1acd1a90f0dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c21ce98dcbcf27d7094c1acd1a90f0dc,
        type_description_1,
        par_message,
        par_priv_key,
        par_hash_method,
        var_msg_hash
    );


    // Release cached frame.
    if ( frame_c21ce98dcbcf27d7094c1acd1a90f0dc == cache_frame_c21ce98dcbcf27d7094c1acd1a90f0dc )
    {
        Py_DECREF( frame_c21ce98dcbcf27d7094c1acd1a90f0dc );
    }
    cache_frame_c21ce98dcbcf27d7094c1acd1a90f0dc = NULL;

    assertFrameObject( frame_c21ce98dcbcf27d7094c1acd1a90f0dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_6_sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_priv_key );
    Py_DECREF( par_priv_key );
    par_priv_key = NULL;

    CHECK_OBJECT( (PyObject *)par_hash_method );
    Py_DECREF( par_hash_method );
    par_hash_method = NULL;

    CHECK_OBJECT( (PyObject *)var_msg_hash );
    Py_DECREF( var_msg_hash );
    var_msg_hash = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_priv_key );
    Py_DECREF( par_priv_key );
    par_priv_key = NULL;

    CHECK_OBJECT( (PyObject *)par_hash_method );
    Py_DECREF( par_hash_method );
    par_hash_method = NULL;

    Py_XDECREF( var_msg_hash );
    var_msg_hash = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_6_sign );
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


static PyObject *impl_rsa$pkcs1$$$function_7_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *par_pub_key = python_pars[ 2 ];
    PyObject *var_keylength = NULL;
    PyObject *var_encrypted = NULL;
    PyObject *var_decrypted = NULL;
    PyObject *var_clearsig = NULL;
    PyObject *var_method_name = NULL;
    PyObject *var_message_hash = NULL;
    PyObject *var_cleartext = NULL;
    PyObject *var_expected = NULL;
    struct Nuitka_FrameObject *frame_20d4cef26eec48ddc606d1586e19e08f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_20d4cef26eec48ddc606d1586e19e08f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20d4cef26eec48ddc606d1586e19e08f, codeobj_20d4cef26eec48ddc606d1586e19e08f, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20d4cef26eec48ddc606d1586e19e08f = cache_frame_20d4cef26eec48ddc606d1586e19e08f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20d4cef26eec48ddc606d1586e19e08f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20d4cef26eec48ddc606d1586e19e08f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_common );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 321;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byte_size );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_2 = par_pub_key;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 321;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 321;
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


            exception_lineno = 321;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keylength == NULL );
        var_keylength = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 322;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_2 = par_signature;
        frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bytes2int, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_encrypted == NULL );
        var_encrypted = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_core );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_core );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "core" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decrypt_int );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_encrypted );
        tmp_args_element_name_3 = var_encrypted;
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_4 = par_pub_key;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_e );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 323;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_5 = par_pub_key;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_n );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 323;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_decrypted == NULL );
        var_decrypted = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_decrypted );
        tmp_args_element_name_6 = var_decrypted;
        CHECK_OBJECT( var_keylength );
        tmp_args_element_name_7 = var_keylength;
        frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_int2bytes, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_clearsig == NULL );
        var_clearsig = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__find_method_hash );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__find_method_hash );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_find_method_hash" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( var_clearsig );
        tmp_args_element_name_8 = var_clearsig;
        frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_method_name == NULL );
        var_method_name = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_compute_hash );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compute_hash );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "compute_hash" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_9 = par_message;
        CHECK_OBJECT( var_method_name );
        tmp_args_element_name_10 = var_method_name;
        frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_message_hash == NULL );
        var_message_hash = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASH_ASN1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 331;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_7;
        CHECK_OBJECT( var_method_name );
        tmp_subscript_name_1 = var_method_name;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_message_hash );
        tmp_right_name_1 = var_message_hash;
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cleartext == NULL );
        var_cleartext = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__pad_for_signing );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pad_for_signing );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pad_for_signing" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 332;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_cleartext );
        tmp_args_element_name_11 = var_cleartext;
        CHECK_OBJECT( var_keylength );
        tmp_args_element_name_12 = var_keylength;
        frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_expected == NULL );
        var_expected = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_expected );
        tmp_compexpr_left_1 = var_expected;
        CHECK_OBJECT( var_clearsig );
        tmp_compexpr_right_1 = var_clearsig;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_VerificationError );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VerificationError );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VerificationError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 336;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_9;
            frame_20d4cef26eec48ddc606d1586e19e08f->m_frame.f_lineno = 336;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 336;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20d4cef26eec48ddc606d1586e19e08f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20d4cef26eec48ddc606d1586e19e08f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20d4cef26eec48ddc606d1586e19e08f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20d4cef26eec48ddc606d1586e19e08f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20d4cef26eec48ddc606d1586e19e08f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20d4cef26eec48ddc606d1586e19e08f,
        type_description_1,
        par_message,
        par_signature,
        par_pub_key,
        var_keylength,
        var_encrypted,
        var_decrypted,
        var_clearsig,
        var_method_name,
        var_message_hash,
        var_cleartext,
        var_expected
    );


    // Release cached frame.
    if ( frame_20d4cef26eec48ddc606d1586e19e08f == cache_frame_20d4cef26eec48ddc606d1586e19e08f )
    {
        Py_DECREF( frame_20d4cef26eec48ddc606d1586e19e08f );
    }
    cache_frame_20d4cef26eec48ddc606d1586e19e08f = NULL;

    assertFrameObject( frame_20d4cef26eec48ddc606d1586e19e08f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_method_name );
    tmp_return_value = var_method_name;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_7_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_pub_key );
    Py_DECREF( par_pub_key );
    par_pub_key = NULL;

    CHECK_OBJECT( (PyObject *)var_keylength );
    Py_DECREF( var_keylength );
    var_keylength = NULL;

    CHECK_OBJECT( (PyObject *)var_encrypted );
    Py_DECREF( var_encrypted );
    var_encrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_decrypted );
    Py_DECREF( var_decrypted );
    var_decrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_clearsig );
    Py_DECREF( var_clearsig );
    var_clearsig = NULL;

    CHECK_OBJECT( (PyObject *)var_method_name );
    Py_DECREF( var_method_name );
    var_method_name = NULL;

    CHECK_OBJECT( (PyObject *)var_message_hash );
    Py_DECREF( var_message_hash );
    var_message_hash = NULL;

    CHECK_OBJECT( (PyObject *)var_cleartext );
    Py_DECREF( var_cleartext );
    var_cleartext = NULL;

    CHECK_OBJECT( (PyObject *)var_expected );
    Py_DECREF( var_expected );
    var_expected = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_pub_key );
    Py_DECREF( par_pub_key );
    par_pub_key = NULL;

    Py_XDECREF( var_keylength );
    var_keylength = NULL;

    Py_XDECREF( var_encrypted );
    var_encrypted = NULL;

    Py_XDECREF( var_decrypted );
    var_decrypted = NULL;

    Py_XDECREF( var_clearsig );
    var_clearsig = NULL;

    Py_XDECREF( var_method_name );
    var_method_name = NULL;

    Py_XDECREF( var_message_hash );
    var_message_hash = NULL;

    Py_XDECREF( var_cleartext );
    var_cleartext = NULL;

    Py_XDECREF( var_expected );
    var_expected = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_7_verify );
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


static PyObject *impl_rsa$pkcs1$$$function_8_find_signature_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_signature = python_pars[ 0 ];
    PyObject *par_pub_key = python_pars[ 1 ];
    PyObject *var_keylength = NULL;
    PyObject *var_encrypted = NULL;
    PyObject *var_decrypted = NULL;
    PyObject *var_clearsig = NULL;
    struct Nuitka_FrameObject *frame_90931bf1c4276c254e6a5cf85e4cbae9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_90931bf1c4276c254e6a5cf85e4cbae9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_90931bf1c4276c254e6a5cf85e4cbae9, codeobj_90931bf1c4276c254e6a5cf85e4cbae9, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_90931bf1c4276c254e6a5cf85e4cbae9 = cache_frame_90931bf1c4276c254e6a5cf85e4cbae9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_90931bf1c4276c254e6a5cf85e4cbae9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_90931bf1c4276c254e6a5cf85e4cbae9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_common );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byte_size );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_2 = par_pub_key;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_90931bf1c4276c254e6a5cf85e4cbae9->m_frame.f_lineno = 352;
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


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keylength == NULL );
        var_keylength = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_2 = par_signature;
        frame_90931bf1c4276c254e6a5cf85e4cbae9->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bytes2int, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_encrypted == NULL );
        var_encrypted = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_core );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_core );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "core" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decrypt_int );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_encrypted );
        tmp_args_element_name_3 = var_encrypted;
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_4 = par_pub_key;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_e );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pub_key );
        tmp_source_name_5 = par_pub_key;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_n );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_90931bf1c4276c254e6a5cf85e4cbae9->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_decrypted == NULL );
        var_decrypted = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_decrypted );
        tmp_args_element_name_6 = var_decrypted;
        CHECK_OBJECT( var_keylength );
        tmp_args_element_name_7 = var_keylength;
        frame_90931bf1c4276c254e6a5cf85e4cbae9->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_int2bytes, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_clearsig == NULL );
        var_clearsig = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__find_method_hash );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__find_method_hash );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_find_method_hash" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT( var_clearsig );
        tmp_args_element_name_8 = var_clearsig;
        frame_90931bf1c4276c254e6a5cf85e4cbae9->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90931bf1c4276c254e6a5cf85e4cbae9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90931bf1c4276c254e6a5cf85e4cbae9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90931bf1c4276c254e6a5cf85e4cbae9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90931bf1c4276c254e6a5cf85e4cbae9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90931bf1c4276c254e6a5cf85e4cbae9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90931bf1c4276c254e6a5cf85e4cbae9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_90931bf1c4276c254e6a5cf85e4cbae9,
        type_description_1,
        par_signature,
        par_pub_key,
        var_keylength,
        var_encrypted,
        var_decrypted,
        var_clearsig
    );


    // Release cached frame.
    if ( frame_90931bf1c4276c254e6a5cf85e4cbae9 == cache_frame_90931bf1c4276c254e6a5cf85e4cbae9 )
    {
        Py_DECREF( frame_90931bf1c4276c254e6a5cf85e4cbae9 );
    }
    cache_frame_90931bf1c4276c254e6a5cf85e4cbae9 = NULL;

    assertFrameObject( frame_90931bf1c4276c254e6a5cf85e4cbae9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_8_find_signature_hash );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_pub_key );
    Py_DECREF( par_pub_key );
    par_pub_key = NULL;

    CHECK_OBJECT( (PyObject *)var_keylength );
    Py_DECREF( var_keylength );
    var_keylength = NULL;

    CHECK_OBJECT( (PyObject *)var_encrypted );
    Py_DECREF( var_encrypted );
    var_encrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_decrypted );
    Py_DECREF( var_decrypted );
    var_decrypted = NULL;

    CHECK_OBJECT( (PyObject *)var_clearsig );
    Py_DECREF( var_clearsig );
    var_clearsig = NULL;

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

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_pub_key );
    Py_DECREF( par_pub_key );
    par_pub_key = NULL;

    Py_XDECREF( var_keylength );
    var_keylength = NULL;

    Py_XDECREF( var_encrypted );
    var_encrypted = NULL;

    Py_XDECREF( var_decrypted );
    var_decrypted = NULL;

    Py_XDECREF( var_clearsig );
    var_clearsig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_8_find_signature_hash );
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


static PyObject *impl_rsa$pkcs1$$$function_9_yield_fixedblocks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_infile = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_blocksize = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_blocksize;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_infile;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_9_yield_fixedblocks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_infile );
    Py_DECREF( par_infile );
    par_infile = NULL;

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_infile );
    Py_DECREF( par_infile );
    par_infile = NULL;

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_9_yield_fixedblocks );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_locals {
    PyObject *var_block;
    PyObject *var_read_bytes;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};

static PyObject *rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_locals *generator_heap = (struct rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_block = NULL;
    generator_heap->var_read_bytes = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_4752363262f8a503be242410b3cba459, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "infile" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 369;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( generator->m_closure[1] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 369;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "blocksize" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 369;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[0] );
        generator->m_frame->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 369;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_block;
            generator_heap->var_block = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( generator_heap->var_block );
        tmp_len_arg_1 = generator_heap->var_block;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 371;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_read_bytes;
            generator_heap->var_read_bytes = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( generator_heap->var_read_bytes );
        tmp_compexpr_left_1 = generator_heap->var_read_bytes;
        tmp_compexpr_right_1 = const_int_0;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        assert( !(generator_heap->tmp_res == -1) );
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_block );
        tmp_expression_name_1 = generator_heap->var_block;
        Py_INCREF( tmp_expression_name_1 );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 375;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( generator_heap->var_read_bytes );
        tmp_compexpr_left_2 = generator_heap->var_read_bytes;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "blocksize" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = PyCell_GET( generator->m_closure[0] );
        generator_heap->tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 368;
        generator_heap->type_description_1 = "ccoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

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
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_block,
            generator_heap->var_read_bytes
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
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_block );
    generator_heap->var_block = NULL;

    Py_XDECREF( generator_heap->var_read_bytes );
    generator_heap->var_read_bytes = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)generator_heap->var_block );
    Py_DECREF( generator_heap->var_block );
    generator_heap->var_block = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_read_bytes );
    Py_DECREF( generator_heap->var_read_bytes );
    generator_heap->var_read_bytes = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_maker( void )
{
    return Nuitka_Generator_New(
        rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_context,
        module_rsa$pkcs1,
        const_str_plain_yield_fixedblocks,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_4752363262f8a503be242410b3cba459,
        2,
        sizeof(struct rsa$pkcs1$$$function_9_yield_fixedblocks$$$genobj_1_yield_fixedblocks_locals)
    );
}


static PyObject *impl_rsa$pkcs1$$$function_10_compute_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_method_name = python_pars[ 1 ];
    PyObject *var_method = NULL;
    PyObject *var_hasher = NULL;
    PyObject *var_block = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d107fbf2ce3b602e5db000e75d64434e;
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
    static struct Nuitka_FrameObject *cache_frame_d107fbf2ce3b602e5db000e75d64434e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d107fbf2ce3b602e5db000e75d64434e, codeobj_d107fbf2ce3b602e5db000e75d64434e, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d107fbf2ce3b602e5db000e75d64434e = cache_frame_d107fbf2ce3b602e5db000e75d64434e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d107fbf2ce3b602e5db000e75d64434e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d107fbf2ce3b602e5db000e75d64434e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_method_name );
        tmp_compexpr_left_1 = par_method_name;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_METHODS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASH_METHODS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASH_METHODS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 392;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "ooooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_812da8a29ca127380db23416adbaf925;
            CHECK_OBJECT( par_method_name );
            tmp_right_name_1 = par_method_name;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_d107fbf2ce3b602e5db000e75d64434e->m_frame.f_lineno = 393;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 393;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_METHODS );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASH_METHODS );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASH_METHODS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_method_name );
        tmp_subscript_name_1 = par_method_name;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_method == NULL );
        var_method = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        CHECK_OBJECT( var_method );
        tmp_called_name_1 = var_method;
        frame_d107fbf2ce3b602e5db000e75d64434e->m_frame.f_lineno = 396;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_hasher == NULL );
        var_hasher = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_name_2;
        CHECK_OBJECT( par_message );
        tmp_source_name_1 = par_message;
        tmp_attribute_name_1 = const_str_plain_read;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( par_message );
        tmp_source_name_3 = par_message;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_2 = const_str_plain___call__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_2, tmp_attribute_name_2 );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_yield_fixedblocks );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_yield_fixedblocks );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "yield_fixedblocks" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 400;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_message );
            tmp_args_element_name_1 = par_message;
            tmp_args_element_name_2 = const_int_pos_1024;
            frame_d107fbf2ce3b602e5db000e75d64434e->m_frame.f_lineno = 400;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 400;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 400;
                type_description_1 = "ooooo";
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
                    type_description_1 = "ooooo";
                    exception_lineno = 400;
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
                PyObject *old = var_block;
                var_block = tmp_assign_source_5;
                Py_INCREF( var_block );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( var_hasher );
            tmp_called_instance_1 = var_hasher;
            CHECK_OBJECT( var_block );
            tmp_args_element_name_3 = var_block;
            frame_d107fbf2ce3b602e5db000e75d64434e->m_frame.f_lineno = 401;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooo";
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

        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( var_hasher );
            tmp_called_instance_2 = var_hasher;
            CHECK_OBJECT( par_message );
            tmp_args_element_name_4 = par_message;
            frame_d107fbf2ce3b602e5db000e75d64434e->m_frame.f_lineno = 404;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_hasher );
        tmp_called_instance_3 = var_hasher;
        frame_d107fbf2ce3b602e5db000e75d64434e->m_frame.f_lineno = 406;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_digest );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d107fbf2ce3b602e5db000e75d64434e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d107fbf2ce3b602e5db000e75d64434e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d107fbf2ce3b602e5db000e75d64434e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d107fbf2ce3b602e5db000e75d64434e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d107fbf2ce3b602e5db000e75d64434e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d107fbf2ce3b602e5db000e75d64434e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d107fbf2ce3b602e5db000e75d64434e,
        type_description_1,
        par_message,
        par_method_name,
        var_method,
        var_hasher,
        var_block
    );


    // Release cached frame.
    if ( frame_d107fbf2ce3b602e5db000e75d64434e == cache_frame_d107fbf2ce3b602e5db000e75d64434e )
    {
        Py_DECREF( frame_d107fbf2ce3b602e5db000e75d64434e );
    }
    cache_frame_d107fbf2ce3b602e5db000e75d64434e = NULL;

    assertFrameObject( frame_d107fbf2ce3b602e5db000e75d64434e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_10_compute_hash );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_method_name );
    Py_DECREF( par_method_name );
    par_method_name = NULL;

    CHECK_OBJECT( (PyObject *)var_method );
    Py_DECREF( var_method );
    var_method = NULL;

    CHECK_OBJECT( (PyObject *)var_hasher );
    Py_DECREF( var_hasher );
    var_hasher = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_method_name );
    Py_DECREF( par_method_name );
    par_method_name = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    Py_XDECREF( var_hasher );
    var_hasher = NULL;

    Py_XDECREF( var_block );
    var_block = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_10_compute_hash );
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


static PyObject *impl_rsa$pkcs1$$$function_11__find_method_hash( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_clearsig = python_pars[ 0 ];
    PyObject *var_hashname = NULL;
    PyObject *var_asn1code = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_93d0c5bcab0448069948d6096339a37b;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_93d0c5bcab0448069948d6096339a37b = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93d0c5bcab0448069948d6096339a37b, codeobj_93d0c5bcab0448069948d6096339a37b, module_rsa$pkcs1, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_93d0c5bcab0448069948d6096339a37b = cache_frame_93d0c5bcab0448069948d6096339a37b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93d0c5bcab0448069948d6096339a37b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93d0c5bcab0448069948d6096339a37b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HASH_ASN1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HASH_ASN1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_93d0c5bcab0448069948d6096339a37b->m_frame.f_lineno = 417;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 417;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooo";
            exception_lineno = 417;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooo";
            exception_lineno = 417;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "ooo";
                    exception_lineno = 417;
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

            type_description_1 = "ooo";
            exception_lineno = 417;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_hashname;
            var_hashname = tmp_assign_source_6;
            Py_INCREF( var_hashname );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_asn1code;
            var_asn1code = tmp_assign_source_7;
            Py_INCREF( var_asn1code );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_asn1code );
        tmp_compexpr_left_1 = var_asn1code;
        CHECK_OBJECT( par_clearsig );
        tmp_compexpr_right_1 = par_clearsig;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_hashname );
        tmp_return_value = var_hashname;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_VerificationError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VerificationError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VerificationError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        frame_93d0c5bcab0448069948d6096339a37b->m_frame.f_lineno = 421;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_200d74a8d89d6c50593485fee41c8c7a_tuple, 0 ) );

        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 421;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93d0c5bcab0448069948d6096339a37b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_93d0c5bcab0448069948d6096339a37b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93d0c5bcab0448069948d6096339a37b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93d0c5bcab0448069948d6096339a37b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93d0c5bcab0448069948d6096339a37b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93d0c5bcab0448069948d6096339a37b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93d0c5bcab0448069948d6096339a37b,
        type_description_1,
        par_clearsig,
        var_hashname,
        var_asn1code
    );


    // Release cached frame.
    if ( frame_93d0c5bcab0448069948d6096339a37b == cache_frame_93d0c5bcab0448069948d6096339a37b )
    {
        Py_DECREF( frame_93d0c5bcab0448069948d6096339a37b );
    }
    cache_frame_93d0c5bcab0448069948d6096339a37b = NULL;

    assertFrameObject( frame_93d0c5bcab0448069948d6096339a37b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_11__find_method_hash );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_clearsig );
    Py_DECREF( par_clearsig );
    par_clearsig = NULL;

    CHECK_OBJECT( (PyObject *)var_hashname );
    Py_DECREF( var_hashname );
    var_hashname = NULL;

    CHECK_OBJECT( (PyObject *)var_asn1code );
    Py_DECREF( var_asn1code );
    var_asn1code = NULL;

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

    CHECK_OBJECT( (PyObject *)par_clearsig );
    Py_DECREF( par_clearsig );
    par_clearsig = NULL;

    Py_XDECREF( var_hashname );
    var_hashname = NULL;

    Py_XDECREF( var_asn1code );
    var_asn1code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$pkcs1$$$function_11__find_method_hash );
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



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_10_compute_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_10_compute_hash,
        const_str_plain_compute_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d107fbf2ce3b602e5db000e75d64434e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_0f45a4b52906bf9db9551d5b86ec7760,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_11__find_method_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_11__find_method_hash,
        const_str_plain__find_method_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_93d0c5bcab0448069948d6096339a37b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_72c5192cfcd05152e099e5b0075f6917,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_1__pad_for_encryption(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_1__pad_for_encryption,
        const_str_plain__pad_for_encryption,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dc420676f9d5f1a957c6708922762f70,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_189d1a5a8cbb8dd88fe02545b3e5cd01,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_2__pad_for_signing(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_2__pad_for_signing,
        const_str_plain__pad_for_signing,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5aa42ed6eb8250e15b370a4c0b98e6f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_a61e0f945542e8bf2cc6323b95f66edb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_3_encrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_3_encrypt,
        const_str_plain_encrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9b90ce508918ed69a5f15f2dfe13b22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_6b1eb3ee3a5feec5ea62f4e868b5c56c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_4_decrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_4_decrypt,
        const_str_plain_decrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3308d39f5eb12d8bfd0182ae002ec81e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_2b87f0f863e708aaea3b4dbe0f53c2f8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_5_sign_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_5_sign_hash,
        const_str_plain_sign_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_babc0cf3e74bb574b9d470fea5457ee1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_d7a29c45b99ee667623099ac956e8dd9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_6_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_6_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c21ce98dcbcf27d7094c1acd1a90f0dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_32ca4c5448b5ef80153ec1e314460588,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_7_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_7_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_20d4cef26eec48ddc606d1586e19e08f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_c315618cbf868730bbbe33199e90e11d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_8_find_signature_hash(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_8_find_signature_hash,
        const_str_plain_find_signature_hash,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_90931bf1c4276c254e6a5cf85e4cbae9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_af0498b3a85009ae34a3ad96476d8206,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$pkcs1$$$function_9_yield_fixedblocks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$pkcs1$$$function_9_yield_fixedblocks,
        const_str_plain_yield_fixedblocks,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4752363262f8a503be242410b3cba459,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$pkcs1,
        const_str_digest_51ddb104c0c56080abe1880e7c52c746,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$pkcs1 =
{
    PyModuleDef_HEAD_INIT,
    "rsa.pkcs1",
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
MOD_ENTRY_DECL(rsa$pkcs1)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$pkcs1)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$pkcs1 );
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
    puts("rsa.pkcs1: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.pkcs1: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.pkcs1: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$pkcs1" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$pkcs1 = Py_InitModule4(
        "rsa.pkcs1",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$pkcs1 = PyModule_Create( &mdef_rsa$pkcs1 );
#endif

    moduledict_rsa$pkcs1 = MODULE_DICT( module_rsa$pkcs1 );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$pkcs1,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$pkcs1,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$pkcs1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$pkcs1,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$pkcs1 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_172952d0bc04806234e0d58ce32ce3d8, module_rsa$pkcs1 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4a9c47a869b8d9ed604e6608e44ba7d3;
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
    PyObject *locals_rsa$pkcs1_57 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_rsa$pkcs1_61 = NULL;
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
    PyObject *locals_rsa$pkcs1_65 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b2381abc5fe9bf03282948a8bd3c3c2b;
        UPDATE_STRING_DICT0( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8fe9f611640f521c7c0f4491b64948d3;
        UPDATE_STRING_DICT0( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4a9c47a869b8d9ed604e6608e44ba7d3 = MAKE_MODULE_FRAME( codeobj_4a9c47a869b8d9ed604e6608e44ba7d3, module_rsa$pkcs1 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4a9c47a869b8d9ed604e6608e44ba7d3 );
    assert( Py_REFCNT( frame_4a9c47a869b8d9ed604e6608e44ba7d3 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_8fe9f611640f521c7c0f4491b64948d3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_hashlib;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$pkcs1;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 31;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_os;
        tmp_globals_name_2 = (PyObject *)moduledict_rsa$pkcs1;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 32;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_865e7095d477d90f1eead964158b0a6f;
        tmp_globals_name_3 = (PyObject *)moduledict_rsa$pkcs1;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_range_tuple;
        tmp_level_name_3 = const_int_0;
        frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 34;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_range );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_rsa;
        tmp_globals_name_4 = (PyObject *)moduledict_rsa$pkcs1;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_common_str_plain_transform_str_plain_core_tuple;
        tmp_level_name_4 = const_int_0;
        frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 35;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_common );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_common, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_transform );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_transform, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_core );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_core, tmp_assign_source_10 );
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_Copy( const_dict_b3b804f3a7045b1019f724e56da33528 );
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_ASN1, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_8;
        tmp_dict_key_1 = const_str_plain_MD5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_md5 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_digest_97dcb4754378a8f54936024697d0d59e;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sha1 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_12 );

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_digest_8e6c146abea2e9a74bbae52248e9fe41;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sha224 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_12 );

            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_digest_1e080f858ef601c43605cc71a556333d;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sha256 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_12 );

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_digest_13616ed0239e00d0446f4afcc75f4919;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assign_source_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sha384 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_12 );

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_digest_91012c747d1826684889b0187ce7d184;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assign_source_12 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_8;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sha512 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_12 );

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_12, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_HASH_METHODS, tmp_assign_source_12 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

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


            exception_lineno = 57;

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


            exception_lineno = 57;

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


            exception_lineno = 57;

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


            exception_lineno = 57;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

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


            exception_lineno = 57;

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


            exception_lineno = 57;

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


            exception_lineno = 57;

            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_7 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___prepare__ );
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
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_8 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

                goto try_except_handler_2;
            }
            tmp_tuple_element_1 = const_str_plain_CryptoError;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 57;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_9 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

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
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_10;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 57;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_10 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_10 == NULL) );
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_10 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 57;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 57;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 57;
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
            locals_rsa$pkcs1_57 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_57, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_1de70dca33ce419c934a309ef8124470;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_57, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_CryptoError;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_57, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_4;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

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
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_rsa$pkcs1_57, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_CryptoError;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_rsa$pkcs1_57;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 57;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

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
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_rsa$pkcs1_57 );
        locals_rsa$pkcs1_57 = NULL;
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

        Py_DECREF( locals_rsa$pkcs1_57 );
        locals_rsa$pkcs1_57 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
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
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 57;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_CryptoError, tmp_assign_source_18 );
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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_CryptoError );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoError );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CryptoError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 61;

            goto try_except_handler_5;
        }

        tmp_tuple_element_4 = tmp_mvar_value_9;
        tmp_assign_source_20 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_4 );
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


            exception_lineno = 61;

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


            exception_lineno = 61;

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


            exception_lineno = 61;

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


            exception_lineno = 61;

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


            exception_lineno = 61;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

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


            exception_lineno = 61;

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


            exception_lineno = 61;

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


            exception_lineno = 61;

            goto try_except_handler_5;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_11 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___prepare__ );
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
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_12 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_5;
            }
            tmp_tuple_element_5 = const_str_plain_DecryptionError;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 61;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_13 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

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
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_14;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_6 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;

                    goto try_except_handler_5;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_6 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_14 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_14 == NULL) );
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_14 );
                if ( tmp_tuple_element_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 61;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_6 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 61;
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
            locals_rsa$pkcs1_61 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_61, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_8df157174a1e079df3585a3201ee9cb5;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_61, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_DecryptionError;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_61, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_7;
        }
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


                exception_lineno = 61;

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
            tmp_res = PyObject_SetItem( locals_rsa$pkcs1_61, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_7;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = const_str_plain_DecryptionError;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
            tmp_tuple_element_7 = locals_rsa$pkcs1_61;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 61;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

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
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_rsa$pkcs1_61 );
        locals_rsa$pkcs1_61 = NULL;
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

        Py_DECREF( locals_rsa$pkcs1_61 );
        locals_rsa$pkcs1_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
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
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 61;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_DecryptionError, tmp_assign_source_26 );
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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_CryptoError );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CryptoError );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CryptoError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;

            goto try_except_handler_8;
        }

        tmp_tuple_element_8 = tmp_mvar_value_10;
        tmp_assign_source_28 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_8 );
        assert( tmp_class_creation_3__bases_orig == NULL );
        tmp_class_creation_3__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT( tmp_class_creation_3__bases_orig );
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_29 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
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


            exception_lineno = 65;

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


            exception_lineno = 65;

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


            exception_lineno = 65;

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


            exception_lineno = 65;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

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
        tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_31;
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


            exception_lineno = 65;

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


            exception_lineno = 65;

            goto try_except_handler_8;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_15;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_15 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_16;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_16 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_8;
            }
            tmp_tuple_element_9 = const_str_plain_VerificationError;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 65;
            tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_32;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_17;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_17 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

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
                PyObject *tmp_source_name_18;
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


                    exception_lineno = 65;

                    goto try_except_handler_8;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_10 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_18 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_18 == NULL) );
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_18 );
                if ( tmp_tuple_element_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 65;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_10 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 65;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_33;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_rsa$pkcs1_65 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_172952d0bc04806234e0d58ce32ce3d8;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_65, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_3eb4481563a33d714bf11d2347041c54;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_65, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_VerificationError;
        tmp_res = PyObject_SetItem( locals_rsa$pkcs1_65, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_10;
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_10;
            }
            tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_dictset_value = tmp_class_creation_3__bases_orig;
            tmp_res = PyObject_SetItem( locals_rsa$pkcs1_65, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_10;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = const_str_plain_VerificationError;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_11 );
            tmp_tuple_element_11 = locals_rsa$pkcs1_65;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_11 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame.f_lineno = 65;
            tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_10;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_34 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_34 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_rsa$pkcs1_65 );
        locals_rsa$pkcs1_65 = NULL;
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

        Py_DECREF( locals_rsa$pkcs1_65 );
        locals_rsa$pkcs1_65 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
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
        NUITKA_CANNOT_GET_HERE( rsa$pkcs1 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 65;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_VerificationError, tmp_assign_source_34 );
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

    Py_XDECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a9c47a869b8d9ed604e6608e44ba7d3 );
#endif
    popFrameStack();

    assertFrameObject( frame_4a9c47a869b8d9ed604e6608e44ba7d3 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a9c47a869b8d9ed604e6608e44ba7d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a9c47a869b8d9ed604e6608e44ba7d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a9c47a869b8d9ed604e6608e44ba7d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a9c47a869b8d9ed604e6608e44ba7d3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases_orig );
    Py_DECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

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

    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_rsa$pkcs1$$$function_1__pad_for_encryption(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__pad_for_encryption, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_rsa$pkcs1$$$function_2__pad_for_signing(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__pad_for_signing, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_rsa$pkcs1$$$function_3_encrypt(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_encrypt, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_rsa$pkcs1$$$function_4_decrypt(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_decrypt, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_rsa$pkcs1$$$function_5_sign_hash(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_sign_hash, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_rsa$pkcs1$$$function_6_sign(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_sign, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_rsa$pkcs1$$$function_7_verify(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_verify, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_rsa$pkcs1$$$function_8_find_signature_hash(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_find_signature_hash, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_rsa$pkcs1$$$function_9_yield_fixedblocks(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_yield_fixedblocks, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_rsa$pkcs1$$$function_10_compute_hash(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain_compute_hash, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_FUNCTION_rsa$pkcs1$$$function_11__find_method_hash(  );



        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain__find_method_hash, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = LIST_COPY( const_list_c5a99d18a43567ed28454d8b2a4a6a21_list );
        UPDATE_STRING_DICT1( moduledict_rsa$pkcs1, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_47 );
    }

    return MOD_RETURN_VALUE( module_rsa$pkcs1 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
