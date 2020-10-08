/* Generated code for Python module 'oauth2client.crypt'
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

/* The "_module_oauth2client$crypt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauth2client$crypt;
PyDictObject *moduledict_oauth2client$crypt;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain__bad_pkcs12_key_as_pem;
extern PyObject *const_str_plain_make_signed_jwt;
extern PyObject *const_str_plain_is_x509_cert;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain__helpers_tuple;
extern PyObject *const_str_plain_certs;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_177d95d6d404d02b224f2cff023f36c7;
extern PyObject *const_str_plain_PyCryptoSigner;
extern PyObject *const_str_plain_Signer;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_plain_payload_dict;
extern PyObject *const_str_plain_RsaVerifier;
extern PyObject *const_int_pos_86400;
static PyObject *const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple;
static PyObject *const_str_digest_a270a7128d569f4c7d92760a9151467a;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_bbc6ec5179fb962cb832f43e3a5d6a12;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_0d5775c0ac8018309414e22d4549b50b;
extern PyObject *const_str_plain_json;
static PyObject *const_tuple_447fe76beaca35483ffb0e52b5449579_tuple;
extern PyObject *const_str_plain__json_encode;
static PyObject *const_str_plain_payload_bytes;
extern PyObject *const_str_plain_now;
static PyObject *const_str_digest_52b2a6eb99017dafc0668b73aba2a322;
extern PyObject *const_str_plain_from_string;
extern PyObject *const_str_plain_key_id;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_34910bef1cb907390a544f794f652d0c;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain_payload;
extern PyObject *const_str_plain__urlsafe_b64decode;
extern PyObject *const_str_plain_jwt;
static PyObject *const_str_plain_latest;
static PyObject *const_dict_a77d5f9634d91ab24c187b98db5450da;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain__openssl_crypt_tuple;
extern PyObject *const_str_plain_pkcs12_key_as_pem;
static PyObject *const_str_plain_signing_input;
extern PyObject *const_str_plain__from_bytes;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_PyCryptoVerifier;
static PyObject *const_tuple_str_plain_exp_tuple;
static PyObject *const_tuple_str_plain__pure_python_crypt_tuple;
extern PyObject *const_str_plain_expiration;
extern PyObject *const_int_pos_300;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_OpenSSLSigner;
static PyObject *const_str_plain_AUTH_TOKEN_LIFETIME_SECS;
static PyObject *const_tuple_str_digest_52b2a6eb99017dafc0668b73aba2a322_tuple;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_verify_signed_jwt_with_certs;
static PyObject *const_tuple_str_plain_iat_tuple;
static PyObject *const_tuple_str_plain__pycrypto_crypt_tuple;
static PyObject *const_str_plain__check_audience;
extern PyObject *const_bytes_chr_46;
static PyObject *const_tuple_str_digest_d5f3c974ef79683c2b4f59a75c68172d_tuple;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_pem;
extern PyObject *const_str_plain_verifier;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_3b8ef7eede1ce6303b7d4c94b0db3359;
extern PyObject *const_str_plain_sign;
static PyObject *const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple;
static PyObject *const_str_digest_b532ccbde8b697be5716b1d7d4080035;
extern PyObject *const_str_plain_Verifier;
static PyObject *const_tuple_str_plain_aud_tuple;
static PyObject *const_str_plain_earliest;
extern PyObject *const_str_plain_aud;
extern PyObject *const_str_plain_RsaSigner;
static PyObject *const_str_plain__pycrypto_crypt;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain__verify_signature;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_c5d37d72671b97cf459ade35d2436684;
extern PyObject *const_str_plain__helpers;
static PyObject *const_str_digest_116842ee94d1903f3e2a0b87009d840c;
extern PyObject *const_str_plain_count;
static PyObject *const_str_plain_AppIdentityError;
static PyObject *const_str_digest_1ae747902c7371a153e01d4b712e26d8;
static PyObject *const_str_digest_ab7011be2d4a07d05f61001c7a910782;
extern PyObject *const_int_0;
static PyObject *const_str_plain_alg;
static PyObject *const_str_digest_efe3e5eccd094c863090bf8a808da390;
static PyObject *const_str_digest_8e31755efb9218b3ad1b82e15e2f79da;
extern PyObject *const_str_plain_oauth2client;
static PyObject *const_str_plain_audience_in_payload;
extern PyObject *const_str_digest_ef7d825d98bd52772abe259f27d9eff2;
static PyObject *const_str_plain_issued_at;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_audience;
extern PyObject *const_str_plain__to_bytes;
extern PyObject *const_str_plain_segments;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_OpenSSLVerifier;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_verify;
extern PyObject *const_str_plain_iat;
static PyObject *const_str_plain_kid;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_JWT;
static PyObject *const_str_plain_message_to_sign;
static PyObject *const_str_digest_2f91c377ba8fe54e0075d8b9eabd767c;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_CLOCK_SKEW_SECS;
static PyObject *const_tuple_340e9461a18277de2f85a275cf7bf816_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_a385a71c2482321b52a3e8012bb9f6aa;
extern PyObject *const_tuple_type_Exception_tuple;
static PyObject *const_str_digest_6f1d92f37d0f50321bd46bb87883e3a1;
static PyObject *const_str_digest_9aded86785dc9d40fe8e7dcade6670f5;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_typ;
extern PyObject *const_tuple_bytes_chr_46_tuple;
static PyObject *const_str_plain__pure_python_crypt;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_MAX_TOKEN_LIFETIME_SECS;
extern PyObject *const_str_plain_logger;
static PyObject *const_tuple_caf7c2db288db6042fce4651a2353127_tuple;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_d5f3c974ef79683c2b4f59a75c68172d;
extern PyObject *const_str_plain_signer;
static PyObject *const_str_plain_RS256;
static PyObject *const_str_digest_9cefa5f189828dccaf7a7cb600fa5d90;
static PyObject *const_str_plain__verify_time_range;
extern PyObject *const_str_plain_loads;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
static PyObject *const_dict_35c70eca0bfd4024df535206f5be2ada;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_plain__openssl_crypt;
extern PyObject *const_str_plain__urlsafe_b64encode;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__bad_pkcs12_key_as_pem = UNSTREAM_STRING_ASCII( &constant_bin[ 2501068 ], 22, 1 );
    const_str_digest_177d95d6d404d02b224f2cff023f36c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2501090 ], 35, 0 );
    const_str_plain_payload_dict = UNSTREAM_STRING_ASCII( &constant_bin[ 2501125 ], 12, 1 );
    const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 0, const_str_plain_payload_dict ); Py_INCREF( const_str_plain_payload_dict );
    PyTuple_SET_ITEM( const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 1, const_str_plain_audience ); Py_INCREF( const_str_plain_audience );
    const_str_plain_audience_in_payload = UNSTREAM_STRING_ASCII( &constant_bin[ 2501137 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 2, const_str_plain_audience_in_payload ); Py_INCREF( const_str_plain_audience_in_payload );
    const_str_digest_a270a7128d569f4c7d92760a9151467a = UNSTREAM_STRING_ASCII( &constant_bin[ 2423745 ], 41, 0 );
    const_str_digest_bbc6ec5179fb962cb832f43e3a5d6a12 = UNSTREAM_STRING_ASCII( &constant_bin[ 2501156 ], 577, 0 );
    const_str_digest_0d5775c0ac8018309414e22d4549b50b = UNSTREAM_STRING_ASCII( &constant_bin[ 2501733 ], 49, 0 );
    const_tuple_447fe76beaca35483ffb0e52b5449579_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 1, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 2, const_str_plain_certs ); Py_INCREF( const_str_plain_certs );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 3, const_str_plain_pem ); Py_INCREF( const_str_plain_pem );
    PyTuple_SET_ITEM( const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 4, const_str_plain_verifier ); Py_INCREF( const_str_plain_verifier );
    const_str_plain_payload_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 2501782 ], 13, 1 );
    const_str_digest_52b2a6eb99017dafc0668b73aba2a322 = UNSTREAM_STRING_ASCII( &constant_bin[ 2501795 ], 23, 0 );
    const_str_digest_34910bef1cb907390a544f794f652d0c = UNSTREAM_STRING_ASCII( &constant_bin[ 2501818 ], 33, 0 );
    const_str_plain_latest = UNSTREAM_STRING_ASCII( &constant_bin[ 43905 ], 6, 1 );
    const_dict_a77d5f9634d91ab24c187b98db5450da = _PyDict_NewPresized( 2 );
    const_str_plain_JWT = UNSTREAM_STRING_ASCII( &constant_bin[ 2459074 ], 3, 1 );
    PyDict_SetItem( const_dict_a77d5f9634d91ab24c187b98db5450da, const_str_plain_typ, const_str_plain_JWT );
    const_str_plain_alg = UNSTREAM_STRING_ASCII( &constant_bin[ 447375 ], 3, 1 );
    const_str_plain_RS256 = UNSTREAM_STRING_ASCII( &constant_bin[ 2501851 ], 5, 1 );
    PyDict_SetItem( const_dict_a77d5f9634d91ab24c187b98db5450da, const_str_plain_alg, const_str_plain_RS256 );
    assert( PyDict_Size( const_dict_a77d5f9634d91ab24c187b98db5450da ) == 2 );
    const_tuple_str_plain__openssl_crypt_tuple = PyTuple_New( 1 );
    const_str_plain__openssl_crypt = UNSTREAM_STRING_ASCII( &constant_bin[ 2423827 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__openssl_crypt_tuple, 0, const_str_plain__openssl_crypt ); Py_INCREF( const_str_plain__openssl_crypt );
    const_str_plain_signing_input = UNSTREAM_STRING_ASCII( &constant_bin[ 2501856 ], 13, 1 );
    const_tuple_str_plain_exp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_exp_tuple, 0, const_str_plain_exp ); Py_INCREF( const_str_plain_exp );
    const_tuple_str_plain__pure_python_crypt_tuple = PyTuple_New( 1 );
    const_str_plain__pure_python_crypt = UNSTREAM_STRING_ASCII( &constant_bin[ 2428673 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__pure_python_crypt_tuple, 0, const_str_plain__pure_python_crypt ); Py_INCREF( const_str_plain__pure_python_crypt );
    const_str_plain_AUTH_TOKEN_LIFETIME_SECS = UNSTREAM_STRING_ASCII( &constant_bin[ 2501869 ], 24, 1 );
    const_tuple_str_digest_52b2a6eb99017dafc0668b73aba2a322_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_52b2a6eb99017dafc0668b73aba2a322_tuple, 0, const_str_digest_52b2a6eb99017dafc0668b73aba2a322 ); Py_INCREF( const_str_digest_52b2a6eb99017dafc0668b73aba2a322 );
    const_tuple_str_plain_iat_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_iat_tuple, 0, const_str_plain_iat ); Py_INCREF( const_str_plain_iat );
    const_tuple_str_plain__pycrypto_crypt_tuple = PyTuple_New( 1 );
    const_str_plain__pycrypto_crypt = UNSTREAM_STRING_ASCII( &constant_bin[ 2430402 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__pycrypto_crypt_tuple, 0, const_str_plain__pycrypto_crypt ); Py_INCREF( const_str_plain__pycrypto_crypt );
    const_str_plain__check_audience = UNSTREAM_STRING_ASCII( &constant_bin[ 2501893 ], 15, 1 );
    const_tuple_str_digest_d5f3c974ef79683c2b4f59a75c68172d_tuple = PyTuple_New( 1 );
    const_str_digest_d5f3c974ef79683c2b4f59a75c68172d = UNSTREAM_STRING_ASCII( &constant_bin[ 2465388 ], 18, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d5f3c974ef79683c2b4f59a75c68172d_tuple, 0, const_str_digest_d5f3c974ef79683c2b4f59a75c68172d ); Py_INCREF( const_str_digest_d5f3c974ef79683c2b4f59a75c68172d );
    const_str_digest_3b8ef7eede1ce6303b7d4c94b0db3359 = UNSTREAM_STRING_ASCII( &constant_bin[ 2501908 ], 32, 0 );
    const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 0, const_str_plain_payload_dict ); Py_INCREF( const_str_plain_payload_dict );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 1, const_str_plain_now ); Py_INCREF( const_str_plain_now );
    const_str_plain_issued_at = UNSTREAM_STRING_ASCII( &constant_bin[ 2501940 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 2, const_str_plain_issued_at ); Py_INCREF( const_str_plain_issued_at );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 3, const_str_plain_expiration ); Py_INCREF( const_str_plain_expiration );
    const_str_plain_earliest = UNSTREAM_STRING_ASCII( &constant_bin[ 2501949 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 4, const_str_plain_earliest ); Py_INCREF( const_str_plain_earliest );
    PyTuple_SET_ITEM( const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 5, const_str_plain_latest ); Py_INCREF( const_str_plain_latest );
    const_str_digest_b532ccbde8b697be5716b1d7d4080035 = UNSTREAM_STRING_ASCII( &constant_bin[ 2501957 ], 36, 0 );
    const_tuple_str_plain_aud_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_aud_tuple, 0, const_str_plain_aud ); Py_INCREF( const_str_plain_aud );
    const_str_plain__verify_signature = UNSTREAM_STRING_ASCII( &constant_bin[ 2501993 ], 17, 1 );
    const_str_digest_c5d37d72671b97cf459ade35d2436684 = UNSTREAM_STRING_ASCII( &constant_bin[ 2502010 ], 988, 0 );
    const_str_digest_116842ee94d1903f3e2a0b87009d840c = UNSTREAM_STRING_ASCII( &constant_bin[ 2502998 ], 510, 0 );
    const_str_plain_AppIdentityError = UNSTREAM_STRING_ASCII( &constant_bin[ 2465407 ], 16, 1 );
    const_str_digest_1ae747902c7371a153e01d4b712e26d8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2503508 ], 26, 0 );
    const_str_digest_ab7011be2d4a07d05f61001c7a910782 = UNSTREAM_STRING_ASCII( &constant_bin[ 2503534 ], 26, 0 );
    const_str_digest_efe3e5eccd094c863090bf8a808da390 = UNSTREAM_STRING_ASCII( &constant_bin[ 2503560 ], 338, 0 );
    const_str_digest_8e31755efb9218b3ad1b82e15e2f79da = UNSTREAM_STRING_ASCII( &constant_bin[ 2503898 ], 35, 0 );
    const_str_plain_kid = UNSTREAM_STRING_ASCII( &constant_bin[ 2503933 ], 3, 1 );
    const_str_plain_message_to_sign = UNSTREAM_STRING_ASCII( &constant_bin[ 2503936 ], 15, 1 );
    const_str_digest_2f91c377ba8fe54e0075d8b9eabd767c = UNSTREAM_STRING_ASCII( &constant_bin[ 2503951 ], 22, 0 );
    const_str_plain_CLOCK_SKEW_SECS = UNSTREAM_STRING_ASCII( &constant_bin[ 2502207 ], 15, 1 );
    const_tuple_340e9461a18277de2f85a275cf7bf816_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 0, const_str_plain_jwt ); Py_INCREF( const_str_plain_jwt );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 1, const_str_plain_certs ); Py_INCREF( const_str_plain_certs );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 2, const_str_plain_audience ); Py_INCREF( const_str_plain_audience );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 3, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 4, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 5, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 6, const_str_plain_message_to_sign ); Py_INCREF( const_str_plain_message_to_sign );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 7, const_str_plain_payload_bytes ); Py_INCREF( const_str_plain_payload_bytes );
    PyTuple_SET_ITEM( const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 8, const_str_plain_payload_dict ); Py_INCREF( const_str_plain_payload_dict );
    const_str_digest_a385a71c2482321b52a3e8012bb9f6aa = UNSTREAM_STRING_ASCII( &constant_bin[ 2503973 ], 26, 0 );
    const_str_digest_6f1d92f37d0f50321bd46bb87883e3a1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2503999 ], 27, 0 );
    const_str_digest_9aded86785dc9d40fe8e7dcade6670f5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2504026 ], 32, 0 );
    const_tuple_caf7c2db288db6042fce4651a2353127_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 0, const_str_plain_signer ); Py_INCREF( const_str_plain_signer );
    PyTuple_SET_ITEM( const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 1, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyTuple_SET_ITEM( const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 2, const_str_plain_key_id ); Py_INCREF( const_str_plain_key_id );
    PyTuple_SET_ITEM( const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 3, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 4, const_str_plain_segments ); Py_INCREF( const_str_plain_segments );
    PyTuple_SET_ITEM( const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 5, const_str_plain_signing_input ); Py_INCREF( const_str_plain_signing_input );
    PyTuple_SET_ITEM( const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 6, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    const_str_digest_9cefa5f189828dccaf7a7cb600fa5d90 = UNSTREAM_STRING_ASCII( &constant_bin[ 2504058 ], 384, 0 );
    const_str_plain__verify_time_range = UNSTREAM_STRING_ASCII( &constant_bin[ 2504442 ], 18, 1 );
    const_dict_35c70eca0bfd4024df535206f5be2ada = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_35c70eca0bfd4024df535206f5be2ada, const_str_plain_is_x509_cert, Py_True );
    assert( PyDict_Size( const_dict_35c70eca0bfd4024df535206f5be2ada ) == 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$crypt( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c4516771f1040eb107ad8b4491f3b2fa;
static PyCodeObject *codeobj_c4202743ffde766b4df3a9b9e143b90d;
static PyCodeObject *codeobj_633711e79173feb2759160a2380116f1;
static PyCodeObject *codeobj_09078d27a3d09af49d11fbbd11a9732f;
static PyCodeObject *codeobj_e52190f98fab99e6b003534af713eb10;
static PyCodeObject *codeobj_f1e5c6bd92af8f1eb6f4966780ff2d25;
static PyCodeObject *codeobj_e32720ed3c14c644e5ee05610cf5540a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0d5775c0ac8018309414e22d4549b50b;
    codeobj_c4516771f1040eb107ad8b4491f3b2fa = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6f1d92f37d0f50321bd46bb87883e3a1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c4202743ffde766b4df3a9b9e143b90d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bad_pkcs12_key_as_pem, 40, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_633711e79173feb2759160a2380116f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_audience, 126, const_tuple_82884dce0425b5f7faf5caf05372ddf6_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_09078d27a3d09af49d11fbbd11a9732f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_signature, 105, const_tuple_447fe76beaca35483ffb0e52b5449579_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e52190f98fab99e6b003534af713eb10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_time_range, 154, const_tuple_6ecdf34425f132e25422e4257f4d6dc4_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f1e5c6bd92af8f1eb6f4966780ff2d25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_signed_jwt, 74, const_tuple_caf7c2db288db6042fce4651a2353127_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e32720ed3c14c644e5ee05610cf5540a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify_signed_jwt_with_certs, 207, const_tuple_340e9461a18277de2f85a275cf7bf816_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_1__bad_pkcs12_key_as_pem(  );


static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_2_make_signed_jwt( PyObject *defaults );


static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_3__verify_signature(  );


static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_4__check_audience(  );


static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_5__verify_time_range(  );


static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs( PyObject *defaults );


// The module function definitions.
static PyObject *impl_oauth2client$crypt$$$function_1__bad_pkcs12_key_as_pem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c4202743ffde766b4df3a9b9e143b90d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c4202743ffde766b4df3a9b9e143b90d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c4202743ffde766b4df3a9b9e143b90d, codeobj_c4202743ffde766b4df3a9b9e143b90d, module_oauth2client$crypt, sizeof(void *)+sizeof(void *) );
    frame_c4202743ffde766b4df3a9b9e143b90d = cache_frame_c4202743ffde766b4df3a9b9e143b90d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c4202743ffde766b4df3a9b9e143b90d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c4202743ffde766b4df3a9b9e143b90d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_177d95d6d404d02b224f2cff023f36c7;
        frame_c4202743ffde766b4df3a9b9e143b90d->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 41;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4202743ffde766b4df3a9b9e143b90d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4202743ffde766b4df3a9b9e143b90d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c4202743ffde766b4df3a9b9e143b90d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c4202743ffde766b4df3a9b9e143b90d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c4202743ffde766b4df3a9b9e143b90d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c4202743ffde766b4df3a9b9e143b90d,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_c4202743ffde766b4df3a9b9e143b90d == cache_frame_c4202743ffde766b4df3a9b9e143b90d )
    {
        Py_DECREF( frame_c4202743ffde766b4df3a9b9e143b90d );
    }
    cache_frame_c4202743ffde766b4df3a9b9e143b90d = NULL;

    assertFrameObject( frame_c4202743ffde766b4df3a9b9e143b90d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_1__bad_pkcs12_key_as_pem );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_1__bad_pkcs12_key_as_pem );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_oauth2client$crypt$$$function_2_make_signed_jwt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_signer = python_pars[ 0 ];
    PyObject *par_payload = python_pars[ 1 ];
    PyObject *par_key_id = python_pars[ 2 ];
    PyObject *var_header = NULL;
    PyObject *var_segments = NULL;
    PyObject *var_signing_input = NULL;
    PyObject *var_signature = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    struct Nuitka_FrameObject *frame_f1e5c6bd92af8f1eb6f4966780ff2d25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f1e5c6bd92af8f1eb6f4966780ff2d25 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_Copy( const_dict_a77d5f9634d91ab24c187b98db5450da );
        assert( var_header == NULL );
        var_header = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_key_id );
        tmp_compexpr_left_1 = par_key_id;
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
        CHECK_OBJECT( par_key_id );
        tmp_dictset_value = par_key_id;
        CHECK_OBJECT( var_header );
        tmp_dictset_dict = var_header;
        tmp_dictset_key = const_str_plain_kid;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1e5c6bd92af8f1eb6f4966780ff2d25, codeobj_f1e5c6bd92af8f1eb6f4966780ff2d25, module_oauth2client$crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f1e5c6bd92af8f1eb6f4966780ff2d25 = cache_frame_f1e5c6bd92af8f1eb6f4966780ff2d25;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__urlsafe_b64encode );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_header );
        tmp_args_element_name_2 = var_header;
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__json_encode, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__urlsafe_b64encode );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_payload );
        tmp_args_element_name_4 = par_payload;
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__json_encode, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_2, 1, tmp_list_element_1 );
        assert( var_segments == NULL );
        var_segments = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_3 = const_bytes_chr_46;
        CHECK_OBJECT( var_segments );
        tmp_args_element_name_5 = var_segments;
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_join, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_signing_input == NULL );
        var_signing_input = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_signer );
        tmp_called_instance_4 = par_signer;
        CHECK_OBJECT( var_signing_input );
        tmp_args_element_name_6 = var_signing_input;
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sign, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_signature == NULL );
        var_signature = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( var_segments );
        tmp_source_name_3 = var_segments;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_signature );
        tmp_args_element_name_8 = var_signature;
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__urlsafe_b64encode, call_args );
        }

        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_unicode_arg_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logger );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logger" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_debug );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_segments );
        tmp_unicode_arg_1 = var_segments;
        tmp_args_element_name_9 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_10;
        tmp_called_instance_6 = const_bytes_chr_46;
        CHECK_OBJECT( var_segments );
        tmp_args_element_name_10 = var_segments;
        frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_join, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1e5c6bd92af8f1eb6f4966780ff2d25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1e5c6bd92af8f1eb6f4966780ff2d25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1e5c6bd92af8f1eb6f4966780ff2d25, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1e5c6bd92af8f1eb6f4966780ff2d25,
        type_description_1,
        par_signer,
        par_payload,
        par_key_id,
        var_header,
        var_segments,
        var_signing_input,
        var_signature
    );


    // Release cached frame.
    if ( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 == cache_frame_f1e5c6bd92af8f1eb6f4966780ff2d25 )
    {
        Py_DECREF( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 );
    }
    cache_frame_f1e5c6bd92af8f1eb6f4966780ff2d25 = NULL;

    assertFrameObject( frame_f1e5c6bd92af8f1eb6f4966780ff2d25 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_2_make_signed_jwt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_signer );
    Py_DECREF( par_signer );
    par_signer = NULL;

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

    CHECK_OBJECT( (PyObject *)par_key_id );
    Py_DECREF( par_key_id );
    par_key_id = NULL;

    CHECK_OBJECT( (PyObject *)var_header );
    Py_DECREF( var_header );
    var_header = NULL;

    CHECK_OBJECT( (PyObject *)var_segments );
    Py_DECREF( var_segments );
    var_segments = NULL;

    CHECK_OBJECT( (PyObject *)var_signing_input );
    Py_DECREF( var_signing_input );
    var_signing_input = NULL;

    CHECK_OBJECT( (PyObject *)var_signature );
    Py_DECREF( var_signature );
    var_signature = NULL;

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

    CHECK_OBJECT( (PyObject *)par_signer );
    Py_DECREF( par_signer );
    par_signer = NULL;

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

    CHECK_OBJECT( (PyObject *)par_key_id );
    Py_DECREF( par_key_id );
    par_key_id = NULL;

    CHECK_OBJECT( (PyObject *)var_header );
    Py_DECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_segments );
    var_segments = NULL;

    Py_XDECREF( var_signing_input );
    var_signing_input = NULL;

    Py_XDECREF( var_signature );
    var_signature = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_2_make_signed_jwt );
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


static PyObject *impl_oauth2client$crypt$$$function_3__verify_signature( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *par_certs = python_pars[ 2 ];
    PyObject *var_pem = NULL;
    PyObject *var_verifier = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_09078d27a3d09af49d11fbbd11a9732f;
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
    static struct Nuitka_FrameObject *cache_frame_09078d27a3d09af49d11fbbd11a9732f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_09078d27a3d09af49d11fbbd11a9732f, codeobj_09078d27a3d09af49d11fbbd11a9732f, module_oauth2client$crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_09078d27a3d09af49d11fbbd11a9732f = cache_frame_09078d27a3d09af49d11fbbd11a9732f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09078d27a3d09af49d11fbbd11a9732f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09078d27a3d09af49d11fbbd11a9732f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_certs );
        tmp_iter_arg_1 = par_certs;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 117;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_pem;
            var_pem = tmp_assign_source_3;
            Py_INCREF( var_pem );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Verifier );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Verifier );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Verifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_from_string );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_pem );
        tmp_tuple_element_1 = var_pem;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_35c70eca0bfd4024df535206f5be2ada );
        frame_09078d27a3d09af49d11fbbd11a9732f->m_frame.f_lineno = 118;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_verifier;
            var_verifier = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_verifier );
        tmp_called_instance_1 = var_verifier;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_1 = par_message;
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_2 = par_signature;
        frame_09078d27a3d09af49d11fbbd11a9732f->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_verify, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 119;
            type_description_1 = "ooooo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_09078d27a3d09af49d11fbbd11a9732f->m_frame.f_lineno = 123;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_52b2a6eb99017dafc0668b73aba2a322_tuple, 0 ) );

        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 123;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09078d27a3d09af49d11fbbd11a9732f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_09078d27a3d09af49d11fbbd11a9732f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09078d27a3d09af49d11fbbd11a9732f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09078d27a3d09af49d11fbbd11a9732f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09078d27a3d09af49d11fbbd11a9732f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09078d27a3d09af49d11fbbd11a9732f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09078d27a3d09af49d11fbbd11a9732f,
        type_description_1,
        par_message,
        par_signature,
        par_certs,
        var_pem,
        var_verifier
    );


    // Release cached frame.
    if ( frame_09078d27a3d09af49d11fbbd11a9732f == cache_frame_09078d27a3d09af49d11fbbd11a9732f )
    {
        Py_DECREF( frame_09078d27a3d09af49d11fbbd11a9732f );
    }
    cache_frame_09078d27a3d09af49d11fbbd11a9732f = NULL;

    assertFrameObject( frame_09078d27a3d09af49d11fbbd11a9732f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_3__verify_signature );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

    CHECK_OBJECT( (PyObject *)var_pem );
    Py_DECREF( var_pem );
    var_pem = NULL;

    CHECK_OBJECT( (PyObject *)var_verifier );
    Py_DECREF( var_verifier );
    var_verifier = NULL;

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

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

    Py_XDECREF( var_pem );
    var_pem = NULL;

    Py_XDECREF( var_verifier );
    var_verifier = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_3__verify_signature );
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


static PyObject *impl_oauth2client$crypt$$$function_4__check_audience( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_payload_dict = python_pars[ 0 ];
    PyObject *par_audience = python_pars[ 1 ];
    PyObject *var_audience_in_payload = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_633711e79173feb2759160a2380116f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_633711e79173feb2759160a2380116f1 = NULL;
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
        CHECK_OBJECT( par_audience );
        tmp_compexpr_left_1 = par_audience;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_633711e79173feb2759160a2380116f1, codeobj_633711e79173feb2759160a2380116f1, module_oauth2client$crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_633711e79173feb2759160a2380116f1 = cache_frame_633711e79173feb2759160a2380116f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_633711e79173feb2759160a2380116f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_633711e79173feb2759160a2380116f1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_payload_dict );
        tmp_called_instance_1 = par_payload_dict;
        frame_633711e79173feb2759160a2380116f1->m_frame.f_lineno = 145;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_aud_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_audience_in_payload == NULL );
        var_audience_in_payload = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_audience_in_payload );
        tmp_compexpr_left_2 = var_audience_in_payload;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 147;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_called_instance_2 = const_str_digest_ab7011be2d4a07d05f61001c7a910782;
            CHECK_OBJECT( par_payload_dict );
            tmp_args_element_name_2 = par_payload_dict;
            frame_633711e79173feb2759160a2380116f1->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_633711e79173feb2759160a2380116f1->m_frame.f_lineno = 147;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 147;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_audience_in_payload );
        tmp_compexpr_left_3 = var_audience_in_payload;
        CHECK_OBJECT( par_audience );
        tmp_compexpr_right_3 = par_audience;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooo";
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
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 150;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            tmp_called_instance_3 = const_str_digest_9aded86785dc9d40fe8e7dcade6670f5;
            CHECK_OBJECT( var_audience_in_payload );
            tmp_args_element_name_4 = var_audience_in_payload;
            CHECK_OBJECT( par_audience );
            tmp_args_element_name_5 = par_audience;
            CHECK_OBJECT( par_payload_dict );
            tmp_args_element_name_6 = par_payload_dict;
            frame_633711e79173feb2759160a2380116f1->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_633711e79173feb2759160a2380116f1->m_frame.f_lineno = 150;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 150;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_633711e79173feb2759160a2380116f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_633711e79173feb2759160a2380116f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_633711e79173feb2759160a2380116f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_633711e79173feb2759160a2380116f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_633711e79173feb2759160a2380116f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_633711e79173feb2759160a2380116f1,
        type_description_1,
        par_payload_dict,
        par_audience,
        var_audience_in_payload
    );


    // Release cached frame.
    if ( frame_633711e79173feb2759160a2380116f1 == cache_frame_633711e79173feb2759160a2380116f1 )
    {
        Py_DECREF( frame_633711e79173feb2759160a2380116f1 );
    }
    cache_frame_633711e79173feb2759160a2380116f1 = NULL;

    assertFrameObject( frame_633711e79173feb2759160a2380116f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_4__check_audience );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_payload_dict );
    Py_DECREF( par_payload_dict );
    par_payload_dict = NULL;

    CHECK_OBJECT( (PyObject *)par_audience );
    Py_DECREF( par_audience );
    par_audience = NULL;

    Py_XDECREF( var_audience_in_payload );
    var_audience_in_payload = NULL;

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

    CHECK_OBJECT( (PyObject *)par_payload_dict );
    Py_DECREF( par_payload_dict );
    par_payload_dict = NULL;

    CHECK_OBJECT( (PyObject *)par_audience );
    Py_DECREF( par_audience );
    par_audience = NULL;

    Py_XDECREF( var_audience_in_payload );
    var_audience_in_payload = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_4__check_audience );
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


static PyObject *impl_oauth2client$crypt$$$function_5__verify_time_range( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_payload_dict = python_pars[ 0 ];
    PyObject *var_now = NULL;
    PyObject *var_issued_at = NULL;
    PyObject *var_expiration = NULL;
    PyObject *var_earliest = NULL;
    PyObject *var_latest = NULL;
    struct Nuitka_FrameObject *frame_e52190f98fab99e6b003534af713eb10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e52190f98fab99e6b003534af713eb10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e52190f98fab99e6b003534af713eb10, codeobj_e52190f98fab99e6b003534af713eb10, module_oauth2client$crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e52190f98fab99e6b003534af713eb10 = cache_frame_e52190f98fab99e6b003534af713eb10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e52190f98fab99e6b003534af713eb10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e52190f98fab99e6b003534af713eb10 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 178;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_now == NULL );
        var_now = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_payload_dict );
        tmp_called_instance_2 = par_payload_dict;
        frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 181;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_iat_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_issued_at == NULL );
        var_issued_at = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_issued_at );
        tmp_compexpr_left_1 = var_issued_at;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_called_instance_3 = const_str_digest_a385a71c2482321b52a3e8012bb9f6aa;
            CHECK_OBJECT( par_payload_dict );
            tmp_args_element_name_2 = par_payload_dict;
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 183;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( par_payload_dict );
        tmp_called_instance_4 = par_payload_dict;
        frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 185;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_exp_tuple, 0 ) );

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_expiration == NULL );
        var_expiration = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_expiration );
        tmp_compexpr_left_2 = var_expiration;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 187;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            tmp_called_instance_5 = const_str_digest_1ae747902c7371a153e01d4b712e26d8;
            CHECK_OBJECT( par_payload_dict );
            tmp_args_element_name_4 = par_payload_dict;
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 187;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( var_expiration );
        tmp_compexpr_left_3 = var_expiration;
        CHECK_OBJECT( var_now );
        tmp_left_name_1 = var_now;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_MAX_TOKEN_LIFETIME_SECS );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_TOKEN_LIFETIME_SECS );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_TOKEN_LIFETIME_SECS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 191;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_4;
        tmp_compexpr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 192;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            tmp_called_instance_6 = const_str_digest_3b8ef7eede1ce6303b7d4c94b0db3359;
            CHECK_OBJECT( par_payload_dict );
            tmp_args_element_name_6 = par_payload_dict;
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 193;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 192;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 192;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 192;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( var_issued_at );
        tmp_left_name_2 = var_issued_at;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CLOCK_SKEW_SECS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = tmp_mvar_value_6;
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_earliest == NULL );
        var_earliest = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_now );
        tmp_compexpr_left_4 = var_now;
        CHECK_OBJECT( var_earliest );
        tmp_compexpr_right_4 = var_earliest;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            tmp_called_instance_7 = const_str_digest_b532ccbde8b697be5716b1d7d4080035;
            CHECK_OBJECT( var_now );
            tmp_args_element_name_8 = var_now;
            CHECK_OBJECT( var_earliest );
            tmp_args_element_name_9 = var_earliest;
            CHECK_OBJECT( par_payload_dict );
            tmp_args_element_name_10 = par_payload_dict;
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 198;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_7, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 198;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_raise_type_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_4;
            exception_lineno = 198;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_mvar_value_8;
        CHECK_OBJECT( var_expiration );
        tmp_left_name_3 = var_expiration;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CLOCK_SKEW_SECS" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = tmp_mvar_value_8;
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_latest == NULL );
        var_latest = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_now );
        tmp_compexpr_left_5 = var_now;
        CHECK_OBJECT( var_latest );
        tmp_compexpr_right_5 = var_latest;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 203;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_9;
            tmp_called_instance_8 = const_str_digest_8e31755efb9218b3ad1b82e15e2f79da;
            CHECK_OBJECT( var_now );
            tmp_args_element_name_12 = var_now;
            CHECK_OBJECT( var_latest );
            tmp_args_element_name_13 = var_latest;
            CHECK_OBJECT( par_payload_dict );
            tmp_args_element_name_14 = par_payload_dict;
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_8, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_e52190f98fab99e6b003534af713eb10->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_raise_type_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_5;
            exception_lineno = 203;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e52190f98fab99e6b003534af713eb10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e52190f98fab99e6b003534af713eb10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e52190f98fab99e6b003534af713eb10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e52190f98fab99e6b003534af713eb10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e52190f98fab99e6b003534af713eb10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e52190f98fab99e6b003534af713eb10,
        type_description_1,
        par_payload_dict,
        var_now,
        var_issued_at,
        var_expiration,
        var_earliest,
        var_latest
    );


    // Release cached frame.
    if ( frame_e52190f98fab99e6b003534af713eb10 == cache_frame_e52190f98fab99e6b003534af713eb10 )
    {
        Py_DECREF( frame_e52190f98fab99e6b003534af713eb10 );
    }
    cache_frame_e52190f98fab99e6b003534af713eb10 = NULL;

    assertFrameObject( frame_e52190f98fab99e6b003534af713eb10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_5__verify_time_range );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_payload_dict );
    Py_DECREF( par_payload_dict );
    par_payload_dict = NULL;

    CHECK_OBJECT( (PyObject *)var_now );
    Py_DECREF( var_now );
    var_now = NULL;

    CHECK_OBJECT( (PyObject *)var_issued_at );
    Py_DECREF( var_issued_at );
    var_issued_at = NULL;

    CHECK_OBJECT( (PyObject *)var_expiration );
    Py_DECREF( var_expiration );
    var_expiration = NULL;

    CHECK_OBJECT( (PyObject *)var_earliest );
    Py_DECREF( var_earliest );
    var_earliest = NULL;

    CHECK_OBJECT( (PyObject *)var_latest );
    Py_DECREF( var_latest );
    var_latest = NULL;

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

    CHECK_OBJECT( (PyObject *)par_payload_dict );
    Py_DECREF( par_payload_dict );
    par_payload_dict = NULL;

    Py_XDECREF( var_now );
    var_now = NULL;

    Py_XDECREF( var_issued_at );
    var_issued_at = NULL;

    Py_XDECREF( var_expiration );
    var_expiration = NULL;

    Py_XDECREF( var_earliest );
    var_earliest = NULL;

    Py_XDECREF( var_latest );
    var_latest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_5__verify_time_range );
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


static PyObject *impl_oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jwt = python_pars[ 0 ];
    PyObject *par_certs = python_pars[ 1 ];
    PyObject *par_audience = python_pars[ 2 ];
    PyObject *var_header = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_signature = NULL;
    PyObject *var_message_to_sign = NULL;
    PyObject *var_payload_bytes = NULL;
    PyObject *var_payload_dict = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e32720ed3c14c644e5ee05610cf5540a;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e32720ed3c14c644e5ee05610cf5540a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e32720ed3c14c644e5ee05610cf5540a, codeobj_e32720ed3c14c644e5ee05610cf5540a, module_oauth2client$crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e32720ed3c14c644e5ee05610cf5540a = cache_frame_e32720ed3c14c644e5ee05610cf5540a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e32720ed3c14c644e5ee05610cf5540a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e32720ed3c14c644e5ee05610cf5540a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 224;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_jwt );
        tmp_args_element_name_1 = par_jwt;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__to_bytes, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_jwt;
            assert( old != NULL );
            par_jwt = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_jwt );
        tmp_called_instance_2 = par_jwt;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 226;
        tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_bytes_chr_46_tuple, 0 ) );

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 227;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_called_instance_3 = const_str_digest_ef7d825d98bd52772abe259f27d9eff2;
            CHECK_OBJECT( par_jwt );
            tmp_args_element_name_3 = par_jwt;
            frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_format, call_args );
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 227;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 227;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( par_jwt );
        tmp_called_instance_4 = par_jwt;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 230;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_bytes_chr_46_tuple, 0 ) );

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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
            exception_lineno = 230;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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
            exception_lineno = 230;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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
            exception_lineno = 230;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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
                    exception_lineno = 230;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 230;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_header == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_header = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_payload == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_payload = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert( var_signature == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_signature = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_header );
        tmp_left_name_2 = var_header;
        tmp_right_name_1 = const_bytes_chr_46;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_BYTES( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_payload );
        tmp_right_name_2 = var_payload;
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_message_to_sign == NULL );
        var_message_to_sign = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_3;
        CHECK_OBJECT( var_signature );
        tmp_args_element_name_4 = var_signature;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__urlsafe_b64decode, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_signature;
            assert( old != NULL );
            var_signature = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_4;
        CHECK_OBJECT( var_payload );
        tmp_args_element_name_5 = var_payload;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain__urlsafe_b64decode, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_payload_bytes == NULL );
        var_payload_bytes = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_json );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_json );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "json" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_1 = tmp_mvar_value_5;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_loads );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_7 = tmp_mvar_value_6;
        CHECK_OBJECT( var_payload_bytes );
        tmp_args_element_name_7 = var_payload_bytes;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain__from_bytes, call_args );
        }

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( var_payload_dict == NULL );
        var_payload_dict = tmp_assign_source_12;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_e32720ed3c14c644e5ee05610cf5540a, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_e32720ed3c14c644e5ee05610cf5540a, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AppIdentityError );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AppIdentityError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 239;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_3 = tmp_mvar_value_7;
        tmp_called_instance_8 = const_str_digest_2f91c377ba8fe54e0075d8b9eabd767c;
        CHECK_OBJECT( var_payload_bytes );
        tmp_args_element_name_9 = var_payload_bytes;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_format, call_args );
        }

        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_raise_type_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 239;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_instance_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_signature );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_signature );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_verify_signature" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_8;
        CHECK_OBJECT( var_message_to_sign );
        tmp_args_element_name_10 = var_message_to_sign;
        CHECK_OBJECT( var_signature );
        tmp_args_element_name_11 = var_signature;
        CHECK_OBJECT( par_certs );
        tmp_called_instance_9 = par_certs;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 242;
        tmp_args_element_name_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_values );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_time_range );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_time_range );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_verify_time_range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 245;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_9;
        CHECK_OBJECT( var_payload_dict );
        tmp_args_element_name_13 = var_payload_dict;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__check_audience );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_audience );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_audience" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_10;
        CHECK_OBJECT( var_payload_dict );
        tmp_args_element_name_14 = var_payload_dict;
        CHECK_OBJECT( par_audience );
        tmp_args_element_name_15 = par_audience;
        frame_e32720ed3c14c644e5ee05610cf5540a->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e32720ed3c14c644e5ee05610cf5540a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e32720ed3c14c644e5ee05610cf5540a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e32720ed3c14c644e5ee05610cf5540a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e32720ed3c14c644e5ee05610cf5540a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e32720ed3c14c644e5ee05610cf5540a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e32720ed3c14c644e5ee05610cf5540a,
        type_description_1,
        par_jwt,
        par_certs,
        par_audience,
        var_header,
        var_payload,
        var_signature,
        var_message_to_sign,
        var_payload_bytes,
        var_payload_dict
    );


    // Release cached frame.
    if ( frame_e32720ed3c14c644e5ee05610cf5540a == cache_frame_e32720ed3c14c644e5ee05610cf5540a )
    {
        Py_DECREF( frame_e32720ed3c14c644e5ee05610cf5540a );
    }
    cache_frame_e32720ed3c14c644e5ee05610cf5540a = NULL;

    assertFrameObject( frame_e32720ed3c14c644e5ee05610cf5540a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_payload_dict );
    tmp_return_value = var_payload_dict;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_jwt );
    Py_DECREF( par_jwt );
    par_jwt = NULL;

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_audience );
    Py_DECREF( par_audience );
    par_audience = NULL;

    CHECK_OBJECT( (PyObject *)var_header );
    Py_DECREF( var_header );
    var_header = NULL;

    CHECK_OBJECT( (PyObject *)var_payload );
    Py_DECREF( var_payload );
    var_payload = NULL;

    CHECK_OBJECT( (PyObject *)var_signature );
    Py_DECREF( var_signature );
    var_signature = NULL;

    CHECK_OBJECT( (PyObject *)var_message_to_sign );
    Py_DECREF( var_message_to_sign );
    var_message_to_sign = NULL;

    CHECK_OBJECT( (PyObject *)var_payload_bytes );
    Py_DECREF( var_payload_bytes );
    var_payload_bytes = NULL;

    CHECK_OBJECT( (PyObject *)var_payload_dict );
    Py_DECREF( var_payload_dict );
    var_payload_dict = NULL;

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

    CHECK_OBJECT( (PyObject *)par_jwt );
    Py_DECREF( par_jwt );
    par_jwt = NULL;

    CHECK_OBJECT( (PyObject *)par_certs );
    Py_DECREF( par_certs );
    par_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_audience );
    Py_DECREF( par_audience );
    par_audience = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_payload );
    var_payload = NULL;

    Py_XDECREF( var_signature );
    var_signature = NULL;

    Py_XDECREF( var_message_to_sign );
    var_message_to_sign = NULL;

    Py_XDECREF( var_payload_bytes );
    var_payload_bytes = NULL;

    Py_XDECREF( var_payload_dict );
    var_payload_dict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs );
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



static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_1__bad_pkcs12_key_as_pem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$crypt$$$function_1__bad_pkcs12_key_as_pem,
        const_str_plain__bad_pkcs12_key_as_pem,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c4202743ffde766b4df3a9b9e143b90d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$crypt,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_2_make_signed_jwt( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$crypt$$$function_2_make_signed_jwt,
        const_str_plain_make_signed_jwt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f1e5c6bd92af8f1eb6f4966780ff2d25,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$crypt,
        const_str_digest_efe3e5eccd094c863090bf8a808da390,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_3__verify_signature(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$crypt$$$function_3__verify_signature,
        const_str_plain__verify_signature,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_09078d27a3d09af49d11fbbd11a9732f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$crypt,
        const_str_digest_9cefa5f189828dccaf7a7cb600fa5d90,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_4__check_audience(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$crypt$$$function_4__check_audience,
        const_str_plain__check_audience,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_633711e79173feb2759160a2380116f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$crypt,
        const_str_digest_bbc6ec5179fb962cb832f43e3a5d6a12,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_5__verify_time_range(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$crypt$$$function_5__verify_time_range,
        const_str_plain__verify_time_range,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e52190f98fab99e6b003534af713eb10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$crypt,
        const_str_digest_c5d37d72671b97cf459ade35d2436684,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs,
        const_str_plain_verify_signed_jwt_with_certs,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e32720ed3c14c644e5ee05610cf5540a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$crypt,
        const_str_digest_116842ee94d1903f3e2a0b87009d840c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$crypt =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client.crypt",
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
MOD_ENTRY_DECL(oauth2client$crypt)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(oauth2client$crypt)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$crypt );
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
    puts("oauth2client.crypt: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client.crypt: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client.crypt: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauth2client$crypt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$crypt = Py_InitModule4(
        "oauth2client.crypt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_oauth2client$crypt = PyModule_Create( &mdef_oauth2client$crypt );
#endif

    moduledict_oauth2client$crypt = MODULE_DICT( module_oauth2client$crypt );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_oauth2client$crypt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_oauth2client$crypt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_oauth2client$crypt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d5f3c974ef79683c2b4f59a75c68172d, module_oauth2client$crypt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_c4516771f1040eb107ad8b4491f3b2fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_oauth2client$crypt_36 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_a270a7128d569f4c7d92760a9151467a;
        UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_0d5775c0ac8018309414e22d4549b50b;
        UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c4516771f1040eb107ad8b4491f3b2fa = MAKE_MODULE_FRAME( codeobj_c4516771f1040eb107ad8b4491f3b2fa, module_oauth2client$crypt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c4516771f1040eb107ad8b4491f3b2fa );
    assert( Py_REFCNT( frame_c4516771f1040eb107ad8b4491f3b2fa ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_0d5775c0ac8018309414e22d4549b50b;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_json;
        tmp_globals_name_1 = (PyObject *)moduledict_oauth2client$crypt;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 18;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_oauth2client$crypt;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 19;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_time;
        tmp_globals_name_3 = (PyObject *)moduledict_oauth2client$crypt;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 20;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_oauth2client;
        tmp_globals_name_4 = (PyObject *)moduledict_oauth2client$crypt;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain__helpers_tuple;
        tmp_level_name_4 = const_int_0;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__helpers );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__helpers, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_oauth2client;
        tmp_globals_name_5 = (PyObject *)moduledict_oauth2client$crypt;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain__pure_python_crypt_tuple;
        tmp_level_name_5 = const_int_0;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 23;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__pure_python_crypt );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__pure_python_crypt, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__pure_python_crypt );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pure_python_crypt );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_RsaSigner );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_RsaSigner, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__pure_python_crypt );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pure_python_crypt );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pure_python_crypt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_RsaVerifier );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_RsaVerifier, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_300;
        UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_CLOCK_SKEW_SECS, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_pos_300;
        UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AUTH_TOKEN_LIFETIME_SECS, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_86400;
        UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_MAX_TOKEN_LIFETIME_SECS, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 33;
        tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_d5f3c974ef79683c2b4f59a75c68172d_tuple, 0 ) );

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_14 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_15 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 36;

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


            exception_lineno = 36;

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


            exception_lineno = 36;

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


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

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
        tmp_assign_source_17 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
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


            exception_lineno = 36;

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


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_3 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_4 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_AppIdentityError;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 36;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_18;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_5 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

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
                PyObject *tmp_source_name_6;
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


                    exception_lineno = 36;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_6 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_6 == NULL) );
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_6 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 36;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 36;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 36;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_19;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauth2client$crypt_36 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_d5f3c974ef79683c2b4f59a75c68172d;
        tmp_res = PyObject_SetItem( locals_oauth2client$crypt_36, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_34910bef1cb907390a544f794f652d0c;
        tmp_res = PyObject_SetItem( locals_oauth2client$crypt_36, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_AppIdentityError;
        tmp_res = PyObject_SetItem( locals_oauth2client$crypt_36, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_3;
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


                exception_lineno = 36;

                goto try_except_handler_3;
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
            tmp_res = PyObject_SetItem( locals_oauth2client$crypt_36, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_AppIdentityError;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_oauth2client$crypt_36;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 36;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_20 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_oauth2client$crypt_36 );
        locals_oauth2client$crypt_36 = NULL;
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

        Py_DECREF( locals_oauth2client$crypt_36 );
        locals_oauth2client$crypt_36 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$crypt );
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
        NUITKA_CANNOT_GET_HERE( oauth2client$crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 36;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_AppIdentityError, tmp_assign_source_20 );
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

    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_oauth2client$crypt$$$function_1__bad_pkcs12_key_as_pem(  );



        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__bad_pkcs12_key_as_pem, tmp_assign_source_22 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_oauth2client;
        tmp_globals_name_6 = (PyObject *)moduledict_oauth2client$crypt;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__openssl_crypt_tuple;
        tmp_level_name_6 = const_int_0;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 45;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto try_except_handler_4;
        }
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain__openssl_crypt );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__openssl_crypt, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__openssl_crypt );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_crypt );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_source_name_7 = tmp_mvar_value_6;
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_OpenSSLSigner );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__openssl_crypt );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_crypt );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_openssl_crypt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;

            goto try_except_handler_4;
        }

        tmp_source_name_8 = tmp_mvar_value_7;
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_OpenSSLVerifier );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__openssl_crypt );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_crypt );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_openssl_crypt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto try_except_handler_4;
        }

        tmp_source_name_9 = tmp_mvar_value_8;
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_pkcs12_key_as_pem );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_pkcs12_key_as_pem, tmp_assign_source_26 );
    }
    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_c4516771f1040eb107ad8b4491f3b2fa, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_c4516771f1040eb107ad8b4491f3b2fa, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = Py_None;
            UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier, tmp_assign_source_27 );
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = Py_None;
            UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner, tmp_assign_source_28 );
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__bad_pkcs12_key_as_pem );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bad_pkcs12_key_as_pem );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_bad_pkcs12_key_as_pem" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;

                goto try_except_handler_5;
            }

            tmp_assign_source_29 = tmp_mvar_value_9;
            UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_pkcs12_key_as_pem, tmp_assign_source_29 );
        }
        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 44;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame) frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_5;
        branch_end_5:;
    }
    goto try_end_3;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_oauth2client;
        tmp_globals_name_7 = (PyObject *)moduledict_oauth2client$crypt;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain__pycrypto_crypt_tuple;
        tmp_level_name_7 = const_int_0;
        frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = 55;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_6;
        }
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__pycrypto_crypt );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__pycrypto_crypt, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__pycrypto_crypt );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pycrypto_crypt );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_source_name_10 = tmp_mvar_value_10;
        tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_PyCryptoSigner );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__pycrypto_crypt );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pycrypto_crypt );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_pycrypto_crypt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;

            goto try_except_handler_6;
        }

        tmp_source_name_11 = tmp_mvar_value_11;
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_PyCryptoVerifier );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier, tmp_assign_source_32 );
    }
    goto try_end_4;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_c4516771f1040eb107ad8b4491f3b2fa, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_c4516771f1040eb107ad8b4491f3b2fa, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_7;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = Py_None;
            UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier, tmp_assign_source_33 );
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = Py_None;
            UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner, tmp_assign_source_34 );
        }
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 54;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame) frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_7;
        branch_end_6:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$crypt );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_mvar_value_12;
        int tmp_truth_name_2;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSLSigner" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_mvar_value_12 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSLSigner" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 64;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_35 = tmp_mvar_value_13;
            UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Signer, tmp_assign_source_35 );
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSLVerifier" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 65;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_36 = tmp_mvar_value_14;
            UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Verifier, tmp_assign_source_36 );
        }
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_mvar_value_15;
            int tmp_truth_name_3;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCryptoSigner" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 66;

                goto frame_exception_exit_1;
            }

            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_mvar_value_15 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_10 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_mvar_value_16;
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCryptoSigner" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 67;

                    goto frame_exception_exit_1;
                }

                tmp_assign_source_37 = tmp_mvar_value_16;
                UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Signer, tmp_assign_source_37 );
            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_mvar_value_17;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier );
                }

                if ( tmp_mvar_value_17 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCryptoVerifier" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 68;

                    goto frame_exception_exit_1;
                }

                tmp_assign_source_38 = tmp_mvar_value_17;
                UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Verifier, tmp_assign_source_38 );
            }
            goto branch_end_8;
            branch_no_8:;
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_mvar_value_18;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_RsaSigner );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RsaSigner );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RsaSigner" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 70;

                    goto frame_exception_exit_1;
                }

                tmp_assign_source_39 = tmp_mvar_value_18;
                UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Signer, tmp_assign_source_39 );
            }
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_mvar_value_19;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_RsaVerifier );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RsaVerifier );
                }

                if ( tmp_mvar_value_19 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RsaVerifier" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 71;

                    goto frame_exception_exit_1;
                }

                tmp_assign_source_40 = tmp_mvar_value_19;
                UPDATE_STRING_DICT0( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_Verifier, tmp_assign_source_40 );
            }
            branch_end_8:;
        }
        branch_end_7:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4516771f1040eb107ad8b4491f3b2fa );
#endif
    popFrameStack();

    assertFrameObject( frame_c4516771f1040eb107ad8b4491f3b2fa );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4516771f1040eb107ad8b4491f3b2fa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c4516771f1040eb107ad8b4491f3b2fa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c4516771f1040eb107ad8b4491f3b2fa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c4516771f1040eb107ad8b4491f3b2fa, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_41 = MAKE_FUNCTION_oauth2client$crypt$$$function_2_make_signed_jwt( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_make_signed_jwt, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_oauth2client$crypt$$$function_3__verify_signature(  );



        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_signature, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_oauth2client$crypt$$$function_4__check_audience(  );



        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__check_audience, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_oauth2client$crypt$$$function_5__verify_time_range(  );



        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain__verify_time_range, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_45 = MAKE_FUNCTION_oauth2client$crypt$$$function_6_verify_signed_jwt_with_certs( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_oauth2client$crypt, (Nuitka_StringObject *)const_str_plain_verify_signed_jwt_with_certs, tmp_assign_source_45 );
    }

    return MOD_RETURN_VALUE( module_oauth2client$crypt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
