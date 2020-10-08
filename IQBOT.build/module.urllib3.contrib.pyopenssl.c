/* Generated code for Python module 'urllib3.contrib.pyopenssl'
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

/* The "_module_urllib3$contrib$pyopenssl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$contrib$pyopenssl;
PyDictObject *moduledict_urllib3$contrib$pyopenssl;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_timeout_str_plain_error_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_UnsupportedExtension;
extern PyObject *const_str_plain_suppress_ragged_eofs;
static PyObject *const_tuple_str_plain_X509_tuple;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_be78399d62208a7b25aea812a1645ac7;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_commonName;
static PyObject *const_str_digest_572541d49912921fc3f520d5fbbbace7;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain_gettimeout;
static PyObject *const_str_plain_get_extension_for_class;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_IDNAError;
static PyObject *const_str_digest_ea524135603414934edfdf9a140120da;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_binary_form;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_load_verify_locations;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_Context;
static PyObject *const_str_digest_3ae5eb58682e3453bcd445e251529344;
static PyObject *const_str_plain__closed;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain_wait_for_read;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_BytesIO;
static PyObject *const_str_plain_VERIFY_NONE;
static PyObject *const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple;
extern PyObject *const_str_plain_settimeout;
static PyObject *const_tuple_str_digest_f16ebd80f485bce26a5c8a0fab91362b_str_dot_tuple;
static PyObject *const_str_plain__drop;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_get_values_for_type;
static PyObject *const_str_plain_set_tlsext_host_name;
static PyObject *const_str_digest_f16ebd80f485bce26a5c8a0fab91362b;
static PyObject *const_str_digest_5818b30a83a023d23de94fdb8555bc21;
static PyObject *const_str_plain_SSL_WRITE_BLOCKSIZE;
static PyObject *const_str_digest_2f7e5e6bd20de78d1a826b224bb68950;
static PyObject *const_str_digest_e5467f76d8c624a1dc2eb95b9944b986;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_int_0;
static PyObject *const_str_plain_set_verify;
static PyObject *const_str_plain_X509;
static PyObject *const_str_digest_fcee667ed9294484931a59a6be1401a4;
static PyObject *const_str_digest_ea149be6088931c3910923696f83d36a;
static PyObject *const_str_digest_2b6a6c0099f1f1dd77d2725acd0722df;
extern PyObject *const_str_plain_recv;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_e69704a3b57bdbeeda0fb8ad90040f41;
static PyObject *const_str_plain_set_connect_state;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_PROTOCOL_TLSv1;
static PyObject *const_str_plain_extract_from_urllib3;
static PyObject *const_str_plain_cnx;
extern PyObject *const_str_plain_max_length;
extern PyObject *const_str_plain_password;
static PyObject *const_str_plain__send_until_done;
extern PyObject *const_str_plain_wrap_socket;
extern PyObject *const_str_plain_cafile;
static PyObject *const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_backend;
static PyObject *const_str_digest_54341b24d6b09584d9640d3dd2a360ff;
extern PyObject *const_str_plain_getpeercert;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_071e6215d1e4e670779a10c8173678ae;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_bufsize;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_PROTOCOL_TLSv1_1;
extern PyObject *const_str_plain_inject_into_urllib3;
static PyObject *const_str_digest_afa22ab599702ad524e6d8b060fa5658;
static PyObject *const_str_digest_8a27e0e8026a3feed39d29711dd67238;
static PyObject *const_str_digest_ca64980ab25a7902ff8128128fe6cfe2;
extern PyObject *const_str_plain_property;
extern PyObject *const_tuple_str_plain_self_str_plain_timeout_tuple;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple;
static PyObject *const_str_digest_33c018117b9b7eb17081ee25bae37674;
static PyObject *const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
static PyObject *const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple;
extern PyObject *const_tuple_int_pos_3_int_0_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_setter;
static PyObject *const_str_plain_ExtensionNotFound;
static PyObject *const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list;
extern PyObject *const_str_plain_Extensions;
static PyObject *const_str_plain_RECEIVED_SHUTDOWN;
static PyObject *const_str_plain_use_privatekey_file;
static PyObject *const_tuple_str_plain_name_str_plain_idna_str_plain_prefix_tuple;
static PyObject *const_dict_e24f4d9d6e3eb6f736872abe66cd35c1;
extern PyObject *const_str_plain_ssl_;
static PyObject *const_tuple_str_plain_backport_makefile_tuple;
extern PyObject *const_str_plain_ciphers;
extern PyObject *const_str_plain_names;
static PyObject *const_str_digest_2ff175dae94b767efe83d915c1b97f5f;
static PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_plain__fileobject;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_x509;
static PyObject *const_str_plain_set_options;
static PyObject *const_str_plain__stdlib_to_openssl_verify;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_x509_tuple;
static PyObject *const_str_digest_9dcb336ca353f810aa0d31921e9fdfb0;
static PyObject *const_str_plain_set_passwd_cb;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_VERIFY_FAIL_IF_NO_PEER_CERT;
static PyObject *const_str_digest_594453327b8729538381766512c9452b;
static PyObject *const_str_plain_TLSv1_2_METHOD;
static PyObject *const_str_plain_PyOpenSSLContext;
extern PyObject *const_str_plain_DNS;
extern PyObject *const_str_plain_e;
static PyObject *const_str_digest_abba734a6a1803f203aec1a806eaf7ae;
extern PyObject *const_str_plain_crypto;
extern PyObject *const_str_plain_OpenSSL;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
static PyObject *const_str_plain__ctx;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_dump_certificate;
static PyObject *const_str_plain__Certificate;
static PyObject *const_str_plain_err_depth;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_str_plain_Extensions_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_SSLv3_METHOD;
extern PyObject *const_str_plain_capath;
static PyObject *const_str_plain_SysCallError;
static PyObject *const_str_digest_9b140d54e682de757186c632bf3beb69;
static PyObject *const_str_digest_41dbd4a0c394791e01054bb237449a0d;
static PyObject *const_str_digest_fdf2dae424c2ab29e28d95112eab1065;
extern PyObject *const_str_plain_server_hostname;
extern PyObject *const_str_plain_subject;
static PyObject *const_str_plain_do_handshake;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_VERIFY_PEER;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_log;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_name_tuple;
extern PyObject *const_str_plain_warning;
static PyObject *const_str_plain_set_cipher_list;
static PyObject *const_str_plain_userdata;
static PyObject *const_str_plain_use_certificate_chain_file;
extern PyObject *const_int_pos_16384;
extern PyObject *const_str_plain__options;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain_v;
static PyObject *const_str_plain_total_sent;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_socket;
static PyObject *const_str_plain_PROTOCOL_TLSv1_2;
static PyObject *const_str_plain_SSL;
static PyObject *const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_0ed7cab482b4eed6799e2697fa4599f9;
static PyObject *const_str_digest_22ce283067899ce16a8ff927ff2a141c;
static PyObject *const_tuple_str_plain_UnsupportedExtension_tuple;
static PyObject *const_str_plain_IPAddress;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_check_hostname;
static PyObject *const_str_digest_fa91b370bf4aa8601b20ad022c04c7f5;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_584b1f1a72cb12d2c289fc29d118df4a;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_00536486d83401fa82a08b0e79354846;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_str_plain__Certificate_tuple;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_str_plain__verify_callback;
extern PyObject *const_str_plain_load_cert_chain;
static PyObject *const_str_plain_PROTOCOL_SSLv3;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_plain_FILETYPE_ASN1;
static PyObject *const_str_digest_20c12b8a448bbfc5cd8c17b869421e3c;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain_Error;
static PyObject *const_str_plain_set_default_verify_paths;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_IS_PYOPENSSL;
extern PyObject *const_str_plain_server_side;
static PyObject *const_tuple_str_plain_name_str_plain_idna_encode_tuple;
static PyObject *const_str_plain_get_peer_certificate;
static PyObject *const_str_plain_to_cryptography;
extern PyObject *const_tuple_true_tuple;
static PyObject *const_str_plain_openssl_backend;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_options;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_cryptography;
static PyObject *const_str_plain_WantReadError;
static PyObject *const_str_plain_recv_into;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_str_plain_Extensions_str_plain_X509_str_plain_x509_tuple;
extern PyObject *const_str_plain_wait_for_write;
extern PyObject *const_str_plain_sent;
extern PyObject *const_str_plain_set_ciphers;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__validate_dependencies_met;
extern PyObject *const_str_plain_extensions;
static PyObject *const_tuple_str_plain__fileobject_tuple;
extern PyObject *const_tuple_str_plain_BytesIO_tuple;
static PyObject *const_str_plain_WantWriteError;
static PyObject *const_str_plain_ZeroReturnError;
static PyObject *const_str_digest_3337e517587b2ad7aa8c6fd0bb6ef6e7;
extern PyObject *const_str_plain_makefile;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_ssl;
static PyObject *const_str_plain_get_shutdown;
extern PyObject *const_str_plain_do_handshake_on_connect;
static PyObject *const_str_digest_8b472aa2b2e397bd3da940bb18c68211;
static PyObject *const_tuple_false_true_true_none_tuple;
static PyObject *const_str_plain_CN;
static PyObject *const_str_digest_d22ac54ae5c0616296ff857ea08c49cb;
static PyObject *const_str_plain_prompt_twice;
extern PyObject *const_tuple_b0c00933e83a0151953f3a00c2178204_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain_self_str_plain_protocol_tuple;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_idna;
extern PyObject *const_str_plain_text_type;
static PyObject *const_str_plain__x509;
static PyObject *const_str_plain_CERT_OPTIONAL;
extern PyObject *const_str_plain_update;
static PyObject *const_str_plain__openssl_to_stdlib_verify;
static PyObject *const_str_digest_3ff79c08d61077339220a6b991e28f93;
static PyObject *const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple;
static PyObject *const_str_plain_DuplicateExtension;
extern PyObject *const_str_plain_version_info;
static PyObject *const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple;
static PyObject *const_tuple_8746a5e1d761630cda9eea2990729203_tuple;
extern PyObject *const_str_plain_Connection;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_certfile;
static PyObject *const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_shutdown;
static PyObject *const_str_plain_SSLv23_METHOD;
static PyObject *const_str_digest_7e30f7b167f6016bf2ebb297c1892f81;
static PyObject *const_str_digest_7ac562d65cde2e151e56b218341d4cdd;
static PyObject *const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain__makefile_refs;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_HAS_SNI;
static PyObject *const_str_digest_a3fd3629b3a2374b7b38e7bf3e032130;
extern PyObject *const_str_plain_protocol;
extern PyObject *const_str_plain_items;
static PyObject *const_str_digest_da6b5f185ded68c9e526279026e68fbc;
static PyObject *const_str_plain_get_verify_mode;
static PyObject *const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple;
static PyObject *const_str_digest_5de90513b7e726b1a929b0328fda608e;
static PyObject *const_str_plain_idna_encode;
static PyObject *const_str_plain_TLSv1_1_METHOD;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple;
extern PyObject *const_str_dot;
extern PyObject *const_tuple_str_plain_backend_tuple;
extern PyObject *const_str_plain_sendall;
static PyObject *const_str_plain_return_code;
extern PyObject *const_str_plain_ext;
static PyObject *const_str_digest_ee742e011576d32d1c182b86832e4555;
static PyObject *const_str_plain_WrappedSocket;
static PyObject *const_str_plain__decref_socketios;
static PyObject *const_str_plain__openssl_versions;
static PyObject *const_str_plain_peer_cert;
static PyObject *const_str_digest_bb5bc8c3c3606f20b540789b2cae4e87;
static PyObject *const_str_digest_47af4678a28313b5af6e38cd603ce3ad;
static PyObject *const_str_plain_DNSName;
static PyObject *const_tuple_str_plain_self_str_plain_ciphers_tuple;
extern PyObject *const_str_plain_send;
static PyObject *const_str_plain_UnsupportedGeneralNameType;
static PyObject *const_str_plain_SubjectAlternativeName;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_cert;
static PyObject *const_str_digest_f5748acc7624a8d3f9bd48b7312e95e1;
static PyObject *const_str_plain_orig_util_SSLContext;
static PyObject *const_str_plain_cadata;
static PyObject *const_str_digest_c2ca9ee709c1d2285dbebbfa7f97f083;
static PyObject *const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple;
static PyObject *const_str_plain__dnsname_to_stdlib;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain_backport_makefile;
extern PyObject *const_str_plain_core;
static PyObject *const_str_plain__reuse;
static PyObject *const_tuple_str_plain_util_tuple;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_plain_get_subj_alt_name;
static PyObject *const_str_digest_b0cc3d29be4aca6ee1b850699a83d626;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_bytes_empty;
static PyObject *const_str_plain_get_subject;
extern PyObject *const_str_plain_PROTOCOL_SSLv23;
static PyObject *const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple;
static PyObject *const_str_digest_2d708b82df3c36741559ca09209c9f6c;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_6d237a1253b74549ee18fb0e488e3cf9;
static PyObject *const_tuple_629e317cdb0a0a5b930602624a4df919_tuple;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_36dfc40fd76fef32a3245e24bfe74ea9;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_str_digest_76d751ede7bd087f9346e5a615d3c397;
static PyObject *const_str_plain_orig_util_HAS_SNI;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_TLSv1_METHOD;
static PyObject *const_str_plain_err_no;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_timeout_str_plain_error_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_timeout_str_plain_error_tuple, 0, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_str_plain_timeout_str_plain_error_tuple, 1, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_str_plain_UnsupportedExtension = UNSTREAM_STRING_ASCII( &constant_bin[ 2788207 ], 20, 1 );
    const_tuple_str_plain_X509_tuple = PyTuple_New( 1 );
    const_str_plain_X509 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423503 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X509_tuple, 0, const_str_plain_X509 ); Py_INCREF( const_str_plain_X509 );
    const_str_digest_be78399d62208a7b25aea812a1645ac7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788227 ], 167, 0 );
    const_str_digest_572541d49912921fc3f520d5fbbbace7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788394 ], 34, 0 );
    const_str_plain_get_extension_for_class = UNSTREAM_STRING_ASCII( &constant_bin[ 2788428 ], 23, 1 );
    const_str_digest_ea524135603414934edfdf9a140120da = UNSTREAM_STRING_ASCII( &constant_bin[ 2788451 ], 85, 0 );
    const_str_digest_3ae5eb58682e3453bcd445e251529344 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788536 ], 20, 0 );
    const_str_plain__closed = UNSTREAM_STRING_ASCII( &constant_bin[ 2705184 ], 7, 1 );
    const_str_plain_VERIFY_NONE = UNSTREAM_STRING_ASCII( &constant_bin[ 2788556 ], 11, 1 );
    const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_str_digest_fa91b370bf4aa8601b20ad022c04c7f5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788567 ], 14, 0 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple, 1, const_str_digest_fa91b370bf4aa8601b20ad022c04c7f5 ); Py_INCREF( const_str_digest_fa91b370bf4aa8601b20ad022c04c7f5 );
    const_tuple_str_digest_f16ebd80f485bce26a5c8a0fab91362b_str_dot_tuple = PyTuple_New( 2 );
    const_str_digest_f16ebd80f485bce26a5c8a0fab91362b = UNSTREAM_STRING_ASCII( &constant_bin[ 11196 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f16ebd80f485bce26a5c8a0fab91362b_str_dot_tuple, 0, const_str_digest_f16ebd80f485bce26a5c8a0fab91362b ); Py_INCREF( const_str_digest_f16ebd80f485bce26a5c8a0fab91362b );
    PyTuple_SET_ITEM( const_tuple_str_digest_f16ebd80f485bce26a5c8a0fab91362b_str_dot_tuple, 1, const_str_dot ); Py_INCREF( const_str_dot );
    const_str_plain__drop = UNSTREAM_STRING_ASCII( &constant_bin[ 2548641 ], 5, 1 );
    const_str_plain_get_values_for_type = UNSTREAM_STRING_ASCII( &constant_bin[ 2788581 ], 19, 1 );
    const_str_plain_set_tlsext_host_name = UNSTREAM_STRING_ASCII( &constant_bin[ 2788600 ], 20, 1 );
    const_str_digest_5818b30a83a023d23de94fdb8555bc21 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788620 ], 22, 0 );
    const_str_plain_SSL_WRITE_BLOCKSIZE = UNSTREAM_STRING_ASCII( &constant_bin[ 2788642 ], 19, 1 );
    const_str_digest_2f7e5e6bd20de78d1a826b224bb68950 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788661 ], 1634, 0 );
    const_str_digest_e5467f76d8c624a1dc2eb95b9944b986 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790295 ], 28, 0 );
    const_str_plain_set_verify = UNSTREAM_STRING_ASCII( &constant_bin[ 2790323 ], 10, 1 );
    const_str_digest_fcee667ed9294484931a59a6be1401a4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790333 ], 21, 0 );
    const_str_digest_ea149be6088931c3910923696f83d36a = UNSTREAM_STRING_ASCII( &constant_bin[ 2790354 ], 23, 0 );
    const_str_digest_2b6a6c0099f1f1dd77d2725acd0722df = UNSTREAM_STRING_ASCII( &constant_bin[ 2790377 ], 41, 0 );
    const_str_digest_e69704a3b57bdbeeda0fb8ad90040f41 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790418 ], 25, 0 );
    const_str_plain_set_connect_state = UNSTREAM_STRING_ASCII( &constant_bin[ 2790443 ], 17, 1 );
    const_str_plain_PROTOCOL_TLSv1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790460 ], 14, 1 );
    const_str_plain_extract_from_urllib3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790474 ], 20, 1 );
    const_str_plain_cnx = UNSTREAM_STRING_ASCII( &constant_bin[ 2790494 ], 3, 1 );
    const_str_plain__send_until_done = UNSTREAM_STRING_ASCII( &constant_bin[ 2790497 ], 16, 1 );
    const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 1, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 2, const_str_plain_server_side ); Py_INCREF( const_str_plain_server_side );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 3, const_str_plain_do_handshake_on_connect ); Py_INCREF( const_str_plain_do_handshake_on_connect );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 4, const_str_plain_suppress_ragged_eofs ); Py_INCREF( const_str_plain_suppress_ragged_eofs );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 5, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 6, const_str_plain_cnx ); Py_INCREF( const_str_plain_cnx );
    PyTuple_SET_ITEM( const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 7, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_54341b24d6b09584d9640d3dd2a360ff = UNSTREAM_STRING_ASCII( &constant_bin[ 2790513 ], 56, 0 );
    const_str_digest_071e6215d1e4e670779a10c8173678ae = UNSTREAM_STRING_ASCII( &constant_bin[ 2790569 ], 210, 0 );
    const_str_plain_PROTOCOL_TLSv1_1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790779 ], 16, 1 );
    const_str_digest_afa22ab599702ad524e6d8b060fa5658 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790795 ], 36, 0 );
    const_str_digest_8a27e0e8026a3feed39d29711dd67238 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790831 ], 19, 0 );
    const_str_digest_ca64980ab25a7902ff8128128fe6cfe2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790850 ], 20, 0 );
    const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple = PyTuple_New( 1 );
    const_str_digest_7e30f7b167f6016bf2ebb297c1892f81 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790870 ], 28, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple, 0, const_str_digest_7e30f7b167f6016bf2ebb297c1892f81 ); Py_INCREF( const_str_digest_7e30f7b167f6016bf2ebb297c1892f81 );
    const_str_digest_33c018117b9b7eb17081ee25bae37674 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790898 ], 28, 0 );
    const_str_digest_7822abce90b4f23aa7a437cf95bbfec5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790926 ], 28, 0 );
    const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 1, const_str_plain_cafile ); Py_INCREF( const_str_plain_cafile );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 2, const_str_plain_capath ); Py_INCREF( const_str_plain_capath );
    const_str_plain_cadata = UNSTREAM_STRING_ASCII( &constant_bin[ 2790954 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 3, const_str_plain_cadata ); Py_INCREF( const_str_plain_cadata );
    const_str_plain_ExtensionNotFound = UNSTREAM_STRING_ASCII( &constant_bin[ 2790960 ], 17, 1 );
    const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list, 0, const_str_plain_inject_into_urllib3 ); Py_INCREF( const_str_plain_inject_into_urllib3 );
    PyList_SET_ITEM( const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list, 1, const_str_plain_extract_from_urllib3 ); Py_INCREF( const_str_plain_extract_from_urllib3 );
    const_str_plain_RECEIVED_SHUTDOWN = UNSTREAM_STRING_ASCII( &constant_bin[ 2790977 ], 17, 1 );
    const_str_plain_use_privatekey_file = UNSTREAM_STRING_ASCII( &constant_bin[ 2790994 ], 19, 1 );
    const_tuple_str_plain_name_str_plain_idna_str_plain_prefix_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_str_plain_prefix_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_str_plain_prefix_tuple, 1, const_str_plain_idna ); Py_INCREF( const_str_plain_idna );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_str_plain_prefix_tuple, 2, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_dict_e24f4d9d6e3eb6f736872abe66cd35c1 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_e24f4d9d6e3eb6f736872abe66cd35c1, const_str_plain_close, Py_True );
    assert( PyDict_Size( const_dict_e24f4d9d6e3eb6f736872abe66cd35c1 ) == 1 );
    const_tuple_str_plain_backport_makefile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_backport_makefile_tuple, 0, const_str_plain_backport_makefile ); Py_INCREF( const_str_plain_backport_makefile );
    const_str_digest_2ff175dae94b767efe83d915c1b97f5f = UNSTREAM_STRING_ASCII( &constant_bin[ 2791013 ], 17, 0 );
    const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain__fileobject = UNSTREAM_STRING_ASCII( &constant_bin[ 3842 ], 11, 1 );
    const_str_plain_x509 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423464 ], 4, 1 );
    const_str_plain_set_options = UNSTREAM_STRING_ASCII( &constant_bin[ 2791030 ], 11, 1 );
    const_str_plain__stdlib_to_openssl_verify = UNSTREAM_STRING_ASCII( &constant_bin[ 2791041 ], 25, 1 );
    const_tuple_str_plain_x509_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x509_tuple, 0, const_str_plain_x509 ); Py_INCREF( const_str_plain_x509 );
    const_str_digest_9dcb336ca353f810aa0d31921e9fdfb0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791066 ], 24, 0 );
    const_str_plain_set_passwd_cb = UNSTREAM_STRING_ASCII( &constant_bin[ 2791090 ], 13, 1 );
    const_str_plain_VERIFY_FAIL_IF_NO_PEER_CERT = UNSTREAM_STRING_ASCII( &constant_bin[ 2791103 ], 27, 1 );
    const_str_digest_594453327b8729538381766512c9452b = UNSTREAM_STRING_ASCII( &constant_bin[ 2791130 ], 41, 0 );
    const_str_plain_TLSv1_2_METHOD = UNSTREAM_STRING_ASCII( &constant_bin[ 2791171 ], 14, 1 );
    const_str_plain_PyOpenSSLContext = UNSTREAM_STRING_ASCII( &constant_bin[ 2790295 ], 16, 1 );
    const_str_digest_abba734a6a1803f203aec1a806eaf7ae = UNSTREAM_STRING_ASCII( &constant_bin[ 2791185 ], 32, 0 );
    const_str_plain__ctx = UNSTREAM_STRING_ASCII( &constant_bin[ 74805 ], 4, 1 );
    const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 0, const_str_plain_cnx ); Py_INCREF( const_str_plain_cnx );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 1, const_str_plain_x509 ); Py_INCREF( const_str_plain_x509 );
    const_str_plain_err_no = UNSTREAM_STRING_ASCII( &constant_bin[ 2791217 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 2, const_str_plain_err_no ); Py_INCREF( const_str_plain_err_no );
    const_str_plain_err_depth = UNSTREAM_STRING_ASCII( &constant_bin[ 2791223 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 3, const_str_plain_err_depth ); Py_INCREF( const_str_plain_err_depth );
    const_str_plain_return_code = UNSTREAM_STRING_ASCII( &constant_bin[ 2791232 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 4, const_str_plain_return_code ); Py_INCREF( const_str_plain_return_code );
    const_str_plain_dump_certificate = UNSTREAM_STRING_ASCII( &constant_bin[ 2791243 ], 16, 1 );
    const_str_plain__Certificate = UNSTREAM_STRING_ASCII( &constant_bin[ 2791259 ], 12, 1 );
    const_tuple_str_plain_Extensions_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Extensions_tuple, 0, const_str_plain_Extensions ); Py_INCREF( const_str_plain_Extensions );
    const_str_plain_SSLv3_METHOD = UNSTREAM_STRING_ASCII( &constant_bin[ 2791271 ], 12, 1 );
    const_str_plain_SysCallError = UNSTREAM_STRING_ASCII( &constant_bin[ 2791283 ], 12, 1 );
    const_str_digest_9b140d54e682de757186c632bf3beb69 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788402 ], 25, 0 );
    const_str_digest_41dbd4a0c394791e01054bb237449a0d = UNSTREAM_STRING_ASCII( &constant_bin[ 2791295 ], 19, 0 );
    const_str_digest_fdf2dae424c2ab29e28d95112eab1065 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791314 ], 50, 0 );
    const_str_plain_do_handshake = UNSTREAM_STRING_ASCII( &constant_bin[ 2791364 ], 12, 1 );
    const_str_plain_VERIFY_PEER = UNSTREAM_STRING_ASCII( &constant_bin[ 2791376 ], 11, 1 );
    const_str_plain_set_cipher_list = UNSTREAM_STRING_ASCII( &constant_bin[ 2791387 ], 15, 1 );
    const_str_plain_userdata = UNSTREAM_STRING_ASCII( &constant_bin[ 2791402 ], 8, 1 );
    const_str_plain_use_certificate_chain_file = UNSTREAM_STRING_ASCII( &constant_bin[ 2791410 ], 26, 1 );
    const_str_plain_total_sent = UNSTREAM_STRING_ASCII( &constant_bin[ 2791436 ], 10, 1 );
    const_str_plain_PROTOCOL_TLSv1_2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791446 ], 16, 1 );
    const_str_plain_SSL = UNSTREAM_STRING_ASCII( &constant_bin[ 449554 ], 3, 1 );
    const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 2, const_str_plain_bufsize ); Py_INCREF( const_str_plain_bufsize );
    const_str_digest_0ed7cab482b4eed6799e2697fa4599f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791462 ], 38, 0 );
    const_str_digest_22ce283067899ce16a8ff927ff2a141c = UNSTREAM_STRING_ASCII( &constant_bin[ 2791500 ], 16, 0 );
    const_tuple_str_plain_UnsupportedExtension_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UnsupportedExtension_tuple, 0, const_str_plain_UnsupportedExtension ); Py_INCREF( const_str_plain_UnsupportedExtension );
    const_str_plain_IPAddress = UNSTREAM_STRING_ASCII( &constant_bin[ 2791516 ], 9, 1 );
    const_str_digest_584b1f1a72cb12d2c289fc29d118df4a = UNSTREAM_STRING_ASCII( &constant_bin[ 2791525 ], 39, 0 );
    const_str_digest_00536486d83401fa82a08b0e79354846 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791564 ], 24, 0 );
    const_tuple_str_plain__Certificate_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__Certificate_tuple, 0, const_str_plain__Certificate ); Py_INCREF( const_str_plain__Certificate );
    const_str_plain__verify_callback = UNSTREAM_STRING_ASCII( &constant_bin[ 2791588 ], 16, 1 );
    const_str_plain_PROTOCOL_SSLv3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791604 ], 14, 1 );
    const_str_plain_FILETYPE_ASN1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791618 ], 13, 1 );
    const_str_digest_20c12b8a448bbfc5cd8c17b869421e3c = UNSTREAM_STRING_ASCII( &constant_bin[ 2791631 ], 123, 0 );
    const_str_plain_set_default_verify_paths = UNSTREAM_STRING_ASCII( &constant_bin[ 2791147 ], 24, 1 );
    const_tuple_str_plain_name_str_plain_idna_encode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_encode_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_idna_encode = UNSTREAM_STRING_ASCII( &constant_bin[ 2692214 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_encode_tuple, 1, const_str_plain_idna_encode ); Py_INCREF( const_str_plain_idna_encode );
    const_str_plain_get_peer_certificate = UNSTREAM_STRING_ASCII( &constant_bin[ 2791754 ], 20, 1 );
    const_str_plain_to_cryptography = UNSTREAM_STRING_ASCII( &constant_bin[ 2791774 ], 15, 1 );
    const_str_plain_openssl_backend = UNSTREAM_STRING_ASCII( &constant_bin[ 2791789 ], 15, 1 );
    const_str_plain_WantReadError = UNSTREAM_STRING_ASCII( &constant_bin[ 2791804 ], 13, 1 );
    const_str_plain_recv_into = UNSTREAM_STRING_ASCII( &constant_bin[ 2790368 ], 9, 1 );
    const_tuple_str_plain_Extensions_str_plain_X509_str_plain_x509_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Extensions_str_plain_X509_str_plain_x509_tuple, 0, const_str_plain_Extensions ); Py_INCREF( const_str_plain_Extensions );
    PyTuple_SET_ITEM( const_tuple_str_plain_Extensions_str_plain_X509_str_plain_x509_tuple, 1, const_str_plain_X509 ); Py_INCREF( const_str_plain_X509 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Extensions_str_plain_X509_str_plain_x509_tuple, 2, const_str_plain_x509 ); Py_INCREF( const_str_plain_x509 );
    const_str_plain__validate_dependencies_met = UNSTREAM_STRING_ASCII( &constant_bin[ 2791817 ], 26, 1 );
    const_tuple_str_plain__fileobject_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__fileobject_tuple, 0, const_str_plain__fileobject ); Py_INCREF( const_str_plain__fileobject );
    const_str_plain_WantWriteError = UNSTREAM_STRING_ASCII( &constant_bin[ 2791843 ], 14, 1 );
    const_str_plain_ZeroReturnError = UNSTREAM_STRING_ASCII( &constant_bin[ 2791857 ], 15, 1 );
    const_str_digest_3337e517587b2ad7aa8c6fd0bb6ef6e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2791872 ], 31, 0 );
    const_str_plain_get_shutdown = UNSTREAM_STRING_ASCII( &constant_bin[ 2791903 ], 12, 1 );
    const_str_digest_8b472aa2b2e397bd3da940bb18c68211 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790354 ], 18, 0 );
    const_tuple_false_true_true_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain_CN = UNSTREAM_STRING_ASCII( &constant_bin[ 1900 ], 2, 1 );
    const_str_digest_d22ac54ae5c0616296ff857ea08c49cb = UNSTREAM_STRING_ASCII( &constant_bin[ 2791915 ], 88, 0 );
    const_str_plain_prompt_twice = UNSTREAM_STRING_ASCII( &constant_bin[ 2792003 ], 12, 1 );
    const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain__x509 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423463 ], 5, 1 );
    const_str_plain_CERT_OPTIONAL = UNSTREAM_STRING_ASCII( &constant_bin[ 2792015 ], 13, 1 );
    const_str_plain__openssl_to_stdlib_verify = UNSTREAM_STRING_ASCII( &constant_bin[ 2792028 ], 25, 1 );
    const_str_digest_3ff79c08d61077339220a6b991e28f93 = UNSTREAM_STRING_ASCII( &constant_bin[ 2792053 ], 83, 0 );
    const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 1, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 2, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_plain_DuplicateExtension = UNSTREAM_STRING_ASCII( &constant_bin[ 2792136 ], 18, 1 );
    const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple, 0, const_str_digest_9b140d54e682de757186c632bf3beb69 ); Py_INCREF( const_str_digest_9b140d54e682de757186c632bf3beb69 );
    const_tuple_8746a5e1d761630cda9eea2990729203_tuple = PyTuple_New( 5 );
    const_str_plain_peer_cert = UNSTREAM_STRING_ASCII( &constant_bin[ 2772975 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_8746a5e1d761630cda9eea2990729203_tuple, 0, const_str_plain_peer_cert ); Py_INCREF( const_str_plain_peer_cert );
    PyTuple_SET_ITEM( const_tuple_8746a5e1d761630cda9eea2990729203_tuple, 1, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_8746a5e1d761630cda9eea2990729203_tuple, 2, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_8746a5e1d761630cda9eea2990729203_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_8746a5e1d761630cda9eea2990729203_tuple, 4, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple, 0, const_str_digest_22ce283067899ce16a8ff927ff2a141c ); Py_INCREF( const_str_digest_22ce283067899ce16a8ff927ff2a141c );
    const_str_plain_SSLv23_METHOD = UNSTREAM_STRING_ASCII( &constant_bin[ 2792154 ], 13, 1 );
    const_str_digest_7ac562d65cde2e151e56b218341d4cdd = UNSTREAM_STRING_ASCII( &constant_bin[ 2792167 ], 52, 0 );
    const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790926 ], 17, 0 );
    const_str_digest_a3fd3629b3a2374b7b38e7bf3e032130 = UNSTREAM_STRING_ASCII( &constant_bin[ 2792219 ], 30, 0 );
    const_str_digest_da6b5f185ded68c9e526279026e68fbc = UNSTREAM_STRING_ASCII( &constant_bin[ 2792249 ], 194, 0 );
    const_str_plain_get_verify_mode = UNSTREAM_STRING_ASCII( &constant_bin[ 2792443 ], 15, 1 );
    const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 0, const_str_plain_max_length ); Py_INCREF( const_str_plain_max_length );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 1, const_str_plain_prompt_twice ); Py_INCREF( const_str_plain_prompt_twice );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 2, const_str_plain_userdata ); Py_INCREF( const_str_plain_userdata );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_5de90513b7e726b1a929b0328fda608e = UNSTREAM_STRING_ASCII( &constant_bin[ 2792458 ], 22, 0 );
    const_str_plain_TLSv1_1_METHOD = UNSTREAM_STRING_ASCII( &constant_bin[ 2792480 ], 14, 1 );
    const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 2, const_str_plain_total_sent ); Py_INCREF( const_str_plain_total_sent );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 3, const_str_plain_sent ); Py_INCREF( const_str_plain_sent );
    const_str_digest_ee742e011576d32d1c182b86832e4555 = UNSTREAM_STRING_ASCII( &constant_bin[ 2790377 ], 36, 0 );
    const_str_plain_WrappedSocket = UNSTREAM_STRING_ASCII( &constant_bin[ 2788536 ], 13, 1 );
    const_str_plain__decref_socketios = UNSTREAM_STRING_ASCII( &constant_bin[ 2791886 ], 17, 1 );
    const_str_plain__openssl_versions = UNSTREAM_STRING_ASCII( &constant_bin[ 2792494 ], 17, 1 );
    const_str_digest_bb5bc8c3c3606f20b540789b2cae4e87 = UNSTREAM_STRING_ASCII( &constant_bin[ 2792511 ], 173, 0 );
    const_str_digest_47af4678a28313b5af6e38cd603ce3ad = UNSTREAM_STRING_ASCII( &constant_bin[ 2792684 ], 25, 0 );
    const_str_plain_DNSName = UNSTREAM_STRING_ASCII( &constant_bin[ 2792709 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_ciphers_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ciphers_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ciphers_tuple, 1, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    const_str_plain_UnsupportedGeneralNameType = UNSTREAM_STRING_ASCII( &constant_bin[ 2792716 ], 26, 1 );
    const_str_plain_SubjectAlternativeName = UNSTREAM_STRING_ASCII( &constant_bin[ 2792598 ], 22, 1 );
    const_str_digest_f5748acc7624a8d3f9bd48b7312e95e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2792742 ], 27, 0 );
    const_str_plain_orig_util_SSLContext = UNSTREAM_STRING_ASCII( &constant_bin[ 2792769 ], 20, 1 );
    const_str_digest_c2ca9ee709c1d2285dbebbfa7f97f083 = UNSTREAM_STRING_ASCII( &constant_bin[ 2792789 ], 55, 0 );
    const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple, 3, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain__dnsname_to_stdlib = UNSTREAM_STRING_ASCII( &constant_bin[ 2791525 ], 18, 1 );
    const_str_plain__reuse = UNSTREAM_STRING_ASCII( &constant_bin[ 2788331 ], 6, 1 );
    const_tuple_str_plain_util_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_util_tuple, 0, const_str_plain_util ); Py_INCREF( const_str_plain_util );
    const_str_plain_get_subj_alt_name = UNSTREAM_STRING_ASCII( &constant_bin[ 2790795 ], 17, 1 );
    const_str_digest_b0cc3d29be4aca6ee1b850699a83d626 = UNSTREAM_STRING_ASCII( &constant_bin[ 2792844 ], 549, 0 );
    const_str_plain_get_subject = UNSTREAM_STRING_ASCII( &constant_bin[ 2793393 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 1, const_str_plain_binary_form ); Py_INCREF( const_str_plain_binary_form );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 2, const_str_plain_x509 ); Py_INCREF( const_str_plain_x509 );
    const_str_digest_2d708b82df3c36741559ca09209c9f6c = UNSTREAM_STRING_ASCII( &constant_bin[ 2793404 ], 28, 0 );
    const_str_digest_6d237a1253b74549ee18fb0e488e3cf9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423675 ], 14, 0 );
    const_tuple_629e317cdb0a0a5b930602624a4df919_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 1, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 2, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 3, const_str_plain_suppress_ragged_eofs ); Py_INCREF( const_str_plain_suppress_ragged_eofs );
    const_str_digest_36dfc40fd76fef32a3245e24bfe74ea9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2793432 ], 11, 0 );
    const_str_plain_orig_util_HAS_SNI = UNSTREAM_STRING_ASCII( &constant_bin[ 2793443 ], 17, 1 );
    const_str_plain_TLSv1_METHOD = UNSTREAM_STRING_ASCII( &constant_bin[ 2793460 ], 12, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$contrib$pyopenssl( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8b073afd8babfdd4abb04a8eb17e28ae;
static PyCodeObject *codeobj_1bedad7b91f0678c713a135e7f823dbf;
static PyCodeObject *codeobj_be496bdd129e370b14254a72f181de5a;
static PyCodeObject *codeobj_2cdeeddac22748a39e2ce22d9256468a;
static PyCodeObject *codeobj_c9d941dfe9c7d6be98931baf7cec4803;
static PyCodeObject *codeobj_bccdf894522a0a7d1094f23127224044;
static PyCodeObject *codeobj_2c7c8d5e74896da0a7e99eea9ca5e223;
static PyCodeObject *codeobj_6616a5ba9e91599e644dc9bd11fd7a89;
static PyCodeObject *codeobj_74d7f224a6c7edbc95cf68acf5f60710;
static PyCodeObject *codeobj_08e72eaeaee907b730ffeb4bdb21507e;
static PyCodeObject *codeobj_069d45263570ab6a9467dc4444e19005;
static PyCodeObject *codeobj_a54f033d67d96dc844ca091cdfa3f6f8;
static PyCodeObject *codeobj_9bbe48c613271b80c930fe8c6f23d517;
static PyCodeObject *codeobj_5d8c421dead0e17505da0c5b425d090b;
static PyCodeObject *codeobj_a0481c6a2ecd1f0a63bf775034ad27a4;
static PyCodeObject *codeobj_37fc30292c28d60eac680261801a8ccf;
static PyCodeObject *codeobj_e95b329e74e6109135372ac516f829df;
static PyCodeObject *codeobj_dd35cc3ed9d16dbef18463d1f9f9ce1c;
static PyCodeObject *codeobj_bd803ed3d0842e24b253c889b4ac06a2;
static PyCodeObject *codeobj_3af905b6d38730600a910e1c08fd28cf;
static PyCodeObject *codeobj_3ec8316db7de6614080bc5a5cc13c50b;
static PyCodeObject *codeobj_8ce5536ee9a07b8faf62511e8892e565;
static PyCodeObject *codeobj_12aac1d4dbdc9de69bb3ebe79767f75f;
static PyCodeObject *codeobj_12ccbd80afbd6523b4a96764284b6c96;
static PyCodeObject *codeobj_f46ed31e09d2b50291cec9d86d1295b0;
static PyCodeObject *codeobj_bab604f77234b61f2aacccab9af9f820;
static PyCodeObject *codeobj_9370076f231f8f4d8a812bab54fec5db;
static PyCodeObject *codeobj_2821a9f85dbf29b09ca836df1562e115;
static PyCodeObject *codeobj_714d81f0a959aaaf0ea74d8b12eeb647;
static PyCodeObject *codeobj_af8e88885c2ca8ed8d2a189cc5613080;
static PyCodeObject *codeobj_fa2c2ee91e2a42637be105db19b53be4;
static PyCodeObject *codeobj_81954b9372ce54f70c49a111ad41bfe2;
static PyCodeObject *codeobj_aaa7e727fd37b30c4eee85ad1c7b31d6;
static PyCodeObject *codeobj_3da690d71aa4383ec641eb09fb54048d;
static PyCodeObject *codeobj_d6b46aa887d4bbb86feb6d6be7d655c5;
static PyCodeObject *codeobj_2a6cf001336c8b74b307023d13de0777;
static PyCodeObject *codeobj_bd6f972d9b334f68825ad3c89076327c;
static PyCodeObject *codeobj_23b7ac1ccc5100548a9274eb1c8bc3d8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_54341b24d6b09584d9640d3dd2a360ff;
    codeobj_8b073afd8babfdd4abb04a8eb17e28ae = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 102, const_tuple_b0c00933e83a0151953f3a00c2178204_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1bedad7b91f0678c713a135e7f823dbf = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 243, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_name_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be496bdd129e370b14254a72f181de5a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 438, const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_2cdeeddac22748a39e2ce22d9256468a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 239, const_tuple_str_plain_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9d941dfe9c7d6be98931baf7cec4803 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_572541d49912921fc3f520d5fbbbace7, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_bccdf894522a0a7d1094f23127224044 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyOpenSSLContext, 386, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2c7c8d5e74896da0a7e99eea9ca5e223 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_WrappedSocket, 250, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6616a5ba9e91599e644dc9bd11fd7a89 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 257, const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_74d7f224a6c7edbc95cf68acf5f60710 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 392, const_tuple_str_plain_self_str_plain_protocol_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_08e72eaeaee907b730ffeb4bdb21507e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__decref_socketios, 268, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_069d45263570ab6a9467dc4444e19005 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dnsname_to_stdlib, 157, const_tuple_str_plain_name_str_plain_idna_encode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a54f033d67d96dc844ca091cdfa3f6f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__drop, 369, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9bbe48c613271b80c930fe8c6f23d517 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reuse, 366, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5d8c421dead0e17505da0c5b425d090b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__send_until_done, 317, const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a0481c6a2ecd1f0a63bf775034ad27a4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__validate_dependencies_met, 137, const_tuple_str_plain_Extensions_str_plain_X509_str_plain_x509_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_37fc30292c28d60eac680261801a8ccf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_callback, 468, const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e95b329e74e6109135372ac516f829df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 338, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd35cc3ed9d16dbef18463d1f9f9ce1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extract_from_urllib3, 127, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd803ed3d0842e24b253c889b4ac06a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fileno, 264, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3af905b6d38730600a910e1c08fd28cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_subj_alt_name, 198, const_tuple_8746a5e1d761630cda9eea2990729203_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3ec8316db7de6614080bc5a5cc13c50b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getpeercert, 348, const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8ce5536ee9a07b8faf62511e8892e565 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_idna_encode, 170, const_tuple_str_plain_name_str_plain_idna_str_plain_prefix_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_12aac1d4dbdc9de69bb3ebe79767f75f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inject_into_urllib3, 115, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_12ccbd80afbd6523b4a96764284b6c96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_cert_chain, 435, const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f46ed31e09d2b50291cec9d86d1295b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_verify_locations, 426, const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bab604f77234b61f2aacccab9af9f820 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makefile, 377, const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9370076f231f8f4d8a812bab54fec5db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 398, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2821a9f85dbf29b09ca836df1562e115 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 402, const_tuple_str_plain_self_str_plain_value_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_714d81f0a959aaaf0ea74d8b12eeb647 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv, 274, const_tuple_9c47951cfb852325fceb861a5d8c8329_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_af8e88885c2ca8ed8d2a189cc5613080 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv_into, 295, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_fa2c2ee91e2a42637be105db19b53be4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sendall, 328, const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81954b9372ce54f70c49a111ad41bfe2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ciphers, 421, const_tuple_str_plain_self_str_plain_ciphers_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aaa7e727fd37b30c4eee85ad1c7b31d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_default_verify_paths, 418, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3da690d71aa4383ec641eb09fb54048d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_settimeout, 314, const_tuple_str_plain_self_str_plain_timeout_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d6b46aa887d4bbb86feb6d6be7d655c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_shutdown, 334, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2a6cf001336c8b74b307023d13de0777 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify_mode, 407, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bd6f972d9b334f68825ad3c89076327c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify_mode, 411, const_tuple_str_plain_self_str_plain_value_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_23b7ac1ccc5100548a9274eb1c8bc3d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_socket, 441, const_tuple_c4b74dd253156b7d8eda9a3c39e8c5f4_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_maker( void );


static PyObject *urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_10_recv_into(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_11_settimeout(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_12__send_until_done(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_13_sendall(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_14_shutdown(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_15_close(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_16_getpeercert( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_17__reuse(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_18__drop(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_19_makefile( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_20___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_21_options(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_22_options(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_23_verify_mode(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_24_verify_mode(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_26_set_ciphers(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_30__verify_callback(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_7_fileno(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_8__decref_socketios(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_9_recv(  );


// The module function definitions.

struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals {
    PyObject *var_k;
    PyObject *var_v;
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

static PyObject *urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals *generator_heap = (struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_v = NULL;
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
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_8b073afd8babfdd4abb04a8eb17e28ae, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 102;
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


            generator_heap->exception_lineno = 102;
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
            generator_heap->exception_lineno = 102;
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
            generator_heap->exception_lineno = 102;
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
                    generator_heap->exception_lineno = 102;
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
            generator_heap->exception_lineno = 102;
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
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_k );
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
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_v );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_v );
        tmp_tuple_element_1 = generator_heap->var_v;
        tmp_expression_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_k );
        tmp_tuple_element_1 = generator_heap->var_k;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 102;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 102;
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
            generator_heap->var_k,
            generator_heap->var_v
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

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    Py_XDECREF( generator_heap->var_v );
    generator_heap->var_v = NULL;

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

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    Py_XDECREF( generator_heap->var_v );
    generator_heap->var_v = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_context,
        module_urllib3$contrib$pyopenssl,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_8b073afd8babfdd4abb04a8eb17e28ae,
        1,
        sizeof(struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_12aac1d4dbdc9de69bb3ebe79767f75f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_12aac1d4dbdc9de69bb3ebe79767f75f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_12aac1d4dbdc9de69bb3ebe79767f75f, codeobj_12aac1d4dbdc9de69bb3ebe79767f75f, module_urllib3$contrib$pyopenssl, 0 );
    frame_12aac1d4dbdc9de69bb3ebe79767f75f = cache_frame_12aac1d4dbdc9de69bb3ebe79767f75f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12aac1d4dbdc9de69bb3ebe79767f75f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12aac1d4dbdc9de69bb3ebe79767f75f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__validate_dependencies_met );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__validate_dependencies_met );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_validate_dependencies_met" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_12aac1d4dbdc9de69bb3ebe79767f75f->m_frame.f_lineno = 118;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_PyOpenSSLContext );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyOpenSSLContext );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyOpenSSLContext" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_ );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_SSLContext, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HAS_SNI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = tmp_mvar_value_5;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_HAS_SNI, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HAS_SNI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_7;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ssl_ );
        if ( tmp_assattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_HAS_SNI, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_8;
        tmp_assattr_name_4 = Py_True;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = tmp_mvar_value_8;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_9;
        tmp_assattr_name_5 = Py_True;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_9;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ssl_ );
        if ( tmp_assattr_target_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_target_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12aac1d4dbdc9de69bb3ebe79767f75f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12aac1d4dbdc9de69bb3ebe79767f75f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12aac1d4dbdc9de69bb3ebe79767f75f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12aac1d4dbdc9de69bb3ebe79767f75f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12aac1d4dbdc9de69bb3ebe79767f75f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12aac1d4dbdc9de69bb3ebe79767f75f,
        type_description_1
    );


    // Release cached frame.
    if ( frame_12aac1d4dbdc9de69bb3ebe79767f75f == cache_frame_12aac1d4dbdc9de69bb3ebe79767f75f )
    {
        Py_DECREF( frame_12aac1d4dbdc9de69bb3ebe79767f75f );
    }
    cache_frame_12aac1d4dbdc9de69bb3ebe79767f75f = NULL;

    assertFrameObject( frame_12aac1d4dbdc9de69bb3ebe79767f75f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3 );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_dd35cc3ed9d16dbef18463d1f9f9ce1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dd35cc3ed9d16dbef18463d1f9f9ce1c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_dd35cc3ed9d16dbef18463d1f9f9ce1c, codeobj_dd35cc3ed9d16dbef18463d1f9f9ce1c, module_urllib3$contrib$pyopenssl, 0 );
    frame_dd35cc3ed9d16dbef18463d1f9f9ce1c = cache_frame_dd35cc3ed9d16dbef18463d1f9f9ce1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_SSLContext );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_util_SSLContext );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_util_SSLContext" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_ );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_SSLContext, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_util_HAS_SNI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = tmp_mvar_value_4;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_HAS_SNI, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orig_util_HAS_SNI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_6;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ssl_ );
        if ( tmp_assattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_HAS_SNI, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_7;
        tmp_assattr_name_4 = Py_False;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = tmp_mvar_value_7;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_8;
        tmp_assattr_name_5 = Py_False;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_8;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ssl_ );
        if ( tmp_assattr_target_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_target_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd35cc3ed9d16dbef18463d1f9f9ce1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd35cc3ed9d16dbef18463d1f9f9ce1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd35cc3ed9d16dbef18463d1f9f9ce1c,
        type_description_1
    );


    // Release cached frame.
    if ( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c == cache_frame_dd35cc3ed9d16dbef18463d1f9f9ce1c )
    {
        Py_DECREF( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c );
    }
    cache_frame_dd35cc3ed9d16dbef18463d1f9f9ce1c = NULL;

    assertFrameObject( frame_dd35cc3ed9d16dbef18463d1f9f9ce1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3 );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_Extensions = NULL;
    PyObject *var_X509 = NULL;
    PyObject *var_x509 = NULL;
    struct Nuitka_FrameObject *frame_a0481c6a2ecd1f0a63bf775034ad27a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0481c6a2ecd1f0a63bf775034ad27a4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0481c6a2ecd1f0a63bf775034ad27a4, codeobj_a0481c6a2ecd1f0a63bf775034ad27a4, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a0481c6a2ecd1f0a63bf775034ad27a4 = cache_frame_a0481c6a2ecd1f0a63bf775034ad27a4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0481c6a2ecd1f0a63bf775034ad27a4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0481c6a2ecd1f0a63bf775034ad27a4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Extensions_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a0481c6a2ecd1f0a63bf775034ad27a4->m_frame.f_lineno = 143;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Extensions );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_Extensions == NULL );
        var_Extensions = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( var_Extensions );
        tmp_getattr_target_1 = var_Extensions;
        tmp_getattr_attr_1 = const_str_plain_get_extension_for_class;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_left_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            tmp_make_exception_arg_1 = const_str_digest_d22ac54ae5c0616296ff857ea08c49cb;
            frame_a0481c6a2ecd1f0a63bf775034ad27a4->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 145;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_6d237a1253b74549ee18fb0e488e3cf9;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_X509_tuple;
        tmp_level_name_2 = const_int_0;
        frame_a0481c6a2ecd1f0a63bf775034ad27a4->m_frame.f_lineno = 150;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_X509 );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_X509 == NULL );
        var_X509 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        CHECK_OBJECT( var_X509 );
        tmp_called_name_1 = var_X509;
        frame_a0481c6a2ecd1f0a63bf775034ad27a4->m_frame.f_lineno = 151;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_x509 == NULL );
        var_x509 = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT( var_x509 );
        tmp_getattr_target_2 = var_x509;
        tmp_getattr_attr_2 = const_str_plain__x509;
        tmp_getattr_default_2 = Py_None;
        tmp_compexpr_left_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_3ff79c08d61077339220a6b991e28f93;
            frame_a0481c6a2ecd1f0a63bf775034ad27a4->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 153;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0481c6a2ecd1f0a63bf775034ad27a4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0481c6a2ecd1f0a63bf775034ad27a4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0481c6a2ecd1f0a63bf775034ad27a4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0481c6a2ecd1f0a63bf775034ad27a4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0481c6a2ecd1f0a63bf775034ad27a4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0481c6a2ecd1f0a63bf775034ad27a4,
        type_description_1,
        var_Extensions,
        var_X509,
        var_x509
    );


    // Release cached frame.
    if ( frame_a0481c6a2ecd1f0a63bf775034ad27a4 == cache_frame_a0481c6a2ecd1f0a63bf775034ad27a4 )
    {
        Py_DECREF( frame_a0481c6a2ecd1f0a63bf775034ad27a4 );
    }
    cache_frame_a0481c6a2ecd1f0a63bf775034ad27a4 = NULL;

    assertFrameObject( frame_a0481c6a2ecd1f0a63bf775034ad27a4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_Extensions );
    Py_DECREF( var_Extensions );
    var_Extensions = NULL;

    CHECK_OBJECT( (PyObject *)var_X509 );
    Py_DECREF( var_X509 );
    var_X509 = NULL;

    CHECK_OBJECT( (PyObject *)var_x509 );
    Py_DECREF( var_x509 );
    var_x509 = NULL;

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

    Py_XDECREF( var_Extensions );
    var_Extensions = NULL;

    Py_XDECREF( var_X509 );
    var_X509 = NULL;

    Py_XDECREF( var_x509 );
    var_x509 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_idna_encode = NULL;
    struct Nuitka_FrameObject *frame_069d45263570ab6a9467dc4444e19005;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_069d45263570ab6a9467dc4444e19005 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode(  );



        assert( var_idna_encode == NULL );
        var_idna_encode = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_069d45263570ab6a9467dc4444e19005, codeobj_069d45263570ab6a9467dc4444e19005, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_069d45263570ab6a9467dc4444e19005 = cache_frame_069d45263570ab6a9467dc4444e19005;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_069d45263570ab6a9467dc4444e19005 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_069d45263570ab6a9467dc4444e19005 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_chr_58;
        CHECK_OBJECT( par_name );
        tmp_compexpr_right_1 = par_name;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oo";
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
        CHECK_OBJECT( par_name );
        tmp_return_value = par_name;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_idna_encode );
        tmp_called_name_1 = var_idna_encode;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_069d45263570ab6a9467dc4444e19005->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert( old != NULL );
            par_name = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_2 = par_name;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 193;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_tuple_int_pos_3_int_0_tuple;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "oo";
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_name );
                tmp_called_instance_1 = par_name;
                frame_069d45263570ab6a9467dc4444e19005->m_frame.f_lineno = 194;
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 194;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_name;
                    assert( old != NULL );
                    par_name = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    if ( par_name == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_name;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_069d45263570ab6a9467dc4444e19005 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_069d45263570ab6a9467dc4444e19005 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_069d45263570ab6a9467dc4444e19005 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_069d45263570ab6a9467dc4444e19005, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_069d45263570ab6a9467dc4444e19005->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_069d45263570ab6a9467dc4444e19005, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_069d45263570ab6a9467dc4444e19005,
        type_description_1,
        par_name,
        var_idna_encode
    );


    // Release cached frame.
    if ( frame_069d45263570ab6a9467dc4444e19005 == cache_frame_069d45263570ab6a9467dc4444e19005 )
    {
        Py_DECREF( frame_069d45263570ab6a9467dc4444e19005 );
    }
    cache_frame_069d45263570ab6a9467dc4444e19005 = NULL;

    assertFrameObject( frame_069d45263570ab6a9467dc4444e19005 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_idna_encode );
    Py_DECREF( var_idna_encode );
    var_idna_encode = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_idna_encode );
    Py_DECREF( var_idna_encode );
    var_idna_encode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_idna = NULL;
    PyObject *var_prefix = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8ce5536ee9a07b8faf62511e8892e565;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_8ce5536ee9a07b8faf62511e8892e565 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ce5536ee9a07b8faf62511e8892e565, codeobj_8ce5536ee9a07b8faf62511e8892e565, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8ce5536ee9a07b8faf62511e8892e565 = cache_frame_8ce5536ee9a07b8faf62511e8892e565;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ce5536ee9a07b8faf62511e8892e565 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ce5536ee9a07b8faf62511e8892e565 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_idna;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_8ce5536ee9a07b8faf62511e8892e565->m_frame.f_lineno = 176;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_idna == NULL );
        var_idna = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_str_digest_f16ebd80f485bce26a5c8a0fab91362b_str_dot_tuple;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_2 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooo";
                exception_lineno = 179;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_4;
            Py_INCREF( var_prefix );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_name );
        tmp_called_instance_1 = par_name;
        CHECK_OBJECT( var_prefix );
        tmp_args_element_name_1 = var_prefix;
        frame_8ce5536ee9a07b8faf62511e8892e565->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 180;
            type_description_1 = "ooo";
            goto try_except_handler_3;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_name );
            tmp_subscribed_name_1 = par_name;
            CHECK_OBJECT( var_prefix );
            tmp_len_arg_1 = var_prefix;
            tmp_start_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_start_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_stop_name_1 = Py_None;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_start_name_1 );
            assert( !(tmp_subscript_name_1 == NULL) );
            tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = par_name;
                assert( old != NULL );
                par_name = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_prefix );
            tmp_called_instance_2 = var_prefix;
            frame_8ce5536ee9a07b8faf62511e8892e565->m_frame.f_lineno = 182;
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_idna );
            tmp_called_instance_3 = var_idna;
            CHECK_OBJECT( par_name );
            tmp_args_element_name_2 = par_name;
            frame_8ce5536ee9a07b8faf62511e8892e565->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 182;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_idna );
        tmp_called_instance_4 = var_idna;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_3 = par_name;
        frame_8ce5536ee9a07b8faf62511e8892e565->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_encode, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_8ce5536ee9a07b8faf62511e8892e565, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_8ce5536ee9a07b8faf62511e8892e565, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT( var_idna );
        tmp_source_name_2 = var_idna;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_core );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_IDNAError );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto try_except_handler_4;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_4;
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 178;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_8ce5536ee9a07b8faf62511e8892e565->m_frame) frame_8ce5536ee9a07b8faf62511e8892e565->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_4;
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
    RESTORE_FRAME_EXCEPTION( frame_8ce5536ee9a07b8faf62511e8892e565 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ce5536ee9a07b8faf62511e8892e565 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ce5536ee9a07b8faf62511e8892e565 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ce5536ee9a07b8faf62511e8892e565, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ce5536ee9a07b8faf62511e8892e565->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ce5536ee9a07b8faf62511e8892e565, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ce5536ee9a07b8faf62511e8892e565,
        type_description_1,
        par_name,
        var_idna,
        var_prefix
    );


    // Release cached frame.
    if ( frame_8ce5536ee9a07b8faf62511e8892e565 == cache_frame_8ce5536ee9a07b8faf62511e8892e565 )
    {
        Py_DECREF( frame_8ce5536ee9a07b8faf62511e8892e565 );
    }
    cache_frame_8ce5536ee9a07b8faf62511e8892e565 = NULL;

    assertFrameObject( frame_8ce5536ee9a07b8faf62511e8892e565 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_idna );
    Py_DECREF( var_idna );
    var_idna = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_idna );
    var_idna = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_peer_cert = python_pars[ 0 ];
    PyObject *var_cert = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_e = NULL;
    PyObject *var_names = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_3af905b6d38730600a910e1c08fd28cf;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_2cdeeddac22748a39e2ce22d9256468a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_2cdeeddac22748a39e2ce22d9256468a_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_3af905b6d38730600a910e1c08fd28cf = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3af905b6d38730600a910e1c08fd28cf, codeobj_3af905b6d38730600a910e1c08fd28cf, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3af905b6d38730600a910e1c08fd28cf = cache_frame_3af905b6d38730600a910e1c08fd28cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3af905b6d38730600a910e1c08fd28cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3af905b6d38730600a910e1c08fd28cf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_peer_cert );
        tmp_source_name_1 = par_peer_cert;
        tmp_attribute_name_1 = const_str_plain_to_cryptography;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_peer_cert );
            tmp_called_instance_1 = par_peer_cert;
            frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 204;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_to_cryptography );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cert == NULL );
            var_cert = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__Certificate );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Certificate );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_Certificate" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_openssl_backend );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_openssl_backend );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "openssl_backend" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_peer_cert );
            tmp_source_name_2 = par_peer_cert;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__x509 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cert == NULL );
            var_cert = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_cert );
        tmp_source_name_5 = var_cert;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_extensions );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_extension_for_class );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x509" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SubjectAlternativeName );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( var_ext == NULL );
        var_ext = tmp_assign_source_3;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_3af905b6d38730600a910e1c08fd28cf, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_3af905b6d38730600a910e1c08fd28cf, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_4;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x509" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_7 = tmp_mvar_value_4;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ExtensionNotFound );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooo";
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
        tmp_return_value = PyList_New( 0 );
        goto try_return_handler_3;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_7;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x509" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 219;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_8 = tmp_mvar_value_5;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_DuplicateExtension );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_2 = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_compexpr_right_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnsupportedExtension" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 219;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_tuple_element_1 = tmp_mvar_value_6;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_compexpr_right_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x509" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 220;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_9 = tmp_mvar_value_7;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_UnsupportedGeneralNameType );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_right_2 );

                exception_lineno = 220;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 2, tmp_tuple_element_1 );
            tmp_tuple_element_1 = PyExc_UnicodeError;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 3, tmp_tuple_element_1 );
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "ooooo";
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
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_4 );
                var_e = tmp_assign_source_4;
            }
            // Tried code:
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_log );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 223;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }

                tmp_called_instance_2 = tmp_mvar_value_8;
                tmp_args_element_name_4 = const_str_digest_bb5bc8c3c3606f20b540789b2cae4e87;
                CHECK_OBJECT( var_e );
                tmp_args_element_name_5 = var_e;
                frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 223;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_warning, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 223;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            tmp_return_value = PyList_New( 0 );
            goto try_return_handler_4;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
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
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 212;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_3af905b6d38730600a910e1c08fd28cf->m_frame) frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
            branch_end_3:;
        }
        branch_end_2:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
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
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_10;
            tmp_called_name_3 = (PyObject *)&PyMap_Type;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__dnsname_to_stdlib );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_to_stdlib );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dnsname_to_stdlib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }

            tmp_args_element_name_6 = tmp_mvar_value_9;
            CHECK_OBJECT( var_ext );
            tmp_source_name_10 = var_ext;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_get_values_for_type );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x509" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }

            tmp_source_name_11 = tmp_mvar_value_10;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_DNSName );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 239;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 239;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
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
        MAKE_OR_REUSE_FRAME( cache_frame_2cdeeddac22748a39e2ce22d9256468a_2, codeobj_2cdeeddac22748a39e2ce22d9256468a, module_urllib3$contrib$pyopenssl, sizeof(void *) );
        frame_2cdeeddac22748a39e2ce22d9256468a_2 = cache_frame_2cdeeddac22748a39e2ce22d9256468a_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_2cdeeddac22748a39e2ce22d9256468a_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_2cdeeddac22748a39e2ce22d9256468a_2 ) == 2 ); // Frame stack

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
                    type_description_2 = "o";
                    exception_lineno = 239;
                    goto try_except_handler_6;
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
                PyObject *old = outline_0_var_name;
                outline_0_var_name = tmp_assign_source_9;
                Py_INCREF( outline_0_var_name );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( outline_0_var_name );
            tmp_compexpr_left_3 = outline_0_var_name;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_tuple_element_2;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                tmp_tuple_element_2 = const_str_plain_DNS;
                tmp_append_value_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( outline_0_var_name );
                tmp_tuple_element_2 = outline_0_var_name;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_2 );
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 239;
                    type_description_2 = "o";
                    goto try_except_handler_6;
                }
            }
            branch_no_4:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_5 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
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
        try_except_handler_6:;
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
        RESTORE_FRAME_EXCEPTION( frame_2cdeeddac22748a39e2ce22d9256468a_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_2cdeeddac22748a39e2ce22d9256468a_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2cdeeddac22748a39e2ce22d9256468a_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_2cdeeddac22748a39e2ce22d9256468a_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_2cdeeddac22748a39e2ce22d9256468a_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_2cdeeddac22748a39e2ce22d9256468a_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2cdeeddac22748a39e2ce22d9256468a_2,
            type_description_2,
            outline_0_var_name
        );


        // Release cached frame.
        if ( frame_2cdeeddac22748a39e2ce22d9256468a_2 == cache_frame_2cdeeddac22748a39e2ce22d9256468a_2 )
        {
            Py_DECREF( frame_2cdeeddac22748a39e2ce22d9256468a_2 );
        }
        cache_frame_2cdeeddac22748a39e2ce22d9256468a_2 = NULL;

        assertFrameObject( frame_2cdeeddac22748a39e2ce22d9256468a_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF( outline_0_var_name );
        outline_0_var_name = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_name );
        outline_0_var_name = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        outline_exception_1:;
        exception_lineno = 239;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_names == NULL );
        var_names = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_names );
        tmp_source_name_12 = var_names;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_extend );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_11;
            CHECK_OBJECT( var_ext );
            tmp_source_name_13 = var_ext;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_get_values_for_type );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "x509" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 244;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_11;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_IPAddress );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 244;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 244;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_10;
        }
        // Tried code:
        tmp_args_element_name_9 = urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_9)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        outline_result_2:;
        frame_3af905b6d38730600a910e1c08fd28cf->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3af905b6d38730600a910e1c08fd28cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3af905b6d38730600a910e1c08fd28cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3af905b6d38730600a910e1c08fd28cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3af905b6d38730600a910e1c08fd28cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3af905b6d38730600a910e1c08fd28cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3af905b6d38730600a910e1c08fd28cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3af905b6d38730600a910e1c08fd28cf,
        type_description_1,
        par_peer_cert,
        var_cert,
        var_ext,
        var_e,
        var_names
    );


    // Release cached frame.
    if ( frame_3af905b6d38730600a910e1c08fd28cf == cache_frame_3af905b6d38730600a910e1c08fd28cf )
    {
        Py_DECREF( frame_3af905b6d38730600a910e1c08fd28cf );
    }
    cache_frame_3af905b6d38730600a910e1c08fd28cf = NULL;

    assertFrameObject( frame_3af905b6d38730600a910e1c08fd28cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( var_names );
    tmp_return_value = var_names;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_peer_cert );
    Py_DECREF( par_peer_cert );
    par_peer_cert = NULL;

    CHECK_OBJECT( (PyObject *)var_cert );
    Py_DECREF( var_cert );
    var_cert = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

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

    CHECK_OBJECT( (PyObject *)par_peer_cert );
    Py_DECREF( par_peer_cert );
    par_peer_cert = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
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



struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals {
    PyObject *var_name;
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

static PyObject *urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals *generator_heap = (struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_name = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_1bedad7b91f0678c713a135e7f823dbf, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
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
            PyObject *old = generator_heap->var_name;
            generator_heap->var_name = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_name );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_unicode_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_tuple_element_1 = const_str_digest_76d751ede7bd087f9346e5a615d3c397;
        tmp_expression_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_name );
        tmp_unicode_arg_1 = generator_heap->var_name;
        tmp_tuple_element_1 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_expression_name_1 );

            generator_heap->exception_lineno = 243;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), NULL );
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
            generator_heap->var_name
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

    Py_XDECREF( generator_heap->var_name );
    generator_heap->var_name = NULL;

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

    Py_XDECREF( generator_heap->var_name );
    generator_heap->var_name = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_context,
        module_urllib3$contrib$pyopenssl,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_afa22ab599702ad524e6d8b060fa5658,
#endif
        codeobj_1bedad7b91f0678c713a135e7f823dbf,
        1,
        sizeof(struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_connection = python_pars[ 1 ];
    PyObject *par_socket = python_pars[ 2 ];
    PyObject *par_suppress_ragged_eofs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_6616a5ba9e91599e644dc9bd11fd7a89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6616a5ba9e91599e644dc9bd11fd7a89 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6616a5ba9e91599e644dc9bd11fd7a89, codeobj_6616a5ba9e91599e644dc9bd11fd7a89, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6616a5ba9e91599e644dc9bd11fd7a89 = cache_frame_6616a5ba9e91599e644dc9bd11fd7a89;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6616a5ba9e91599e644dc9bd11fd7a89 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6616a5ba9e91599e644dc9bd11fd7a89 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_connection );
        tmp_assattr_name_1 = par_connection;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_connection, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_socket );
        tmp_assattr_name_2 = par_socket;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_socket, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_suppress_ragged_eofs );
        tmp_assattr_name_3 = par_suppress_ragged_eofs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_suppress_ragged_eofs, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__makefile_refs, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__closed, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6616a5ba9e91599e644dc9bd11fd7a89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6616a5ba9e91599e644dc9bd11fd7a89 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6616a5ba9e91599e644dc9bd11fd7a89, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6616a5ba9e91599e644dc9bd11fd7a89->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6616a5ba9e91599e644dc9bd11fd7a89, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6616a5ba9e91599e644dc9bd11fd7a89,
        type_description_1,
        par_self,
        par_connection,
        par_socket,
        par_suppress_ragged_eofs
    );


    // Release cached frame.
    if ( frame_6616a5ba9e91599e644dc9bd11fd7a89 == cache_frame_6616a5ba9e91599e644dc9bd11fd7a89 )
    {
        Py_DECREF( frame_6616a5ba9e91599e644dc9bd11fd7a89 );
    }
    cache_frame_6616a5ba9e91599e644dc9bd11fd7a89 = NULL;

    assertFrameObject( frame_6616a5ba9e91599e644dc9bd11fd7a89 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_connection );
    Py_DECREF( par_connection );
    par_connection = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_connection );
    Py_DECREF( par_connection );
    par_connection = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_6___init__ );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_7_fileno( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_bd803ed3d0842e24b253c889b4ac06a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd803ed3d0842e24b253c889b4ac06a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd803ed3d0842e24b253c889b4ac06a2, codeobj_bd803ed3d0842e24b253c889b4ac06a2, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_bd803ed3d0842e24b253c889b4ac06a2 = cache_frame_bd803ed3d0842e24b253c889b4ac06a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd803ed3d0842e24b253c889b4ac06a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd803ed3d0842e24b253c889b4ac06a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_socket );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bd803ed3d0842e24b253c889b4ac06a2->m_frame.f_lineno = 265;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fileno );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd803ed3d0842e24b253c889b4ac06a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd803ed3d0842e24b253c889b4ac06a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd803ed3d0842e24b253c889b4ac06a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd803ed3d0842e24b253c889b4ac06a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd803ed3d0842e24b253c889b4ac06a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd803ed3d0842e24b253c889b4ac06a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd803ed3d0842e24b253c889b4ac06a2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_bd803ed3d0842e24b253c889b4ac06a2 == cache_frame_bd803ed3d0842e24b253c889b4ac06a2 )
    {
        Py_DECREF( frame_bd803ed3d0842e24b253c889b4ac06a2 );
    }
    cache_frame_bd803ed3d0842e24b253c889b4ac06a2 = NULL;

    assertFrameObject( frame_bd803ed3d0842e24b253c889b4ac06a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_7_fileno );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_7_fileno );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_8__decref_socketios( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_08e72eaeaee907b730ffeb4bdb21507e;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_08e72eaeaee907b730ffeb4bdb21507e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_08e72eaeaee907b730ffeb4bdb21507e, codeobj_08e72eaeaee907b730ffeb4bdb21507e, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_08e72eaeaee907b730ffeb4bdb21507e = cache_frame_08e72eaeaee907b730ffeb4bdb21507e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_08e72eaeaee907b730ffeb4bdb21507e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_08e72eaeaee907b730ffeb4bdb21507e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__makefile_refs );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "o";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__closed );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_08e72eaeaee907b730ffeb4bdb21507e->m_frame.f_lineno = 272;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08e72eaeaee907b730ffeb4bdb21507e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08e72eaeaee907b730ffeb4bdb21507e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_08e72eaeaee907b730ffeb4bdb21507e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_08e72eaeaee907b730ffeb4bdb21507e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_08e72eaeaee907b730ffeb4bdb21507e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_08e72eaeaee907b730ffeb4bdb21507e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_08e72eaeaee907b730ffeb4bdb21507e == cache_frame_08e72eaeaee907b730ffeb4bdb21507e )
    {
        Py_DECREF( frame_08e72eaeaee907b730ffeb4bdb21507e );
    }
    cache_frame_08e72eaeaee907b730ffeb4bdb21507e = NULL;

    assertFrameObject( frame_08e72eaeaee907b730ffeb4bdb21507e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_8__decref_socketios );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_8__decref_socketios );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_9_recv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_data = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_714d81f0a959aaaf0ea74d8b12eeb647;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_714d81f0a959aaaf0ea74d8b12eeb647 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_714d81f0a959aaaf0ea74d8b12eeb647, codeobj_714d81f0a959aaaf0ea74d8b12eeb647, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_714d81f0a959aaaf0ea74d8b12eeb647 = cache_frame_714d81f0a959aaaf0ea74d8b12eeb647;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_714d81f0a959aaaf0ea74d8b12eeb647 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_714d81f0a959aaaf0ea74d8b12eeb647 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_recv );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_714d81f0a959aaaf0ea74d8b12eeb647, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_714d81f0a959aaaf0ea74d8b12eeb647, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SSL );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SysCallError );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooooo";
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
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_e = tmp_assign_source_2;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_suppress_ragged_eofs );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 278;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_e );
            tmp_source_name_6 = var_e;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_args );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_2 = const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
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
            tmp_return_value = const_bytes_empty;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_4;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_unicode_arg_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 281;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                CHECK_OBJECT( var_e );
                tmp_unicode_arg_1 = var_e;
                tmp_args_element_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 281;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame.f_lineno = 281;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 281;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 281;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_9_recv );
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
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SSL );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ZeroReturnError );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "ooooo";
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
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_connection );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 283;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame.f_lineno = 283;
                tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_shutdown );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 283;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 283;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }

                tmp_source_name_11 = tmp_mvar_value_4;
                tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SSL );
                if ( tmp_source_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 283;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_RECEIVED_SHUTDOWN );
                Py_DECREF( tmp_source_name_10 );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 283;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 283;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
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
                tmp_return_value = const_bytes_empty;
                Py_INCREF( tmp_return_value );
                goto try_return_handler_3;
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 286;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame) frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
                branch_end_4:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_12;
                PyObject *tmp_source_name_13;
                PyObject *tmp_mvar_value_5;
                tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 287;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }

                tmp_source_name_13 = tmp_mvar_value_5;
                tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SSL );
                if ( tmp_source_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 287;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_WantReadError );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 287;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 287;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
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
                    PyObject *tmp_operand_name_1;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_16;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 288;
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
                    }

                    tmp_source_name_14 = tmp_mvar_value_6;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_wait_for_read );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 288;
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_socket );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 288;
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_socket );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 288;
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
                    }
                    frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame.f_lineno = 288;
                    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_gettimeout );
                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 288;
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
                    }
                    frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame.f_lineno = 288;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_2 );
                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_operand_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 288;
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
                    }
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                    Py_DECREF( tmp_operand_name_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 288;
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
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
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_7;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                        if (unlikely( tmp_mvar_value_7 == NULL ))
                        {
                            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                        }

                        if ( tmp_mvar_value_7 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timeout" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 289;
                            type_description_1 = "ooooo";
                            goto try_except_handler_3;
                        }

                        tmp_called_name_3 = tmp_mvar_value_7;
                        frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame.f_lineno = 289;
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple, 0 ) );

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 289;
                            type_description_1 = "ooooo";
                            goto try_except_handler_3;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 289;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooo";
                        goto try_except_handler_3;
                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_dircall_arg1_2;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_dircall_arg2_2;
                        PyObject *tmp_dircall_arg3_2;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_17 = par_self;
                        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_recv );
                        if ( tmp_dircall_arg1_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 291;
                            type_description_1 = "ooooo";
                            goto try_except_handler_3;
                        }
                        CHECK_OBJECT( par_args );
                        tmp_dircall_arg2_2 = par_args;
                        CHECK_OBJECT( par_kwargs );
                        tmp_dircall_arg3_2 = par_kwargs;
                        Py_INCREF( tmp_dircall_arg2_2 );
                        Py_INCREF( tmp_dircall_arg3_2 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( dir_call_args );
                        }
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 291;
                            type_description_1 = "ooooo";
                            goto try_except_handler_3;
                        }
                        goto try_return_handler_3;
                    }
                    branch_end_6:;
                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 275;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame) frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
                branch_end_5:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_9_recv );
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
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_714d81f0a959aaaf0ea74d8b12eeb647 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_714d81f0a959aaaf0ea74d8b12eeb647 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_714d81f0a959aaaf0ea74d8b12eeb647 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_714d81f0a959aaaf0ea74d8b12eeb647, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_714d81f0a959aaaf0ea74d8b12eeb647->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_714d81f0a959aaaf0ea74d8b12eeb647, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_714d81f0a959aaaf0ea74d8b12eeb647,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_data,
        var_e
    );


    // Release cached frame.
    if ( frame_714d81f0a959aaaf0ea74d8b12eeb647 == cache_frame_714d81f0a959aaaf0ea74d8b12eeb647 )
    {
        Py_DECREF( frame_714d81f0a959aaaf0ea74d8b12eeb647 );
    }
    cache_frame_714d81f0a959aaaf0ea74d8b12eeb647 = NULL;

    assertFrameObject( frame_714d81f0a959aaaf0ea74d8b12eeb647 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_data );
    tmp_return_value = var_data;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_9_recv );
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

    Py_XDECREF( var_data );
    var_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_9_recv );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_10_recv_into( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_af8e88885c2ca8ed8d2a189cc5613080;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_af8e88885c2ca8ed8d2a189cc5613080 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_af8e88885c2ca8ed8d2a189cc5613080, codeobj_af8e88885c2ca8ed8d2a189cc5613080, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_af8e88885c2ca8ed8d2a189cc5613080 = cache_frame_af8e88885c2ca8ed8d2a189cc5613080;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af8e88885c2ca8ed8d2a189cc5613080 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af8e88885c2ca8ed8d2a189cc5613080 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_recv_into );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_af8e88885c2ca8ed8d2a189cc5613080, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_af8e88885c2ca8ed8d2a189cc5613080, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 298;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SSL );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SysCallError );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooo";
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
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_e = tmp_assign_source_1;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_suppress_ragged_eofs );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 299;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_e );
            tmp_source_name_6 = var_e;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_args );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_2 = const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "oooo";
                goto try_except_handler_4;
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
            tmp_return_value = const_int_0;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_4;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_unicode_arg_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 302;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                CHECK_OBJECT( var_e );
                tmp_unicode_arg_1 = var_e;
                tmp_args_element_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 302;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame.f_lineno = 302;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 302;
                    type_description_1 = "oooo";
                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 302;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto try_except_handler_4;
            }
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
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
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 303;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SSL );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ZeroReturnError );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oooo";
                goto try_except_handler_3;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
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
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_connection );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 304;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame.f_lineno = 304;
                tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_shutdown );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 304;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 304;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }

                tmp_source_name_11 = tmp_mvar_value_4;
                tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SSL );
                if ( tmp_source_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 304;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_RECEIVED_SHUTDOWN );
                Py_DECREF( tmp_source_name_10 );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 304;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 304;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
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
                tmp_return_value = const_int_0;
                Py_INCREF( tmp_return_value );
                goto try_return_handler_3;
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 307;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame) frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto try_except_handler_3;
                branch_end_4:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_12;
                PyObject *tmp_source_name_13;
                PyObject *tmp_mvar_value_5;
                tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 308;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }

                tmp_source_name_13 = tmp_mvar_value_5;
                tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SSL );
                if ( tmp_source_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 308;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_WantReadError );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 308;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
                }
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 308;
                    type_description_1 = "oooo";
                    goto try_except_handler_3;
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
                    PyObject *tmp_operand_name_1;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_16;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 309;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }

                    tmp_source_name_14 = tmp_mvar_value_6;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_wait_for_read );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 309;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_socket );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 309;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_socket );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 309;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame.f_lineno = 309;
                    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_gettimeout );
                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 309;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame.f_lineno = 309;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_2 );
                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_operand_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 309;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                    Py_DECREF( tmp_operand_name_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 309;
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
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
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_7;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                        if (unlikely( tmp_mvar_value_7 == NULL ))
                        {
                            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                        }

                        if ( tmp_mvar_value_7 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timeout" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 310;
                            type_description_1 = "oooo";
                            goto try_except_handler_3;
                        }

                        tmp_called_name_3 = tmp_mvar_value_7;
                        frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame.f_lineno = 310;
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple, 0 ) );

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 310;
                            type_description_1 = "oooo";
                            goto try_except_handler_3;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 310;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooo";
                        goto try_except_handler_3;
                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_dircall_arg1_2;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_dircall_arg2_2;
                        PyObject *tmp_dircall_arg3_2;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_17 = par_self;
                        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_recv_into );
                        if ( tmp_dircall_arg1_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 312;
                            type_description_1 = "oooo";
                            goto try_except_handler_3;
                        }
                        CHECK_OBJECT( par_args );
                        tmp_dircall_arg2_2 = par_args;
                        CHECK_OBJECT( par_kwargs );
                        tmp_dircall_arg3_2 = par_kwargs;
                        Py_INCREF( tmp_dircall_arg2_2 );
                        Py_INCREF( tmp_dircall_arg3_2 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list_star_dict( dir_call_args );
                        }
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 312;
                            type_description_1 = "oooo";
                            goto try_except_handler_3;
                        }
                        goto try_return_handler_3;
                    }
                    branch_end_6:;
                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 296;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame) frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto try_except_handler_3;
                branch_end_5:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
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
    RESTORE_FRAME_EXCEPTION( frame_af8e88885c2ca8ed8d2a189cc5613080 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_af8e88885c2ca8ed8d2a189cc5613080 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af8e88885c2ca8ed8d2a189cc5613080 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af8e88885c2ca8ed8d2a189cc5613080, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af8e88885c2ca8ed8d2a189cc5613080->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af8e88885c2ca8ed8d2a189cc5613080, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af8e88885c2ca8ed8d2a189cc5613080,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_e
    );


    // Release cached frame.
    if ( frame_af8e88885c2ca8ed8d2a189cc5613080 == cache_frame_af8e88885c2ca8ed8d2a189cc5613080 )
    {
        Py_DECREF( frame_af8e88885c2ca8ed8d2a189cc5613080 );
    }
    cache_frame_af8e88885c2ca8ed8d2a189cc5613080 = NULL;

    assertFrameObject( frame_af8e88885c2ca8ed8d2a189cc5613080 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_11_settimeout( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3da690d71aa4383ec641eb09fb54048d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3da690d71aa4383ec641eb09fb54048d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3da690d71aa4383ec641eb09fb54048d, codeobj_3da690d71aa4383ec641eb09fb54048d, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_3da690d71aa4383ec641eb09fb54048d = cache_frame_3da690d71aa4383ec641eb09fb54048d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3da690d71aa4383ec641eb09fb54048d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3da690d71aa4383ec641eb09fb54048d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_socket );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timeout );
        tmp_args_element_name_1 = par_timeout;
        frame_3da690d71aa4383ec641eb09fb54048d->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_settimeout, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3da690d71aa4383ec641eb09fb54048d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3da690d71aa4383ec641eb09fb54048d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3da690d71aa4383ec641eb09fb54048d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3da690d71aa4383ec641eb09fb54048d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3da690d71aa4383ec641eb09fb54048d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3da690d71aa4383ec641eb09fb54048d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3da690d71aa4383ec641eb09fb54048d,
        type_description_1,
        par_self,
        par_timeout
    );


    // Release cached frame.
    if ( frame_3da690d71aa4383ec641eb09fb54048d == cache_frame_3da690d71aa4383ec641eb09fb54048d )
    {
        Py_DECREF( frame_3da690d71aa4383ec641eb09fb54048d );
    }
    cache_frame_3da690d71aa4383ec641eb09fb54048d = NULL;

    assertFrameObject( frame_3da690d71aa4383ec641eb09fb54048d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_11_settimeout );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_11_settimeout );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_12__send_until_done( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_5d8c421dead0e17505da0c5b425d090b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_5d8c421dead0e17505da0c5b425d090b = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d8c421dead0e17505da0c5b425d090b, codeobj_5d8c421dead0e17505da0c5b425d090b, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5d8c421dead0e17505da0c5b425d090b = cache_frame_5d8c421dead0e17505da0c5b425d090b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d8c421dead0e17505da0c5b425d090b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d8c421dead0e17505da0c5b425d090b ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_5d8c421dead0e17505da0c5b425d090b->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_send, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5d8c421dead0e17505da0c5b425d090b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5d8c421dead0e17505da0c5b425d090b, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 321;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SSL );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_WantWriteError );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
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
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 322;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_wait_for_write );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_socket );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 322;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_socket );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 322;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            frame_5d8c421dead0e17505da0c5b425d090b->m_frame.f_lineno = 322;
            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_gettimeout );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 322;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            frame_5d8c421dead0e17505da0c5b425d090b->m_frame.f_lineno = 322;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "ooo";
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
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timeout" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 323;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                frame_5d8c421dead0e17505da0c5b425d090b->m_frame.f_lineno = 323;
                tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 323;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            branch_no_2:;
        }
        goto try_continue_handler_3;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 325;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SSL );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SysCallError );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "ooo";
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
            {
                PyObject *tmp_assign_source_1;
                tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
                {
                    PyObject *old = var_e;
                    var_e = tmp_assign_source_1;
                    Py_INCREF( var_e );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_unicode_arg_1;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 326;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                CHECK_OBJECT( var_e );
                tmp_unicode_arg_1 = var_e;
                tmp_args_element_name_4 = PyObject_Unicode( tmp_unicode_arg_1 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                frame_5d8c421dead0e17505da0c5b425d090b->m_frame.f_lineno = 326;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 326;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 326;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
            return NULL;
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
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 319;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_5d8c421dead0e17505da0c5b425d090b->m_frame) frame_5d8c421dead0e17505da0c5b425d090b->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_3;
            branch_end_3:;
        }
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
    return NULL;
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
    // try continue handler code:
    try_continue_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto loop_start_1;
    // End of try:
    // End of try:
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d8c421dead0e17505da0c5b425d090b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d8c421dead0e17505da0c5b425d090b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d8c421dead0e17505da0c5b425d090b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d8c421dead0e17505da0c5b425d090b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d8c421dead0e17505da0c5b425d090b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d8c421dead0e17505da0c5b425d090b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d8c421dead0e17505da0c5b425d090b,
        type_description_1,
        par_self,
        par_data,
        var_e
    );


    // Release cached frame.
    if ( frame_5d8c421dead0e17505da0c5b425d090b == cache_frame_5d8c421dead0e17505da0c5b425d090b )
    {
        Py_DECREF( frame_5d8c421dead0e17505da0c5b425d090b );
    }
    cache_frame_5d8c421dead0e17505da0c5b425d090b = NULL;

    assertFrameObject( frame_5d8c421dead0e17505da0c5b425d090b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_13_sendall( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_total_sent = NULL;
    PyObject *var_sent = NULL;
    struct Nuitka_FrameObject *frame_fa2c2ee91e2a42637be105db19b53be4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fa2c2ee91e2a42637be105db19b53be4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_total_sent == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_total_sent = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa2c2ee91e2a42637be105db19b53be4, codeobj_fa2c2ee91e2a42637be105db19b53be4, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fa2c2ee91e2a42637be105db19b53be4 = cache_frame_fa2c2ee91e2a42637be105db19b53be4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa2c2ee91e2a42637be105db19b53be4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa2c2ee91e2a42637be105db19b53be4 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_total_sent );
        tmp_compexpr_left_1 = var_total_sent;
        CHECK_OBJECT( par_data );
        tmp_len_arg_1 = par_data;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "oooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__send_until_done );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_subscribed_name_1 = par_data;
        CHECK_OBJECT( var_total_sent );
        tmp_start_name_1 = var_total_sent;
        CHECK_OBJECT( var_total_sent );
        tmp_left_name_1 = var_total_sent;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SSL_WRITE_BLOCKSIZE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSL_WRITE_BLOCKSIZE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSL_WRITE_BLOCKSIZE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 331;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 331;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 331;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fa2c2ee91e2a42637be105db19b53be4->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sent;
            var_sent = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_total_sent );
        tmp_left_name_2 = var_total_sent;
        CHECK_OBJECT( var_sent );
        tmp_right_name_2 = var_sent;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_2;
        var_total_sent = tmp_assign_source_3;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa2c2ee91e2a42637be105db19b53be4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa2c2ee91e2a42637be105db19b53be4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa2c2ee91e2a42637be105db19b53be4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa2c2ee91e2a42637be105db19b53be4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa2c2ee91e2a42637be105db19b53be4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa2c2ee91e2a42637be105db19b53be4,
        type_description_1,
        par_self,
        par_data,
        var_total_sent,
        var_sent
    );


    // Release cached frame.
    if ( frame_fa2c2ee91e2a42637be105db19b53be4 == cache_frame_fa2c2ee91e2a42637be105db19b53be4 )
    {
        Py_DECREF( frame_fa2c2ee91e2a42637be105db19b53be4 );
    }
    cache_frame_fa2c2ee91e2a42637be105db19b53be4 = NULL;

    assertFrameObject( frame_fa2c2ee91e2a42637be105db19b53be4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_13_sendall );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_total_sent );
    Py_DECREF( var_total_sent );
    var_total_sent = NULL;

    Py_XDECREF( var_sent );
    var_sent = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_total_sent );
    Py_DECREF( var_total_sent );
    var_total_sent = NULL;

    Py_XDECREF( var_sent );
    var_sent = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_13_sendall );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_14_shutdown( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d6b46aa887d4bbb86feb6d6be7d655c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6b46aa887d4bbb86feb6d6be7d655c5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d6b46aa887d4bbb86feb6d6be7d655c5, codeobj_d6b46aa887d4bbb86feb6d6be7d655c5, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_d6b46aa887d4bbb86feb6d6be7d655c5 = cache_frame_d6b46aa887d4bbb86feb6d6be7d655c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d6b46aa887d4bbb86feb6d6be7d655c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d6b46aa887d4bbb86feb6d6be7d655c5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d6b46aa887d4bbb86feb6d6be7d655c5->m_frame.f_lineno = 336;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_shutdown );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6b46aa887d4bbb86feb6d6be7d655c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6b46aa887d4bbb86feb6d6be7d655c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d6b46aa887d4bbb86feb6d6be7d655c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d6b46aa887d4bbb86feb6d6be7d655c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d6b46aa887d4bbb86feb6d6be7d655c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d6b46aa887d4bbb86feb6d6be7d655c5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d6b46aa887d4bbb86feb6d6be7d655c5 == cache_frame_d6b46aa887d4bbb86feb6d6be7d655c5 )
    {
        Py_DECREF( frame_d6b46aa887d4bbb86feb6d6be7d655c5 );
    }
    cache_frame_d6b46aa887d4bbb86feb6d6be7d655c5 = NULL;

    assertFrameObject( frame_d6b46aa887d4bbb86feb6d6be7d655c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_14_shutdown );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_14_shutdown );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_15_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_e95b329e74e6109135372ac516f829df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e95b329e74e6109135372ac516f829df = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e95b329e74e6109135372ac516f829df, codeobj_e95b329e74e6109135372ac516f829df, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_e95b329e74e6109135372ac516f829df = cache_frame_e95b329e74e6109135372ac516f829df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e95b329e74e6109135372ac516f829df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e95b329e74e6109135372ac516f829df ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
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
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__closed, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 341;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            frame_e95b329e74e6109135372ac516f829df->m_frame.f_lineno = 342;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_15_close );
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
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e95b329e74e6109135372ac516f829df, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e95b329e74e6109135372ac516f829df, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_1;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 343;
                type_description_1 = "o";
                goto try_except_handler_3;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SSL );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "o";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Error );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "o";
                goto try_except_handler_3;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "o";
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
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_3;
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 340;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_e95b329e74e6109135372ac516f829df->m_frame) frame_e95b329e74e6109135372ac516f829df->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "o";
            goto try_except_handler_3;
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_15_close );
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
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__makefile_refs );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "o";
                goto try_except_handler_4;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__makefile_refs, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "o";
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e95b329e74e6109135372ac516f829df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e95b329e74e6109135372ac516f829df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e95b329e74e6109135372ac516f829df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e95b329e74e6109135372ac516f829df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e95b329e74e6109135372ac516f829df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e95b329e74e6109135372ac516f829df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e95b329e74e6109135372ac516f829df,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e95b329e74e6109135372ac516f829df == cache_frame_e95b329e74e6109135372ac516f829df )
    {
        Py_DECREF( frame_e95b329e74e6109135372ac516f829df );
    }
    cache_frame_e95b329e74e6109135372ac516f829df = NULL;

    assertFrameObject( frame_e95b329e74e6109135372ac516f829df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_15_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_15_close );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_16_getpeercert( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_binary_form = python_pars[ 1 ];
    PyObject *var_x509 = NULL;
    struct Nuitka_FrameObject *frame_3ec8316db7de6614080bc5a5cc13c50b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3ec8316db7de6614080bc5a5cc13c50b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3ec8316db7de6614080bc5a5cc13c50b, codeobj_3ec8316db7de6614080bc5a5cc13c50b, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3ec8316db7de6614080bc5a5cc13c50b = cache_frame_3ec8316db7de6614080bc5a5cc13c50b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3ec8316db7de6614080bc5a5cc13c50b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3ec8316db7de6614080bc5a5cc13c50b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3ec8316db7de6614080bc5a5cc13c50b->m_frame.f_lineno = 349;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_peer_certificate );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_x509 == NULL );
        var_x509 = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_x509 );
        tmp_operand_name_1 = var_x509;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
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
        CHECK_OBJECT( var_x509 );
        tmp_return_value = var_x509;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_binary_form );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_binary_form );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 355;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_crypto );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dump_certificate );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 356;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_crypto );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 356;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_FILETYPE_ASN1 );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 356;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x509 );
            tmp_args_element_name_2 = var_x509;
            frame_3ec8316db7de6614080bc5a5cc13c50b->m_frame.f_lineno = 355;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_dict_key_1 = const_str_plain_subject;
        tmp_tuple_element_3 = const_str_plain_commonName;
        tmp_tuple_element_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_x509 );
        tmp_called_instance_2 = var_x509;
        frame_3ec8316db7de6614080bc5a5cc13c50b->m_frame.f_lineno = 361;
        tmp_source_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_subject );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_2 );

            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CN );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_2 );

            exception_lineno = 361;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        tmp_tuple_element_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_dict_value_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_1 );
        tmp_return_value = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_subjectAltName;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_get_subj_alt_name );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_subj_alt_name );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_subj_alt_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_x509 );
        tmp_args_element_name_3 = var_x509;
        frame_3ec8316db7de6614080bc5a5cc13c50b->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ec8316db7de6614080bc5a5cc13c50b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ec8316db7de6614080bc5a5cc13c50b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ec8316db7de6614080bc5a5cc13c50b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3ec8316db7de6614080bc5a5cc13c50b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3ec8316db7de6614080bc5a5cc13c50b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3ec8316db7de6614080bc5a5cc13c50b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3ec8316db7de6614080bc5a5cc13c50b,
        type_description_1,
        par_self,
        par_binary_form,
        var_x509
    );


    // Release cached frame.
    if ( frame_3ec8316db7de6614080bc5a5cc13c50b == cache_frame_3ec8316db7de6614080bc5a5cc13c50b )
    {
        Py_DECREF( frame_3ec8316db7de6614080bc5a5cc13c50b );
    }
    cache_frame_3ec8316db7de6614080bc5a5cc13c50b = NULL;

    assertFrameObject( frame_3ec8316db7de6614080bc5a5cc13c50b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_16_getpeercert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_binary_form );
    Py_DECREF( par_binary_form );
    par_binary_form = NULL;

    CHECK_OBJECT( (PyObject *)var_x509 );
    Py_DECREF( var_x509 );
    var_x509 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_binary_form );
    Py_DECREF( par_binary_form );
    par_binary_form = NULL;

    Py_XDECREF( var_x509 );
    var_x509 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_16_getpeercert );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_17__reuse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_9bbe48c613271b80c930fe8c6f23d517;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9bbe48c613271b80c930fe8c6f23d517 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9bbe48c613271b80c930fe8c6f23d517, codeobj_9bbe48c613271b80c930fe8c6f23d517, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_9bbe48c613271b80c930fe8c6f23d517 = cache_frame_9bbe48c613271b80c930fe8c6f23d517;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bbe48c613271b80c930fe8c6f23d517 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bbe48c613271b80c930fe8c6f23d517 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "o";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bbe48c613271b80c930fe8c6f23d517 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bbe48c613271b80c930fe8c6f23d517 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bbe48c613271b80c930fe8c6f23d517, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bbe48c613271b80c930fe8c6f23d517->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bbe48c613271b80c930fe8c6f23d517, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bbe48c613271b80c930fe8c6f23d517,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9bbe48c613271b80c930fe8c6f23d517 == cache_frame_9bbe48c613271b80c930fe8c6f23d517 )
    {
        Py_DECREF( frame_9bbe48c613271b80c930fe8c6f23d517 );
    }
    cache_frame_9bbe48c613271b80c930fe8c6f23d517 = NULL;

    assertFrameObject( frame_9bbe48c613271b80c930fe8c6f23d517 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_17__reuse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_17__reuse );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_18__drop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_a54f033d67d96dc844ca091cdfa3f6f8;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_a54f033d67d96dc844ca091cdfa3f6f8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a54f033d67d96dc844ca091cdfa3f6f8, codeobj_a54f033d67d96dc844ca091cdfa3f6f8, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_a54f033d67d96dc844ca091cdfa3f6f8 = cache_frame_a54f033d67d96dc844ca091cdfa3f6f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a54f033d67d96dc844ca091cdfa3f6f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a54f033d67d96dc844ca091cdfa3f6f8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_a54f033d67d96dc844ca091cdfa3f6f8->m_frame.f_lineno = 371;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__makefile_refs );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "o";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a54f033d67d96dc844ca091cdfa3f6f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a54f033d67d96dc844ca091cdfa3f6f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a54f033d67d96dc844ca091cdfa3f6f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a54f033d67d96dc844ca091cdfa3f6f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a54f033d67d96dc844ca091cdfa3f6f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a54f033d67d96dc844ca091cdfa3f6f8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a54f033d67d96dc844ca091cdfa3f6f8 == cache_frame_a54f033d67d96dc844ca091cdfa3f6f8 )
    {
        Py_DECREF( frame_a54f033d67d96dc844ca091cdfa3f6f8 );
    }
    cache_frame_a54f033d67d96dc844ca091cdfa3f6f8 = NULL;

    assertFrameObject( frame_a54f033d67d96dc844ca091cdfa3f6f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_18__drop );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_18__drop );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_19_makefile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *par_bufsize = python_pars[ 2 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_bab604f77234b61f2aacccab9af9f820;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bab604f77234b61f2aacccab9af9f820 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bab604f77234b61f2aacccab9af9f820, codeobj_bab604f77234b61f2aacccab9af9f820, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bab604f77234b61f2aacccab9af9f820 = cache_frame_bab604f77234b61f2aacccab9af9f820;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bab604f77234b61f2aacccab9af9f820 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bab604f77234b61f2aacccab9af9f820 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fileobject );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fileobject" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 379;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_mode );
        tmp_tuple_element_1 = par_mode;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_bufsize );
        tmp_tuple_element_1 = par_bufsize;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_e24f4d9d6e3eb6f736872abe66cd35c1 );
        frame_bab604f77234b61f2aacccab9af9f820->m_frame.f_lineno = 379;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bab604f77234b61f2aacccab9af9f820 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bab604f77234b61f2aacccab9af9f820 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bab604f77234b61f2aacccab9af9f820 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bab604f77234b61f2aacccab9af9f820, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bab604f77234b61f2aacccab9af9f820->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bab604f77234b61f2aacccab9af9f820, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bab604f77234b61f2aacccab9af9f820,
        type_description_1,
        par_self,
        par_mode,
        par_bufsize
    );


    // Release cached frame.
    if ( frame_bab604f77234b61f2aacccab9af9f820 == cache_frame_bab604f77234b61f2aacccab9af9f820 )
    {
        Py_DECREF( frame_bab604f77234b61f2aacccab9af9f820 );
    }
    cache_frame_bab604f77234b61f2aacccab9af9f820 = NULL;

    assertFrameObject( frame_bab604f77234b61f2aacccab9af9f820 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_19_makefile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_bufsize );
    Py_DECREF( par_bufsize );
    par_bufsize = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_bufsize );
    Py_DECREF( par_bufsize );
    par_bufsize = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_19_makefile );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_20___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_protocol = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_74d7f224a6c7edbc95cf68acf5f60710;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_74d7f224a6c7edbc95cf68acf5f60710 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_74d7f224a6c7edbc95cf68acf5f60710, codeobj_74d7f224a6c7edbc95cf68acf5f60710, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_74d7f224a6c7edbc95cf68acf5f60710 = cache_frame_74d7f224a6c7edbc95cf68acf5f60710;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_74d7f224a6c7edbc95cf68acf5f60710 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_74d7f224a6c7edbc95cf68acf5f60710 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_openssl_versions" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_protocol );
        tmp_subscript_name_1 = par_protocol;
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_protocol, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SSL );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Context );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_protocol );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_74d7f224a6c7edbc95cf68acf5f60710->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__ctx, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__options, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_check_hostname, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74d7f224a6c7edbc95cf68acf5f60710 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74d7f224a6c7edbc95cf68acf5f60710 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_74d7f224a6c7edbc95cf68acf5f60710, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_74d7f224a6c7edbc95cf68acf5f60710->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_74d7f224a6c7edbc95cf68acf5f60710, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74d7f224a6c7edbc95cf68acf5f60710,
        type_description_1,
        par_self,
        par_protocol
    );


    // Release cached frame.
    if ( frame_74d7f224a6c7edbc95cf68acf5f60710 == cache_frame_74d7f224a6c7edbc95cf68acf5f60710 )
    {
        Py_DECREF( frame_74d7f224a6c7edbc95cf68acf5f60710 );
    }
    cache_frame_74d7f224a6c7edbc95cf68acf5f60710 = NULL;

    assertFrameObject( frame_74d7f224a6c7edbc95cf68acf5f60710 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_20___init__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_20___init__ );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_21_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9370076f231f8f4d8a812bab54fec5db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9370076f231f8f4d8a812bab54fec5db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9370076f231f8f4d8a812bab54fec5db, codeobj_9370076f231f8f4d8a812bab54fec5db, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_9370076f231f8f4d8a812bab54fec5db = cache_frame_9370076f231f8f4d8a812bab54fec5db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9370076f231f8f4d8a812bab54fec5db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9370076f231f8f4d8a812bab54fec5db ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__options );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9370076f231f8f4d8a812bab54fec5db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9370076f231f8f4d8a812bab54fec5db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9370076f231f8f4d8a812bab54fec5db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9370076f231f8f4d8a812bab54fec5db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9370076f231f8f4d8a812bab54fec5db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9370076f231f8f4d8a812bab54fec5db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9370076f231f8f4d8a812bab54fec5db,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9370076f231f8f4d8a812bab54fec5db == cache_frame_9370076f231f8f4d8a812bab54fec5db )
    {
        Py_DECREF( frame_9370076f231f8f4d8a812bab54fec5db );
    }
    cache_frame_9370076f231f8f4d8a812bab54fec5db = NULL;

    assertFrameObject( frame_9370076f231f8f4d8a812bab54fec5db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_21_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_21_options );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_22_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2821a9f85dbf29b09ca836df1562e115;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2821a9f85dbf29b09ca836df1562e115 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2821a9f85dbf29b09ca836df1562e115, codeobj_2821a9f85dbf29b09ca836df1562e115, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_2821a9f85dbf29b09ca836df1562e115 = cache_frame_2821a9f85dbf29b09ca836df1562e115;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2821a9f85dbf29b09ca836df1562e115 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2821a9f85dbf29b09ca836df1562e115 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_value );
        tmp_assattr_name_1 = par_value;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__options, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_value );
        tmp_args_element_name_1 = par_value;
        frame_2821a9f85dbf29b09ca836df1562e115->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_set_options, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2821a9f85dbf29b09ca836df1562e115 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2821a9f85dbf29b09ca836df1562e115 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2821a9f85dbf29b09ca836df1562e115, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2821a9f85dbf29b09ca836df1562e115->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2821a9f85dbf29b09ca836df1562e115, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2821a9f85dbf29b09ca836df1562e115,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_2821a9f85dbf29b09ca836df1562e115 == cache_frame_2821a9f85dbf29b09ca836df1562e115 )
    {
        Py_DECREF( frame_2821a9f85dbf29b09ca836df1562e115 );
    }
    cache_frame_2821a9f85dbf29b09ca836df1562e115 = NULL;

    assertFrameObject( frame_2821a9f85dbf29b09ca836df1562e115 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_22_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_22_options );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_23_verify_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2a6cf001336c8b74b307023d13de0777;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a6cf001336c8b74b307023d13de0777 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a6cf001336c8b74b307023d13de0777, codeobj_2a6cf001336c8b74b307023d13de0777, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_2a6cf001336c8b74b307023d13de0777 = cache_frame_2a6cf001336c8b74b307023d13de0777;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a6cf001336c8b74b307023d13de0777 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a6cf001336c8b74b307023d13de0777 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_to_stdlib_verify );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_to_stdlib_verify );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_openssl_to_stdlib_verify" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2a6cf001336c8b74b307023d13de0777->m_frame.f_lineno = 409;
        tmp_subscript_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_verify_mode );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a6cf001336c8b74b307023d13de0777 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a6cf001336c8b74b307023d13de0777 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a6cf001336c8b74b307023d13de0777 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a6cf001336c8b74b307023d13de0777, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a6cf001336c8b74b307023d13de0777->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a6cf001336c8b74b307023d13de0777, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a6cf001336c8b74b307023d13de0777,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2a6cf001336c8b74b307023d13de0777 == cache_frame_2a6cf001336c8b74b307023d13de0777 )
    {
        Py_DECREF( frame_2a6cf001336c8b74b307023d13de0777 );
    }
    cache_frame_2a6cf001336c8b74b307023d13de0777 = NULL;

    assertFrameObject( frame_2a6cf001336c8b74b307023d13de0777 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_23_verify_mode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_23_verify_mode );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_24_verify_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_bd6f972d9b334f68825ad3c89076327c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd6f972d9b334f68825ad3c89076327c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd6f972d9b334f68825ad3c89076327c, codeobj_bd6f972d9b334f68825ad3c89076327c, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_bd6f972d9b334f68825ad3c89076327c = cache_frame_bd6f972d9b334f68825ad3c89076327c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd6f972d9b334f68825ad3c89076327c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd6f972d9b334f68825ad3c89076327c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ctx );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_verify );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdlib_to_openssl_verify" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_value );
        tmp_subscript_name_1 = par_value;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__verify_callback );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_callback );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_verify_callback" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_bd6f972d9b334f68825ad3c89076327c->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd6f972d9b334f68825ad3c89076327c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd6f972d9b334f68825ad3c89076327c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd6f972d9b334f68825ad3c89076327c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd6f972d9b334f68825ad3c89076327c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd6f972d9b334f68825ad3c89076327c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd6f972d9b334f68825ad3c89076327c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_bd6f972d9b334f68825ad3c89076327c == cache_frame_bd6f972d9b334f68825ad3c89076327c )
    {
        Py_DECREF( frame_bd6f972d9b334f68825ad3c89076327c );
    }
    cache_frame_bd6f972d9b334f68825ad3c89076327c = NULL;

    assertFrameObject( frame_bd6f972d9b334f68825ad3c89076327c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_24_verify_mode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_24_verify_mode );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_aaa7e727fd37b30c4eee85ad1c7b31d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aaa7e727fd37b30c4eee85ad1c7b31d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aaa7e727fd37b30c4eee85ad1c7b31d6, codeobj_aaa7e727fd37b30c4eee85ad1c7b31d6, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_aaa7e727fd37b30c4eee85ad1c7b31d6 = cache_frame_aaa7e727fd37b30c4eee85ad1c7b31d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aaa7e727fd37b30c4eee85ad1c7b31d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aaa7e727fd37b30c4eee85ad1c7b31d6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_aaa7e727fd37b30c4eee85ad1c7b31d6->m_frame.f_lineno = 419;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_set_default_verify_paths );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aaa7e727fd37b30c4eee85ad1c7b31d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aaa7e727fd37b30c4eee85ad1c7b31d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aaa7e727fd37b30c4eee85ad1c7b31d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aaa7e727fd37b30c4eee85ad1c7b31d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aaa7e727fd37b30c4eee85ad1c7b31d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aaa7e727fd37b30c4eee85ad1c7b31d6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_aaa7e727fd37b30c4eee85ad1c7b31d6 == cache_frame_aaa7e727fd37b30c4eee85ad1c7b31d6 )
    {
        Py_DECREF( frame_aaa7e727fd37b30c4eee85ad1c7b31d6 );
    }
    cache_frame_aaa7e727fd37b30c4eee85ad1c7b31d6 = NULL;

    assertFrameObject( frame_aaa7e727fd37b30c4eee85ad1c7b31d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_26_set_ciphers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ciphers = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_81954b9372ce54f70c49a111ad41bfe2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_81954b9372ce54f70c49a111ad41bfe2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81954b9372ce54f70c49a111ad41bfe2, codeobj_81954b9372ce54f70c49a111ad41bfe2, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_81954b9372ce54f70c49a111ad41bfe2 = cache_frame_81954b9372ce54f70c49a111ad41bfe2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81954b9372ce54f70c49a111ad41bfe2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81954b9372ce54f70c49a111ad41bfe2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_ciphers );
        tmp_isinstance_inst_1 = par_ciphers;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 422;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_ciphers );
            tmp_called_instance_1 = par_ciphers;
            frame_81954b9372ce54f70c49a111ad41bfe2->m_frame.f_lineno = 423;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 423;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ciphers;
                assert( old != NULL );
                par_ciphers = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ctx );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ciphers );
        tmp_args_element_name_1 = par_ciphers;
        frame_81954b9372ce54f70c49a111ad41bfe2->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_cipher_list, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81954b9372ce54f70c49a111ad41bfe2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81954b9372ce54f70c49a111ad41bfe2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81954b9372ce54f70c49a111ad41bfe2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81954b9372ce54f70c49a111ad41bfe2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81954b9372ce54f70c49a111ad41bfe2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81954b9372ce54f70c49a111ad41bfe2,
        type_description_1,
        par_self,
        par_ciphers
    );


    // Release cached frame.
    if ( frame_81954b9372ce54f70c49a111ad41bfe2 == cache_frame_81954b9372ce54f70c49a111ad41bfe2 )
    {
        Py_DECREF( frame_81954b9372ce54f70c49a111ad41bfe2 );
    }
    cache_frame_81954b9372ce54f70c49a111ad41bfe2 = NULL;

    assertFrameObject( frame_81954b9372ce54f70c49a111ad41bfe2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_26_set_ciphers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

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

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_26_set_ciphers );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cafile = python_pars[ 1 ];
    PyObject *par_capath = python_pars[ 2 ];
    PyObject *par_cadata = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_f46ed31e09d2b50291cec9d86d1295b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f46ed31e09d2b50291cec9d86d1295b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f46ed31e09d2b50291cec9d86d1295b0, codeobj_f46ed31e09d2b50291cec9d86d1295b0, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f46ed31e09d2b50291cec9d86d1295b0 = cache_frame_f46ed31e09d2b50291cec9d86d1295b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f46ed31e09d2b50291cec9d86d1295b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f46ed31e09d2b50291cec9d86d1295b0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_cafile );
        tmp_compexpr_left_1 = par_cafile;
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
            CHECK_OBJECT( par_cafile );
            tmp_called_instance_1 = par_cafile;
            frame_f46ed31e09d2b50291cec9d86d1295b0->m_frame.f_lineno = 428;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 428;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cafile;
                assert( old != NULL );
                par_cafile = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_capath );
        tmp_compexpr_left_2 = par_capath;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( par_capath );
            tmp_called_instance_2 = par_capath;
            frame_f46ed31e09d2b50291cec9d86d1295b0->m_frame.f_lineno = 430;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_capath;
                assert( old != NULL );
                par_capath = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_cafile );
        tmp_args_element_name_1 = par_cafile;
        CHECK_OBJECT( par_capath );
        tmp_args_element_name_2 = par_capath;
        frame_f46ed31e09d2b50291cec9d86d1295b0->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_load_verify_locations, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_cadata );
        tmp_compexpr_left_3 = par_cadata;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ctx );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_load_verify_locations );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_BytesIO );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesIO );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BytesIO" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 433;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( par_cadata );
            tmp_args_element_name_4 = par_cadata;
            frame_f46ed31e09d2b50291cec9d86d1295b0->m_frame.f_lineno = 433;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 433;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_f46ed31e09d2b50291cec9d86d1295b0->m_frame.f_lineno = 433;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 433;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f46ed31e09d2b50291cec9d86d1295b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f46ed31e09d2b50291cec9d86d1295b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f46ed31e09d2b50291cec9d86d1295b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f46ed31e09d2b50291cec9d86d1295b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f46ed31e09d2b50291cec9d86d1295b0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f46ed31e09d2b50291cec9d86d1295b0,
        type_description_1,
        par_self,
        par_cafile,
        par_capath,
        par_cadata
    );


    // Release cached frame.
    if ( frame_f46ed31e09d2b50291cec9d86d1295b0 == cache_frame_f46ed31e09d2b50291cec9d86d1295b0 )
    {
        Py_DECREF( frame_f46ed31e09d2b50291cec9d86d1295b0 );
    }
    cache_frame_f46ed31e09d2b50291cec9d86d1295b0 = NULL;

    assertFrameObject( frame_f46ed31e09d2b50291cec9d86d1295b0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_27_load_verify_locations );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cafile );
    Py_DECREF( par_cafile );
    par_cafile = NULL;

    CHECK_OBJECT( (PyObject *)par_capath );
    Py_DECREF( par_capath );
    par_capath = NULL;

    CHECK_OBJECT( (PyObject *)par_cadata );
    Py_DECREF( par_cadata );
    par_cadata = NULL;

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

    Py_XDECREF( par_cafile );
    par_cafile = NULL;

    Py_XDECREF( par_capath );
    par_capath = NULL;

    CHECK_OBJECT( (PyObject *)par_cadata );
    Py_DECREF( par_cadata );
    par_cadata = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_27_load_verify_locations );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_certfile = python_pars[ 1 ];
    PyObject *par_keyfile = python_pars[ 2 ];
    struct Nuitka_CellObject *par_password = PyCell_NEW1( python_pars[ 3 ] );
    struct Nuitka_FrameObject *frame_12ccbd80afbd6523b4a96764284b6c96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12ccbd80afbd6523b4a96764284b6c96 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_12ccbd80afbd6523b4a96764284b6c96, codeobj_12ccbd80afbd6523b4a96764284b6c96, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_12ccbd80afbd6523b4a96764284b6c96 = cache_frame_12ccbd80afbd6523b4a96764284b6c96;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12ccbd80afbd6523b4a96764284b6c96 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12ccbd80afbd6523b4a96764284b6c96 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_certfile );
        tmp_args_element_name_1 = par_certfile;
        frame_12ccbd80afbd6523b4a96764284b6c96->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_use_certificate_chain_file, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_password ) );
        tmp_compexpr_left_1 = PyCell_GET( par_password );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ctx );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda(  );

            ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] = par_password;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] );


            frame_12ccbd80afbd6523b4a96764284b6c96->m_frame.f_lineno = 438;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_passwd_cb, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__ctx );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_use_privatekey_file );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_keyfile );
        tmp_or_left_value_1 = par_keyfile;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 439;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_certfile );
        tmp_or_right_value_1 = par_certfile;
        tmp_args_element_name_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_3 = tmp_or_left_value_1;
        or_end_1:;
        frame_12ccbd80afbd6523b4a96764284b6c96->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12ccbd80afbd6523b4a96764284b6c96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12ccbd80afbd6523b4a96764284b6c96 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12ccbd80afbd6523b4a96764284b6c96, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12ccbd80afbd6523b4a96764284b6c96->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12ccbd80afbd6523b4a96764284b6c96, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12ccbd80afbd6523b4a96764284b6c96,
        type_description_1,
        par_self,
        par_certfile,
        par_keyfile,
        par_password
    );


    // Release cached frame.
    if ( frame_12ccbd80afbd6523b4a96764284b6c96 == cache_frame_12ccbd80afbd6523b4a96764284b6c96 )
    {
        Py_DECREF( frame_12ccbd80afbd6523b4a96764284b6c96 );
    }
    cache_frame_12ccbd80afbd6523b4a96764284b6c96 = NULL;

    assertFrameObject( frame_12ccbd80afbd6523b4a96764284b6c96 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_max_length = python_pars[ 0 ];
    PyObject *par_prompt_twice = python_pars[ 1 ];
    PyObject *par_userdata = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_be496bdd129e370b14254a72f181de5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be496bdd129e370b14254a72f181de5a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be496bdd129e370b14254a72f181de5a, codeobj_be496bdd129e370b14254a72f181de5a, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be496bdd129e370b14254a72f181de5a = cache_frame_be496bdd129e370b14254a72f181de5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be496bdd129e370b14254a72f181de5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be496bdd129e370b14254a72f181de5a ) == 2 ); // Frame stack

    // Framed code:
    if ( PyCell_GET( self->m_closure[0] ) == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 438;
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyCell_GET( self->m_closure[0] );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be496bdd129e370b14254a72f181de5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be496bdd129e370b14254a72f181de5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be496bdd129e370b14254a72f181de5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be496bdd129e370b14254a72f181de5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be496bdd129e370b14254a72f181de5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be496bdd129e370b14254a72f181de5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be496bdd129e370b14254a72f181de5a,
        type_description_1,
        par_max_length,
        par_prompt_twice,
        par_userdata,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_be496bdd129e370b14254a72f181de5a == cache_frame_be496bdd129e370b14254a72f181de5a )
    {
        Py_DECREF( frame_be496bdd129e370b14254a72f181de5a );
    }
    cache_frame_be496bdd129e370b14254a72f181de5a = NULL;

    assertFrameObject( frame_be496bdd129e370b14254a72f181de5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_max_length );
    Py_DECREF( par_max_length );
    par_max_length = NULL;

    CHECK_OBJECT( (PyObject *)par_prompt_twice );
    Py_DECREF( par_prompt_twice );
    par_prompt_twice = NULL;

    CHECK_OBJECT( (PyObject *)par_userdata );
    Py_DECREF( par_userdata );
    par_userdata = NULL;

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

    CHECK_OBJECT( (PyObject *)par_max_length );
    Py_DECREF( par_max_length );
    par_max_length = NULL;

    CHECK_OBJECT( (PyObject *)par_prompt_twice );
    Py_DECREF( par_prompt_twice );
    par_prompt_twice = NULL;

    CHECK_OBJECT( (PyObject *)par_userdata );
    Py_DECREF( par_userdata );
    par_userdata = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sock = python_pars[ 1 ];
    PyObject *par_server_side = python_pars[ 2 ];
    PyObject *par_do_handshake_on_connect = python_pars[ 3 ];
    PyObject *par_suppress_ragged_eofs = python_pars[ 4 ];
    PyObject *par_server_hostname = python_pars[ 5 ];
    PyObject *var_cnx = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_23b7ac1ccc5100548a9274eb1c8bc3d8;
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
    static struct Nuitka_FrameObject *cache_frame_23b7ac1ccc5100548a9274eb1c8bc3d8 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23b7ac1ccc5100548a9274eb1c8bc3d8, codeobj_23b7ac1ccc5100548a9274eb1c8bc3d8, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_23b7ac1ccc5100548a9274eb1c8bc3d8 = cache_frame_23b7ac1ccc5100548a9274eb1c8bc3d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SSL );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Connection );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ctx );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_sock );
        tmp_args_element_name_2 = par_sock;
        frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cnx == NULL );
        var_cnx = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_server_hostname );
        tmp_isinstance_inst_1 = par_server_hostname;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 446;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_text_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_server_hostname );
            tmp_called_instance_1 = par_server_hostname;
            frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 447;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_server_hostname;
                assert( old != NULL );
                par_server_hostname = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_server_hostname );
        tmp_compexpr_left_1 = par_server_hostname;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( var_cnx );
            tmp_called_instance_2 = var_cnx;
            CHECK_OBJECT( par_server_hostname );
            tmp_args_element_name_3 = par_server_hostname;
            frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 450;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_tlsext_host_name, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 450;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_cnx );
        tmp_called_instance_3 = var_cnx;
        frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 452;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_set_connect_state );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( var_cnx );
        tmp_called_instance_4 = var_cnx;
        frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 456;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_do_handshake );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_3 );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_23b7ac1ccc5100548a9274eb1c8bc3d8, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_23b7ac1ccc5100548a9274eb1c8bc3d8, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SSL );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_WantReadError );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooo";
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
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_instance_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_7 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_wait_for_read );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_sock );
            tmp_args_element_name_4 = par_sock;
            CHECK_OBJECT( par_sock );
            tmp_called_instance_5 = par_sock;
            frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 458;
            tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_gettimeout );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 458;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timeout" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 459;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 459;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple, 0 ) );

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 459;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 459;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        goto try_continue_handler_3;
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_6;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 461;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_9 = tmp_mvar_value_6;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_SSL );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Error );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
                {
                    PyObject *old = var_e;
                    var_e = tmp_assign_source_3;
                    Py_INCREF( var_e );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 462;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_10 = tmp_mvar_value_7;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_SSLError );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 462;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_left_name_1 = const_str_digest_2ff175dae94b767efe83d915c1b97f5f;
                CHECK_OBJECT( var_e );
                tmp_right_name_1 = var_e;
                tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 462;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 462;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 462;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 462;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_29_wrap_socket );
            return NULL;
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
            goto branch_end_5;
            branch_no_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 455;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame) frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
            branch_end_5:;
        }
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_29_wrap_socket );
    return NULL;
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
    // try continue handler code:
    try_continue_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto loop_start_1;
    // End of try:
    // End of try:
    try_end_1:;
    goto loop_end_1;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_WrappedSocket );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WrappedSocket );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WrappedSocket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 465;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_cnx );
        tmp_args_element_name_7 = var_cnx;
        CHECK_OBJECT( par_sock );
        tmp_args_element_name_8 = par_sock;
        frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23b7ac1ccc5100548a9274eb1c8bc3d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23b7ac1ccc5100548a9274eb1c8bc3d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23b7ac1ccc5100548a9274eb1c8bc3d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23b7ac1ccc5100548a9274eb1c8bc3d8,
        type_description_1,
        par_self,
        par_sock,
        par_server_side,
        par_do_handshake_on_connect,
        par_suppress_ragged_eofs,
        par_server_hostname,
        var_cnx,
        var_e
    );


    // Release cached frame.
    if ( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 == cache_frame_23b7ac1ccc5100548a9274eb1c8bc3d8 )
    {
        Py_DECREF( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 );
    }
    cache_frame_23b7ac1ccc5100548a9274eb1c8bc3d8 = NULL;

    assertFrameObject( frame_23b7ac1ccc5100548a9274eb1c8bc3d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_29_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    CHECK_OBJECT( (PyObject *)par_do_handshake_on_connect );
    Py_DECREF( par_do_handshake_on_connect );
    par_do_handshake_on_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)var_cnx );
    Py_DECREF( var_cnx );
    var_cnx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    CHECK_OBJECT( (PyObject *)par_do_handshake_on_connect );
    Py_DECREF( par_do_handshake_on_connect );
    par_do_handshake_on_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

    Py_XDECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( var_cnx );
    var_cnx = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_29_wrap_socket );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_30__verify_callback( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cnx = python_pars[ 0 ];
    PyObject *par_x509 = python_pars[ 1 ];
    PyObject *par_err_no = python_pars[ 2 ];
    PyObject *par_err_depth = python_pars[ 3 ];
    PyObject *par_return_code = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_37fc30292c28d60eac680261801a8ccf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_37fc30292c28d60eac680261801a8ccf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37fc30292c28d60eac680261801a8ccf, codeobj_37fc30292c28d60eac680261801a8ccf, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_37fc30292c28d60eac680261801a8ccf = cache_frame_37fc30292c28d60eac680261801a8ccf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37fc30292c28d60eac680261801a8ccf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37fc30292c28d60eac680261801a8ccf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_err_no );
        tmp_compexpr_left_1 = par_err_no;
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37fc30292c28d60eac680261801a8ccf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_37fc30292c28d60eac680261801a8ccf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37fc30292c28d60eac680261801a8ccf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37fc30292c28d60eac680261801a8ccf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37fc30292c28d60eac680261801a8ccf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37fc30292c28d60eac680261801a8ccf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37fc30292c28d60eac680261801a8ccf,
        type_description_1,
        par_cnx,
        par_x509,
        par_err_no,
        par_err_depth,
        par_return_code
    );


    // Release cached frame.
    if ( frame_37fc30292c28d60eac680261801a8ccf == cache_frame_37fc30292c28d60eac680261801a8ccf )
    {
        Py_DECREF( frame_37fc30292c28d60eac680261801a8ccf );
    }
    cache_frame_37fc30292c28d60eac680261801a8ccf = NULL;

    assertFrameObject( frame_37fc30292c28d60eac680261801a8ccf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_30__verify_callback );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cnx );
    Py_DECREF( par_cnx );
    par_cnx = NULL;

    CHECK_OBJECT( (PyObject *)par_x509 );
    Py_DECREF( par_x509 );
    par_x509 = NULL;

    CHECK_OBJECT( (PyObject *)par_err_no );
    Py_DECREF( par_err_no );
    par_err_no = NULL;

    CHECK_OBJECT( (PyObject *)par_err_depth );
    Py_DECREF( par_err_depth );
    par_err_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_return_code );
    Py_DECREF( par_return_code );
    par_return_code = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cnx );
    Py_DECREF( par_cnx );
    par_cnx = NULL;

    CHECK_OBJECT( (PyObject *)par_x509 );
    Py_DECREF( par_x509 );
    par_x509 = NULL;

    CHECK_OBJECT( (PyObject *)par_err_no );
    Py_DECREF( par_err_no );
    par_err_no = NULL;

    CHECK_OBJECT( (PyObject *)par_err_depth );
    Py_DECREF( par_err_depth );
    par_err_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_return_code );
    Py_DECREF( par_return_code );
    par_return_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_30__verify_callback );
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



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_10_recv_into(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_10_recv_into,
        const_str_plain_recv_into,
#if PYTHON_VERSION >= 300
        const_str_digest_ea149be6088931c3910923696f83d36a,
#endif
        codeobj_af8e88885c2ca8ed8d2a189cc5613080,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_11_settimeout(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_11_settimeout,
        const_str_plain_settimeout,
#if PYTHON_VERSION >= 300
        const_str_digest_9dcb336ca353f810aa0d31921e9fdfb0,
#endif
        codeobj_3da690d71aa4383ec641eb09fb54048d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_12__send_until_done(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_12__send_until_done,
        const_str_plain__send_until_done,
#if PYTHON_VERSION >= 300
        const_str_digest_a3fd3629b3a2374b7b38e7bf3e032130,
#endif
        codeobj_5d8c421dead0e17505da0c5b425d090b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_13_sendall(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_13_sendall,
        const_str_plain_sendall,
#if PYTHON_VERSION >= 300
        const_str_digest_fcee667ed9294484931a59a6be1401a4,
#endif
        codeobj_fa2c2ee91e2a42637be105db19b53be4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_14_shutdown(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_14_shutdown,
        const_str_plain_shutdown,
#if PYTHON_VERSION >= 300
        const_str_digest_5de90513b7e726b1a929b0328fda608e,
#endif
        codeobj_d6b46aa887d4bbb86feb6d6be7d655c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_15_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_15_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_41dbd4a0c394791e01054bb237449a0d,
#endif
        codeobj_e95b329e74e6109135372ac516f829df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_16_getpeercert( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_16_getpeercert,
        const_str_plain_getpeercert,
#if PYTHON_VERSION >= 300
        const_str_digest_47af4678a28313b5af6e38cd603ce3ad,
#endif
        codeobj_3ec8316db7de6614080bc5a5cc13c50b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_17__reuse(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_17__reuse,
        const_str_plain__reuse,
#if PYTHON_VERSION >= 300
        const_str_digest_ca64980ab25a7902ff8128128fe6cfe2,
#endif
        codeobj_9bbe48c613271b80c930fe8c6f23d517,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_18__drop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_18__drop,
        const_str_plain__drop,
#if PYTHON_VERSION >= 300
        const_str_digest_8a27e0e8026a3feed39d29711dd67238,
#endif
        codeobj_a54f033d67d96dc844ca091cdfa3f6f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_19_makefile( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_19_makefile,
        const_str_plain_makefile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bab604f77234b61f2aacccab9af9f820,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3,
        const_str_plain_inject_into_urllib3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_12aac1d4dbdc9de69bb3ebe79767f75f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_c2ca9ee709c1d2285dbebbfa7f97f083,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_20___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_e69704a3b57bdbeeda0fb8ad90040f41,
#endif
        codeobj_74d7f224a6c7edbc95cf68acf5f60710,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_21_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_21_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 300
        const_str_digest_00536486d83401fa82a08b0e79354846,
#endif
        codeobj_9370076f231f8f4d8a812bab54fec5db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_22_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_22_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 300
        const_str_digest_00536486d83401fa82a08b0e79354846,
#endif
        codeobj_2821a9f85dbf29b09ca836df1562e115,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_23_verify_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_23_verify_mode,
        const_str_plain_verify_mode,
#if PYTHON_VERSION >= 300
        const_str_digest_e5467f76d8c624a1dc2eb95b9944b986,
#endif
        codeobj_2a6cf001336c8b74b307023d13de0777,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_24_verify_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_24_verify_mode,
        const_str_plain_verify_mode,
#if PYTHON_VERSION >= 300
        const_str_digest_e5467f76d8c624a1dc2eb95b9944b986,
#endif
        codeobj_bd6f972d9b334f68825ad3c89076327c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths,
        const_str_plain_set_default_verify_paths,
#if PYTHON_VERSION >= 300
        const_str_digest_594453327b8729538381766512c9452b,
#endif
        codeobj_aaa7e727fd37b30c4eee85ad1c7b31d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_26_set_ciphers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_26_set_ciphers,
        const_str_plain_set_ciphers,
#if PYTHON_VERSION >= 300
        const_str_digest_33c018117b9b7eb17081ee25bae37674,
#endif
        codeobj_81954b9372ce54f70c49a111ad41bfe2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations,
        const_str_plain_load_verify_locations,
#if PYTHON_VERSION >= 300
        const_str_digest_0ed7cab482b4eed6799e2697fa4599f9,
#endif
        codeobj_f46ed31e09d2b50291cec9d86d1295b0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain,
        const_str_plain_load_cert_chain,
#if PYTHON_VERSION >= 300
        const_str_digest_abba734a6a1803f203aec1a806eaf7ae,
#endif
        codeobj_12ccbd80afbd6523b4a96764284b6c96,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_fdf2dae424c2ab29e28d95112eab1065,
#endif
        codeobj_be496bdd129e370b14254a72f181de5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_29_wrap_socket,
        const_str_plain_wrap_socket,
#if PYTHON_VERSION >= 300
        const_str_digest_2d708b82df3c36741559ca09209c9f6c,
#endif
        codeobj_23b7ac1ccc5100548a9274eb1c8bc3d8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3,
        const_str_plain_extract_from_urllib3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dd35cc3ed9d16dbef18463d1f9f9ce1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_7ac562d65cde2e151e56b218341d4cdd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_30__verify_callback(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_30__verify_callback,
        const_str_plain__verify_callback,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_37fc30292c28d60eac680261801a8ccf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met,
        const_str_plain__validate_dependencies_met,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0481c6a2ecd1f0a63bf775034ad27a4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_20c12b8a448bbfc5cd8c17b869421e3c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib,
        const_str_plain__dnsname_to_stdlib,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_069d45263570ab6a9467dc4444e19005,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_b0cc3d29be4aca6ee1b850699a83d626,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode,
        const_str_plain_idna_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_584b1f1a72cb12d2c289fc29d118df4a,
#endif
        codeobj_8ce5536ee9a07b8faf62511e8892e565,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_071e6215d1e4e670779a10c8173678ae,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name,
        const_str_plain_get_subj_alt_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3af905b6d38730600a910e1c08fd28cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_ea524135603414934edfdf9a140120da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_5818b30a83a023d23de94fdb8555bc21,
#endif
        codeobj_6616a5ba9e91599e644dc9bd11fd7a89,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_7_fileno(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_7_fileno,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 300
        const_str_digest_3ae5eb58682e3453bcd445e251529344,
#endif
        codeobj_bd803ed3d0842e24b253c889b4ac06a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_8__decref_socketios(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_8__decref_socketios,
        const_str_plain__decref_socketios,
#if PYTHON_VERSION >= 300
        const_str_digest_3337e517587b2ad7aa8c6fd0bb6ef6e7,
#endif
        codeobj_08e72eaeaee907b730ffeb4bdb21507e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_9_recv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_9_recv,
        const_str_plain_recv,
#if PYTHON_VERSION >= 300
        const_str_digest_8b472aa2b2e397bd3da940bb18c68211,
#endif
        codeobj_714d81f0a959aaaf0ea74d8b12eeb647,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$contrib$pyopenssl =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.contrib.pyopenssl",
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
MOD_ENTRY_DECL(urllib3$contrib$pyopenssl)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(urllib3$contrib$pyopenssl)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$contrib$pyopenssl );
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
    puts("urllib3.contrib.pyopenssl: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.pyopenssl: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.pyopenssl: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$contrib$pyopenssl" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$contrib$pyopenssl = Py_InitModule4(
        "urllib3.contrib.pyopenssl",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$contrib$pyopenssl = PyModule_Create( &mdef_urllib3$contrib$pyopenssl );
#endif

    moduledict_urllib3$contrib$pyopenssl = MODULE_DICT( module_urllib3$contrib$pyopenssl );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$contrib$pyopenssl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$contrib$pyopenssl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$pyopenssl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$pyopenssl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$contrib$pyopenssl );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9b140d54e682de757186c632bf3beb69, module_urllib3$contrib$pyopenssl );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_c9d941dfe9c7d6be98931baf7cec4803;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$contrib$pyopenssl_54 = NULL;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_urllib3$contrib$pyopenssl_250 = NULL;
    struct Nuitka_FrameObject *frame_2c7c8d5e74896da0a7e99eea9ca5e223_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 = NULL;
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
    PyObject *locals_urllib3$contrib$pyopenssl_386 = NULL;
    struct Nuitka_FrameObject *frame_bccdf894522a0a7d1094f23127224044_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bccdf894522a0a7d1094f23127224044_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_2f7e5e6bd20de78d1a826b224bb68950;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_54341b24d6b09584d9640d3dd2a360ff;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c9d941dfe9c7d6be98931baf7cec4803 = MAKE_MODULE_FRAME( codeobj_c9d941dfe9c7d6be98931baf7cec4803, module_urllib3$contrib$pyopenssl );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c9d941dfe9c7d6be98931baf7cec4803 );
    assert( Py_REFCNT( frame_c9d941dfe9c7d6be98931baf7cec4803 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_54341b24d6b09584d9640d3dd2a360ff;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 44;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_36dfc40fd76fef32a3245e24bfe74ea9;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 46;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_cryptography;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_x509_tuple;
        tmp_level_name_2 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 47;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_x509 );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_ee742e011576d32d1c182b86832e4555;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_3 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 48;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_backend );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_openssl_backend, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_2b6a6c0099f1f1dd77d2725acd0722df;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain__Certificate_tuple;
        tmp_level_name_4 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 49;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__Certificate );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__Certificate, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_UnsupportedExtension_tuple;
        tmp_level_name_5 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 51;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_UnsupportedExtension );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension, tmp_assign_source_9 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c9d941dfe9c7d6be98931baf7cec4803, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c9d941dfe9c7d6be98931baf7cec4803, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_2;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_dircall_arg1_1;
            tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
            Py_INCREF( tmp_dircall_arg1_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
                tmp_assign_source_10 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
            }
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__bases == NULL );
            tmp_class_creation_1__bases = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = PyDict_New();
            assert( tmp_class_creation_1__class_decl_dict == NULL );
            tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_metaclass_name_1;
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_key_name_1;
            PyObject *tmp_dict_name_1;
            PyObject *tmp_dict_name_2;
            PyObject *tmp_key_name_2;
            nuitka_bool tmp_condition_result_3;
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


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
            Py_DECREF( tmp_type_arg_1 );
            if ( tmp_metaclass_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_metaclass_name_1 );
            condexpr_end_2:;
            condexpr_end_1:;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_bases_name_1 = tmp_class_creation_1__bases;
            tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
            Py_DECREF( tmp_metaclass_name_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__metaclass == NULL );
            tmp_class_creation_1__metaclass = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_condition_result_4;
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


                exception_lineno = 54;

                goto try_except_handler_3;
            }
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
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
            tmp_dictdel_key = const_str_plain_metaclass;
            tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_1 = tmp_class_creation_1__metaclass;
            tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
            tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_kw_name_1;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_source_name_2 = tmp_class_creation_1__metaclass;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 54;

                    goto try_except_handler_3;
                }
                tmp_tuple_element_1 = const_str_plain_UnsupportedExtension;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__bases );
                tmp_tuple_element_1 = tmp_class_creation_1__bases;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
                tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
                frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 54;
                tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 54;

                    goto try_except_handler_3;
                }
                assert( tmp_class_creation_1__prepared == NULL );
                tmp_class_creation_1__prepared = tmp_assign_source_13;
            }
            {
                nuitka_bool tmp_condition_result_6;
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


                    exception_lineno = 54;

                    goto try_except_handler_3;
                }
                tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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


                        exception_lineno = 54;

                        goto try_except_handler_3;
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

                        exception_lineno = 54;

                        goto try_except_handler_3;
                    }
                    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                    tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                    Py_DECREF( tmp_right_name_1 );
                    if ( tmp_raise_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 54;

                        goto try_except_handler_3;
                    }
                    exception_type = tmp_raise_type_1;
                    Py_INCREF( tmp_raise_type_1 );
                    exception_value = tmp_raise_value_1;
                    exception_lineno = 54;
                    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                    goto try_except_handler_3;
                }
                branch_no_4:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_14;
                tmp_assign_source_14 = PyDict_New();
                assert( tmp_class_creation_1__prepared == NULL );
                tmp_class_creation_1__prepared = tmp_assign_source_14;
            }
            branch_end_3:;
        }
        {
            PyObject *tmp_assign_source_15;
            {
                PyObject *tmp_set_locals_1;
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_set_locals_1 = tmp_class_creation_1__prepared;
                locals_urllib3$contrib$pyopenssl_54 = tmp_set_locals_1;
                Py_INCREF( tmp_set_locals_1 );
            }
            // Tried code:
            // Tried code:
            tmp_dictset_value = const_str_digest_9b140d54e682de757186c632bf3beb69;
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_54, const_str_plain___module__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_5;
            }
            tmp_dictset_value = const_str_plain_UnsupportedExtension;
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_54, const_str_plain___qualname__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_5;
            }
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( tmp_class_creation_1__bases );
                tmp_compexpr_left_2 = tmp_class_creation_1__bases;
                tmp_compexpr_right_2 = const_tuple_type_Exception_tuple;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 54;

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
                tmp_dictset_value = const_tuple_type_Exception_tuple;
                tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_54, const_str_plain___orig_bases__, tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 54;

                    goto try_except_handler_5;
                }
                branch_no_5:;
            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_2;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_called_name_2 = tmp_class_creation_1__metaclass;
                tmp_tuple_element_3 = const_str_plain_UnsupportedExtension;
                tmp_args_name_2 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__bases );
                tmp_tuple_element_3 = tmp_class_creation_1__bases;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
                tmp_tuple_element_3 = locals_urllib3$contrib$pyopenssl_54;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
                tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
                frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 54;
                tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 54;

                    goto try_except_handler_5;
                }
                assert( outline_0_var___class__ == NULL );
                outline_0_var___class__ = tmp_assign_source_16;
            }
            CHECK_OBJECT( outline_0_var___class__ );
            tmp_assign_source_15 = outline_0_var___class__;
            Py_INCREF( tmp_assign_source_15 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_5:;
            Py_DECREF( locals_urllib3$contrib$pyopenssl_54 );
            locals_urllib3$contrib$pyopenssl_54 = NULL;
            goto try_return_handler_4;
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

            Py_DECREF( locals_urllib3$contrib$pyopenssl_54 );
            locals_urllib3$contrib$pyopenssl_54 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_4;
            // End of try:
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
            Py_DECREF( outline_0_var___class__ );
            outline_0_var___class__ = NULL;

            goto outline_result_1;
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

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
            return MOD_RETURN_VALUE( NULL );
            outline_exception_1:;
            exception_lineno = 54;
            goto try_except_handler_3;
            outline_result_1:;
            UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension, tmp_assign_source_15 );
        }
        goto try_end_2;
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

        goto try_except_handler_2;
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

        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 50;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame) frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_2;
        branch_end_1:;
    }
    goto try_end_3;
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
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_socket;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_timeout_str_plain_error_tuple;
        tmp_level_name_6 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 57;
        tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_timeout );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_error );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_19 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_io;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_BytesIO_tuple;
        tmp_level_name_7 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 58;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_BytesIO );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_BytesIO, tmp_assign_source_20 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_socket;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain__fileobject_tuple;
        tmp_level_name_8 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 61;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_7;
        }
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__fileobject );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject, tmp_assign_source_21 );
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_c9d941dfe9c7d6be98931baf7cec4803, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_c9d941dfe9c7d6be98931baf7cec4803, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
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


            exception_lineno = 62;

            goto try_except_handler_8;
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
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = Py_None;
            UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject, tmp_assign_source_22 );
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_import_name_from_10;
            PyObject *tmp_name_name_9;
            PyObject *tmp_globals_name_9;
            PyObject *tmp_locals_name_9;
            PyObject *tmp_fromlist_name_9;
            PyObject *tmp_level_name_9;
            tmp_name_name_9 = const_str_digest_f5748acc7624a8d3f9bd48b7312e95e1;
            tmp_globals_name_9 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
            tmp_locals_name_9 = Py_None;
            tmp_fromlist_name_9 = const_tuple_str_plain_backport_makefile_tuple;
            tmp_level_name_9 = const_int_pos_2;
            frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 64;
            tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
            if ( tmp_import_name_from_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_8;
            }
            if ( PyModule_Check( tmp_import_name_from_10 ) )
            {
               tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                    tmp_import_name_from_10,
                    (PyObject *)moduledict_urllib3$contrib$pyopenssl,
                    const_str_plain_backport_makefile,
                    const_int_pos_2
                );
            }
            else
            {
               tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_backport_makefile );
            }

            Py_DECREF( tmp_import_name_from_10 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto try_except_handler_8;
            }
            UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_backport_makefile, tmp_assign_source_23 );
        }
        goto branch_end_6;
        branch_no_6:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 60;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame) frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_8;
        branch_end_6:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_logging;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = Py_None;
        tmp_level_name_10 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 66;
        tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_ssl;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = Py_None;
        tmp_level_name_11 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 67;
        tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_packages;
        tmp_globals_name_12 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_six_tuple;
        tmp_level_name_12 = const_int_pos_2;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 68;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_urllib3$contrib$pyopenssl,
                const_str_plain_six,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_six );
        }

        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_sys;
        tmp_globals_name_13 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = Py_None;
        tmp_level_name_13 = const_int_0;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 69;
        tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        assert( !(tmp_assign_source_27 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_empty;
        tmp_globals_name_14 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_util_tuple;
        tmp_level_name_14 = const_int_pos_2;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 71;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_urllib3$contrib$pyopenssl,
                const_str_plain_util,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_util );
        }

        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = LIST_COPY( const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list );
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = Py_True;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PROTOCOL_SSLv23 );
        if ( tmp_dict_key_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_dict_key_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_4;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SSL );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_key_1 );

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SSLv23_METHOD );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_key_1 );

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_31 );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_31 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_5;
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PROTOCOL_TLSv1 );
        if ( tmp_dict_key_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_31 );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_31 );
            Py_DECREF( tmp_dict_key_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_6;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_SSL );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_31 );
            Py_DECREF( tmp_dict_key_2 );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_TLSv1_METHOD );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_31 );
            Py_DECREF( tmp_dict_key_2 );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_31 );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions, tmp_assign_source_31 );
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_attribute_name_2;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_7;
        tmp_attribute_name_1 = const_str_plain_PROTOCOL_TLSv1_1;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_11, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

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
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_8;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SSL );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_attribute_name_2 = const_str_plain_TLSv1_1_METHOD;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_12, tmp_attribute_name_2 );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_9 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_11;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }

            tmp_source_name_15 = tmp_mvar_value_9;
            tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_SSL );
            if ( tmp_source_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_TLSv1_1_METHOD );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_openssl_versions" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_1 = tmp_mvar_value_10;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_11;
            tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_PROTOCOL_TLSv1_1 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_attribute_name_3;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_attribute_name_4;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_12;
        tmp_attribute_name_3 = const_str_plain_PROTOCOL_TLSv1_2;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_17, tmp_attribute_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_13;
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_SSL );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_attribute_name_4 = const_str_plain_TLSv1_2_METHOD;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_18, tmp_attribute_name_4 );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_10 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_source_name_20;
            PyObject *tmp_source_name_21;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }

            tmp_source_name_21 = tmp_mvar_value_14;
            tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SSL );
            if ( tmp_source_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_TLSv1_2_METHOD );
            Py_DECREF( tmp_source_name_20 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
            }

            if ( tmp_mvar_value_15 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_openssl_versions" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_2 = tmp_mvar_value_15;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_16 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = tmp_mvar_value_16;
            tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_PROTOCOL_TLSv1_2 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
        }
        branch_no_8:;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_source_name_25;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_openssl_versions" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;

            goto try_except_handler_9;
        }

        tmp_source_name_23 = tmp_mvar_value_17;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_update );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;

            goto try_except_handler_9;
        }

        tmp_source_name_24 = tmp_mvar_value_18;
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_PROTOCOL_SSLv3 );
        if ( tmp_dict_key_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 91;

            goto try_except_handler_9;
        }
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_dict_key_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;

            goto try_except_handler_9;
        }

        tmp_source_name_26 = tmp_mvar_value_19;
        tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_SSL );
        if ( tmp_source_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_dict_key_3 );

            exception_lineno = 91;

            goto try_except_handler_9;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_SSLv3_METHOD );
        Py_DECREF( tmp_source_name_25 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_dict_key_3 );

            exception_lineno = 91;

            goto try_except_handler_9;
        }
        tmp_args_element_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 91;

            goto try_except_handler_9;
        }
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto try_except_handler_9;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_7;
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

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_9 == NULL )
    {
        exception_keeper_tb_9 = MAKE_TRACEBACK( frame_c9d941dfe9c7d6be98931baf7cec4803, exception_keeper_lineno_9 );
    }
    else if ( exception_keeper_lineno_9 != 0 )
    {
        exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_c9d941dfe9c7d6be98931baf7cec4803, exception_keeper_lineno_9 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
    PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_10;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto try_except_handler_10;
        }
        tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 90;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame) frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_10;
        branch_no_9:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_source_name_28;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_source_name_31;
        PyObject *tmp_source_name_32;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_33;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_34;
        PyObject *tmp_source_name_35;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_36;
        PyObject *tmp_source_name_37;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_20;
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_CERT_NONE );
        if ( tmp_dict_key_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_dict_key_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_21;
        tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_SSL );
        if ( tmp_source_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_key_4 );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_VERIFY_NONE );
        Py_DECREF( tmp_source_name_28 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_key_4 );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_assign_source_32 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_source_name_30 = tmp_mvar_value_22;
        tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_CERT_OPTIONAL );
        if ( tmp_dict_key_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = tmp_mvar_value_23;
        tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_SSL );
        if ( tmp_source_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_5 );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_VERIFY_PEER );
        Py_DECREF( tmp_source_name_31 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_5 );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        Py_DECREF( tmp_dict_key_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_assign_source_32 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_source_name_33 = tmp_mvar_value_24;
        tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_CERT_REQUIRED );
        if ( tmp_dict_key_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_25 == NULL )
        {
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_source_name_35 = tmp_mvar_value_25;
        tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_SSL );
        if ( tmp_source_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_6 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_VERIFY_PEER );
        Py_DECREF( tmp_source_name_34 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_6 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_26 == NULL )
        {
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_6 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_source_name_37 = tmp_mvar_value_26;
        tmp_source_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_SSL );
        if ( tmp_source_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_6 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_VERIFY_FAIL_IF_NO_PEER_CERT );
        Py_DECREF( tmp_source_name_36 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_6 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );
            Py_DECREF( tmp_dict_key_6 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_32, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        Py_DECREF( tmp_dict_key_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_32 );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_27;
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );

            if (unlikely( tmp_mvar_value_27 == NULL ))
            {
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );
            }

            CHECK_OBJECT( tmp_mvar_value_27 );
            tmp_called_instance_1 = tmp_mvar_value_27;
            frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 102;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_34;
        }
        // Tried code:
        tmp_dict_seq_1 = urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_dict_seq_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        tmp_assign_source_33 = TO_DICT( tmp_dict_seq_1, NULL );
        Py_DECREF( tmp_dict_seq_1 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_to_stdlib_verify, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = const_int_pos_16384;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SSL_WRITE_BLOCKSIZE, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_source_name_38;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_source_name_38 = tmp_mvar_value_28;
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_HAS_SNI );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_source_name_39;
        PyObject *tmp_source_name_40;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }

        tmp_source_name_40 = tmp_mvar_value_29;
        tmp_source_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_ssl_ );
        if ( tmp_source_name_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_SSLContext );
        Py_DECREF( tmp_source_name_39 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_SSLContext, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_30;
        frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 112;
        tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple, 0 ) );

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_inject_into_urllib3, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_extract_from_urllib3, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__validate_dependencies_met, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__dnsname_to_stdlib, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_get_subj_alt_name, tmp_assign_source_43 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_44 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_13;
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


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        tmp_condition_result_13 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_14;
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


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_12;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_source_name_41;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_41 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_41, const_str_plain___prepare__ );
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_42;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_42 = tmp_class_creation_2__metaclass;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain___prepare__ );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;

                goto try_except_handler_12;
            }
            tmp_tuple_element_4 = const_str_plain_WrappedSocket;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 250;
            tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_47 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;

                goto try_except_handler_12;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_47;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_43;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_43 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_43, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;

                goto try_except_handler_12;
            }
            tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_44;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 250;

                    goto try_except_handler_12;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_44 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_44 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_44 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 250;

                    goto try_except_handler_12;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 250;

                    goto try_except_handler_12;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 250;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_12;
            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_48;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_urllib3$contrib$pyopenssl_250 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9b140d54e682de757186c632bf3beb69;
        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_dictset_value = const_str_digest_be78399d62208a7b25aea812a1645ac7;
        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        tmp_dictset_value = const_str_plain_WrappedSocket;
        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto try_except_handler_14;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_2c7c8d5e74896da0a7e99eea9ca5e223_2, codeobj_2c7c8d5e74896da0a7e99eea9ca5e223, module_urllib3$contrib$pyopenssl, sizeof(void *) );
        frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 = cache_frame_2c7c8d5e74896da0a7e99eea9ca5e223_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_6___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_7_fileno(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_fileno, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_8__decref_socketios(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain__decref_socketios, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_9_recv(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_recv, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_10_recv_into(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_recv_into, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_11_settimeout(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_settimeout, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_12__send_until_done(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain__send_until_done, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_13_sendall(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_sendall, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_14_shutdown(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_shutdown, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_15_close(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_16_getpeercert( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain_getpeercert, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_17__reuse(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain__reuse, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_18__drop(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain__drop, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_2c7c8d5e74896da0a7e99eea9ca5e223_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_2c7c8d5e74896da0a7e99eea9ca5e223_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2c7c8d5e74896da0a7e99eea9ca5e223_2,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 == cache_frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 )
        {
            Py_DECREF( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 );
        }
        cache_frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 = NULL;

        assertFrameObject( frame_2c7c8d5e74896da0a7e99eea9ca5e223_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_14;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_5 = tmp_class_creation_2__bases;
            tmp_compexpr_right_5 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;

                goto try_except_handler_14;
            }
            tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_13;
            }
            else
            {
                goto branch_no_13;
            }
            branch_yes_13:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_250, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;

                goto try_except_handler_14;
            }
            branch_no_13:;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_WrappedSocket;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_urllib3$contrib$pyopenssl_250;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 250;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;

                goto try_except_handler_14;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_49 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_14;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF( locals_urllib3$contrib$pyopenssl_250 );
        locals_urllib3$contrib$pyopenssl_250 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_urllib3$contrib$pyopenssl_250 );
        locals_urllib3$contrib$pyopenssl_250 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_13;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_13:;
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

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 250;
        goto try_except_handler_12;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_WrappedSocket, tmp_assign_source_49 );
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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

    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_mvar_value_31;
        int tmp_truth_name_3;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fileobject );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fileobject" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_mvar_value_31 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_assign_source_51 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_19_makefile( tmp_defaults_3 );



            UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_makefile, tmp_assign_source_51 );
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_mvar_value_32;
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_backport_makefile );

            if (unlikely( tmp_mvar_value_32 == NULL ))
            {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_backport_makefile );
            }

            if ( tmp_mvar_value_32 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "backport_makefile" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 381;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_52 = tmp_mvar_value_32;
            UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_makefile, tmp_assign_source_52 );
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_makefile );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makefile );
        }

        CHECK_OBJECT( tmp_mvar_value_33 );
        tmp_assattr_name_3 = tmp_mvar_value_33;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_WrappedSocket );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WrappedSocket );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WrappedSocket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = tmp_mvar_value_34;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_makefile, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_53 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
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


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_55 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_21;
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


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_15;
        }
        else
        {
            goto branch_no_15;
        }
        branch_yes_15:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_15;
        }
        branch_no_15:;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_source_name_45;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_45 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_45, const_str_plain___prepare__ );
        tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_46;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_46 = tmp_class_creation_3__metaclass;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain___prepare__ );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;

                goto try_except_handler_15;
            }
            tmp_tuple_element_7 = const_str_plain_PyOpenSSLContext;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_7 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 386;
            tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_56 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;

                goto try_except_handler_15;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_56;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_47;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_47 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_47, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;

                goto try_except_handler_15;
            }
            tmp_condition_result_23 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_17;
            }
            else
            {
                goto branch_no_17;
            }
            branch_yes_17:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_48;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_8 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 386;

                    goto try_except_handler_15;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_48 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_48 == NULL) );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_48 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 386;

                    goto try_except_handler_15;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_8 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 386;

                    goto try_except_handler_15;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 386;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_15;
            }
            branch_no_17:;
        }
        goto branch_end_16;
        branch_no_16:;
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_57;
        }
        branch_end_16:;
    }
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_urllib3$contrib$pyopenssl_386 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9b140d54e682de757186c632bf3beb69;
        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_17;
        }
        tmp_dictset_value = const_str_digest_da6b5f185ded68c9e526279026e68fbc;
        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_17;
        }
        tmp_dictset_value = const_str_plain_PyOpenSSLContext;
        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto try_except_handler_17;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_bccdf894522a0a7d1094f23127224044_3, codeobj_bccdf894522a0a7d1094f23127224044, module_urllib3$contrib$pyopenssl, sizeof(void *) );
        frame_bccdf894522a0a7d1094f23127224044_3 = cache_frame_bccdf894522a0a7d1094f23127224044_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_bccdf894522a0a7d1094f23127224044_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_bccdf894522a0a7d1094f23127224044_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_20___init__(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_3;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$contrib$pyopenssl_386, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_24 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_7;
            }
            else
            {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_name_7 = PyObject_GetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_property );

            if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 398;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_2 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_21_options(  );



            frame_bccdf894522a0a7d1094f23127224044_3->m_frame.f_lineno = 398;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_name_8 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_3 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_21_options(  );



            frame_bccdf894522a0a7d1094f23127224044_3->m_frame.f_lineno = 398;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_options, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_4;
            tmp_called_instance_3 = PyObject_GetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_options );

            if ( tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "options" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_4 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_22_options(  );



            frame_bccdf894522a0a7d1094f23127224044_3->m_frame.f_lineno = 402;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_setter, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_options, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$contrib$pyopenssl_386, const_str_plain_property );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_25 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_8;
            }
            else
            {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_name_9 = PyObject_GetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_property );

            if ( tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 407;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_23_verify_mode(  );



            frame_bccdf894522a0a7d1094f23127224044_3->m_frame.f_lineno = 407;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_name_10 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_6 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_23_verify_mode(  );



            frame_bccdf894522a0a7d1094f23127224044_3->m_frame.f_lineno = 407;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_verify_mode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_7;
            tmp_called_instance_4 = PyObject_GetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_verify_mode );

            if ( tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "verify_mode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_args_element_name_7 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_24_verify_mode(  );



            frame_bccdf894522a0a7d1094f23127224044_3->m_frame.f_lineno = 411;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_setter, call_args );
            }

            Py_DECREF( tmp_called_instance_4 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_verify_mode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_set_default_verify_paths, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_26_set_ciphers(  );



        tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_set_ciphers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_none_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_load_verify_locations, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_load_cert_chain, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_false_true_true_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain_wrap_socket, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bccdf894522a0a7d1094f23127224044_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bccdf894522a0a7d1094f23127224044_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_bccdf894522a0a7d1094f23127224044_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_bccdf894522a0a7d1094f23127224044_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_bccdf894522a0a7d1094f23127224044_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_bccdf894522a0a7d1094f23127224044_3,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_bccdf894522a0a7d1094f23127224044_3 == cache_frame_bccdf894522a0a7d1094f23127224044_3 )
        {
            Py_DECREF( frame_bccdf894522a0a7d1094f23127224044_3 );
        }
        cache_frame_bccdf894522a0a7d1094f23127224044_3 = NULL;

        assertFrameObject( frame_bccdf894522a0a7d1094f23127224044_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_17;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_6 = tmp_class_creation_3__bases;
            tmp_compexpr_right_6 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;

                goto try_except_handler_17;
            }
            tmp_condition_result_26 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_18;
            }
            else
            {
                goto branch_no_18;
            }
            branch_yes_18:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_urllib3$contrib$pyopenssl_386, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;

                goto try_except_handler_17;
            }
            branch_no_18:;
        }
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_11 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = const_str_plain_PyOpenSSLContext;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_9 );
            tmp_tuple_element_9 = locals_urllib3$contrib$pyopenssl_386;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame.f_lineno = 386;
            tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;

                goto try_except_handler_17;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_59;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_58 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_58 );
        goto try_return_handler_17;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF( locals_urllib3$contrib$pyopenssl_386 );
        locals_urllib3$contrib$pyopenssl_386 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_urllib3$contrib$pyopenssl_386 );
        locals_urllib3$contrib$pyopenssl_386 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_16;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_16:;
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

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 386;
        goto try_except_handler_15;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_PyOpenSSLContext, tmp_assign_source_58 );
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9d941dfe9c7d6be98931baf7cec4803 );
#endif
    popFrameStack();

    assertFrameObject( frame_c9d941dfe9c7d6be98931baf7cec4803 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9d941dfe9c7d6be98931baf7cec4803 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9d941dfe9c7d6be98931baf7cec4803, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9d941dfe9c7d6be98931baf7cec4803->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9d941dfe9c7d6be98931baf7cec4803, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
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
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_30__verify_callback(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__verify_callback, tmp_assign_source_60 );
    }

    return MOD_RETURN_VALUE( module_urllib3$contrib$pyopenssl );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
