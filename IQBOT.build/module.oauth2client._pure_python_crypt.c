/* Generated code for Python module 'oauth2client._pure_python_crypt'
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

/* The "_module_oauth2client$_pure_python_crypt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauth2client$_pure_python_crypt;
PyDictObject *moduledict_oauth2client$_pure_python_crypt;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_is_x509_cert;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain__helpers_tuple;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_94f5de6aaa2f23ee5c1cc124982c26b0;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_digest_de353979cb66da77c0a8fcb669bcf584;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
extern PyObject *const_str_plain_RsaVerifier;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_load_pkcs1;
static PyObject *const_str_plain_pkcs1;
extern PyObject *const_str_plain_notasecret;
extern PyObject *const_str_plain_asOctets;
static PyObject *const_str_digest_e7b269e08b3dc84fbc49b59ad4490f66;
static PyObject *const_str_plain_curr_bits;
extern PyObject *const_str_plain_VerificationError;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_from_string;
extern PyObject *const_str_plain_rsa;
static PyObject *const_tuple_str_plain_pem_tuple;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_der;
extern PyObject *const_tuple_str_plain_notasecret_tuple;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_digest_3abae97ff508781b0efc0eb33745e42c;
static PyObject *const_str_digest_2bf78cf42afe0ceb9af8c47d82ad8676;
extern PyObject *const_tuple_str_plain_decoder_tuple;
static PyObject *const_str_digest_ac65367f1795c20b8886e554feba5450;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain__from_bytes;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_fb6bd5bc55b7a4e3d84903ae571265cc;
extern PyObject *const_str_plain_subjectPublicKey;
static PyObject *const_str_digest_6b28378980004582841ffa4275e5b505;
static PyObject *const_str_digest_5ce3d565e67239b42c8c87050a7a6983;
extern PyObject *const_str_digest_b83d619ed514569b08445bc5b0371ab4;
extern PyObject *const_str_plain_key_pem;
extern PyObject *const_str_plain_remaining;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain_char_val;
extern PyObject *const_str_plain_tbsCertificate;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_a7ca590d3031a41e7829ed0d2e0162f7;
static PyObject *const_str_plain_marker_id;
extern PyObject *const_str_plain_PEM;
extern PyObject *const_str_plain_PrivateKey;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_plain_key_bytes;
static PyObject *const_str_digest_d4020302875bfc85a955dbe878d1021d;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain__PKCS12_ERROR;
static PyObject *const_tuple_str_plain_Certificate_tuple;
extern PyObject *const_str_digest_1e080f858ef601c43605cc71a556333d;
static PyObject *const_str_plain__PKCS1_MARKER;
extern PyObject *const_str_plain_message;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_pem;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_7fdfba94d54166f266d69397f6a313f0;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_sign;
static PyObject *const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple;
static PyObject *const_str_digest_6d2edc54debaf8b718d028e35cfca53c;
extern PyObject *const_str_plain_pubkey;
static PyObject *const_str_plain_digit;
static PyObject *const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple;
static PyObject *const_str_digest_4af3acda8a10930b1add877782ecdb16;
extern PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
static PyObject *const_str_digest_300e0b3d42ebad95f153ef0fdbdcfea4;
extern PyObject *const_str_plain_RsaSigner;
extern PyObject *const_str_plain_xrange;
static PyObject *const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple;
static PyObject *const_tuple_str_plain_privateKey_tuple;
extern PyObject *const_str_plain_decode;
static PyObject *const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_readPemBlocksFromFile;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_4a8bc8b9cdbb5db616e2a87b94a63102;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_plain_cert_info;
extern PyObject *const_str_plain__helpers;
static PyObject *const_str_plain_CERTIFICATE;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_oauth2client;
extern PyObject *const_str_plain__key;
extern PyObject *const_str_plain_privateKey;
static PyObject *const_str_plain__PKCS8_SPEC;
static PyObject *const_str_digest_532894e624053403a122f8ba5099cfe2;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple;
extern PyObject *const_str_plain__to_bytes;
static PyObject *const_str_digest_a6220397b74dd3078c845d6f28604d81;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_plain__bit_list_to_bytes;
extern PyObject *const_str_plain_PublicKey;
static PyObject *const_str_plain_pkey_info;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237;
static PyObject *const_tuple_str_plain_PrivateKeyInfo_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_4aaf798ab8402c0703630004ec3bf737;
extern PyObject *const_str_digest_0ec4fcb01a64994bf5601bfc06bf61fa;
extern PyObject *const_tuple_str_plain_self_str_plain_pkey_tuple;
extern PyObject *const_str_plain_load_pem;
extern PyObject *const_bytes_empty;
static PyObject *const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple;
extern PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_moves;
extern PyObject *const_str_plain__pubkey;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_asn1Spec;
extern PyObject *const_str_plain_pyasn1_modules;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_getComponentByName;
extern PyObject *const_str_plain_pkey;
extern PyObject *const_str_plain_StringIO;
static PyObject *const_dict_f3d7fe3507922dabbc7806c0e0a78179;
extern PyObject *const_str_plain_subjectPublicKeyInfo;
extern PyObject *const_str_plain_PrivateKeyInfo;
extern PyObject *const_str_digest_989622ccef88eb949be48370a129282e;
static PyObject *const_str_plain__POW2;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_4155d13b440c6fad27842a27d920b50c_tuple;
extern PyObject *const_str_plain_decoder;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_asn1_cert;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_8947bd4d08ec292fb8cc06cd2bed3bd5;
extern PyObject *const_tuple_str_plain_self_str_plain_pubkey_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_DER;
extern PyObject *const_str_plain_Certificate;
static PyObject *const_str_plain_key_info;
static PyObject *const_str_digest_af9e385751b86062e286eb411dbdbc18;
static PyObject *const_str_digest_2c4291046ecfa557d5a27a54c98a90f3;
static PyObject *const_str_plain__PKCS8_MARKER;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_byte_vals;
static PyObject *const_str_digest_8baa1448af402ccb113b52b3c729a09d;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_num_bits;
static PyObject *const_str_plain_bit_list;
static PyObject *const_str_digest_456fd8d998c2e46d20fbe4d6ff1b0150;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_94f5de6aaa2f23ee5c1cc124982c26b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2426473 ], 488, 0 );
    const_str_digest_de353979cb66da77c0a8fcb669bcf584 = UNSTREAM_STRING_ASCII( &constant_bin[ 2426961 ], 244, 0 );
    const_str_plain_pkcs1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424358 ], 5, 1 );
    const_str_digest_e7b269e08b3dc84fbc49b59ad4490f66 = UNSTREAM_STRING_ASCII( &constant_bin[ 2427205 ], 190, 0 );
    const_str_plain_curr_bits = UNSTREAM_STRING_ASCII( &constant_bin[ 2427395 ], 9, 1 );
    const_tuple_str_plain_pem_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pem_tuple, 0, const_str_plain_pem ); Py_INCREF( const_str_plain_pem );
    const_str_digest_3abae97ff508781b0efc0eb33745e42c = UNSTREAM_STRING_ASCII( &constant_bin[ 2427404 ], 12, 0 );
    const_str_digest_2bf78cf42afe0ceb9af8c47d82ad8676 = UNSTREAM_STRING_ASCII( &constant_bin[ 2427416 ], 703, 0 );
    const_str_digest_ac65367f1795c20b8886e554feba5450 = UNSTREAM_STRING_ASCII( &constant_bin[ 2428119 ], 129, 0 );
    const_str_digest_fb6bd5bc55b7a4e3d84903ae571265cc = UNSTREAM_STRING_ASCII( &constant_bin[ 2428248 ], 392, 0 );
    const_str_digest_6b28378980004582841ffa4275e5b505 = UNSTREAM_STRING_ASCII( &constant_bin[ 2428640 ], 20, 0 );
    const_str_digest_5ce3d565e67239b42c8c87050a7a6983 = UNSTREAM_STRING_ASCII( &constant_bin[ 2428660 ], 31, 0 );
    const_str_plain_char_val = UNSTREAM_STRING_ASCII( &constant_bin[ 2428691 ], 8, 1 );
    const_str_digest_a7ca590d3031a41e7829ed0d2e0162f7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2428699 ], 23, 0 );
    const_str_plain_marker_id = UNSTREAM_STRING_ASCII( &constant_bin[ 2428722 ], 9, 1 );
    const_str_plain_key_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 2424979 ], 9, 1 );
    const_str_digest_d4020302875bfc85a955dbe878d1021d = UNSTREAM_STRING_ASCII( &constant_bin[ 2428731 ], 14, 0 );
    const_tuple_str_plain_Certificate_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Certificate_tuple, 0, const_str_plain_Certificate ); Py_INCREF( const_str_plain_Certificate );
    const_str_plain__PKCS1_MARKER = UNSTREAM_STRING_ASCII( &constant_bin[ 2428745 ], 13, 1 );
    const_str_digest_7fdfba94d54166f266d69397f6a313f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2428758 ], 29, 0 );
    const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 2, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 3, const_str_plain_marker_id ); Py_INCREF( const_str_plain_marker_id );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 4, const_str_plain_key_bytes ); Py_INCREF( const_str_plain_key_bytes );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 5, const_str_plain_pkey ); Py_INCREF( const_str_plain_pkey );
    const_str_plain_key_info = UNSTREAM_STRING_ASCII( &constant_bin[ 2428787 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 6, const_str_plain_key_info ); Py_INCREF( const_str_plain_key_info );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 7, const_str_plain_remaining ); Py_INCREF( const_str_plain_remaining );
    const_str_plain_pkey_info = UNSTREAM_STRING_ASCII( &constant_bin[ 2428795 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 8, const_str_plain_pkey_info ); Py_INCREF( const_str_plain_pkey_info );
    const_str_digest_6d2edc54debaf8b718d028e35cfca53c = UNSTREAM_STRING_ASCII( &constant_bin[ 2428804 ], 40, 0 );
    const_str_plain_digit = UNSTREAM_STRING_ASCII( &constant_bin[ 636168 ], 5, 1 );
    const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 1, const_str_plain_key_pem ); Py_INCREF( const_str_plain_key_pem );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 2, const_str_plain_is_x509_cert ); Py_INCREF( const_str_plain_is_x509_cert );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 3, const_str_plain_der ); Py_INCREF( const_str_plain_der );
    const_str_plain_asn1_cert = UNSTREAM_STRING_ASCII( &constant_bin[ 2428844 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 4, const_str_plain_asn1_cert ); Py_INCREF( const_str_plain_asn1_cert );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 5, const_str_plain_remaining ); Py_INCREF( const_str_plain_remaining );
    const_str_plain_cert_info = UNSTREAM_STRING_ASCII( &constant_bin[ 2428853 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 6, const_str_plain_cert_info ); Py_INCREF( const_str_plain_cert_info );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 7, const_str_plain_key_bytes ); Py_INCREF( const_str_plain_key_bytes );
    PyTuple_SET_ITEM( const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 8, const_str_plain_pubkey ); Py_INCREF( const_str_plain_pubkey );
    const_str_digest_4af3acda8a10930b1add877782ecdb16 = UNSTREAM_STRING_ASCII( &constant_bin[ 2428862 ], 138, 0 );
    const_str_digest_300e0b3d42ebad95f153ef0fdbdcfea4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429000 ], 18, 0 );
    const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple = PyTuple_New( 6 );
    const_str_plain_bit_list = UNSTREAM_STRING_ASCII( &constant_bin[ 2429018 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, 0, const_str_plain_bit_list ); Py_INCREF( const_str_plain_bit_list );
    const_str_plain_num_bits = UNSTREAM_STRING_ASCII( &constant_bin[ 2429026 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, 1, const_str_plain_num_bits ); Py_INCREF( const_str_plain_num_bits );
    const_str_plain_byte_vals = UNSTREAM_STRING_ASCII( &constant_bin[ 2429034 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, 2, const_str_plain_byte_vals ); Py_INCREF( const_str_plain_byte_vals );
    PyTuple_SET_ITEM( const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, 3, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, 4, const_str_plain_curr_bits ); Py_INCREF( const_str_plain_curr_bits );
    PyTuple_SET_ITEM( const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, 5, const_str_plain_char_val ); Py_INCREF( const_str_plain_char_val );
    const_tuple_str_plain_privateKey_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_privateKey_tuple, 0, const_str_plain_privateKey ); Py_INCREF( const_str_plain_privateKey );
    const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 0, const_int_pos_128 ); Py_INCREF( const_int_pos_128 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 1, const_int_pos_64 ); Py_INCREF( const_int_pos_64 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 2, const_int_pos_32 ); Py_INCREF( const_int_pos_32 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 3, const_int_pos_16 ); Py_INCREF( const_int_pos_16 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 4, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 5, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 6, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple, 7, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_digest_4a8bc8b9cdbb5db616e2a87b94a63102 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429043 ], 31, 0 );
    const_str_plain_CERTIFICATE = UNSTREAM_STRING_ASCII( &constant_bin[ 2428004 ], 11, 1 );
    const_str_plain__PKCS8_SPEC = UNSTREAM_STRING_ASCII( &constant_bin[ 2429074 ], 11, 1 );
    const_str_digest_532894e624053403a122f8ba5099cfe2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429085 ], 62, 0 );
    const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple = PyTuple_New( 2 );
    const_str_digest_456fd8d998c2e46d20fbe4d6ff1b0150 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429147 ], 27, 0 );
    PyTuple_SET_ITEM( const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple, 0, const_str_digest_456fd8d998c2e46d20fbe4d6ff1b0150 ); Py_INCREF( const_str_digest_456fd8d998c2e46d20fbe4d6ff1b0150 );
    const_str_digest_8baa1448af402ccb113b52b3c729a09d = UNSTREAM_STRING_ASCII( &constant_bin[ 2429174 ], 25, 0 );
    PyTuple_SET_ITEM( const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple, 1, const_str_digest_8baa1448af402ccb113b52b3c729a09d ); Py_INCREF( const_str_digest_8baa1448af402ccb113b52b3c729a09d );
    const_str_digest_a6220397b74dd3078c845d6f28604d81 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429199 ], 21, 0 );
    const_str_plain__bit_list_to_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 2429220 ], 18, 1 );
    const_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429238 ], 25, 0 );
    const_tuple_str_plain_PrivateKeyInfo_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PrivateKeyInfo_tuple, 0, const_str_plain_PrivateKeyInfo ); Py_INCREF( const_str_plain_PrivateKeyInfo );
    const_str_digest_4aaf798ab8402c0703630004ec3bf737 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429263 ], 125, 0 );
    const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple, 2, const_str_plain_digit ); Py_INCREF( const_str_plain_digit );
    const_dict_f3d7fe3507922dabbc7806c0e0a78179 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_f3d7fe3507922dabbc7806c0e0a78179, const_str_plain_format, const_str_plain_DER );
    assert( PyDict_Size( const_dict_f3d7fe3507922dabbc7806c0e0a78179 ) == 1 );
    const_str_plain__POW2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429388 ], 5, 1 );
    const_tuple_4155d13b440c6fad27842a27d920b50c_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_4155d13b440c6fad27842a27d920b50c_tuple, 0, const_str_digest_4a8bc8b9cdbb5db616e2a87b94a63102 ); Py_INCREF( const_str_digest_4a8bc8b9cdbb5db616e2a87b94a63102 );
    PyTuple_SET_ITEM( const_tuple_4155d13b440c6fad27842a27d920b50c_tuple, 1, const_str_digest_7fdfba94d54166f266d69397f6a313f0 ); Py_INCREF( const_str_digest_7fdfba94d54166f266d69397f6a313f0 );
    const_str_digest_af9e385751b86062e286eb411dbdbc18 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429393 ], 37, 0 );
    const_str_digest_2c4291046ecfa557d5a27a54c98a90f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429430 ], 18, 0 );
    const_str_plain__PKCS8_MARKER = UNSTREAM_STRING_ASCII( &constant_bin[ 2429448 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$_pure_python_crypt( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_46f0f76e21ab87aff88662d925f3fd6d;
static PyCodeObject *codeobj_faf8afbbd885d1c94a8be70854c36562;
static PyCodeObject *codeobj_c4c4a86d02b5c28a4b773e520b0fb587;
static PyCodeObject *codeobj_bb916aade31551ca47825b08ad6d4d92;
static PyCodeObject *codeobj_9cc9a0ecd6b043176e6dd566ec8c9e0e;
static PyCodeObject *codeobj_56561fcd10cf4b2e3354070365c477aa;
static PyCodeObject *codeobj_bbe2c080a6d7794860a1bbc1a5562210;
static PyCodeObject *codeobj_5f463f62129412e76e48571dba3e746a;
static PyCodeObject *codeobj_e1c0993a4f2d66e5d4e680c96230afaa;
static PyCodeObject *codeobj_2b64aa5ff6c8c7aff36830242d3be94b;
static PyCodeObject *codeobj_e455e1b90dab7ef15068c79d27978293;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_532894e624053403a122f8ba5099cfe2;
    codeobj_46f0f76e21ab87aff88662d925f3fd6d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 59, const_tuple_e3cc7f81b678bf3f0426d2af34be19b9_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_faf8afbbd885d1c94a8be70854c36562 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6d2edc54debaf8b718d028e35cfca53c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c4c4a86d02b5c28a4b773e520b0fb587 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RsaSigner, 128, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_bb916aade31551ca47825b08ad6d4d92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RsaVerifier, 65, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9cc9a0ecd6b043176e6dd566ec8c9e0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 135, const_tuple_str_plain_self_str_plain_pkey_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_56561fcd10cf4b2e3354070365c477aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 72, const_tuple_str_plain_self_str_plain_pubkey_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bbe2c080a6d7794860a1bbc1a5562210 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bit_list_to_bytes, 49, const_tuple_5c6c3bc06d97f5b2ee9ed3935b55d058_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5f463f62129412e76e48571dba3e746a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 150, const_tuple_8ed72a9b38c46deaedf4ad0bad91686d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1c0993a4f2d66e5d4e680c96230afaa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 94, const_tuple_e6614ad7b1e5024665bccd4a9ff511eb_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2b64aa5ff6c8c7aff36830242d3be94b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 138, const_tuple_str_plain_self_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e455e1b90dab7ef15068c79d27978293 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 75, const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_3_verify(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_4_from_string(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_5___init__(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_6_sign(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_7_from_string( PyObject *defaults );


// The module function definitions.
static PyObject *impl_oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bit_list = python_pars[ 0 ];
    PyObject *var_num_bits = NULL;
    PyObject *var_byte_vals = NULL;
    PyObject *var_start = NULL;
    PyObject *var_curr_bits = NULL;
    PyObject *var_char_val = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_bbe2c080a6d7794860a1bbc1a5562210;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbe2c080a6d7794860a1bbc1a5562210 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bbe2c080a6d7794860a1bbc1a5562210, codeobj_bbe2c080a6d7794860a1bbc1a5562210, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bbe2c080a6d7794860a1bbc1a5562210 = cache_frame_bbe2c080a6d7794860a1bbc1a5562210;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bbe2c080a6d7794860a1bbc1a5562210 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bbe2c080a6d7794860a1bbc1a5562210 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_bit_list );
        tmp_len_arg_1 = par_bit_list;
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_num_bits == NULL );
        var_num_bits = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
        assert( var_byte_vals == NULL );
        var_byte_vals = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_moves );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_int_0;
        CHECK_OBJECT( var_num_bits );
        tmp_args_element_name_2 = var_num_bits;
        tmp_args_element_name_3 = const_int_pos_8;
        frame_bbe2c080a6d7794860a1bbc1a5562210->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_xrange, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
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
                exception_lineno = 57;
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
            PyObject *old = var_start;
            var_start = tmp_assign_source_5;
            Py_INCREF( var_start );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_bit_list );
        tmp_subscribed_name_1 = par_bit_list;
        CHECK_OBJECT( var_start );
        tmp_start_name_1 = var_start;
        CHECK_OBJECT( var_start );
        tmp_left_name_1 = var_start;
        tmp_right_name_1 = const_int_pos_8;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_curr_bits;
            var_curr_bits = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_1 = (PyObject *)&PyZip_Type;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__POW2 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__POW2 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_POW2" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 60;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_4 = tmp_mvar_value_2;
            CHECK_OBJECT( var_curr_bits );
            tmp_args_element_name_5 = var_curr_bits;
            frame_bbe2c080a6d7794860a1bbc1a5562210->m_frame.f_lineno = 60;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        tmp_sum_sequence_1 = oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes );
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
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes );
        return NULL;
        outline_result_1:;
        tmp_assign_source_7 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_char_val;
            var_char_val = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_byte_vals );
        tmp_called_instance_2 = var_byte_vals;
        CHECK_OBJECT( var_char_val );
        tmp_args_element_name_6 = var_char_val;
        frame_bbe2c080a6d7794860a1bbc1a5562210->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
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
        PyObject *tmp_bytes_arg_1;
        CHECK_OBJECT( var_byte_vals );
        tmp_bytes_arg_1 = var_byte_vals;
        tmp_return_value = BUILTIN_BYTES1( tmp_bytes_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbe2c080a6d7794860a1bbc1a5562210 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbe2c080a6d7794860a1bbc1a5562210 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbe2c080a6d7794860a1bbc1a5562210 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bbe2c080a6d7794860a1bbc1a5562210, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bbe2c080a6d7794860a1bbc1a5562210->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bbe2c080a6d7794860a1bbc1a5562210, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bbe2c080a6d7794860a1bbc1a5562210,
        type_description_1,
        par_bit_list,
        var_num_bits,
        var_byte_vals,
        var_start,
        var_curr_bits,
        var_char_val
    );


    // Release cached frame.
    if ( frame_bbe2c080a6d7794860a1bbc1a5562210 == cache_frame_bbe2c080a6d7794860a1bbc1a5562210 )
    {
        Py_DECREF( frame_bbe2c080a6d7794860a1bbc1a5562210 );
    }
    cache_frame_bbe2c080a6d7794860a1bbc1a5562210 = NULL;

    assertFrameObject( frame_bbe2c080a6d7794860a1bbc1a5562210 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bit_list );
    Py_DECREF( par_bit_list );
    par_bit_list = NULL;

    CHECK_OBJECT( (PyObject *)var_num_bits );
    Py_DECREF( var_num_bits );
    var_num_bits = NULL;

    CHECK_OBJECT( (PyObject *)var_byte_vals );
    Py_DECREF( var_byte_vals );
    var_byte_vals = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_curr_bits );
    var_curr_bits = NULL;

    Py_XDECREF( var_char_val );
    var_char_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bit_list );
    Py_DECREF( par_bit_list );
    par_bit_list = NULL;

    Py_XDECREF( var_num_bits );
    var_num_bits = NULL;

    Py_XDECREF( var_byte_vals );
    var_byte_vals = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_curr_bits );
    var_curr_bits = NULL;

    Py_XDECREF( var_char_val );
    var_char_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes );
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



struct oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_locals {
    PyObject *var_val;
    PyObject *var_digit;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_locals *generator_heap = (struct oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_val = NULL;
    generator_heap->var_digit = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_46f0f76e21ab87aff88662d925f3fd6d, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 59;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 59;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 59;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 59;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( generator_heap->tmp_iterator_attempt == NULL ))
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
                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 59;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( generator_heap->tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 59;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_val;
            generator_heap->var_val = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_val );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_digit;
            generator_heap->var_digit = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_digit );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_val );
        tmp_left_name_1 = generator_heap->var_val;
        CHECK_OBJECT( generator_heap->var_digit );
        tmp_right_name_1 = generator_heap->var_digit;
        tmp_expression_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 59;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 59;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 59;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            generator_heap->var_val,
            generator_heap->var_digit
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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_val );
    generator_heap->var_val = NULL;

    Py_XDECREF( generator_heap->var_digit );
    generator_heap->var_digit = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_val );
    generator_heap->var_val = NULL;

    Py_XDECREF( generator_heap->var_digit );
    generator_heap->var_digit = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_context,
        module_oauth2client$_pure_python_crypt,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_af9e385751b86062e286eb411dbdbc18,
#endif
        codeobj_46f0f76e21ab87aff88662d925f3fd6d,
        1,
        sizeof(struct oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_oauth2client$_pure_python_crypt$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pubkey = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_56561fcd10cf4b2e3354070365c477aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56561fcd10cf4b2e3354070365c477aa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56561fcd10cf4b2e3354070365c477aa, codeobj_56561fcd10cf4b2e3354070365c477aa, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *) );
    frame_56561fcd10cf4b2e3354070365c477aa = cache_frame_56561fcd10cf4b2e3354070365c477aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56561fcd10cf4b2e3354070365c477aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56561fcd10cf4b2e3354070365c477aa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_pubkey );
        tmp_assattr_name_1 = par_pubkey;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__pubkey, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56561fcd10cf4b2e3354070365c477aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56561fcd10cf4b2e3354070365c477aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56561fcd10cf4b2e3354070365c477aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56561fcd10cf4b2e3354070365c477aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56561fcd10cf4b2e3354070365c477aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56561fcd10cf4b2e3354070365c477aa,
        type_description_1,
        par_self,
        par_pubkey
    );


    // Release cached frame.
    if ( frame_56561fcd10cf4b2e3354070365c477aa == cache_frame_56561fcd10cf4b2e3354070365c477aa )
    {
        Py_DECREF( frame_56561fcd10cf4b2e3354070365c477aa );
    }
    cache_frame_56561fcd10cf4b2e3354070365c477aa = NULL;

    assertFrameObject( frame_56561fcd10cf4b2e3354070365c477aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pubkey );
    Py_DECREF( par_pubkey );
    par_pubkey = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pubkey );
    Py_DECREF( par_pubkey );
    par_pubkey = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_2___init__ );
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


static PyObject *impl_oauth2client$_pure_python_crypt$$$function_3_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_signature = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_e455e1b90dab7ef15068c79d27978293;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_e455e1b90dab7ef15068c79d27978293 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e455e1b90dab7ef15068c79d27978293, codeobj_e455e1b90dab7ef15068c79d27978293, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e455e1b90dab7ef15068c79d27978293 = cache_frame_e455e1b90dab7ef15068c79d27978293;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e455e1b90dab7ef15068c79d27978293 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e455e1b90dab7ef15068c79d27978293 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__to_bytes );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_tuple_element_1 = par_message;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_e455e1b90dab7ef15068c79d27978293->m_frame.f_lineno = 88;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_message;
            assert( old != NULL );
            par_message = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pkcs1 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_verify );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_message );
        tmp_args_element_name_1 = par_message;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_2 = par_signature;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pubkey );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 90;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_e455e1b90dab7ef15068c79d27978293->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_3_verify );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e455e1b90dab7ef15068c79d27978293, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e455e1b90dab7ef15068c79d27978293, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_2 = PyExc_ValueError;
        tmp_compexpr_right_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pkcs1 );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_right_1 );

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_VerificationError );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_right_1 );

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_2 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto try_except_handler_3;
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
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 89;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e455e1b90dab7ef15068c79d27978293->m_frame) frame_e455e1b90dab7ef15068c79d27978293->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_3_verify );
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
    RESTORE_FRAME_EXCEPTION( frame_e455e1b90dab7ef15068c79d27978293 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e455e1b90dab7ef15068c79d27978293 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e455e1b90dab7ef15068c79d27978293 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e455e1b90dab7ef15068c79d27978293, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e455e1b90dab7ef15068c79d27978293->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e455e1b90dab7ef15068c79d27978293, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e455e1b90dab7ef15068c79d27978293,
        type_description_1,
        par_self,
        par_message,
        par_signature
    );


    // Release cached frame.
    if ( frame_e455e1b90dab7ef15068c79d27978293 == cache_frame_e455e1b90dab7ef15068c79d27978293 )
    {
        Py_DECREF( frame_e455e1b90dab7ef15068c79d27978293 );
    }
    cache_frame_e455e1b90dab7ef15068c79d27978293 = NULL;

    assertFrameObject( frame_e455e1b90dab7ef15068c79d27978293 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_3_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_3_verify );
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


static PyObject *impl_oauth2client$_pure_python_crypt$$$function_4_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_key_pem = python_pars[ 1 ];
    PyObject *par_is_x509_cert = python_pars[ 2 ];
    PyObject *var_der = NULL;
    PyObject *var_asn1_cert = NULL;
    PyObject *var_remaining = NULL;
    PyObject *var_cert_info = NULL;
    PyObject *var_key_bytes = NULL;
    PyObject *var_pubkey = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e1c0993a4f2d66e5d4e680c96230afaa;
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
    static struct Nuitka_FrameObject *cache_frame_e1c0993a4f2d66e5d4e680c96230afaa = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1c0993a4f2d66e5d4e680c96230afaa, codeobj_e1c0993a4f2d66e5d4e680c96230afaa, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e1c0993a4f2d66e5d4e680c96230afaa = cache_frame_e1c0993a4f2d66e5d4e680c96230afaa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1c0993a4f2d66e5d4e680c96230afaa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1c0993a4f2d66e5d4e680c96230afaa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_key_pem );
        tmp_args_element_name_1 = par_key_pem;
        frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__to_bytes, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_key_pem;
            assert( old != NULL );
            par_key_pem = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_is_x509_cert );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_is_x509_cert );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pem );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key_pem );
            tmp_args_element_name_2 = par_key_pem;
            tmp_args_element_name_3 = const_str_plain_CERTIFICATE;
            frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 115;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_load_pem, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_der == NULL );
            var_der = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_decoder );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decode );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_der );
            tmp_tuple_element_1 = var_der;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_asn1Spec;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_Certificate );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Certificate );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Certificate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 116;
            tmp_dict_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 116;
            tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ooooooooo";
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


                type_description_1 = "ooooooooo";
                exception_lineno = 116;
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


                type_description_1 = "ooooooooo";
                exception_lineno = 116;
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

                        type_description_1 = "ooooooooo";
                        exception_lineno = 116;
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
                exception_lineno = 116;
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
            assert( var_asn1_cert == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_asn1_cert = tmp_assign_source_6;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
            assert( var_remaining == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_remaining = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( var_remaining );
            tmp_compexpr_left_1 = var_remaining;
            tmp_compexpr_right_1 = const_bytes_empty;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_1 = const_str_digest_3abae97ff508781b0efc0eb33745e42c;
                CHECK_OBJECT( var_remaining );
                tmp_make_exception_arg_2 = var_remaining;
                frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 118;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 118;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_asn1_cert );
            tmp_subscribed_name_2 = var_asn1_cert;
            tmp_subscript_name_1 = const_str_plain_tbsCertificate;
            tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_str_plain_subjectPublicKeyInfo;
            tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cert_info == NULL );
            var_cert_info = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__bit_list_to_bytes );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bit_list_to_bytes );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_bit_list_to_bytes" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            CHECK_OBJECT( var_cert_info );
            tmp_subscribed_name_3 = var_cert_info;
            tmp_subscript_name_3 = const_str_plain_subjectPublicKey;
            tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 121;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_key_bytes == NULL );
            var_key_bytes = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_6;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_PublicKey );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_key_bytes );
            tmp_args_element_name_5 = var_key_bytes;
            tmp_args_element_name_6 = const_str_plain_DER;
            frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 122;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_load_pkcs1, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pubkey == NULL );
            var_pubkey = tmp_assign_source_10;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 124;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_7;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PublicKey );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key_pem );
            tmp_args_element_name_7 = par_key_pem;
            tmp_args_element_name_8 = const_str_plain_PEM;
            frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 124;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_load_pkcs1, call_args );
            }

            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pubkey == NULL );
            var_pubkey = tmp_assign_source_11;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( par_cls );
        tmp_called_name_4 = par_cls;
        CHECK_OBJECT( var_pubkey );
        tmp_args_element_name_9 = var_pubkey;
        frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c0993a4f2d66e5d4e680c96230afaa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c0993a4f2d66e5d4e680c96230afaa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1c0993a4f2d66e5d4e680c96230afaa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1c0993a4f2d66e5d4e680c96230afaa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1c0993a4f2d66e5d4e680c96230afaa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1c0993a4f2d66e5d4e680c96230afaa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1c0993a4f2d66e5d4e680c96230afaa,
        type_description_1,
        par_cls,
        par_key_pem,
        par_is_x509_cert,
        var_der,
        var_asn1_cert,
        var_remaining,
        var_cert_info,
        var_key_bytes,
        var_pubkey
    );


    // Release cached frame.
    if ( frame_e1c0993a4f2d66e5d4e680c96230afaa == cache_frame_e1c0993a4f2d66e5d4e680c96230afaa )
    {
        Py_DECREF( frame_e1c0993a4f2d66e5d4e680c96230afaa );
    }
    cache_frame_e1c0993a4f2d66e5d4e680c96230afaa = NULL;

    assertFrameObject( frame_e1c0993a4f2d66e5d4e680c96230afaa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_4_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_key_pem );
    Py_DECREF( par_key_pem );
    par_key_pem = NULL;

    CHECK_OBJECT( (PyObject *)par_is_x509_cert );
    Py_DECREF( par_is_x509_cert );
    par_is_x509_cert = NULL;

    Py_XDECREF( var_der );
    var_der = NULL;

    Py_XDECREF( var_asn1_cert );
    var_asn1_cert = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_cert_info );
    var_cert_info = NULL;

    Py_XDECREF( var_key_bytes );
    var_key_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_pubkey );
    Py_DECREF( var_pubkey );
    var_pubkey = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_key_pem );
    Py_DECREF( par_key_pem );
    par_key_pem = NULL;

    CHECK_OBJECT( (PyObject *)par_is_x509_cert );
    Py_DECREF( par_is_x509_cert );
    par_is_x509_cert = NULL;

    Py_XDECREF( var_der );
    var_der = NULL;

    Py_XDECREF( var_asn1_cert );
    var_asn1_cert = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_cert_info );
    var_cert_info = NULL;

    Py_XDECREF( var_key_bytes );
    var_key_bytes = NULL;

    Py_XDECREF( var_pubkey );
    var_pubkey = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_4_from_string );
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


static PyObject *impl_oauth2client$_pure_python_crypt$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pkey = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9cc9a0ecd6b043176e6dd566ec8c9e0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9cc9a0ecd6b043176e6dd566ec8c9e0e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9cc9a0ecd6b043176e6dd566ec8c9e0e, codeobj_9cc9a0ecd6b043176e6dd566ec8c9e0e, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *) );
    frame_9cc9a0ecd6b043176e6dd566ec8c9e0e = cache_frame_9cc9a0ecd6b043176e6dd566ec8c9e0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_pkey );
        tmp_assattr_name_1 = par_pkey;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__key, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9cc9a0ecd6b043176e6dd566ec8c9e0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9cc9a0ecd6b043176e6dd566ec8c9e0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cc9a0ecd6b043176e6dd566ec8c9e0e,
        type_description_1,
        par_self,
        par_pkey
    );


    // Release cached frame.
    if ( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e == cache_frame_9cc9a0ecd6b043176e6dd566ec8c9e0e )
    {
        Py_DECREF( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e );
    }
    cache_frame_9cc9a0ecd6b043176e6dd566ec8c9e0e = NULL;

    assertFrameObject( frame_9cc9a0ecd6b043176e6dd566ec8c9e0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pkey );
    Py_DECREF( par_pkey );
    par_pkey = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pkey );
    Py_DECREF( par_pkey );
    par_pkey = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_5___init__ );
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


static PyObject *impl_oauth2client$_pure_python_crypt$$$function_6_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2b64aa5ff6c8c7aff36830242d3be94b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b64aa5ff6c8c7aff36830242d3be94b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b64aa5ff6c8c7aff36830242d3be94b, codeobj_2b64aa5ff6c8c7aff36830242d3be94b, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *) );
    frame_2b64aa5ff6c8c7aff36830242d3be94b = cache_frame_2b64aa5ff6c8c7aff36830242d3be94b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b64aa5ff6c8c7aff36830242d3be94b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b64aa5ff6c8c7aff36830242d3be94b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__to_bytes );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_tuple_element_1 = par_message;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_2b64aa5ff6c8c7aff36830242d3be94b->m_frame.f_lineno = 147;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_message;
            assert( old != NULL );
            par_message = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pkcs1 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sign );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_args_element_name_1 = par_message;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__key );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_digest_1e080f858ef601c43605cc71a556333d;
        frame_2b64aa5ff6c8c7aff36830242d3be94b->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b64aa5ff6c8c7aff36830242d3be94b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b64aa5ff6c8c7aff36830242d3be94b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b64aa5ff6c8c7aff36830242d3be94b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b64aa5ff6c8c7aff36830242d3be94b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b64aa5ff6c8c7aff36830242d3be94b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b64aa5ff6c8c7aff36830242d3be94b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b64aa5ff6c8c7aff36830242d3be94b,
        type_description_1,
        par_self,
        par_message
    );


    // Release cached frame.
    if ( frame_2b64aa5ff6c8c7aff36830242d3be94b == cache_frame_2b64aa5ff6c8c7aff36830242d3be94b )
    {
        Py_DECREF( frame_2b64aa5ff6c8c7aff36830242d3be94b );
    }
    cache_frame_2b64aa5ff6c8c7aff36830242d3be94b = NULL;

    assertFrameObject( frame_2b64aa5ff6c8c7aff36830242d3be94b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_6_sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_6_sign );
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


static PyObject *impl_oauth2client$_pure_python_crypt$$$function_7_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    PyObject *var_marker_id = NULL;
    PyObject *var_key_bytes = NULL;
    PyObject *var_pkey = NULL;
    PyObject *var_key_info = NULL;
    PyObject *var_remaining = NULL;
    PyObject *var_pkey_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5f463f62129412e76e48571dba3e746a;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5f463f62129412e76e48571dba3e746a = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f463f62129412e76e48571dba3e746a, codeobj_5f463f62129412e76e48571dba3e746a, module_oauth2client$_pure_python_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5f463f62129412e76e48571dba3e746a = cache_frame_5f463f62129412e76e48571dba3e746a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f463f62129412e76e48571dba3e746a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f463f62129412e76e48571dba3e746a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_1 = par_key;
        frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__from_bytes, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_key;
            assert( old != NULL );
            par_key = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_pem );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pem );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 167;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readPemBlocksFromFile );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_3 = par_key;
        frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_StringIO, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__PKCS1_MARKER );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__PKCS1_MARKER );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_PKCS1_MARKER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_4 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__PKCS8_MARKER );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__PKCS8_MARKER );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_PKCS8_MARKER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_5 = tmp_mvar_value_5;
        frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooooooooo";
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


            type_description_1 = "ooooooooo";
            exception_lineno = 167;
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


            type_description_1 = "ooooooooo";
            exception_lineno = 167;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 167;
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
            exception_lineno = 167;
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
        assert( var_marker_id == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_marker_id = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_key_bytes == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_key_bytes = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_marker_id );
        tmp_compexpr_left_1 = var_marker_id;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 171;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_6;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_key );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_PrivateKey );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_load_pkcs1 );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_key_bytes );
            tmp_tuple_element_1 = var_key_bytes;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f3d7fe3507922dabbc7806c0e0a78179 );
            frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 171;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pkey == NULL );
            var_pkey = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_marker_id );
            tmp_compexpr_left_2 = var_marker_id;
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_mvar_value_8;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_decoder );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decoder );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decoder" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 174;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_5 = tmp_mvar_value_7;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_decode );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_key_bytes );
                tmp_tuple_element_2 = var_key_bytes;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_dict_key_1 = const_str_plain_asn1Spec;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__PKCS8_SPEC );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__PKCS8_SPEC );
                }

                if ( tmp_mvar_value_8 == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_PKCS8_SPEC" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 175;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_4;
                }

                tmp_dict_value_1 = tmp_mvar_value_8;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 174;
                tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 174;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                    type_description_1 = "ooooooooo";
                    exception_lineno = 174;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_1 == NULL );
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


                    type_description_1 = "ooooooooo";
                    exception_lineno = 174;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
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

                            type_description_1 = "ooooooooo";
                            exception_lineno = 174;
                            goto try_except_handler_5;
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
                    exception_lineno = 174;
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

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_4;
            // End of try:
            try_end_3:;
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

            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
            Py_DECREF( tmp_tuple_unpack_2__source_iter );
            tmp_tuple_unpack_2__source_iter = NULL;

            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
                assert( var_key_info == NULL );
                Py_INCREF( tmp_assign_source_11 );
                var_key_info = tmp_assign_source_11;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
                assert( var_remaining == NULL );
                Py_INCREF( tmp_assign_source_12 );
                var_remaining = tmp_assign_source_12;
            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( var_remaining );
                tmp_compexpr_left_3 = var_remaining;
                tmp_compexpr_right_3 = const_bytes_empty;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "ooooooooo";
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
                    PyObject *tmp_make_exception_arg_2;
                    tmp_make_exception_arg_1 = const_str_digest_3abae97ff508781b0efc0eb33745e42c;
                    CHECK_OBJECT( var_remaining );
                    tmp_make_exception_arg_2 = var_remaining;
                    frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 177;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 177;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_instance_3;
                CHECK_OBJECT( var_key_info );
                tmp_called_instance_3 = var_key_info;
                frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 178;
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_getComponentByName, &PyTuple_GET_ITEM( const_tuple_str_plain_privateKey_tuple, 0 ) );

                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 178;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_pkey_info == NULL );
                var_pkey_info = tmp_assign_source_13;
            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_6;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_kw_name_3;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_9;
                tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_key );
                if ( tmp_source_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_PrivateKey );
                Py_DECREF( tmp_source_name_7 );
                if ( tmp_source_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_load_pkcs1 );
                Py_DECREF( tmp_source_name_6 );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_pkey_info );
                tmp_called_instance_4 = var_pkey_info;
                frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 179;
                tmp_tuple_element_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_asOctets );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_3 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                tmp_kw_name_3 = PyDict_Copy( const_dict_f3d7fe3507922dabbc7806c0e0a78179 );
                frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 179;
                tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 179;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_pkey == NULL );
                var_pkey = tmp_assign_source_14;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_cbc60aab7a6cdb6e547a1a7e2aeb3237;
                frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 182;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 182;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_cls );
        tmp_called_name_5 = par_cls;
        if ( var_pkey == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_pkey;
        frame_5f463f62129412e76e48571dba3e746a->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f463f62129412e76e48571dba3e746a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f463f62129412e76e48571dba3e746a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f463f62129412e76e48571dba3e746a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f463f62129412e76e48571dba3e746a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f463f62129412e76e48571dba3e746a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f463f62129412e76e48571dba3e746a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f463f62129412e76e48571dba3e746a,
        type_description_1,
        par_cls,
        par_key,
        par_password,
        var_marker_id,
        var_key_bytes,
        var_pkey,
        var_key_info,
        var_remaining,
        var_pkey_info
    );


    // Release cached frame.
    if ( frame_5f463f62129412e76e48571dba3e746a == cache_frame_5f463f62129412e76e48571dba3e746a )
    {
        Py_DECREF( frame_5f463f62129412e76e48571dba3e746a );
    }
    cache_frame_5f463f62129412e76e48571dba3e746a = NULL;

    assertFrameObject( frame_5f463f62129412e76e48571dba3e746a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_7_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)var_marker_id );
    Py_DECREF( var_marker_id );
    var_marker_id = NULL;

    CHECK_OBJECT( (PyObject *)var_key_bytes );
    Py_DECREF( var_key_bytes );
    var_key_bytes = NULL;

    Py_XDECREF( var_pkey );
    var_pkey = NULL;

    Py_XDECREF( var_key_info );
    var_key_info = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_pkey_info );
    var_pkey_info = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    Py_XDECREF( var_marker_id );
    var_marker_id = NULL;

    Py_XDECREF( var_key_bytes );
    var_key_bytes = NULL;

    Py_XDECREF( var_pkey );
    var_pkey = NULL;

    Py_XDECREF( var_key_info );
    var_key_info = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_pkey_info );
    var_pkey_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt$$$function_7_from_string );
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



static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes,
        const_str_plain__bit_list_to_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bbe2c080a6d7794860a1bbc1a5562210,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pure_python_crypt,
        const_str_digest_4af3acda8a10930b1add877782ecdb16,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pure_python_crypt$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6b28378980004582841ffa4275e5b505,
#endif
        codeobj_56561fcd10cf4b2e3354070365c477aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pure_python_crypt,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_3_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pure_python_crypt$$$function_3_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 300
        const_str_digest_2c4291046ecfa557d5a27a54c98a90f3,
#endif
        codeobj_e455e1b90dab7ef15068c79d27978293,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pure_python_crypt,
        const_str_digest_94f5de6aaa2f23ee5c1cc124982c26b0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_4_from_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pure_python_crypt$$$function_4_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 300
        const_str_digest_a7ca590d3031a41e7829ed0d2e0162f7,
#endif
        codeobj_e1c0993a4f2d66e5d4e680c96230afaa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pure_python_crypt,
        const_str_digest_2bf78cf42afe0ceb9af8c47d82ad8676,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_5___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pure_python_crypt$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_300e0b3d42ebad95f153ef0fdbdcfea4,
#endif
        codeobj_9cc9a0ecd6b043176e6dd566ec8c9e0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pure_python_crypt,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_6_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pure_python_crypt$$$function_6_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 300
        const_str_digest_d4020302875bfc85a955dbe878d1021d,
#endif
        codeobj_2b64aa5ff6c8c7aff36830242d3be94b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pure_python_crypt,
        const_str_digest_0ec4fcb01a64994bf5601bfc06bf61fa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_7_from_string( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pure_python_crypt$$$function_7_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 300
        const_str_digest_a6220397b74dd3078c845d6f28604d81,
#endif
        codeobj_5f463f62129412e76e48571dba3e746a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pure_python_crypt,
        const_str_digest_fb6bd5bc55b7a4e3d84903ae571265cc,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$_pure_python_crypt =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client._pure_python_crypt",
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
MOD_ENTRY_DECL(oauth2client$_pure_python_crypt)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(oauth2client$_pure_python_crypt)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$_pure_python_crypt );
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
    puts("oauth2client._pure_python_crypt: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._pure_python_crypt: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._pure_python_crypt: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauth2client$_pure_python_crypt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$_pure_python_crypt = Py_InitModule4(
        "oauth2client._pure_python_crypt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_oauth2client$_pure_python_crypt = PyModule_Create( &mdef_oauth2client$_pure_python_crypt );
#endif

    moduledict_oauth2client$_pure_python_crypt = MODULE_DICT( module_oauth2client$_pure_python_crypt );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_oauth2client$_pure_python_crypt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_oauth2client$_pure_python_crypt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_pure_python_crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_pure_python_crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_oauth2client$_pure_python_crypt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_5ce3d565e67239b42c8c87050a7a6983, module_oauth2client$_pure_python_crypt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_faf8afbbd885d1c94a8be70854c36562;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_oauth2client$_pure_python_crypt_65 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bb916aade31551ca47825b08ad6d4d92_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bb916aade31551ca47825b08ad6d4d92_2 = NULL;
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
    PyObject *locals_oauth2client$_pure_python_crypt_128 = NULL;
    struct Nuitka_FrameObject *frame_c4c4a86d02b5c28a4b773e520b0fb587_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c4c4a86d02b5c28a4b773e520b0fb587_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_e7b269e08b3dc84fbc49b59ad4490f66;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_532894e624053403a122f8ba5099cfe2;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_faf8afbbd885d1c94a8be70854c36562 = MAKE_MODULE_FRAME( codeobj_faf8afbbd885d1c94a8be70854c36562, module_oauth2client$_pure_python_crypt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_faf8afbbd885d1c94a8be70854c36562 );
    assert( Py_REFCNT( frame_faf8afbbd885d1c94a8be70854c36562 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_532894e624053403a122f8ba5099cfe2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_989622ccef88eb949be48370a129282e;
        tmp_globals_name_1 = (PyObject *)moduledict_oauth2client$_pure_python_crypt;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_decoder_tuple;
        tmp_level_name_1 = const_int_0;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_decoder );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_decoder, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_pyasn1_modules;
        tmp_globals_name_2 = (PyObject *)moduledict_oauth2client$_pure_python_crypt;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_pem_tuple;
        tmp_level_name_2 = const_int_0;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_pem );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_pem, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_b83d619ed514569b08445bc5b0371ab4;
        tmp_globals_name_3 = (PyObject *)moduledict_oauth2client$_pure_python_crypt;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_Certificate_tuple;
        tmp_level_name_3 = const_int_0;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 24;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Certificate );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_Certificate, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_8947bd4d08ec292fb8cc06cd2bed3bd5;
        tmp_globals_name_4 = (PyObject *)moduledict_oauth2client$_pure_python_crypt;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_PrivateKeyInfo_tuple;
        tmp_level_name_4 = const_int_0;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 25;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_PrivateKeyInfo );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_PrivateKeyInfo, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_rsa;
        tmp_globals_name_5 = (PyObject *)moduledict_oauth2client$_pure_python_crypt;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 26;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_rsa, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_six;
        tmp_globals_name_6 = (PyObject *)moduledict_oauth2client$_pure_python_crypt;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 27;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_oauth2client;
        tmp_globals_name_7 = (PyObject *)moduledict_oauth2client$_pure_python_crypt;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain__helpers_tuple;
        tmp_level_name_7 = const_int_0;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 29;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__helpers );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__helpers, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_str_digest_de353979cb66da77c0a8fcb669bcf584;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__PKCS12_ERROR, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_tuple_cc4edd47156ad60bd27f276f4c9177a3_tuple;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__POW2, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_tuple_4155d13b440c6fad27842a27d920b50c_tuple;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__PKCS1_MARKER, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_tuple_559e0b39a91f9272e569fe7bdbca06c5_tuple;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__PKCS8_MARKER, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_PrivateKeyInfo );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PrivateKeyInfo );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PrivateKeyInfo" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 46;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__PKCS8_SPEC, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_1__bit_list_to_bytes(  );



        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain__bit_list_to_bytes, tmp_assign_source_16 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
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


            exception_lineno = 65;

            goto try_except_handler_1;
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


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_1;
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


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_19 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
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


            exception_lineno = 65;

            goto try_except_handler_1;
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


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_RsaVerifier;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 65;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_20;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_1;
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
                PyObject *tmp_source_name_4;
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


                    exception_lineno = 65;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 65;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 65;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_21;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauth2client$_pure_python_crypt_65 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_5ce3d565e67239b42c8c87050a7a6983;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_ac65367f1795c20b8886e554feba5450;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_RsaVerifier;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_bb916aade31551ca47825b08ad6d4d92_2, codeobj_bb916aade31551ca47825b08ad6d4d92, module_oauth2client$_pure_python_crypt, sizeof(void *) );
        frame_bb916aade31551ca47825b08ad6d4d92_2 = cache_frame_bb916aade31551ca47825b08ad6d4d92_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_bb916aade31551ca47825b08ad6d4d92_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_bb916aade31551ca47825b08ad6d4d92_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_2___init__(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_3_verify(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain_verify, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM( locals_oauth2client$_pure_python_crypt_65, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
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
            tmp_called_name_3 = PyObject_GetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain_classmethod );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_4_from_string(  );



            frame_bb916aade31551ca47825b08ad6d4d92_2->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_classmethod_arg_1 = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_4_from_string(  );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
            Py_DECREF( tmp_classmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain_from_string, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bb916aade31551ca47825b08ad6d4d92_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bb916aade31551ca47825b08ad6d4d92_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_bb916aade31551ca47825b08ad6d4d92_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_bb916aade31551ca47825b08ad6d4d92_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_bb916aade31551ca47825b08ad6d4d92_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_bb916aade31551ca47825b08ad6d4d92_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_bb916aade31551ca47825b08ad6d4d92_2 == cache_frame_bb916aade31551ca47825b08ad6d4d92_2 )
        {
            Py_DECREF( frame_bb916aade31551ca47825b08ad6d4d92_2 );
        }
        cache_frame_bb916aade31551ca47825b08ad6d4d92_2 = NULL;

        assertFrameObject( frame_bb916aade31551ca47825b08ad6d4d92_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_3;
            }
            tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_65, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_RsaVerifier;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_oauth2client$_pure_python_crypt_65;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 65;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_22 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_oauth2client$_pure_python_crypt_65 );
        locals_oauth2client$_pure_python_crypt_65 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF( locals_oauth2client$_pure_python_crypt_65 );
        locals_oauth2client$_pure_python_crypt_65 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 65;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_RsaVerifier, tmp_assign_source_22 );
    }
    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_24 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_9;
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


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_5:;
        condexpr_end_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_10;
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


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 128;

            goto try_except_handler_4;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = const_str_plain_RsaSigner;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 128;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_27;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto try_except_handler_4;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
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
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 128;

                    goto try_except_handler_4;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 128;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 128;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 128;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_28;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_oauth2client$_pure_python_crypt_128 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_5ce3d565e67239b42c8c87050a7a6983;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_4aaf798ab8402c0703630004ec3bf737;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_RsaSigner;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c4c4a86d02b5c28a4b773e520b0fb587_3, codeobj_c4c4a86d02b5c28a4b773e520b0fb587, module_oauth2client$_pure_python_crypt, sizeof(void *) );
        frame_c4c4a86d02b5c28a4b773e520b0fb587_3 = cache_frame_c4c4a86d02b5c28a4b773e520b0fb587_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c4c4a86d02b5c28a4b773e520b0fb587_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c4c4a86d02b5c28a4b773e520b0fb587_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_5___init__(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_6_sign(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain_sign, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_defaults_1;
            PyObject *tmp_classmethod_arg_2;
            PyObject *tmp_defaults_2;
            tmp_res = MAPPING_HAS_ITEM( locals_oauth2client$_pure_python_crypt_128, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_6;
            }
            else
            {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_6 = PyObject_GetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain_classmethod );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_1 = const_tuple_str_plain_notasecret_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_args_element_name_2 = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_7_from_string( tmp_defaults_1 );



            frame_c4c4a86d02b5c28a4b773e520b0fb587_3->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_defaults_2 = const_tuple_str_plain_notasecret_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_classmethod_arg_2 = MAKE_FUNCTION_oauth2client$_pure_python_crypt$$$function_7_from_string( tmp_defaults_2 );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_2 );
            Py_DECREF( tmp_classmethod_arg_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain_from_string, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c4c4a86d02b5c28a4b773e520b0fb587_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c4c4a86d02b5c28a4b773e520b0fb587_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c4c4a86d02b5c28a4b773e520b0fb587_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c4c4a86d02b5c28a4b773e520b0fb587_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c4c4a86d02b5c28a4b773e520b0fb587_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c4c4a86d02b5c28a4b773e520b0fb587_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_c4c4a86d02b5c28a4b773e520b0fb587_3 == cache_frame_c4c4a86d02b5c28a4b773e520b0fb587_3 )
        {
            Py_DECREF( frame_c4c4a86d02b5c28a4b773e520b0fb587_3 );
        }
        cache_frame_c4c4a86d02b5c28a4b773e520b0fb587_3 = NULL;

        assertFrameObject( frame_c4c4a86d02b5c28a4b773e520b0fb587_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto try_except_handler_6;
            }
            tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_oauth2client$_pure_python_crypt_128, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_RsaSigner;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_oauth2client$_pure_python_crypt_128;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_faf8afbbd885d1c94a8be70854c36562->m_frame.f_lineno = 128;
            tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_29 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_29 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_oauth2client$_pure_python_crypt_128 );
        locals_oauth2client$_pure_python_crypt_128 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF( locals_oauth2client$_pure_python_crypt_128 );
        locals_oauth2client$_pure_python_crypt_128 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( oauth2client$_pure_python_crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 128;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pure_python_crypt, (Nuitka_StringObject *)const_str_plain_RsaSigner, tmp_assign_source_29 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_faf8afbbd885d1c94a8be70854c36562 );
#endif
    popFrameStack();

    assertFrameObject( frame_faf8afbbd885d1c94a8be70854c36562 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_faf8afbbd885d1c94a8be70854c36562 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_faf8afbbd885d1c94a8be70854c36562, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_faf8afbbd885d1c94a8be70854c36562->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_faf8afbbd885d1c94a8be70854c36562, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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


    return MOD_RETURN_VALUE( module_oauth2client$_pure_python_crypt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
