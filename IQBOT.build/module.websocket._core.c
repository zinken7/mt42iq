/* Generated code for Python module 'websocket._core'
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

/* The "_module_websocket$_core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_core;
PyDictObject *moduledict_websocket$_core;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_threading;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_str_plain_send_frame;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_STATUS_NORMAL;
static PyObject *const_str_digest_fba52b8e7aa269e1686790188f38aa7a;
static PyObject *const_str_plain_websock;
extern PyObject *const_str_plain_start_time;
extern PyObject *const_str_plain_skip_utf8_validation;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_connected;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_3042c2f2559e37eab8b8954a1e29693c;
static PyObject *const_str_digest_529f11d68664c0798804a09414549c3a;
static PyObject *const_str_plain_recv_status;
static PyObject *const_str_digest_4e771a29efeadd7113d848547aecca1b;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_ValueError;
static PyObject *const_str_digest_d991215701b78fcdc373b38a0c13a0f3;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_sock_timeout;
extern PyObject *const_str_plain_recv_frame;
extern PyObject *const_str_plain_SHUT_RDWR;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_redirect_limit_int_pos_3_tuple;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_734ce3acdb53ad82fc8e207f77a2ee3f;
static PyObject *const_str_digest_9e3ea1bd785ec4ccebc61853c3cd87db;
static PyObject *const_str_digest_7f4c86f8491d35689a71fd34466d34c1;
extern PyObject *const_str_plain_pong;
static PyObject *const_str_digest_ba8ba742aeea0662d4907c5d20e710b9;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_digest_67521a11303b3e4673ef44c4b1c6b1c4;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_unpack;
extern PyObject *const_str_plain_sslopt;
extern PyObject *const_str_plain__abnf;
static PyObject *const_tuple_str_digest_fba52b8e7aa269e1686790188f38aa7a_tuple;
extern PyObject *const_str_plain__socket;
static PyObject *const_str_digest_538150842579c545beb428bd28298206;
static PyObject *const_tuple_str_plain_self_str_plain_payload_tuple;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain__ssl_compat;
static PyObject *const_str_plain__handshake;
extern PyObject *const_str_plain_gettimeout;
extern PyObject *const_str_plain_NoLock;
extern PyObject *const_str_plain_WebSocketConnectionClosedException;
static PyObject *const_str_plain_cont_frame;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
extern PyObject *const_str_plain_subprotocol;
static PyObject *const_str_digest_e458b7f1a62dbfd1601155522fc6ee9e;
static PyObject *const_tuple_str_plain_self_str_plain_opcode_str_plain_data_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_OPCODE_PING;
static PyObject *const_tuple_str_plain_self_str_plain_control_frame_str_plain_frame_tuple;
extern PyObject *const_str_plain_payload;
extern PyObject *const_str_plain_recv_data_frame;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_validate;
static PyObject *const_str_digest_824ced8f7427669ab996fc433ea4f9e2;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_next;
static PyObject *const_tuple_e4d7f450bdf58dc548d571fcd4719d40_tuple;
static PyObject *const_str_digest_32c9987a16d6f5701d99ba7519d26e43;
static PyObject *const_str_digest_70c0611b99f8d24bc2d70a039a302b41;
static PyObject *const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple;
extern PyObject *const_str_plain_repr;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_e32c22c56feb1e34cef7bdd4f53680e2;
extern PyObject *const_str_plain_OPCODE_TEXT;
extern PyObject *const_str_plain_frame;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_connect;
static PyObject *const_str_digest_6e9795cf586331f96119f6ef3d51ec6a;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_readlock;
static PyObject *const_str_plain_send_binary;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_handshake;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain__http;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_enable_multithread;
extern PyObject *const_str_plain_len;
static PyObject *const_str_digest_18924d73a76baeb5de82bcee7b2ee5b3;
extern PyObject *const_str_plain_extract;
extern PyObject *const_str_plain_add;
static PyObject *const_str_digest_fdcaf528b51c0116a80d55b15e834455;
extern PyObject *const_tuple_str_plain_self_str_plain_func_tuple;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_sockopt;
extern PyObject *const_str_plain_fire_cont_frame;
static PyObject *const_tuple_0f4a75edd699ebf069968be8c458305d_tuple;
static PyObject *const_str_digest_5952a84e708819b40485bd59cfa19d62;
static PyObject *const_str_digest_af225623490e748aeda42e11bb06770b;
extern PyObject *const_str_plain_sock_opt;
extern PyObject *const_str_plain_sock;
static PyObject *const_str_digest_ff29c6c7605733750a781070e9b3747c;
extern PyObject *const_str_plain_six;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_e0c17d22922d5453274ed2f333dd9b06;
static PyObject *const_tuple_str_plain_fire_cont_frame_false_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_status_str_plain_reason_tuple;
extern PyObject *const_str_plain__utils;
static PyObject *const_str_plain_control_frame;
static PyObject *const_str_digest_2540e4d0b0e0ff390130de9c97ea7f1b;
static PyObject *const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple;
static PyObject *const_str_digest_e3b48f7fac756662c2232e72f4dcefac;
extern PyObject *const_str_plain_create_frame;
extern PyObject *const_str_plain_OPCODE_CONT;
extern PyObject *const_str_plain_l;
static PyObject *const_str_digest_a9085280eedd5b9dff4fb2dc2924c641;
extern PyObject *const_str_plain_settimeout;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_SSLSocket;
extern PyObject *const_str_plain_OPCODE_PONG;
static PyObject *const_tuple_382b058d9b5a8291caa981fe3ae11a90_tuple;
static PyObject *const_tuple_none_none_none_false_false_false_tuple;
static PyObject *const_str_digest_9affa989bf39937efc0ad8fa138d46c3;
static PyObject *const_str_digest_461c3ab8570a17f6b02fadb9c21822bb;
static PyObject *const_str_digest_bda57df0bfcda4e5714668e9c57f6641;
extern PyObject *const_str_plain_handshake_response;
extern PyObject *const_str_plain_send;
static PyObject *const_str_plain_attempt;
extern PyObject *const_str_plain_get_mask_key;
static PyObject *const_tuple_0c00013fbc58926440777e9d598a390a_tuple;
extern PyObject *const_str_plain_proxy_info;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_b;
static PyObject *const_str_digest_b57f77d5d85c8f12a16e57891baa8da1;
static PyObject *const_str_plain_send_close;
extern PyObject *const_str_plain_ping;
static PyObject *const_str_digest_35c2dd2d54f767828efc5e418aa1d1bb;
static PyObject *const_str_digest_8c5b63cebae8c5120435645523edfda8;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_plain_abort;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_c7ab516ce819cfdfedb14c34e6db6eaa;
extern PyObject *const_str_plain_isEnabledForError;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_list_str_plain_WebSocket_str_plain_create_connection_list;
static PyObject *const_tuple_str_digest_b57f77d5d85c8f12a16e57891baa8da1_tuple;
extern PyObject *const_int_pos_126;
extern PyObject *const_str_plain_OPCODE_CLOSE;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_bacb76d54b85b281a320b9e0ca2de4dc;
static PyObject *const_str_digest_a51327b9777dfe4493863ea3e052f555;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_getdefaulttimeout;
static PyObject *const_str_digest_7b71e6ba39397b779b972105b36aef62;
extern PyObject *const_str_digest_6fc4ed4d6fa397c0103d45e9c12271f9;
static PyObject *const_str_digest_26cef85f45a664e9c5be33e9e6b3f757;
static PyObject *const_str_plain_redirect_limit;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain__logging;
static PyObject *const_str_digest_baede49fd699dc503a3ef083bc418273;
extern PyObject *const_str_plain_WebSocketProtocolException;
extern PyObject *const_str_plain__send;
extern PyObject *const_str_plain_frame_buffer;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain_is_ssl;
extern PyObject *const_str_plain_lock;
static PyObject *const_str_digest_77cc1593d4b1bf9705c52c893c776278;
static PyObject *const_str_digest_754e575f856b1feed47ee7d71a1ec327;
static PyObject *const_tuple_808560d7d804815038fa8a50d1672f36_tuple;
extern PyObject *const_str_plain_ABNF;
static PyObject *const_str_digest_db23e085699c95e86fc9295b4cc45999;
static PyObject *const_str_digest_630e58630aabcd7da7c268add6bd0f03;
extern PyObject *const_str_plain__recv;
extern PyObject *const_str_plain_recv;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_e8d810aee13ecfc74db76fdf63cf20f0;
static PyObject *const_str_plain_class_;
static PyObject *const_str_digest_0fecdb185cb4613eb886844651365c63;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_WebSocket;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_self_str_plain_bufsize_tuple;
static PyObject *const_str_plain_recv_data;
extern PyObject *const_str_plain__;
static PyObject *const_tuple_str_plain_skip_utf8_validation_false_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_OPCODE_BINARY;
extern PyObject *const_str_plain_isinstance;
static PyObject *const_str_digest_aa3c9bf9f081516c4aabdba1a5a4b127;
static PyObject *const_str_plain_set_mask_key;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_str_plain_LENGTH_16;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain___next__;
static PyObject *const_str_digest_caa00f8c293bb117a8322f4d57f24fbf;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_fef21546813ba0c6518af9c8f98b5456;
extern PyObject *const_str_plain_Lock;
extern PyObject *const_str_plain_socket;
static PyObject *const_str_digest_7dff4664eb69d4d6a6db9534e2f77bfb;
static PyObject *const_str_digest_e3fa095651363ec382cff996e4afa178;
extern PyObject *const_str_plain_is_fire;
static PyObject *const_str_digest_9ed974df8e4e83e2f22527ddcb009a06;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_tuple_str_plain_socket_none_tuple;
static PyObject *const_str_digest_126024070dc2ca2465008ecbd4b280d2;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain__exceptions;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_getheaders;
extern PyObject *const_str_plain_create_connection;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_46538f33882c8318ab66d1da9e3ad6cc;
extern PyObject *const_str_plain_opcode;
static PyObject *const_str_digest_a3976bb0e62ac72c987225bf245c09a7;
extern PyObject *const_str_plain_SUPPORTED_REDIRECT_STATUSES;
static PyObject *const_str_digest_e64771cf85b39130caa5fad5c9d36bd6;
extern PyObject *const_str_plain_bufsize;
static PyObject *const_tuple_str_plain_enable_multithread_false_tuple;
static PyObject *const_str_digest_1b8665b5c08d925dd06458a7ca1a046e;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_continuous_frame;
static PyObject *const_str_plain_getstatus;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain_getsubprotocol;
extern PyObject *const_tuple_str_plain_self_str_plain_timeout_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_trace;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_digest_b38ff429b656222a7e65ac648639b901;
static PyObject *const_str_digest_077a7bc08f26ba8d330b01e1a1925cc9;
extern PyObject *const_str_plain_shutdown;
static PyObject *const_str_plain_addrs;
static PyObject *const_str_digest_b55f175d2bc0908dae27e37c6d35ec52;
extern PyObject *const_slice_int_0_int_pos_2_none;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_send_frame = UNSTREAM_STRING_ASCII( &constant_bin[ 2854758 ], 10, 1 );
    const_str_digest_fba52b8e7aa269e1686790188f38aa7a = UNSTREAM_STRING_ASCII( &constant_bin[ 2854768 ], 21, 0 );
    const_str_plain_websock = UNSTREAM_STRING_ASCII( &constant_bin[ 635811 ], 7, 1 );
    const_str_digest_3042c2f2559e37eab8b8954a1e29693c = UNSTREAM_STRING_ASCII( &constant_bin[ 2854789 ], 15, 0 );
    const_str_digest_529f11d68664c0798804a09414549c3a = UNSTREAM_STRING_ASCII( &constant_bin[ 2854804 ], 20, 0 );
    const_str_plain_recv_status = UNSTREAM_STRING_ASCII( &constant_bin[ 2854824 ], 11, 1 );
    const_str_digest_4e771a29efeadd7113d848547aecca1b = UNSTREAM_STRING_ASCII( &constant_bin[ 2854835 ], 52, 0 );
    const_str_digest_d991215701b78fcdc373b38a0c13a0f3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2854887 ], 18, 0 );
    const_str_plain_sock_timeout = UNSTREAM_STRING_ASCII( &constant_bin[ 2854905 ], 12, 1 );
    const_tuple_str_plain_redirect_limit_int_pos_3_tuple = PyTuple_New( 2 );
    const_str_plain_redirect_limit = UNSTREAM_STRING_ASCII( &constant_bin[ 2854917 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_redirect_limit_int_pos_3_tuple, 0, const_str_plain_redirect_limit ); Py_INCREF( const_str_plain_redirect_limit );
    PyTuple_SET_ITEM( const_tuple_str_plain_redirect_limit_int_pos_3_tuple, 1, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_str_digest_734ce3acdb53ad82fc8e207f77a2ee3f = UNSTREAM_STRING_ASCII( &constant_bin[ 2854931 ], 14, 0 );
    const_str_digest_9e3ea1bd785ec4ccebc61853c3cd87db = UNSTREAM_STRING_ASCII( &constant_bin[ 2854945 ], 46, 0 );
    const_str_digest_7f4c86f8491d35689a71fd34466d34c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2854991 ], 80, 0 );
    const_str_digest_ba8ba742aeea0662d4907c5d20e710b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855071 ], 47, 0 );
    const_str_digest_67521a11303b3e4673ef44c4b1c6b1c4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855118 ], 20, 0 );
    const_tuple_str_digest_fba52b8e7aa269e1686790188f38aa7a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_fba52b8e7aa269e1686790188f38aa7a_tuple, 0, const_str_digest_fba52b8e7aa269e1686790188f38aa7a ); Py_INCREF( const_str_digest_fba52b8e7aa269e1686790188f38aa7a );
    const_str_digest_538150842579c545beb428bd28298206 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855138 ], 21, 0 );
    const_tuple_str_plain_self_str_plain_payload_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_payload_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_payload_tuple, 1, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    const_str_plain__handshake = UNSTREAM_STRING_ASCII( &constant_bin[ 2791366 ], 10, 1 );
    const_str_plain_cont_frame = UNSTREAM_STRING_ASCII( &constant_bin[ 2855159 ], 10, 1 );
    const_str_digest_e458b7f1a62dbfd1601155522fc6ee9e = UNSTREAM_STRING_ASCII( &constant_bin[ 2855169 ], 14, 0 );
    const_tuple_str_plain_self_str_plain_opcode_str_plain_data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_opcode_str_plain_data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_opcode_str_plain_data_tuple, 1, const_str_plain_opcode ); Py_INCREF( const_str_plain_opcode );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_opcode_str_plain_data_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_str_plain_self_str_plain_control_frame_str_plain_frame_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_control_frame_str_plain_frame_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_control_frame = UNSTREAM_STRING_ASCII( &constant_bin[ 2855183 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_control_frame_str_plain_frame_tuple, 1, const_str_plain_control_frame ); Py_INCREF( const_str_plain_control_frame );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_control_frame_str_plain_frame_tuple, 2, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    const_str_digest_824ced8f7427669ab996fc433ea4f9e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2854175 ], 22, 0 );
    const_tuple_e4d7f450bdf58dc548d571fcd4719d40_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e4d7f450bdf58dc548d571fcd4719d40_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e4d7f450bdf58dc548d571fcd4719d40_tuple, 1, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyTuple_SET_ITEM( const_tuple_e4d7f450bdf58dc548d571fcd4719d40_tuple, 2, const_str_plain_opcode ); Py_INCREF( const_str_plain_opcode );
    PyTuple_SET_ITEM( const_tuple_e4d7f450bdf58dc548d571fcd4719d40_tuple, 3, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    const_str_digest_32c9987a16d6f5701d99ba7519d26e43 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855196 ], 362, 0 );
    const_str_digest_70c0611b99f8d24bc2d70a039a302b41 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855558 ], 20, 0 );
    const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    const_str_plain_addrs = UNSTREAM_STRING_ASCII( &constant_bin[ 2855578 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple, 3, const_str_plain_addrs ); Py_INCREF( const_str_plain_addrs );
    const_str_plain_attempt = UNSTREAM_STRING_ASCII( &constant_bin[ 20278 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple, 4, const_str_plain_attempt ); Py_INCREF( const_str_plain_attempt );
    const_str_digest_e32c22c56feb1e34cef7bdd4f53680e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855583 ], 115, 0 );
    const_str_digest_6e9795cf586331f96119f6ef3d51ec6a = UNSTREAM_STRING_ASCII( &constant_bin[ 2855698 ], 170, 0 );
    const_str_plain_readlock = UNSTREAM_STRING_ASCII( &constant_bin[ 2855868 ], 8, 1 );
    const_str_plain_send_binary = UNSTREAM_STRING_ASCII( &constant_bin[ 2855148 ], 11, 1 );
    const_str_digest_18924d73a76baeb5de82bcee7b2ee5b3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855876 ], 14, 0 );
    const_str_digest_fdcaf528b51c0116a80d55b15e834455 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855890 ], 24, 0 );
    const_tuple_0f4a75edd699ebf069968be8c458305d_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_str_plain_class_ = UNSTREAM_STRING_ASCII( &constant_bin[ 7476 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 2, const_str_plain_class_ ); Py_INCREF( const_str_plain_class_ );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 3, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 4, const_str_plain_sockopt ); Py_INCREF( const_str_plain_sockopt );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 5, const_str_plain_sslopt ); Py_INCREF( const_str_plain_sslopt );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 6, const_str_plain_fire_cont_frame ); Py_INCREF( const_str_plain_fire_cont_frame );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 7, const_str_plain_enable_multithread ); Py_INCREF( const_str_plain_enable_multithread );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 8, const_str_plain_skip_utf8_validation ); Py_INCREF( const_str_plain_skip_utf8_validation );
    PyTuple_SET_ITEM( const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 9, const_str_plain_websock ); Py_INCREF( const_str_plain_websock );
    const_str_digest_5952a84e708819b40485bd59cfa19d62 = UNSTREAM_STRING_ASCII( &constant_bin[ 2855914 ], 16, 0 );
    const_str_digest_af225623490e748aeda42e11bb06770b = UNSTREAM_STRING_ASCII( &constant_bin[ 2855930 ], 80, 0 );
    const_str_digest_ff29c6c7605733750a781070e9b3747c = UNSTREAM_STRING_ASCII( &constant_bin[ 2856010 ], 18, 0 );
    const_str_digest_e0c17d22922d5453274ed2f333dd9b06 = UNSTREAM_STRING_ASCII( &constant_bin[ 2856028 ], 38, 0 );
    const_tuple_str_plain_fire_cont_frame_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fire_cont_frame_false_tuple, 0, const_str_plain_fire_cont_frame ); Py_INCREF( const_str_plain_fire_cont_frame );
    PyTuple_SET_ITEM( const_tuple_str_plain_fire_cont_frame_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_self_str_plain_status_str_plain_reason_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_str_plain_reason_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_str_plain_reason_tuple, 1, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_str_plain_reason_tuple, 2, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    const_str_digest_2540e4d0b0e0ff390130de9c97ea7f1b = UNSTREAM_STRING_ASCII( &constant_bin[ 2856066 ], 46, 0 );
    const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple, 1, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    PyTuple_SET_ITEM( const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple, 3, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple, 4, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_str_digest_e3b48f7fac756662c2232e72f4dcefac = UNSTREAM_STRING_ASCII( &constant_bin[ 2856112 ], 25, 0 );
    const_str_digest_a9085280eedd5b9dff4fb2dc2924c641 = UNSTREAM_STRING_ASCII( &constant_bin[ 2856137 ], 2014, 0 );
    const_str_plain_SSLSocket = UNSTREAM_STRING_ASCII( &constant_bin[ 2804007 ], 9, 1 );
    const_tuple_382b058d9b5a8291caa981fe3ae11a90_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_382b058d9b5a8291caa981fe3ae11a90_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_382b058d9b5a8291caa981fe3ae11a90_tuple, 1, const_str_plain_control_frame ); Py_INCREF( const_str_plain_control_frame );
    PyTuple_SET_ITEM( const_tuple_382b058d9b5a8291caa981fe3ae11a90_tuple, 2, const_str_plain_opcode ); Py_INCREF( const_str_plain_opcode );
    PyTuple_SET_ITEM( const_tuple_382b058d9b5a8291caa981fe3ae11a90_tuple, 3, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    const_tuple_none_none_none_false_false_false_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_false_false_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_false_false_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_false_false_false_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_false_false_false_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_false_false_false_tuple, 4, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_false_false_false_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_str_digest_9affa989bf39937efc0ad8fa138d46c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2858151 ], 14, 0 );
    const_str_digest_461c3ab8570a17f6b02fadb9c21822bb = UNSTREAM_STRING_ASCII( &constant_bin[ 2858165 ], 15, 0 );
    const_str_digest_bda57df0bfcda4e5714668e9c57f6641 = UNSTREAM_STRING_ASCII( &constant_bin[ 2858180 ], 17, 0 );
    const_tuple_0c00013fbc58926440777e9d598a390a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 1, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 2, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 4, const_str_plain_sock_timeout ); Py_INCREF( const_str_plain_sock_timeout );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 5, const_str_plain_start_time ); Py_INCREF( const_str_plain_start_time );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 6, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    PyTuple_SET_ITEM( const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 7, const_str_plain_recv_status ); Py_INCREF( const_str_plain_recv_status );
    const_str_digest_b57f77d5d85c8f12a16e57891baa8da1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2858197 ], 24, 0 );
    const_str_plain_send_close = UNSTREAM_STRING_ASCII( &constant_bin[ 2858221 ], 10, 1 );
    const_str_digest_35c2dd2d54f767828efc5e418aa1d1bb = UNSTREAM_STRING_ASCII( &constant_bin[ 2855118 ], 14, 0 );
    const_str_digest_8c5b63cebae8c5120435645523edfda8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2858231 ], 981, 0 );
    const_str_plain_abort = UNSTREAM_STRING_ASCII( &constant_bin[ 2779479 ], 5, 1 );
    const_str_digest_c7ab516ce819cfdfedb14c34e6db6eaa = UNSTREAM_STRING_ASCII( &constant_bin[ 2859212 ], 20, 0 );
    const_list_str_plain_WebSocket_str_plain_create_connection_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_WebSocket_str_plain_create_connection_list, 0, const_str_plain_WebSocket ); Py_INCREF( const_str_plain_WebSocket );
    PyList_SET_ITEM( const_list_str_plain_WebSocket_str_plain_create_connection_list, 1, const_str_plain_create_connection ); Py_INCREF( const_str_plain_create_connection );
    const_tuple_str_digest_b57f77d5d85c8f12a16e57891baa8da1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b57f77d5d85c8f12a16e57891baa8da1_tuple, 0, const_str_digest_b57f77d5d85c8f12a16e57891baa8da1 ); Py_INCREF( const_str_digest_b57f77d5d85c8f12a16e57891baa8da1 );
    const_str_digest_bacb76d54b85b281a320b9e0ca2de4dc = UNSTREAM_STRING_ASCII( &constant_bin[ 2859232 ], 243, 0 );
    const_str_digest_a51327b9777dfe4493863ea3e052f555 = UNSTREAM_STRING_ASCII( &constant_bin[ 2859475 ], 1502, 0 );
    const_str_digest_7b71e6ba39397b779b972105b36aef62 = UNSTREAM_STRING_ASCII( &constant_bin[ 2860977 ], 91, 0 );
    const_str_digest_26cef85f45a664e9c5be33e9e6b3f757 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861068 ], 24, 0 );
    const_str_digest_baede49fd699dc503a3ef083bc418273 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861092 ], 279, 0 );
    const_str_digest_77cc1593d4b1bf9705c52c893c776278 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861371 ], 88, 0 );
    const_str_digest_754e575f856b1feed47ee7d71a1ec327 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861459 ], 20, 0 );
    const_tuple_808560d7d804815038fa8a50d1672f36_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 1, const_str_plain_get_mask_key ); Py_INCREF( const_str_plain_get_mask_key );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 2, const_str_plain_sockopt ); Py_INCREF( const_str_plain_sockopt );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 3, const_str_plain_sslopt ); Py_INCREF( const_str_plain_sslopt );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 4, const_str_plain_fire_cont_frame ); Py_INCREF( const_str_plain_fire_cont_frame );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 5, const_str_plain_enable_multithread ); Py_INCREF( const_str_plain_enable_multithread );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 6, const_str_plain_skip_utf8_validation ); Py_INCREF( const_str_plain_skip_utf8_validation );
    PyTuple_SET_ITEM( const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 7, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_digest_db23e085699c95e86fc9295b4cc45999 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861479 ], 14, 0 );
    const_str_digest_630e58630aabcd7da7c268add6bd0f03 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861493 ], 97, 0 );
    const_str_digest_e8d810aee13ecfc74db76fdf63cf20f0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861590 ], 272, 0 );
    const_str_digest_0fecdb185cb4613eb886844651365c63 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861862 ], 18, 0 );
    const_tuple_str_plain_self_str_plain_bufsize_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bufsize_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bufsize_tuple, 1, const_str_plain_bufsize ); Py_INCREF( const_str_plain_bufsize );
    const_str_plain_recv_data = UNSTREAM_STRING_ASCII( &constant_bin[ 2856122 ], 9, 1 );
    const_tuple_str_plain_skip_utf8_validation_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_skip_utf8_validation_false_tuple, 0, const_str_plain_skip_utf8_validation ); Py_INCREF( const_str_plain_skip_utf8_validation );
    PyTuple_SET_ITEM( const_tuple_str_plain_skip_utf8_validation_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_aa3c9bf9f081516c4aabdba1a5a4b127 = UNSTREAM_STRING_ASCII( &constant_bin[ 2861880 ], 478, 0 );
    const_str_plain_set_mask_key = UNSTREAM_STRING_ASCII( &constant_bin[ 2854185 ], 12, 1 );
    const_str_digest_caa00f8c293bb117a8322f4d57f24fbf = UNSTREAM_STRING_ASCII( &constant_bin[ 2862358 ], 15, 0 );
    const_str_digest_fef21546813ba0c6518af9c8f98b5456 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862373 ], 6, 0 );
    const_str_digest_7dff4664eb69d4d6a6db9534e2f77bfb = UNSTREAM_STRING_ASCII( &constant_bin[ 2862379 ], 19, 0 );
    const_str_digest_e3fa095651363ec382cff996e4afa178 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862398 ], 15, 0 );
    const_str_digest_9ed974df8e4e83e2f22527ddcb009a06 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862413 ], 33, 0 );
    const_tuple_str_plain_socket_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_socket_none_tuple, 0, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_str_plain_socket_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_126024070dc2ca2465008ecbd4b280d2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862446 ], 15, 0 );
    const_str_digest_46538f33882c8318ab66d1da9e3ad6cc = UNSTREAM_STRING_ASCII( &constant_bin[ 2862461 ], 20, 0 );
    const_str_digest_a3976bb0e62ac72c987225bf245c09a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2856112 ], 19, 0 );
    const_str_digest_e64771cf85b39130caa5fad5c9d36bd6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862481 ], 18, 0 );
    const_tuple_str_plain_enable_multithread_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_enable_multithread_false_tuple, 0, const_str_plain_enable_multithread ); Py_INCREF( const_str_plain_enable_multithread );
    PyTuple_SET_ITEM( const_tuple_str_plain_enable_multithread_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_1b8665b5c08d925dd06458a7ca1a046e = UNSTREAM_STRING_ASCII( &constant_bin[ 2862499 ], 16, 0 );
    const_str_plain_getstatus = UNSTREAM_STRING_ASCII( &constant_bin[ 2862389 ], 9, 1 );
    const_str_plain_getsubprotocol = UNSTREAM_STRING_ASCII( &constant_bin[ 2861078 ], 14, 1 );
    const_str_digest_b38ff429b656222a7e65ac648639b901 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862515 ], 94, 0 );
    const_str_digest_077a7bc08f26ba8d330b01e1a1925cc9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862609 ], 20, 0 );
    const_str_digest_b55f175d2bc0908dae27e37c6d35ec52 = UNSTREAM_STRING_ASCII( &constant_bin[ 2862629 ], 26, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_websocket$_core( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1251dad67652dca6dbad969cd6b370b2;
static PyCodeObject *codeobj_280d2d674f0e3cb9d1db822e3a6bcdec;
static PyCodeObject *codeobj_78da29ff9c20302fdd2af653d6ecd558;
static PyCodeObject *codeobj_0fa3c0c66f8d809f162fd8d31e728699;
static PyCodeObject *codeobj_df3e3c30b1f318c972d504b3296bbe16;
static PyCodeObject *codeobj_54f235464aa247be05edfe9dac5bd9bf;
static PyCodeObject *codeobj_11d13972e537f576bc1cb0df276f9c32;
static PyCodeObject *codeobj_abdb233a346e655cb0aade571219f337;
static PyCodeObject *codeobj_46db69b7e2f7825e50c2d46ce839f431;
static PyCodeObject *codeobj_dd0c403565596e7e14d4a939c444cb7d;
static PyCodeObject *codeobj_c67c19294d2fbf3d85e49c905c3dc563;
static PyCodeObject *codeobj_b113b021489104de7f3953aa312e6709;
static PyCodeObject *codeobj_17991e3a86cf2f01ce6afc776e8ab538;
static PyCodeObject *codeobj_8448815dc509d82dab03d69eebaa7658;
static PyCodeObject *codeobj_b7f14d52174fa04801be722b821b9214;
static PyCodeObject *codeobj_fe6e3ce4f5ea90cd96c6059d0e7e63a8;
static PyCodeObject *codeobj_32c72d97bfbe0d41d47410ffed896d75;
static PyCodeObject *codeobj_455a7910b4a51dccd1080610f853fdea;
static PyCodeObject *codeobj_fa7d64ae92da108615bd03f2a491cf94;
static PyCodeObject *codeobj_8de68b3a7c96cbae04fde24c1c05b739;
static PyCodeObject *codeobj_b80de2f69593fdbfa97729464450d248;
static PyCodeObject *codeobj_c5e1ec5a81681ef5eada8787f63a5a68;
static PyCodeObject *codeobj_1287f40297c5579255fde055d3d5a653;
static PyCodeObject *codeobj_83e93e54e340b951b9fe218f66b807a3;
static PyCodeObject *codeobj_9334da5c512a0f0221bf3ab5dddb6568;
static PyCodeObject *codeobj_64bca6e44ce31d42faae35db1e376e09;
static PyCodeObject *codeobj_22b3e9d101030ef997c7c3f54cc66f7a;
static PyCodeObject *codeobj_44fe05b15031cc7a03aa5fd621d62899;
static PyCodeObject *codeobj_0d9015365d34e4ab09a5b18768a94c3f;
static PyCodeObject *codeobj_e48fd18de11cb8a4380d86cbd8dfbb68;
static PyCodeObject *codeobj_35915f38e4c705aa0a7994750470cbe2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9e3ea1bd785ec4ccebc61853c3cd87db;
    codeobj_1251dad67652dca6dbad969cd6b370b2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fdcaf528b51c0116a80d55b15e834455, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_280d2d674f0e3cb9d1db822e3a6bcdec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_WebSocket, 52, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_78da29ff9c20302fdd2af653d6ecd558 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 80, const_tuple_808560d7d804815038fa8a50d1672f36_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0fa3c0c66f8d809f162fd8d31e728699 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 104, const_tuple_str_plain_self_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_df3e3c30b1f318c972d504b3296bbe16 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___next__, 111, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_54f235464aa247be05edfe9dac5bd9bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__recv, 450, const_tuple_str_plain_self_str_plain_bufsize_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_11d13972e537f576bc1cb0df276f9c32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__send, 447, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_abdb233a346e655cb0aade571219f337 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_abort, 433, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_46db69b7e2f7825e50c2d46ce839f431 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 392, const_tuple_0c00013fbc58926440777e9d598a390a_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd0c403565596e7e14d4a939c444cb7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 186, const_tuple_5cc7639be0e1041e7b8cc23f2ea8f455_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c67c19294d2fbf3d85e49c905c3dc563 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_connection, 461, const_tuple_0f4a75edd699ebf069968be8c458305d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_b113b021489104de7f3953aa312e6709 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fileno, 117, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17991e3a86cf2f01ce6afc776e8ab538 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getheaders, 172, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8448815dc509d82dab03d69eebaa7658 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getstatus, 161, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7f14d52174fa04801be722b821b9214 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getsubprotocol, 150, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fe6e3ce4f5ea90cd96c6059d0e7e63a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gettimeout, 132, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_32c72d97bfbe0d41d47410ffed896d75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_ssl, 181, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_455a7910b4a51dccd1080610f853fdea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_next, 114, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fa7d64ae92da108615bd03f2a491cf94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ping, 286, const_tuple_str_plain_self_str_plain_payload_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8de68b3a7c96cbae04fde24c1c05b739 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pong, 296, const_tuple_str_plain_self_str_plain_payload_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b80de2f69593fdbfa97729464450d248 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv, 306, const_tuple_str_plain_self_str_plain_opcode_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5e1ec5a81681ef5eada8787f63a5a68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv_data, 321, const_tuple_382b058d9b5a8291caa981fe3ae11a90_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1287f40297c5579255fde055d3d5a653 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv_data_frame, 333, const_tuple_str_plain_self_str_plain_control_frame_str_plain_frame_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_83e93e54e340b951b9fe218f66b807a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv_frame, 371, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9334da5c512a0f0221bf3ab5dddb6568 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 241, const_tuple_e4d7f450bdf58dc548d571fcd4719d40_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64bca6e44ce31d42faae35db1e376e09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_binary, 283, const_tuple_str_plain_self_str_plain_payload_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_22b3e9d101030ef997c7c3f54cc66f7a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_close, 379, const_tuple_str_plain_self_str_plain_status_str_plain_reason_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_44fe05b15031cc7a03aa5fd621d62899 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send_frame, 255, const_tuple_8bb68ec3b7e861ccedbd27915353c031_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d9015365d34e4ab09a5b18768a94c3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_mask_key, 120, const_tuple_str_plain_self_str_plain_func_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e48fd18de11cb8a4380d86cbd8dfbb68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_settimeout, 138, const_tuple_str_plain_self_str_plain_timeout_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35915f38e4c705aa0a7994750470cbe2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_shutdown, 440, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *websocket$_core$$$function_2___iter__$$$genobj_1___iter___maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_10_getstatus(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_11_getheaders(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_12_is_ssl(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_13_connect(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_14_send( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_15_send_frame(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_16_send_binary(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_17_ping( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_18_pong(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_19_recv(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_20_recv_data( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_21_recv_data_frame( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_22_recv_frame(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_23_send_close( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_24_close( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_25_abort(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_26_shutdown(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_27__send(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_28__recv(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_29_create_connection( PyObject *defaults );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_2___iter__(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_3___next__(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_4_next(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_5_fileno(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_6_set_mask_key(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_7_gettimeout(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_8_settimeout(  );


static PyObject *MAKE_FUNCTION_websocket$_core$$$function_9_getsubprotocol(  );


// The module function definitions.
static PyObject *impl_websocket$_core$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_get_mask_key = python_pars[ 1 ];
    PyObject *par_sockopt = python_pars[ 2 ];
    PyObject *par_sslopt = python_pars[ 3 ];
    PyObject *par_fire_cont_frame = python_pars[ 4 ];
    PyObject *par_enable_multithread = python_pars[ 5 ];
    PyObject *par_skip_utf8_validation = python_pars[ 6 ];
    PyObject *par__ = python_pars[ 7 ];
    struct Nuitka_FrameObject *frame_78da29ff9c20302fdd2af653d6ecd558;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_78da29ff9c20302fdd2af653d6ecd558 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78da29ff9c20302fdd2af653d6ecd558, codeobj_78da29ff9c20302fdd2af653d6ecd558, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_78da29ff9c20302fdd2af653d6ecd558 = cache_frame_78da29ff9c20302fdd2af653d6ecd558;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78da29ff9c20302fdd2af653d6ecd558 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78da29ff9c20302fdd2af653d6ecd558 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_sock_opt );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sock_opt );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sock_opt" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_sockopt );
        tmp_args_element_name_1 = par_sockopt;
        CHECK_OBJECT( par_sslopt );
        tmp_args_element_name_2 = par_sslopt;
        frame_78da29ff9c20302fdd2af653d6ecd558->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock_opt, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
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
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_handshake_response, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_sock, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_connected, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_get_mask_key );
        tmp_assattr_name_5 = par_get_mask_key;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_get_mask_key, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_assattr_target_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_frame_buffer );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_frame_buffer );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "frame_buffer" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__recv );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_skip_utf8_validation );
        tmp_args_element_name_4 = par_skip_utf8_validation;
        frame_78da29ff9c20302fdd2af653d6ecd558->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_frame_buffer, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_assattr_target_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_continuous_frame );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_continuous_frame );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "continuous_frame" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_fire_cont_frame );
        tmp_args_element_name_5 = par_fire_cont_frame;
        CHECK_OBJECT( par_skip_utf8_validation );
        tmp_args_element_name_6 = par_skip_utf8_validation;
        frame_78da29ff9c20302fdd2af653d6ecd558->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assattr_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_cont_frame, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_enable_multithread );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_enable_multithread );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assattr_name_8;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_assattr_target_8;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_threading );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "threading" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 98;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_4;
            frame_78da29ff9c20302fdd2af653d6ecd558->m_frame.f_lineno = 98;
            tmp_assattr_name_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Lock );
            if ( tmp_assattr_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_8 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_lock, tmp_assattr_name_8 );
            Py_DECREF( tmp_assattr_name_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_9;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_assattr_target_9;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_threading );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "threading" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 99;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            frame_78da29ff9c20302fdd2af653d6ecd558->m_frame.f_lineno = 99;
            tmp_assattr_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_Lock );
            if ( tmp_assattr_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_9 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_readlock, tmp_assattr_name_9 );
            Py_DECREF( tmp_assattr_name_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_10;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_assattr_target_10;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_NoLock );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoLock );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NoLock" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 101;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_6;
            frame_78da29ff9c20302fdd2af653d6ecd558->m_frame.f_lineno = 101;
            tmp_assattr_name_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
            if ( tmp_assattr_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_10 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_lock, tmp_assattr_name_10 );
            Py_DECREF( tmp_assattr_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_11;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_assattr_target_11;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_NoLock );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoLock );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NoLock" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 102;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_7;
            frame_78da29ff9c20302fdd2af653d6ecd558->m_frame.f_lineno = 102;
            tmp_assattr_name_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
            if ( tmp_assattr_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_11 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_readlock, tmp_assattr_name_11 );
            Py_DECREF( tmp_assattr_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78da29ff9c20302fdd2af653d6ecd558 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78da29ff9c20302fdd2af653d6ecd558 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78da29ff9c20302fdd2af653d6ecd558, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78da29ff9c20302fdd2af653d6ecd558->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78da29ff9c20302fdd2af653d6ecd558, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78da29ff9c20302fdd2af653d6ecd558,
        type_description_1,
        par_self,
        par_get_mask_key,
        par_sockopt,
        par_sslopt,
        par_fire_cont_frame,
        par_enable_multithread,
        par_skip_utf8_validation,
        par__
    );


    // Release cached frame.
    if ( frame_78da29ff9c20302fdd2af653d6ecd558 == cache_frame_78da29ff9c20302fdd2af653d6ecd558 )
    {
        Py_DECREF( frame_78da29ff9c20302fdd2af653d6ecd558 );
    }
    cache_frame_78da29ff9c20302fdd2af653d6ecd558 = NULL;

    assertFrameObject( frame_78da29ff9c20302fdd2af653d6ecd558 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_get_mask_key );
    Py_DECREF( par_get_mask_key );
    par_get_mask_key = NULL;

    CHECK_OBJECT( (PyObject *)par_sockopt );
    Py_DECREF( par_sockopt );
    par_sockopt = NULL;

    CHECK_OBJECT( (PyObject *)par_sslopt );
    Py_DECREF( par_sslopt );
    par_sslopt = NULL;

    CHECK_OBJECT( (PyObject *)par_fire_cont_frame );
    Py_DECREF( par_fire_cont_frame );
    par_fire_cont_frame = NULL;

    CHECK_OBJECT( (PyObject *)par_enable_multithread );
    Py_DECREF( par_enable_multithread );
    par_enable_multithread = NULL;

    CHECK_OBJECT( (PyObject *)par_skip_utf8_validation );
    Py_DECREF( par_skip_utf8_validation );
    par_skip_utf8_validation = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_get_mask_key );
    Py_DECREF( par_get_mask_key );
    par_get_mask_key = NULL;

    CHECK_OBJECT( (PyObject *)par_sockopt );
    Py_DECREF( par_sockopt );
    par_sockopt = NULL;

    CHECK_OBJECT( (PyObject *)par_sslopt );
    Py_DECREF( par_sslopt );
    par_sslopt = NULL;

    CHECK_OBJECT( (PyObject *)par_fire_cont_frame );
    Py_DECREF( par_fire_cont_frame );
    par_fire_cont_frame = NULL;

    CHECK_OBJECT( (PyObject *)par_enable_multithread );
    Py_DECREF( par_enable_multithread );
    par_enable_multithread = NULL;

    CHECK_OBJECT( (PyObject *)par_skip_utf8_validation );
    Py_DECREF( par_skip_utf8_validation );
    par_skip_utf8_validation = NULL;

    CHECK_OBJECT( (PyObject *)par__ );
    Py_DECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_1___init__ );
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


static PyObject *impl_websocket$_core$$$function_2___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = websocket$_core$$$function_2___iter__$$$genobj_1___iter___maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_2___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_2___iter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct websocket$_core$$$function_2___iter__$$$genobj_1___iter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
};

static PyObject *websocket$_core$$$function_2___iter__$$$genobj_1___iter___context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct websocket$_core$$$function_2___iter__$$$genobj_1___iter___locals *generator_heap = (struct websocket$_core$$$function_2___iter__$$$genobj_1___iter___locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_0fa3c0c66f8d809f162fd8d31e728699, module_websocket$_core, sizeof(void *) );
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
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( generator->m_closure[0] );
        generator->m_frame->m_frame.f_lineno = 109;
        tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_recv );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
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


            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 108;
        generator_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *websocket$_core$$$function_2___iter__$$$genobj_1___iter___maker( void )
{
    return Nuitka_Generator_New(
        websocket$_core$$$function_2___iter__$$$genobj_1___iter___context,
        module_websocket$_core,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 350
        const_str_digest_ff29c6c7605733750a781070e9b3747c,
#endif
        codeobj_0fa3c0c66f8d809f162fd8d31e728699,
        1,
        sizeof(struct websocket$_core$$$function_2___iter__$$$genobj_1___iter___locals)
    );
}


static PyObject *impl_websocket$_core$$$function_3___next__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_df3e3c30b1f318c972d504b3296bbe16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_df3e3c30b1f318c972d504b3296bbe16 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_df3e3c30b1f318c972d504b3296bbe16, codeobj_df3e3c30b1f318c972d504b3296bbe16, module_websocket$_core, sizeof(void *) );
    frame_df3e3c30b1f318c972d504b3296bbe16 = cache_frame_df3e3c30b1f318c972d504b3296bbe16;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df3e3c30b1f318c972d504b3296bbe16 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df3e3c30b1f318c972d504b3296bbe16 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_df3e3c30b1f318c972d504b3296bbe16->m_frame.f_lineno = 112;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_recv );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df3e3c30b1f318c972d504b3296bbe16 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df3e3c30b1f318c972d504b3296bbe16 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df3e3c30b1f318c972d504b3296bbe16 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df3e3c30b1f318c972d504b3296bbe16, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df3e3c30b1f318c972d504b3296bbe16->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df3e3c30b1f318c972d504b3296bbe16, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df3e3c30b1f318c972d504b3296bbe16,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_df3e3c30b1f318c972d504b3296bbe16 == cache_frame_df3e3c30b1f318c972d504b3296bbe16 )
    {
        Py_DECREF( frame_df3e3c30b1f318c972d504b3296bbe16 );
    }
    cache_frame_df3e3c30b1f318c972d504b3296bbe16 = NULL;

    assertFrameObject( frame_df3e3c30b1f318c972d504b3296bbe16 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_3___next__ );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_3___next__ );
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


static PyObject *impl_websocket$_core$$$function_4_next( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_455a7910b4a51dccd1080610f853fdea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_455a7910b4a51dccd1080610f853fdea = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_455a7910b4a51dccd1080610f853fdea, codeobj_455a7910b4a51dccd1080610f853fdea, module_websocket$_core, sizeof(void *) );
    frame_455a7910b4a51dccd1080610f853fdea = cache_frame_455a7910b4a51dccd1080610f853fdea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_455a7910b4a51dccd1080610f853fdea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_455a7910b4a51dccd1080610f853fdea ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_455a7910b4a51dccd1080610f853fdea->m_frame.f_lineno = 115;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___next__ );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_455a7910b4a51dccd1080610f853fdea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_455a7910b4a51dccd1080610f853fdea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_455a7910b4a51dccd1080610f853fdea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_455a7910b4a51dccd1080610f853fdea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_455a7910b4a51dccd1080610f853fdea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_455a7910b4a51dccd1080610f853fdea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_455a7910b4a51dccd1080610f853fdea,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_455a7910b4a51dccd1080610f853fdea == cache_frame_455a7910b4a51dccd1080610f853fdea )
    {
        Py_DECREF( frame_455a7910b4a51dccd1080610f853fdea );
    }
    cache_frame_455a7910b4a51dccd1080610f853fdea = NULL;

    assertFrameObject( frame_455a7910b4a51dccd1080610f853fdea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_4_next );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_4_next );
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


static PyObject *impl_websocket$_core$$$function_5_fileno( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b113b021489104de7f3953aa312e6709;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b113b021489104de7f3953aa312e6709 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b113b021489104de7f3953aa312e6709, codeobj_b113b021489104de7f3953aa312e6709, module_websocket$_core, sizeof(void *) );
    frame_b113b021489104de7f3953aa312e6709 = cache_frame_b113b021489104de7f3953aa312e6709;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b113b021489104de7f3953aa312e6709 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b113b021489104de7f3953aa312e6709 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sock );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b113b021489104de7f3953aa312e6709->m_frame.f_lineno = 118;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fileno );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b113b021489104de7f3953aa312e6709 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b113b021489104de7f3953aa312e6709 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b113b021489104de7f3953aa312e6709 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b113b021489104de7f3953aa312e6709, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b113b021489104de7f3953aa312e6709->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b113b021489104de7f3953aa312e6709, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b113b021489104de7f3953aa312e6709,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b113b021489104de7f3953aa312e6709 == cache_frame_b113b021489104de7f3953aa312e6709 )
    {
        Py_DECREF( frame_b113b021489104de7f3953aa312e6709 );
    }
    cache_frame_b113b021489104de7f3953aa312e6709 = NULL;

    assertFrameObject( frame_b113b021489104de7f3953aa312e6709 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_5_fileno );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_5_fileno );
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


static PyObject *impl_websocket$_core$$$function_6_set_mask_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0d9015365d34e4ab09a5b18768a94c3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d9015365d34e4ab09a5b18768a94c3f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d9015365d34e4ab09a5b18768a94c3f, codeobj_0d9015365d34e4ab09a5b18768a94c3f, module_websocket$_core, sizeof(void *)+sizeof(void *) );
    frame_0d9015365d34e4ab09a5b18768a94c3f = cache_frame_0d9015365d34e4ab09a5b18768a94c3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d9015365d34e4ab09a5b18768a94c3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d9015365d34e4ab09a5b18768a94c3f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_func );
        tmp_assattr_name_1 = par_func;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_get_mask_key, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d9015365d34e4ab09a5b18768a94c3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d9015365d34e4ab09a5b18768a94c3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d9015365d34e4ab09a5b18768a94c3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d9015365d34e4ab09a5b18768a94c3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d9015365d34e4ab09a5b18768a94c3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d9015365d34e4ab09a5b18768a94c3f,
        type_description_1,
        par_self,
        par_func
    );


    // Release cached frame.
    if ( frame_0d9015365d34e4ab09a5b18768a94c3f == cache_frame_0d9015365d34e4ab09a5b18768a94c3f )
    {
        Py_DECREF( frame_0d9015365d34e4ab09a5b18768a94c3f );
    }
    cache_frame_0d9015365d34e4ab09a5b18768a94c3f = NULL;

    assertFrameObject( frame_0d9015365d34e4ab09a5b18768a94c3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_6_set_mask_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_6_set_mask_key );
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


static PyObject *impl_websocket$_core$$$function_7_gettimeout( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8, codeobj_fe6e3ce4f5ea90cd96c6059d0e7e63a8, module_websocket$_core, sizeof(void *) );
    frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 = cache_frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sock_opt );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timeout );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 == cache_frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 )
    {
        Py_DECREF( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 );
    }
    cache_frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 = NULL;

    assertFrameObject( frame_fe6e3ce4f5ea90cd96c6059d0e7e63a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_7_gettimeout );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_7_gettimeout );
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


static PyObject *impl_websocket$_core$$$function_8_settimeout( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e48fd18de11cb8a4380d86cbd8dfbb68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e48fd18de11cb8a4380d86cbd8dfbb68 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e48fd18de11cb8a4380d86cbd8dfbb68, codeobj_e48fd18de11cb8a4380d86cbd8dfbb68, module_websocket$_core, sizeof(void *)+sizeof(void *) );
    frame_e48fd18de11cb8a4380d86cbd8dfbb68 = cache_frame_e48fd18de11cb8a4380d86cbd8dfbb68;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e48fd18de11cb8a4380d86cbd8dfbb68 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e48fd18de11cb8a4380d86cbd8dfbb68 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_timeout );
        tmp_assattr_name_1 = par_timeout;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sock_opt );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_timeout, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sock );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sock );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_timeout );
            tmp_args_element_name_1 = par_timeout;
            frame_e48fd18de11cb8a4380d86cbd8dfbb68->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_settimeout, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e48fd18de11cb8a4380d86cbd8dfbb68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e48fd18de11cb8a4380d86cbd8dfbb68 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e48fd18de11cb8a4380d86cbd8dfbb68, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e48fd18de11cb8a4380d86cbd8dfbb68->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e48fd18de11cb8a4380d86cbd8dfbb68, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e48fd18de11cb8a4380d86cbd8dfbb68,
        type_description_1,
        par_self,
        par_timeout
    );


    // Release cached frame.
    if ( frame_e48fd18de11cb8a4380d86cbd8dfbb68 == cache_frame_e48fd18de11cb8a4380d86cbd8dfbb68 )
    {
        Py_DECREF( frame_e48fd18de11cb8a4380d86cbd8dfbb68 );
    }
    cache_frame_e48fd18de11cb8a4380d86cbd8dfbb68 = NULL;

    assertFrameObject( frame_e48fd18de11cb8a4380d86cbd8dfbb68 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_8_settimeout );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_8_settimeout );
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


static PyObject *impl_websocket$_core$$$function_9_getsubprotocol( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b7f14d52174fa04801be722b821b9214;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b7f14d52174fa04801be722b821b9214 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7f14d52174fa04801be722b821b9214, codeobj_b7f14d52174fa04801be722b821b9214, module_websocket$_core, sizeof(void *) );
    frame_b7f14d52174fa04801be722b821b9214 = cache_frame_b7f14d52174fa04801be722b821b9214;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7f14d52174fa04801be722b821b9214 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7f14d52174fa04801be722b821b9214 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_handshake_response );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_handshake_response );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_subprotocol );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7f14d52174fa04801be722b821b9214 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7f14d52174fa04801be722b821b9214 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7f14d52174fa04801be722b821b9214 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7f14d52174fa04801be722b821b9214, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7f14d52174fa04801be722b821b9214->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7f14d52174fa04801be722b821b9214, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7f14d52174fa04801be722b821b9214,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b7f14d52174fa04801be722b821b9214 == cache_frame_b7f14d52174fa04801be722b821b9214 )
    {
        Py_DECREF( frame_b7f14d52174fa04801be722b821b9214 );
    }
    cache_frame_b7f14d52174fa04801be722b821b9214 = NULL;

    assertFrameObject( frame_b7f14d52174fa04801be722b821b9214 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_9_getsubprotocol );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_9_getsubprotocol );
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


static PyObject *impl_websocket$_core$$$function_10_getstatus( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8448815dc509d82dab03d69eebaa7658;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8448815dc509d82dab03d69eebaa7658 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8448815dc509d82dab03d69eebaa7658, codeobj_8448815dc509d82dab03d69eebaa7658, module_websocket$_core, sizeof(void *) );
    frame_8448815dc509d82dab03d69eebaa7658 = cache_frame_8448815dc509d82dab03d69eebaa7658;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8448815dc509d82dab03d69eebaa7658 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8448815dc509d82dab03d69eebaa7658 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_handshake_response );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_handshake_response );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8448815dc509d82dab03d69eebaa7658 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8448815dc509d82dab03d69eebaa7658 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8448815dc509d82dab03d69eebaa7658 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8448815dc509d82dab03d69eebaa7658, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8448815dc509d82dab03d69eebaa7658->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8448815dc509d82dab03d69eebaa7658, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8448815dc509d82dab03d69eebaa7658,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8448815dc509d82dab03d69eebaa7658 == cache_frame_8448815dc509d82dab03d69eebaa7658 )
    {
        Py_DECREF( frame_8448815dc509d82dab03d69eebaa7658 );
    }
    cache_frame_8448815dc509d82dab03d69eebaa7658 = NULL;

    assertFrameObject( frame_8448815dc509d82dab03d69eebaa7658 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_10_getstatus );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_10_getstatus );
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


static PyObject *impl_websocket$_core$$$function_11_getheaders( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_17991e3a86cf2f01ce6afc776e8ab538;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_17991e3a86cf2f01ce6afc776e8ab538 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17991e3a86cf2f01ce6afc776e8ab538, codeobj_17991e3a86cf2f01ce6afc776e8ab538, module_websocket$_core, sizeof(void *) );
    frame_17991e3a86cf2f01ce6afc776e8ab538 = cache_frame_17991e3a86cf2f01ce6afc776e8ab538;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17991e3a86cf2f01ce6afc776e8ab538 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17991e3a86cf2f01ce6afc776e8ab538 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_handshake_response );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_handshake_response );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17991e3a86cf2f01ce6afc776e8ab538 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_17991e3a86cf2f01ce6afc776e8ab538 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17991e3a86cf2f01ce6afc776e8ab538 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17991e3a86cf2f01ce6afc776e8ab538, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17991e3a86cf2f01ce6afc776e8ab538->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17991e3a86cf2f01ce6afc776e8ab538, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17991e3a86cf2f01ce6afc776e8ab538,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_17991e3a86cf2f01ce6afc776e8ab538 == cache_frame_17991e3a86cf2f01ce6afc776e8ab538 )
    {
        Py_DECREF( frame_17991e3a86cf2f01ce6afc776e8ab538 );
    }
    cache_frame_17991e3a86cf2f01ce6afc776e8ab538 = NULL;

    assertFrameObject( frame_17991e3a86cf2f01ce6afc776e8ab538 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_11_getheaders );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_11_getheaders );
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


static PyObject *impl_websocket$_core$$$function_12_is_ssl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_32c72d97bfbe0d41d47410ffed896d75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_32c72d97bfbe0d41d47410ffed896d75 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_32c72d97bfbe0d41d47410ffed896d75, codeobj_32c72d97bfbe0d41d47410ffed896d75, module_websocket$_core, sizeof(void *) );
    frame_32c72d97bfbe0d41d47410ffed896d75 = cache_frame_32c72d97bfbe0d41d47410ffed896d75;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_32c72d97bfbe0d41d47410ffed896d75 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_32c72d97bfbe0d41d47410ffed896d75 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sock );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SSLSocket );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_32c72d97bfbe0d41d47410ffed896d75->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32c72d97bfbe0d41d47410ffed896d75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_32c72d97bfbe0d41d47410ffed896d75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32c72d97bfbe0d41d47410ffed896d75 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_32c72d97bfbe0d41d47410ffed896d75, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_32c72d97bfbe0d41d47410ffed896d75->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_32c72d97bfbe0d41d47410ffed896d75, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_32c72d97bfbe0d41d47410ffed896d75,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_32c72d97bfbe0d41d47410ffed896d75 == cache_frame_32c72d97bfbe0d41d47410ffed896d75 )
    {
        Py_DECREF( frame_32c72d97bfbe0d41d47410ffed896d75 );
    }
    cache_frame_32c72d97bfbe0d41d47410ffed896d75 = NULL;

    assertFrameObject( frame_32c72d97bfbe0d41d47410ffed896d75 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_12_is_ssl );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_12_is_ssl );
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


static PyObject *impl_websocket$_core$$$function_13_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_options = python_pars[ 2 ];
    PyObject *var_addrs = NULL;
    PyObject *var_attempt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_dd0c403565596e7e14d4a939c444cb7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_dd0c403565596e7e14d4a939c444cb7d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd0c403565596e7e14d4a939c444cb7d, codeobj_dd0c403565596e7e14d4a939c444cb7d, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dd0c403565596e7e14d4a939c444cb7d = cache_frame_dd0c403565596e7e14d4a939c444cb7d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd0c403565596e7e14d4a939c444cb7d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd0c403565596e7e14d4a939c444cb7d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_options );
        tmp_source_name_1 = par_options;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_plain_timeout;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sock_opt );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_timeout );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sock_opt );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_1 );

            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_timeout, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_connect );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connect );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connect" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_3 = par_url;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sock_opt );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_proxy_info );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_proxy_info );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "proxy_info" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_options );
        tmp_dircall_arg2_1 = par_options;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_name_5 = impl___internal__$$$function_6_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_options );
        tmp_called_instance_1 = par_options;
        frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 223;
        tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_socket_none_tuple, 0 ) );

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
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
            exception_lineno = 222;
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
            exception_lineno = 222;
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
                    exception_lineno = 222;
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
            exception_lineno = 222;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assattr_name_2 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sock, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
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
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_2;
        assert( var_addrs == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_addrs = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_handshake );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_handshake );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "handshake" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sock );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_dircall_arg2_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_addrs );
        tmp_dircall_arg3_1 = var_addrs;
        CHECK_OBJECT( par_options );
        tmp_dircall_arg4_1 = par_options;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assattr_name_3 = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_handshake_response, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_range );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_options );
        tmp_called_instance_2 = par_options;
        frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 227;
        tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_redirect_limit_int_pos_3_tuple, 0 ) );

        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
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
                type_description_1 = "ooooo";
                exception_lineno = 227;
                goto try_except_handler_5;
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
            PyObject *old = var_attempt;
            var_attempt = tmp_assign_source_7;
            Py_INCREF( var_attempt );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_handshake_response );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_status );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_SUPPORTED_REDIRECT_STATUSES );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SUPPORTED_REDIRECT_STATUSES );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SUPPORTED_REDIRECT_STATUSES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_5;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
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
            PyObject *tmp_assign_source_8;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_handshake_response );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_headers );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_subscript_name_1 = const_str_plain_location;
            tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = par_url;
                par_url = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_sock );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 230;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_dircall_arg1_3;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_dircall_arg2_3;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_instance_4;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_connect );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connect );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connect" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 231;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_4 = tmp_mvar_value_6;
            CHECK_OBJECT( par_url );
            tmp_args_element_name_8 = par_url;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sock_opt );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_proxy_info );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_proxy_info );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_args_element_name_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "proxy_info" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 231;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }

            tmp_dircall_arg1_3 = tmp_mvar_value_7;
            CHECK_OBJECT( par_options );
            tmp_dircall_arg2_3 = par_options;
            Py_INCREF( tmp_dircall_arg1_3 );
            Py_INCREF( tmp_dircall_arg2_3 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
                tmp_args_element_name_10 = impl___internal__$$$function_6_complex_call_helper_star_dict( dir_call_args );
            }
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 231;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_options );
            tmp_called_instance_4 = par_options;
            frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 232;
            tmp_args_element_name_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_socket_none_tuple, 0 ) );

            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );

                exception_lineno = 232;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_9 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


                type_description_1 = "ooooo";
                exception_lineno = 231;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
            if ( tmp_assign_source_11 == NULL )
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
                exception_lineno = 231;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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

                        type_description_1 = "ooooo";
                        exception_lineno = 231;
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

                type_description_1 = "ooooo";
                exception_lineno = 231;
                goto try_except_handler_7;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_7:;
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

        goto try_except_handler_6;
        // End of try:
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assattr_name_4 = tmp_tuple_unpack_2__element_1;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_sock, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ooooo";
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_4:;
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_addrs;
                var_addrs = tmp_assign_source_12;
                Py_INCREF( var_addrs );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_dircall_arg1_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_dircall_arg2_4;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_13;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dircall_arg4_2;
            PyObject *tmp_assattr_target_5;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_handshake );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_handshake );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "handshake" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }

            tmp_dircall_arg1_4 = tmp_mvar_value_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_sock );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_dircall_arg2_4 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_addrs );
            tmp_dircall_arg3_2 = var_addrs;
            CHECK_OBJECT( par_options );
            tmp_dircall_arg4_2 = par_options;
            Py_INCREF( tmp_dircall_arg1_4 );
            Py_INCREF( tmp_dircall_arg3_2 );
            Py_INCREF( tmp_dircall_arg4_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_assattr_name_5 = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( dir_call_args );
            }
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_handshake_response, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
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

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_connected, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_6;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_dd0c403565596e7e14d4a939c444cb7d, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_dd0c403565596e7e14d4a939c444cb7d, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_sock );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto try_except_handler_8;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto try_except_handler_8;
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
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_15;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_sock );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooo";
                goto try_except_handler_8;
            }
            frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = 237;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_close );
            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_assattr_target_7;
            tmp_assattr_name_7 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_sock, tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 238;
                type_description_1 = "ooooo";
                goto try_except_handler_8;
            }
        }
        branch_no_2:;
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 239;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_dd0c403565596e7e14d4a939c444cb7d->m_frame) frame_dd0c403565596e7e14d4a939c444cb7d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_13_connect );
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
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

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd0c403565596e7e14d4a939c444cb7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd0c403565596e7e14d4a939c444cb7d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd0c403565596e7e14d4a939c444cb7d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd0c403565596e7e14d4a939c444cb7d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd0c403565596e7e14d4a939c444cb7d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd0c403565596e7e14d4a939c444cb7d,
        type_description_1,
        par_self,
        par_url,
        par_options,
        var_addrs,
        var_attempt
    );


    // Release cached frame.
    if ( frame_dd0c403565596e7e14d4a939c444cb7d == cache_frame_dd0c403565596e7e14d4a939c444cb7d )
    {
        Py_DECREF( frame_dd0c403565596e7e14d4a939c444cb7d );
    }
    cache_frame_dd0c403565596e7e14d4a939c444cb7d = NULL;

    assertFrameObject( frame_dd0c403565596e7e14d4a939c444cb7d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_13_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_addrs );
    var_addrs = NULL;

    Py_XDECREF( var_attempt );
    var_attempt = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_addrs );
    var_addrs = NULL;

    Py_XDECREF( var_attempt );
    var_attempt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_13_connect );
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


static PyObject *impl_websocket$_core$$$function_14_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_payload = python_pars[ 1 ];
    PyObject *par_opcode = python_pars[ 2 ];
    PyObject *var_frame = NULL;
    struct Nuitka_FrameObject *frame_9334da5c512a0f0221bf3ab5dddb6568;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9334da5c512a0f0221bf3ab5dddb6568 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9334da5c512a0f0221bf3ab5dddb6568, codeobj_9334da5c512a0f0221bf3ab5dddb6568, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9334da5c512a0f0221bf3ab5dddb6568 = cache_frame_9334da5c512a0f0221bf3ab5dddb6568;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9334da5c512a0f0221bf3ab5dddb6568 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9334da5c512a0f0221bf3ab5dddb6568 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_payload );
        tmp_args_element_name_1 = par_payload;
        CHECK_OBJECT( par_opcode );
        tmp_args_element_name_2 = par_opcode;
        frame_9334da5c512a0f0221bf3ab5dddb6568->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_create_frame, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_frame == NULL );
        var_frame = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_frame );
        tmp_args_element_name_3 = var_frame;
        frame_9334da5c512a0f0221bf3ab5dddb6568->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_send_frame, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9334da5c512a0f0221bf3ab5dddb6568 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9334da5c512a0f0221bf3ab5dddb6568 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9334da5c512a0f0221bf3ab5dddb6568 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9334da5c512a0f0221bf3ab5dddb6568, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9334da5c512a0f0221bf3ab5dddb6568->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9334da5c512a0f0221bf3ab5dddb6568, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9334da5c512a0f0221bf3ab5dddb6568,
        type_description_1,
        par_self,
        par_payload,
        par_opcode,
        var_frame
    );


    // Release cached frame.
    if ( frame_9334da5c512a0f0221bf3ab5dddb6568 == cache_frame_9334da5c512a0f0221bf3ab5dddb6568 )
    {
        Py_DECREF( frame_9334da5c512a0f0221bf3ab5dddb6568 );
    }
    cache_frame_9334da5c512a0f0221bf3ab5dddb6568 = NULL;

    assertFrameObject( frame_9334da5c512a0f0221bf3ab5dddb6568 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_14_send );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

    CHECK_OBJECT( (PyObject *)par_opcode );
    Py_DECREF( par_opcode );
    par_opcode = NULL;

    CHECK_OBJECT( (PyObject *)var_frame );
    Py_DECREF( var_frame );
    var_frame = NULL;

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

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

    CHECK_OBJECT( (PyObject *)par_opcode );
    Py_DECREF( par_opcode );
    par_opcode = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_14_send );
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


static PyObject *impl_websocket$_core$$$function_15_send_frame( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_frame = python_pars[ 1 ];
    PyObject *var_data = NULL;
    PyObject *var_length = NULL;
    PyObject *var_l = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_44fe05b15031cc7a03aa5fd621d62899;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_44fe05b15031cc7a03aa5fd621d62899 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_44fe05b15031cc7a03aa5fd621d62899, codeobj_44fe05b15031cc7a03aa5fd621d62899, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_44fe05b15031cc7a03aa5fd621d62899 = cache_frame_44fe05b15031cc7a03aa5fd621d62899;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_44fe05b15031cc7a03aa5fd621d62899 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_44fe05b15031cc7a03aa5fd621d62899 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_mask_key );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_mask_key );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_frame );
            tmp_assattr_target_1 = par_frame;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_get_mask_key, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_frame );
        tmp_called_instance_1 = par_frame;
        frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 272;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_format );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_len );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_data );
        tmp_args_element_name_1 = var_data;
        frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_length == NULL );
        var_length = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_trace );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trace );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trace" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_left_name_1 = const_str_digest_fef21546813ba0c6518af9c8f98b5456;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_repr );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_repr );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "repr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_data );
        tmp_args_element_name_3 = var_data;
        frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_lock );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_4 = tmp_with_1__source;
        tmp_called_name_4 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 276;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_5 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL( tmp_source_name_5, const_str_plain___exit__ );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_data );
        tmp_operand_name_1 = var_data;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_data );
        tmp_args_element_name_4 = var_data;
        frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__send, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_l;
            var_l = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_data );
        tmp_subscribed_name_1 = var_data;
        CHECK_OBJECT( var_l );
        tmp_start_name_1 = var_l;
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_data;
            assert( old != NULL );
            var_data = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_44fe05b15031cc7a03aa5fd621d62899, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_44fe05b15031cc7a03aa5fd621d62899, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
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
            nuitka_bool tmp_assign_source_9;
            tmp_assign_source_9 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_9;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            tmp_args_element_name_5 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_6 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_7 = EXC_TRACEBACK(PyThreadState_GET());
            frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 279;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 279;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_44fe05b15031cc7a03aa5fd621d62899->m_frame) frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 276;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_44fe05b15031cc7a03aa5fd621d62899->m_frame) frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
        branch_end_3:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_15_send_frame );
    return NULL;
    // End of try:
    try_end_1:;
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

    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 279;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_5:;
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
        nuitka_bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            frame_44fe05b15031cc7a03aa5fd621d62899->m_frame.f_lineno = 279;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_6:;
    }
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
    RESTORE_FRAME_EXCEPTION( frame_44fe05b15031cc7a03aa5fd621d62899 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_44fe05b15031cc7a03aa5fd621d62899 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_44fe05b15031cc7a03aa5fd621d62899, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_44fe05b15031cc7a03aa5fd621d62899->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_44fe05b15031cc7a03aa5fd621d62899, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_44fe05b15031cc7a03aa5fd621d62899,
        type_description_1,
        par_self,
        par_frame,
        var_data,
        var_length,
        var_l
    );


    // Release cached frame.
    if ( frame_44fe05b15031cc7a03aa5fd621d62899 == cache_frame_44fe05b15031cc7a03aa5fd621d62899 )
    {
        Py_DECREF( frame_44fe05b15031cc7a03aa5fd621d62899 );
    }
    cache_frame_44fe05b15031cc7a03aa5fd621d62899 = NULL;

    assertFrameObject( frame_44fe05b15031cc7a03aa5fd621d62899 );

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

    CHECK_OBJECT( var_length );
    tmp_return_value = var_length;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_15_send_frame );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_frame );
    Py_DECREF( par_frame );
    par_frame = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    CHECK_OBJECT( (PyObject *)var_length );
    Py_DECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

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

    CHECK_OBJECT( (PyObject *)par_frame );
    Py_DECREF( par_frame );
    par_frame = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_15_send_frame );
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


static PyObject *impl_websocket$_core$$$function_16_send_binary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_payload = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_64bca6e44ce31d42faae35db1e376e09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64bca6e44ce31d42faae35db1e376e09 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64bca6e44ce31d42faae35db1e376e09, codeobj_64bca6e44ce31d42faae35db1e376e09, module_websocket$_core, sizeof(void *)+sizeof(void *) );
    frame_64bca6e44ce31d42faae35db1e376e09 = cache_frame_64bca6e44ce31d42faae35db1e376e09;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64bca6e44ce31d42faae35db1e376e09 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64bca6e44ce31d42faae35db1e376e09 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_send );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_payload );
        tmp_args_element_name_1 = par_payload;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_OPCODE_BINARY );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_64bca6e44ce31d42faae35db1e376e09->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64bca6e44ce31d42faae35db1e376e09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64bca6e44ce31d42faae35db1e376e09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64bca6e44ce31d42faae35db1e376e09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64bca6e44ce31d42faae35db1e376e09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64bca6e44ce31d42faae35db1e376e09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64bca6e44ce31d42faae35db1e376e09, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64bca6e44ce31d42faae35db1e376e09,
        type_description_1,
        par_self,
        par_payload
    );


    // Release cached frame.
    if ( frame_64bca6e44ce31d42faae35db1e376e09 == cache_frame_64bca6e44ce31d42faae35db1e376e09 )
    {
        Py_DECREF( frame_64bca6e44ce31d42faae35db1e376e09 );
    }
    cache_frame_64bca6e44ce31d42faae35db1e376e09 = NULL;

    assertFrameObject( frame_64bca6e44ce31d42faae35db1e376e09 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_16_send_binary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

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

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_16_send_binary );
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


static PyObject *impl_websocket$_core$$$function_17_ping( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_payload = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_fa7d64ae92da108615bd03f2a491cf94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa7d64ae92da108615bd03f2a491cf94 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa7d64ae92da108615bd03f2a491cf94, codeobj_fa7d64ae92da108615bd03f2a491cf94, module_websocket$_core, sizeof(void *)+sizeof(void *) );
    frame_fa7d64ae92da108615bd03f2a491cf94 = cache_frame_fa7d64ae92da108615bd03f2a491cf94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa7d64ae92da108615bd03f2a491cf94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa7d64ae92da108615bd03f2a491cf94 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_payload );
        tmp_args_element_name_1 = par_payload;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fa7d64ae92da108615bd03f2a491cf94->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_payload );
            tmp_called_instance_1 = par_payload;
            frame_fa7d64ae92da108615bd03f2a491cf94->m_frame.f_lineno = 293;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 293;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_payload;
                assert( old != NULL );
                par_payload = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_send );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_payload );
        tmp_args_element_name_3 = par_payload;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OPCODE_PING );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fa7d64ae92da108615bd03f2a491cf94->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa7d64ae92da108615bd03f2a491cf94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa7d64ae92da108615bd03f2a491cf94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa7d64ae92da108615bd03f2a491cf94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa7d64ae92da108615bd03f2a491cf94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa7d64ae92da108615bd03f2a491cf94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa7d64ae92da108615bd03f2a491cf94,
        type_description_1,
        par_self,
        par_payload
    );


    // Release cached frame.
    if ( frame_fa7d64ae92da108615bd03f2a491cf94 == cache_frame_fa7d64ae92da108615bd03f2a491cf94 )
    {
        Py_DECREF( frame_fa7d64ae92da108615bd03f2a491cf94 );
    }
    cache_frame_fa7d64ae92da108615bd03f2a491cf94 = NULL;

    assertFrameObject( frame_fa7d64ae92da108615bd03f2a491cf94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_17_ping );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

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

    Py_XDECREF( par_payload );
    par_payload = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_17_ping );
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


static PyObject *impl_websocket$_core$$$function_18_pong( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_payload = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_8de68b3a7c96cbae04fde24c1c05b739;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8de68b3a7c96cbae04fde24c1c05b739 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8de68b3a7c96cbae04fde24c1c05b739, codeobj_8de68b3a7c96cbae04fde24c1c05b739, module_websocket$_core, sizeof(void *)+sizeof(void *) );
    frame_8de68b3a7c96cbae04fde24c1c05b739 = cache_frame_8de68b3a7c96cbae04fde24c1c05b739;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8de68b3a7c96cbae04fde24c1c05b739 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8de68b3a7c96cbae04fde24c1c05b739 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_isinstance );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinstance );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isinstance" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_payload );
        tmp_args_element_name_1 = par_payload;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8de68b3a7c96cbae04fde24c1c05b739->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_payload );
            tmp_called_instance_1 = par_payload;
            frame_8de68b3a7c96cbae04fde24c1c05b739->m_frame.f_lineno = 303;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_payload;
                assert( old != NULL );
                par_payload = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_send );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_payload );
        tmp_args_element_name_3 = par_payload;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OPCODE_PONG );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8de68b3a7c96cbae04fde24c1c05b739->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8de68b3a7c96cbae04fde24c1c05b739 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8de68b3a7c96cbae04fde24c1c05b739 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8de68b3a7c96cbae04fde24c1c05b739, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8de68b3a7c96cbae04fde24c1c05b739->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8de68b3a7c96cbae04fde24c1c05b739, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8de68b3a7c96cbae04fde24c1c05b739,
        type_description_1,
        par_self,
        par_payload
    );


    // Release cached frame.
    if ( frame_8de68b3a7c96cbae04fde24c1c05b739 == cache_frame_8de68b3a7c96cbae04fde24c1c05b739 )
    {
        Py_DECREF( frame_8de68b3a7c96cbae04fde24c1c05b739 );
    }
    cache_frame_8de68b3a7c96cbae04fde24c1c05b739 = NULL;

    assertFrameObject( frame_8de68b3a7c96cbae04fde24c1c05b739 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_18_pong );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_payload );
    Py_DECREF( par_payload );
    par_payload = NULL;

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

    Py_XDECREF( par_payload );
    par_payload = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_18_pong );
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


static PyObject *impl_websocket$_core$$$function_19_recv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_opcode = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_b80de2f69593fdbfa97729464450d248;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b80de2f69593fdbfa97729464450d248 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b80de2f69593fdbfa97729464450d248, codeobj_b80de2f69593fdbfa97729464450d248, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b80de2f69593fdbfa97729464450d248 = cache_frame_b80de2f69593fdbfa97729464450d248;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b80de2f69593fdbfa97729464450d248 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b80de2f69593fdbfa97729464450d248 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readlock );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = 312;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
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


            exception_lineno = 312;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = 313;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_recv_data );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto try_except_handler_5;
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


            type_description_1 = "ooo";
            exception_lineno = 313;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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


            type_description_1 = "ooo";
            exception_lineno = 313;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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
                    exception_lineno = 313;
                    goto try_except_handler_6;
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
            exception_lineno = 313;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_opcode == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_opcode = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_data == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_data = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_b80de2f69593fdbfa97729464450d248, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_b80de2f69593fdbfa97729464450d248, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto try_except_handler_7;
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
            nuitka_bool tmp_assign_source_10;
            tmp_assign_source_10 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_2 = tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = 313;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooo";
                goto try_except_handler_7;
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
                exception_lineno = 313;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b80de2f69593fdbfa97729464450d248->m_frame) frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_7;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 312;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b80de2f69593fdbfa97729464450d248->m_frame) frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_7;
        branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_19_recv );
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = 313;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_5 );
                Py_XDECREF( exception_keeper_value_5 );
                Py_XDECREF( exception_keeper_tb_5 );

                exception_lineno = 313;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = 313;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_4:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PY3 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
        if ( var_opcode == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "opcode" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_opcode;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_OPCODE_TEXT );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            if ( var_data == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 315;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = var_data;
            frame_b80de2f69593fdbfa97729464450d248->m_frame.f_lineno = 315;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 315;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_4;
            if ( var_opcode == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "opcode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 316;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_5 = var_opcode;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 316;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_3;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_OPCODE_TEXT );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooo";
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
            if ( var_opcode == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "opcode" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 316;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_6 = var_opcode;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 316;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_4;
            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_OPCODE_BINARY );
            if ( tmp_compexpr_right_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_6 = tmp_or_left_value_1;
            or_end_1:;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            if ( var_data == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 317;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_return_value = var_data;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_6;
            branch_no_6:;
            tmp_return_value = const_str_empty;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_6:;
        }
        branch_end_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b80de2f69593fdbfa97729464450d248 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b80de2f69593fdbfa97729464450d248 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b80de2f69593fdbfa97729464450d248 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b80de2f69593fdbfa97729464450d248, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b80de2f69593fdbfa97729464450d248->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b80de2f69593fdbfa97729464450d248, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b80de2f69593fdbfa97729464450d248,
        type_description_1,
        par_self,
        var_opcode,
        var_data
    );


    // Release cached frame.
    if ( frame_b80de2f69593fdbfa97729464450d248 == cache_frame_b80de2f69593fdbfa97729464450d248 )
    {
        Py_DECREF( frame_b80de2f69593fdbfa97729464450d248 );
    }
    cache_frame_b80de2f69593fdbfa97729464450d248 = NULL;

    assertFrameObject( frame_b80de2f69593fdbfa97729464450d248 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_19_recv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_opcode );
    var_opcode = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_opcode );
    var_opcode = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_19_recv );
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


static PyObject *impl_websocket$_core$$$function_20_recv_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_control_frame = python_pars[ 1 ];
    PyObject *var_opcode = NULL;
    PyObject *var_frame = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c5e1ec5a81681ef5eada8787f63a5a68;
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
    static struct Nuitka_FrameObject *cache_frame_c5e1ec5a81681ef5eada8787f63a5a68 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5e1ec5a81681ef5eada8787f63a5a68, codeobj_c5e1ec5a81681ef5eada8787f63a5a68, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c5e1ec5a81681ef5eada8787f63a5a68 = cache_frame_c5e1ec5a81681ef5eada8787f63a5a68;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5e1ec5a81681ef5eada8787f63a5a68 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5e1ec5a81681ef5eada8787f63a5a68 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_control_frame );
        tmp_args_element_name_1 = par_control_frame;
        frame_c5e1ec5a81681ef5eada8787f63a5a68->m_frame.f_lineno = 330;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_recv_data_frame, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
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
            exception_lineno = 330;
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
            exception_lineno = 330;
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
                    exception_lineno = 330;
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
            exception_lineno = 330;
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
        assert( var_opcode == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_opcode = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_frame == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_frame = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_opcode );
        tmp_tuple_element_1 = var_opcode;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_frame );
        tmp_source_name_1 = var_frame;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_data );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 331;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5e1ec5a81681ef5eada8787f63a5a68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5e1ec5a81681ef5eada8787f63a5a68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5e1ec5a81681ef5eada8787f63a5a68 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5e1ec5a81681ef5eada8787f63a5a68, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5e1ec5a81681ef5eada8787f63a5a68->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5e1ec5a81681ef5eada8787f63a5a68, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5e1ec5a81681ef5eada8787f63a5a68,
        type_description_1,
        par_self,
        par_control_frame,
        var_opcode,
        var_frame
    );


    // Release cached frame.
    if ( frame_c5e1ec5a81681ef5eada8787f63a5a68 == cache_frame_c5e1ec5a81681ef5eada8787f63a5a68 )
    {
        Py_DECREF( frame_c5e1ec5a81681ef5eada8787f63a5a68 );
    }
    cache_frame_c5e1ec5a81681ef5eada8787f63a5a68 = NULL;

    assertFrameObject( frame_c5e1ec5a81681ef5eada8787f63a5a68 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_20_recv_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_control_frame );
    Py_DECREF( par_control_frame );
    par_control_frame = NULL;

    CHECK_OBJECT( (PyObject *)var_opcode );
    Py_DECREF( var_opcode );
    var_opcode = NULL;

    CHECK_OBJECT( (PyObject *)var_frame );
    Py_DECREF( var_frame );
    var_frame = NULL;

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

    CHECK_OBJECT( (PyObject *)par_control_frame );
    Py_DECREF( par_control_frame );
    par_control_frame = NULL;

    Py_XDECREF( var_opcode );
    var_opcode = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_20_recv_data );
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


static PyObject *impl_websocket$_core$$$function_21_recv_data_frame( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_control_frame = python_pars[ 1 ];
    PyObject *var_frame = NULL;
    struct Nuitka_FrameObject *frame_1287f40297c5579255fde055d3d5a653;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1287f40297c5579255fde055d3d5a653 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1287f40297c5579255fde055d3d5a653, codeobj_1287f40297c5579255fde055d3d5a653, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1287f40297c5579255fde055d3d5a653 = cache_frame_1287f40297c5579255fde055d3d5a653;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1287f40297c5579255fde055d3d5a653 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1287f40297c5579255fde055d3d5a653 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 343;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_recv_frame );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_frame;
            var_frame = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_frame );
        tmp_operand_name_1 = var_frame;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_WebSocketProtocolException );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketProtocolException );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketProtocolException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 347;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_left_name_1 = const_str_digest_077a7bc08f26ba8d330b01e1a1925cc9;
            CHECK_OBJECT( var_frame );
            tmp_right_name_1 = var_frame;
            tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 347;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 347;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( var_frame );
            tmp_source_name_1 = var_frame;
            tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_opcode );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_OPCODE_TEXT );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_1 );

                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_compexpr_right_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_1 );
                Py_DECREF( tmp_compexpr_right_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OPCODE_BINARY );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_1 );
                Py_DECREF( tmp_compexpr_right_1 );

                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_compexpr_right_1, 1, tmp_tuple_element_1 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_1 );
                Py_DECREF( tmp_compexpr_right_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_OPCODE_CONT );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_1 );
                Py_DECREF( tmp_compexpr_right_1 );

                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_compexpr_right_1, 2, tmp_tuple_element_1 );
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_cont_frame );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_frame );
                tmp_args_element_name_2 = var_frame;
                frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 350;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_validate, call_args );
                }

                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_cont_frame );
                if ( tmp_called_instance_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_frame );
                tmp_args_element_name_3 = var_frame;
                frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 351;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_add, call_args );
                }

                Py_DECREF( tmp_called_instance_3 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_7;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_4;
                int tmp_truth_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_7 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cont_frame );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_frame );
                tmp_args_element_name_4 = var_frame;
                frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 353;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_is_fire, call_args );
                }

                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 353;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
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
                    PyObject *tmp_called_instance_5;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_args_element_name_5;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_8 = par_self;
                    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_cont_frame );
                    if ( tmp_called_instance_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 354;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_frame );
                    tmp_args_element_name_5 = var_frame;
                    frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 354;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_5 };
                        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_extract, call_args );
                    }

                    Py_DECREF( tmp_called_instance_5 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 354;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_3:;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_5;
                CHECK_OBJECT( var_frame );
                tmp_source_name_9 = var_frame;
                tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_opcode );
                if ( tmp_compexpr_left_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
                }

                if ( tmp_mvar_value_5 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 356;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_5;
                tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_OPCODE_CLOSE );
                if ( tmp_compexpr_right_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_2 );

                    exception_lineno = 356;
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


                    exception_lineno = 356;
                    type_description_1 = "ooo";
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
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_call_result_4;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_6 = par_self;
                    frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 357;
                    tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_send_close );
                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 357;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_4 );
                }
                {
                    PyObject *tmp_tuple_element_2;
                    PyObject *tmp_source_name_11;
                    CHECK_OBJECT( var_frame );
                    tmp_source_name_11 = var_frame;
                    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_opcode );
                    if ( tmp_tuple_element_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 358;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_return_value = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
                    CHECK_OBJECT( var_frame );
                    tmp_tuple_element_2 = var_frame;
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
                    goto frame_return_exit_1;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_3;
                    PyObject *tmp_compexpr_right_3;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_mvar_value_6;
                    CHECK_OBJECT( var_frame );
                    tmp_source_name_12 = var_frame;
                    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_opcode );
                    if ( tmp_compexpr_left_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 359;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {
                        Py_DECREF( tmp_compexpr_left_3 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 359;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_13 = tmp_mvar_value_6;
                    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_OPCODE_PING );
                    if ( tmp_compexpr_right_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_compexpr_left_3 );

                        exception_lineno = 359;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                    Py_DECREF( tmp_compexpr_left_3 );
                    Py_DECREF( tmp_compexpr_right_3 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 359;
                        type_description_1 = "ooo";
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
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_compexpr_left_4;
                        PyObject *tmp_compexpr_right_4;
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_mvar_value_7;
                        PyObject *tmp_args_element_name_6;
                        PyObject *tmp_source_name_14;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_len );

                        if (unlikely( tmp_mvar_value_7 == NULL ))
                        {
                            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_len );
                        }

                        if ( tmp_mvar_value_7 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "len" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 360;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_2 = tmp_mvar_value_7;
                        CHECK_OBJECT( var_frame );
                        tmp_source_name_14 = var_frame;
                        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_data );
                        if ( tmp_args_element_name_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 360;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 360;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_6 };
                            tmp_compexpr_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                        }

                        Py_DECREF( tmp_args_element_name_6 );
                        if ( tmp_compexpr_left_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 360;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_4 = const_int_pos_126;
                        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                        Py_DECREF( tmp_compexpr_left_4 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 360;
                            type_description_1 = "ooo";
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
                            PyObject *tmp_called_name_3;
                            PyObject *tmp_source_name_15;
                            PyObject *tmp_call_result_5;
                            PyObject *tmp_args_element_name_7;
                            PyObject *tmp_source_name_16;
                            CHECK_OBJECT( par_self );
                            tmp_source_name_15 = par_self;
                            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_pong );
                            if ( tmp_called_name_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 361;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( var_frame );
                            tmp_source_name_16 = var_frame;
                            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_data );
                            if ( tmp_args_element_name_7 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_called_name_3 );

                                exception_lineno = 361;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 361;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_7 };
                                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                            }

                            Py_DECREF( tmp_called_name_3 );
                            Py_DECREF( tmp_args_element_name_7 );
                            if ( tmp_call_result_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 361;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            Py_DECREF( tmp_call_result_5 );
                        }
                        goto branch_end_6;
                        branch_no_6:;
                        {
                            PyObject *tmp_raise_type_2;
                            PyObject *tmp_called_name_4;
                            PyObject *tmp_mvar_value_8;
                            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_WebSocketProtocolException );

                            if (unlikely( tmp_mvar_value_8 == NULL ))
                            {
                                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketProtocolException );
                            }

                            if ( tmp_mvar_value_8 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketProtocolException" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 363;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_name_4 = tmp_mvar_value_8;
                            frame_1287f40297c5579255fde055d3d5a653->m_frame.f_lineno = 363;
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_b57f77d5d85c8f12a16e57891baa8da1_tuple, 0 ) );

                            if ( tmp_raise_type_2 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 363;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            exception_type = tmp_raise_type_2;
                            exception_lineno = 363;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        branch_end_6:;
                    }
                    {
                        nuitka_bool tmp_condition_result_7;
                        int tmp_truth_name_2;
                        CHECK_OBJECT( par_control_frame );
                        tmp_truth_name_2 = CHECK_IF_TRUE( par_control_frame );
                        if ( tmp_truth_name_2 == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 365;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                            PyObject *tmp_tuple_element_3;
                            PyObject *tmp_source_name_17;
                            CHECK_OBJECT( var_frame );
                            tmp_source_name_17 = var_frame;
                            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_opcode );
                            if ( tmp_tuple_element_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 366;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_return_value = PyTuple_New( 2 );
                            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
                            CHECK_OBJECT( var_frame );
                            tmp_tuple_element_3 = var_frame;
                            Py_INCREF( tmp_tuple_element_3 );
                            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
                            goto frame_return_exit_1;
                        }
                        branch_no_7:;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        nuitka_bool tmp_condition_result_8;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_source_name_19;
                        PyObject *tmp_mvar_value_9;
                        CHECK_OBJECT( var_frame );
                        tmp_source_name_18 = var_frame;
                        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_opcode );
                        if ( tmp_compexpr_left_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 367;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

                        if (unlikely( tmp_mvar_value_9 == NULL ))
                        {
                            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
                        }

                        if ( tmp_mvar_value_9 == NULL )
                        {
                            Py_DECREF( tmp_compexpr_left_5 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 367;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_19 = tmp_mvar_value_9;
                        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_OPCODE_PONG );
                        if ( tmp_compexpr_right_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_compexpr_left_5 );

                            exception_lineno = 367;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                        Py_DECREF( tmp_compexpr_left_5 );
                        Py_DECREF( tmp_compexpr_right_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 367;
                            type_description_1 = "ooo";
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
                            int tmp_truth_name_3;
                            CHECK_OBJECT( par_control_frame );
                            tmp_truth_name_3 = CHECK_IF_TRUE( par_control_frame );
                            if ( tmp_truth_name_3 == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 368;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_9 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                                PyObject *tmp_tuple_element_4;
                                PyObject *tmp_source_name_20;
                                CHECK_OBJECT( var_frame );
                                tmp_source_name_20 = var_frame;
                                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_opcode );
                                if ( tmp_tuple_element_4 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 369;
                                    type_description_1 = "ooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_return_value = PyTuple_New( 2 );
                                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
                                CHECK_OBJECT( var_frame );
                                tmp_tuple_element_4 = var_frame;
                                Py_INCREF( tmp_tuple_element_4 );
                                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
                                goto frame_return_exit_1;
                            }
                            branch_no_9:;
                        }
                        branch_no_8:;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1287f40297c5579255fde055d3d5a653 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1287f40297c5579255fde055d3d5a653 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1287f40297c5579255fde055d3d5a653 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1287f40297c5579255fde055d3d5a653, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1287f40297c5579255fde055d3d5a653->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1287f40297c5579255fde055d3d5a653, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1287f40297c5579255fde055d3d5a653,
        type_description_1,
        par_self,
        par_control_frame,
        var_frame
    );


    // Release cached frame.
    if ( frame_1287f40297c5579255fde055d3d5a653 == cache_frame_1287f40297c5579255fde055d3d5a653 )
    {
        Py_DECREF( frame_1287f40297c5579255fde055d3d5a653 );
    }
    cache_frame_1287f40297c5579255fde055d3d5a653 = NULL;

    assertFrameObject( frame_1287f40297c5579255fde055d3d5a653 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_21_recv_data_frame );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_control_frame );
    Py_DECREF( par_control_frame );
    par_control_frame = NULL;

    CHECK_OBJECT( (PyObject *)var_frame );
    Py_DECREF( var_frame );
    var_frame = NULL;

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

    CHECK_OBJECT( (PyObject *)par_control_frame );
    Py_DECREF( par_control_frame );
    par_control_frame = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_21_recv_data_frame );
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


static PyObject *impl_websocket$_core$$$function_22_recv_frame( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_83e93e54e340b951b9fe218f66b807a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83e93e54e340b951b9fe218f66b807a3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83e93e54e340b951b9fe218f66b807a3, codeobj_83e93e54e340b951b9fe218f66b807a3, module_websocket$_core, sizeof(void *) );
    frame_83e93e54e340b951b9fe218f66b807a3 = cache_frame_83e93e54e340b951b9fe218f66b807a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83e93e54e340b951b9fe218f66b807a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83e93e54e340b951b9fe218f66b807a3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_frame_buffer );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_83e93e54e340b951b9fe218f66b807a3->m_frame.f_lineno = 377;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_recv_frame );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83e93e54e340b951b9fe218f66b807a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83e93e54e340b951b9fe218f66b807a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83e93e54e340b951b9fe218f66b807a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83e93e54e340b951b9fe218f66b807a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83e93e54e340b951b9fe218f66b807a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83e93e54e340b951b9fe218f66b807a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83e93e54e340b951b9fe218f66b807a3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_83e93e54e340b951b9fe218f66b807a3 == cache_frame_83e93e54e340b951b9fe218f66b807a3 )
    {
        Py_DECREF( frame_83e93e54e340b951b9fe218f66b807a3 );
    }
    cache_frame_83e93e54e340b951b9fe218f66b807a3 = NULL;

    assertFrameObject( frame_83e93e54e340b951b9fe218f66b807a3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_22_recv_frame );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_22_recv_frame );
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


static PyObject *impl_websocket$_core$$$function_23_send_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status = python_pars[ 1 ];
    PyObject *par_reason = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_22b3e9d101030ef997c7c3f54cc66f7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_22b3e9d101030ef997c7c3f54cc66f7a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_22b3e9d101030ef997c7c3f54cc66f7a, codeobj_22b3e9d101030ef997c7c3f54cc66f7a, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_22b3e9d101030ef997c7c3f54cc66f7a = cache_frame_22b3e9d101030ef997c7c3f54cc66f7a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_22b3e9d101030ef997c7c3f54cc66f7a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_22b3e9d101030ef997c7c3f54cc66f7a ) == 2 ); // Frame stack

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
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_status );
        tmp_compexpr_left_1 = par_status;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_status );
        tmp_compexpr_left_2 = par_status;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 387;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LENGTH_16 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooo";
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
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ValueError );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 388;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            frame_22b3e9d101030ef997c7c3f54cc66f7a->m_frame.f_lineno = 388;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_fba52b8e7aa269e1686790188f38aa7a_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 388;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 388;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_connected, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_send );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_struct );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        tmp_args_element_name_2 = const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
        CHECK_OBJECT( par_status );
        tmp_args_element_name_3 = par_status;
        frame_22b3e9d101030ef997c7c3f54cc66f7a->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pack, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_reason );
        tmp_right_name_1 = par_reason;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OPCODE_CLOSE );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_22b3e9d101030ef997c7c3f54cc66f7a->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22b3e9d101030ef997c7c3f54cc66f7a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22b3e9d101030ef997c7c3f54cc66f7a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22b3e9d101030ef997c7c3f54cc66f7a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22b3e9d101030ef997c7c3f54cc66f7a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22b3e9d101030ef997c7c3f54cc66f7a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_22b3e9d101030ef997c7c3f54cc66f7a,
        type_description_1,
        par_self,
        par_status,
        par_reason
    );


    // Release cached frame.
    if ( frame_22b3e9d101030ef997c7c3f54cc66f7a == cache_frame_22b3e9d101030ef997c7c3f54cc66f7a )
    {
        Py_DECREF( frame_22b3e9d101030ef997c7c3f54cc66f7a );
    }
    cache_frame_22b3e9d101030ef997c7c3f54cc66f7a = NULL;

    assertFrameObject( frame_22b3e9d101030ef997c7c3f54cc66f7a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_23_send_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

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

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_23_send_close );
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


static PyObject *impl_websocket$_core$$$function_24_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status = python_pars[ 1 ];
    PyObject *par_reason = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *var_sock_timeout = NULL;
    PyObject *var_start_time = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_recv_status = NULL;
    struct Nuitka_FrameObject *frame_46db69b7e2f7825e50c2d46ce839f431;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_46db69b7e2f7825e50c2d46ce839f431 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46db69b7e2f7825e50c2d46ce839f431, codeobj_46db69b7e2f7825e50c2d46ce839f431, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_46db69b7e2f7825e50c2d46ce839f431 = cache_frame_46db69b7e2f7825e50c2d46ce839f431;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46db69b7e2f7825e50c2d46ce839f431 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46db69b7e2f7825e50c2d46ce839f431 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connected );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 403;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            CHECK_OBJECT( par_status );
            tmp_compexpr_left_1 = par_status;
            tmp_compexpr_right_1 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "oooooooo";
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
            CHECK_OBJECT( par_status );
            tmp_compexpr_left_2 = par_status;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 404;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_LENGTH_16 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ValueError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 405;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 405;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_fba52b8e7aa269e1686790188f38aa7a_tuple, 0 ) );

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 405;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 405;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_connected, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 408;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_send );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_struct );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 409;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            tmp_args_element_name_2 = const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
            CHECK_OBJECT( par_status );
            tmp_args_element_name_3 = par_status;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 409;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pack, call_args );
            }

            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 409;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_reason );
            tmp_right_name_1 = par_reason;
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 409;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 410;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_OPCODE_CLOSE );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 410;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 409;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sock );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 411;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_gettimeout );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 411;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert( var_sock_timeout == NULL );
            var_sock_timeout = tmp_assign_source_1;
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sock );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_timeout );
            tmp_args_element_name_5 = par_timeout;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 412;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_settimeout, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 412;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 413;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_4 = tmp_mvar_value_5;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 413;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_time );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 413;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            assert( var_start_time == NULL );
            var_start_time = tmp_assign_source_2;
        }
        loop_start_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_timeout );
            tmp_compexpr_left_3 = par_timeout;
            tmp_compexpr_right_3 = Py_None;
            tmp_or_left_value_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? Py_True : Py_False;
            tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
            if ( tmp_or_left_truth_2 == 1 )
            {
                goto or_left_2;
            }
            else
            {
                goto or_right_2;
            }
            or_right_2:;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_5 = tmp_mvar_value_6;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 414;
            tmp_left_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_time );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_start_time );
            tmp_right_name_2 = var_start_time;
            tmp_compexpr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_timeout );
            tmp_compexpr_right_4 = par_timeout;
            tmp_or_right_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_or_right_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_operand_name_1 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            Py_INCREF( tmp_or_left_value_2 );
            tmp_operand_name_1 = tmp_or_left_value_2;
            or_end_2:;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
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
            goto loop_end_1;
            branch_no_3:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT( par_self );
            tmp_called_instance_6 = par_self;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 416;
            tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_recv_frame );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 416;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = var_frame;
                var_frame = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            CHECK_OBJECT( var_frame );
            tmp_source_name_7 = var_frame;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_opcode );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 417;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 417;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_8 = tmp_mvar_value_7;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_OPCODE_CLOSE );
            if ( tmp_compexpr_right_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_5 );

                exception_lineno = 417;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            Py_DECREF( tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 417;
                type_description_1 = "oooooooo";
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
            goto loop_start_1;
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_call_result_3;
            int tmp_truth_name_2;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_isEnabledForError );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isEnabledForError );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isEnabledForError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 419;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_3 = tmp_mvar_value_8;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 419;
            tmp_call_result_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 419;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_source_name_10;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_subscript_name_2;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_struct );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 420;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }

                tmp_source_name_9 = tmp_mvar_value_9;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_unpack );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 420;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }
                tmp_args_element_name_6 = const_str_digest_423ab65cfd2fd6194b8a1938ade23cb9;
                CHECK_OBJECT( var_frame );
                tmp_source_name_10 = var_frame;
                tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_data );
                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 420;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }
                tmp_subscript_name_1 = const_slice_int_0_int_pos_2_none;
                tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_2 );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 420;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }
                frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 420;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 420;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }
                tmp_subscript_name_2 = const_int_0;
                tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_2, 0 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 420;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = var_recv_status;
                    var_recv_status = tmp_assign_source_4;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_mvar_value_10;
                CHECK_OBJECT( var_recv_status );
                tmp_compexpr_left_6 = var_recv_status;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_STATUS_NORMAL );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STATUS_NORMAL );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STATUS_NORMAL" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 421;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                }

                tmp_compexpr_right_6 = tmp_mvar_value_10;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 421;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
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
                    PyObject *tmp_called_name_5;
                    PyObject *tmp_mvar_value_11;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_mvar_value_12;
                    PyObject *tmp_args_element_name_9;
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_error );

                    if (unlikely( tmp_mvar_value_11 == NULL ))
                    {
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
                    }

                    if ( tmp_mvar_value_11 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "error" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 422;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_3;
                    }

                    tmp_called_name_5 = tmp_mvar_value_11;
                    tmp_left_name_3 = const_str_digest_db23e085699c95e86fc9295b4cc45999;
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_repr );

                    if (unlikely( tmp_mvar_value_12 == NULL ))
                    {
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_repr );
                    }

                    if ( tmp_mvar_value_12 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "repr" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 422;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_3;
                    }

                    tmp_called_name_6 = tmp_mvar_value_12;
                    CHECK_OBJECT( var_recv_status );
                    tmp_args_element_name_9 = var_recv_status;
                    frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 422;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9 };
                        tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                    }

                    if ( tmp_right_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 422;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_3;
                    }
                    tmp_args_element_name_8 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_right_name_3 );
                    if ( tmp_args_element_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 422;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_3;
                    }
                    frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 422;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8 };
                        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_8 );
                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 422;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_3;
                    }
                    Py_DECREF( tmp_call_result_4 );
                }
                branch_no_6:;
            }
            branch_no_5:;
        }
        goto loop_end_1;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_24_close );
        return NULL;
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

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_46db69b7e2f7825e50c2d46ce839f431, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_46db69b7e2f7825e50c2d46ce839f431, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        goto try_break_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_24_close );
        return NULL;
        // try break handler code:
        try_break_handler_4:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto loop_end_1;
        // End of try:
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_24_close );
        return NULL;
        // End of try:
        try_end_1:;
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_source_name_11;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_10;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_sock );
            if ( tmp_called_instance_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_sock_timeout );
            tmp_args_element_name_10 = var_sock_timeout;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 426;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_settimeout, call_args );
            }

            Py_DECREF( tmp_called_instance_7 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_13;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_sock );
            if ( tmp_source_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 427;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shutdown );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 427;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_socket );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 427;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_14 = tmp_mvar_value_13;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_SHUT_RDWR );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 427;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 427;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 427;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_6 );
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

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );
        goto try_end_2;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_24_close );
        return NULL;
        // End of try:
        try_end_2:;
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_call_result_7;
            CHECK_OBJECT( par_self );
            tmp_called_instance_8 = par_self;
            frame_46db69b7e2f7825e50c2d46ce839f431->m_frame.f_lineno = 431;
            tmp_call_result_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_shutdown );
            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 431;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46db69b7e2f7825e50c2d46ce839f431 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46db69b7e2f7825e50c2d46ce839f431 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46db69b7e2f7825e50c2d46ce839f431, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46db69b7e2f7825e50c2d46ce839f431->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46db69b7e2f7825e50c2d46ce839f431, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46db69b7e2f7825e50c2d46ce839f431,
        type_description_1,
        par_self,
        par_status,
        par_reason,
        par_timeout,
        var_sock_timeout,
        var_start_time,
        var_frame,
        var_recv_status
    );


    // Release cached frame.
    if ( frame_46db69b7e2f7825e50c2d46ce839f431 == cache_frame_46db69b7e2f7825e50c2d46ce839f431 )
    {
        Py_DECREF( frame_46db69b7e2f7825e50c2d46ce839f431 );
    }
    cache_frame_46db69b7e2f7825e50c2d46ce839f431 = NULL;

    assertFrameObject( frame_46db69b7e2f7825e50c2d46ce839f431 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_24_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_sock_timeout );
    var_sock_timeout = NULL;

    Py_XDECREF( var_start_time );
    var_start_time = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_recv_status );
    var_recv_status = NULL;

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

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_reason );
    Py_DECREF( par_reason );
    par_reason = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_sock_timeout );
    var_sock_timeout = NULL;

    Py_XDECREF( var_start_time );
    var_start_time = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_recv_status );
    var_recv_status = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_24_close );
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


static PyObject *impl_websocket$_core$$$function_25_abort( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_abdb233a346e655cb0aade571219f337;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abdb233a346e655cb0aade571219f337 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abdb233a346e655cb0aade571219f337, codeobj_abdb233a346e655cb0aade571219f337, module_websocket$_core, sizeof(void *) );
    frame_abdb233a346e655cb0aade571219f337 = cache_frame_abdb233a346e655cb0aade571219f337;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abdb233a346e655cb0aade571219f337 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abdb233a346e655cb0aade571219f337 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connected );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 437;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sock );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shutdown );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_socket );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 438;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SHUT_RDWR );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 438;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_abdb233a346e655cb0aade571219f337->m_frame.f_lineno = 438;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abdb233a346e655cb0aade571219f337 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abdb233a346e655cb0aade571219f337 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abdb233a346e655cb0aade571219f337, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abdb233a346e655cb0aade571219f337->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abdb233a346e655cb0aade571219f337, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abdb233a346e655cb0aade571219f337,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_abdb233a346e655cb0aade571219f337 == cache_frame_abdb233a346e655cb0aade571219f337 )
    {
        Py_DECREF( frame_abdb233a346e655cb0aade571219f337 );
    }
    cache_frame_abdb233a346e655cb0aade571219f337 = NULL;

    assertFrameObject( frame_abdb233a346e655cb0aade571219f337 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_25_abort );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_25_abort );
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


static PyObject *impl_websocket$_core$$$function_26_shutdown( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_35915f38e4c705aa0a7994750470cbe2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_35915f38e4c705aa0a7994750470cbe2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35915f38e4c705aa0a7994750470cbe2, codeobj_35915f38e4c705aa0a7994750470cbe2, module_websocket$_core, sizeof(void *) );
    frame_35915f38e4c705aa0a7994750470cbe2 = cache_frame_35915f38e4c705aa0a7994750470cbe2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35915f38e4c705aa0a7994750470cbe2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35915f38e4c705aa0a7994750470cbe2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sock );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sock );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 443;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_35915f38e4c705aa0a7994750470cbe2->m_frame.f_lineno = 443;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 443;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 444;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_connected, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35915f38e4c705aa0a7994750470cbe2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35915f38e4c705aa0a7994750470cbe2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35915f38e4c705aa0a7994750470cbe2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35915f38e4c705aa0a7994750470cbe2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35915f38e4c705aa0a7994750470cbe2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35915f38e4c705aa0a7994750470cbe2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_35915f38e4c705aa0a7994750470cbe2 == cache_frame_35915f38e4c705aa0a7994750470cbe2 )
    {
        Py_DECREF( frame_35915f38e4c705aa0a7994750470cbe2 );
    }
    cache_frame_35915f38e4c705aa0a7994750470cbe2 = NULL;

    assertFrameObject( frame_35915f38e4c705aa0a7994750470cbe2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_26_shutdown );
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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_26_shutdown );
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


static PyObject *impl_websocket$_core$$$function_27__send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_11d13972e537f576bc1cb0df276f9c32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11d13972e537f576bc1cb0df276f9c32 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11d13972e537f576bc1cb0df276f9c32, codeobj_11d13972e537f576bc1cb0df276f9c32, module_websocket$_core, sizeof(void *)+sizeof(void *) );
    frame_11d13972e537f576bc1cb0df276f9c32 = cache_frame_11d13972e537f576bc1cb0df276f9c32;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11d13972e537f576bc1cb0df276f9c32 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11d13972e537f576bc1cb0df276f9c32 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_send );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_send );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "send" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 448;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sock );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_2 = par_data;
        frame_11d13972e537f576bc1cb0df276f9c32->m_frame.f_lineno = 448;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11d13972e537f576bc1cb0df276f9c32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11d13972e537f576bc1cb0df276f9c32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11d13972e537f576bc1cb0df276f9c32 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11d13972e537f576bc1cb0df276f9c32, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11d13972e537f576bc1cb0df276f9c32->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11d13972e537f576bc1cb0df276f9c32, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11d13972e537f576bc1cb0df276f9c32,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_11d13972e537f576bc1cb0df276f9c32 == cache_frame_11d13972e537f576bc1cb0df276f9c32 )
    {
        Py_DECREF( frame_11d13972e537f576bc1cb0df276f9c32 );
    }
    cache_frame_11d13972e537f576bc1cb0df276f9c32 = NULL;

    assertFrameObject( frame_11d13972e537f576bc1cb0df276f9c32 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_27__send );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_27__send );
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


static PyObject *impl_websocket$_core$$$function_28__recv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bufsize = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_54f235464aa247be05edfe9dac5bd9bf;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_54f235464aa247be05edfe9dac5bd9bf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54f235464aa247be05edfe9dac5bd9bf, codeobj_54f235464aa247be05edfe9dac5bd9bf, module_websocket$_core, sizeof(void *)+sizeof(void *) );
    frame_54f235464aa247be05edfe9dac5bd9bf = cache_frame_54f235464aa247be05edfe9dac5bd9bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54f235464aa247be05edfe9dac5bd9bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54f235464aa247be05edfe9dac5bd9bf ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_recv );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_recv );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "recv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 452;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sock );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_bufsize );
        tmp_args_element_name_2 = par_bufsize;
        frame_54f235464aa247be05edfe9dac5bd9bf->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_28__recv );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_54f235464aa247be05edfe9dac5bd9bf, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_54f235464aa247be05edfe9dac5bd9bf, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_WebSocketConnectionClosedException );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocketConnectionClosedException );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocketConnectionClosedException" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 453;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oo";
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sock );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 454;
                type_description_1 = "oo";
                goto try_except_handler_3;
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
                PyObject *tmp_source_name_3;
                PyObject *tmp_call_result_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sock );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 455;
                    type_description_1 = "oo";
                    goto try_except_handler_3;
                }
                frame_54f235464aa247be05edfe9dac5bd9bf->m_frame.f_lineno = 455;
                tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 455;
                    type_description_1 = "oo";
                    goto try_except_handler_3;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 456;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_connected, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 458;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_54f235464aa247be05edfe9dac5bd9bf->m_frame) frame_54f235464aa247be05edfe9dac5bd9bf->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 451;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_54f235464aa247be05edfe9dac5bd9bf->m_frame) frame_54f235464aa247be05edfe9dac5bd9bf->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_28__recv );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54f235464aa247be05edfe9dac5bd9bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54f235464aa247be05edfe9dac5bd9bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54f235464aa247be05edfe9dac5bd9bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54f235464aa247be05edfe9dac5bd9bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54f235464aa247be05edfe9dac5bd9bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54f235464aa247be05edfe9dac5bd9bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54f235464aa247be05edfe9dac5bd9bf,
        type_description_1,
        par_self,
        par_bufsize
    );


    // Release cached frame.
    if ( frame_54f235464aa247be05edfe9dac5bd9bf == cache_frame_54f235464aa247be05edfe9dac5bd9bf )
    {
        Py_DECREF( frame_54f235464aa247be05edfe9dac5bd9bf );
    }
    cache_frame_54f235464aa247be05edfe9dac5bd9bf = NULL;

    assertFrameObject( frame_54f235464aa247be05edfe9dac5bd9bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_28__recv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_28__recv );
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


static PyObject *impl_websocket$_core$$$function_29_create_connection( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *par_class_ = python_pars[ 2 ];
    PyObject *par_options = python_pars[ 3 ];
    PyObject *var_sockopt = NULL;
    PyObject *var_sslopt = NULL;
    PyObject *var_fire_cont_frame = NULL;
    PyObject *var_enable_multithread = NULL;
    PyObject *var_skip_utf8_validation = NULL;
    PyObject *var_websock = NULL;
    struct Nuitka_FrameObject *frame_c67c19294d2fbf3d85e49c905c3dc563;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c67c19294d2fbf3d85e49c905c3dc563 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c67c19294d2fbf3d85e49c905c3dc563, codeobj_c67c19294d2fbf3d85e49c905c3dc563, module_websocket$_core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c67c19294d2fbf3d85e49c905c3dc563 = cache_frame_c67c19294d2fbf3d85e49c905c3dc563;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c67c19294d2fbf3d85e49c905c3dc563 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c67c19294d2fbf3d85e49c905c3dc563 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT( par_options );
        tmp_called_instance_1 = par_options;
        tmp_call_arg_element_1 = const_str_plain_sockopt;
        tmp_call_arg_element_2 = PyList_New( 0 );
        frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame.f_lineno = 504;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, call_args );
        }

        Py_DECREF( tmp_call_arg_element_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sockopt == NULL );
        var_sockopt = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        CHECK_OBJECT( par_options );
        tmp_called_instance_2 = par_options;
        tmp_call_arg_element_3 = const_str_plain_sslopt;
        tmp_call_arg_element_4 = PyDict_New();
        frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame.f_lineno = 505;
        {
            PyObject *call_args[] = { tmp_call_arg_element_3, tmp_call_arg_element_4 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, call_args );
        }

        Py_DECREF( tmp_call_arg_element_4 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 505;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sslopt == NULL );
        var_sslopt = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( par_options );
        tmp_called_instance_3 = par_options;
        frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame.f_lineno = 506;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_fire_cont_frame_false_tuple, 0 ) );

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 506;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_fire_cont_frame == NULL );
        var_fire_cont_frame = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( par_options );
        tmp_called_instance_4 = par_options;
        frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame.f_lineno = 507;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_enable_multithread_false_tuple, 0 ) );

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_enable_multithread == NULL );
        var_enable_multithread = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT( par_options );
        tmp_called_instance_5 = par_options;
        frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame.f_lineno = 508;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_skip_utf8_validation_false_tuple, 0 ) );

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_skip_utf8_validation == NULL );
        var_skip_utf8_validation = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
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
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_class_ );
        tmp_dircall_arg1_1 = par_class_;
        tmp_dict_key_1 = const_str_plain_sockopt;
        CHECK_OBJECT( var_sockopt );
        tmp_dict_value_1 = var_sockopt;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_sslopt;
        CHECK_OBJECT( var_sslopt );
        tmp_dict_value_2 = var_sslopt;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_fire_cont_frame;
        CHECK_OBJECT( var_fire_cont_frame );
        tmp_dict_value_3 = var_fire_cont_frame;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_enable_multithread;
        CHECK_OBJECT( var_enable_multithread );
        tmp_dict_value_4 = var_enable_multithread;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_skip_utf8_validation;
        CHECK_OBJECT( var_skip_utf8_validation );
        tmp_dict_value_5 = var_skip_utf8_validation;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_options );
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_6 = impl___internal__$$$function_10_complex_call_helper_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_websock == NULL );
        var_websock = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( var_websock );
        tmp_source_name_1 = var_websock;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_settimeout );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timeout );
        tmp_compexpr_left_1 = par_timeout;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_timeout );
        tmp_args_element_name_1 = par_timeout;
        Py_INCREF( tmp_args_element_name_1 );
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_getdefaulttimeout );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getdefaulttimeout );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getdefaulttimeout" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 513;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame.f_lineno = 513;
        tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 513;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_websock );
        tmp_source_name_2 = var_websock;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
        if ( tmp_dircall_arg1_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        tmp_dircall_arg2_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_options );
        tmp_dircall_arg3_2 = par_options;
        Py_INCREF( tmp_dircall_arg3_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_call_result_2 = impl___internal__$$$function_7_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c67c19294d2fbf3d85e49c905c3dc563 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c67c19294d2fbf3d85e49c905c3dc563 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c67c19294d2fbf3d85e49c905c3dc563, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c67c19294d2fbf3d85e49c905c3dc563->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c67c19294d2fbf3d85e49c905c3dc563, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c67c19294d2fbf3d85e49c905c3dc563,
        type_description_1,
        par_url,
        par_timeout,
        par_class_,
        par_options,
        var_sockopt,
        var_sslopt,
        var_fire_cont_frame,
        var_enable_multithread,
        var_skip_utf8_validation,
        var_websock
    );


    // Release cached frame.
    if ( frame_c67c19294d2fbf3d85e49c905c3dc563 == cache_frame_c67c19294d2fbf3d85e49c905c3dc563 )
    {
        Py_DECREF( frame_c67c19294d2fbf3d85e49c905c3dc563 );
    }
    cache_frame_c67c19294d2fbf3d85e49c905c3dc563 = NULL;

    assertFrameObject( frame_c67c19294d2fbf3d85e49c905c3dc563 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_websock );
    tmp_return_value = var_websock;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_29_create_connection );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_class_ );
    Py_DECREF( par_class_ );
    par_class_ = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    CHECK_OBJECT( (PyObject *)var_sockopt );
    Py_DECREF( var_sockopt );
    var_sockopt = NULL;

    CHECK_OBJECT( (PyObject *)var_sslopt );
    Py_DECREF( var_sslopt );
    var_sslopt = NULL;

    CHECK_OBJECT( (PyObject *)var_fire_cont_frame );
    Py_DECREF( var_fire_cont_frame );
    var_fire_cont_frame = NULL;

    CHECK_OBJECT( (PyObject *)var_enable_multithread );
    Py_DECREF( var_enable_multithread );
    var_enable_multithread = NULL;

    CHECK_OBJECT( (PyObject *)var_skip_utf8_validation );
    Py_DECREF( var_skip_utf8_validation );
    var_skip_utf8_validation = NULL;

    CHECK_OBJECT( (PyObject *)var_websock );
    Py_DECREF( var_websock );
    var_websock = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_class_ );
    Py_DECREF( par_class_ );
    par_class_ = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_sockopt );
    var_sockopt = NULL;

    Py_XDECREF( var_sslopt );
    var_sslopt = NULL;

    Py_XDECREF( var_fire_cont_frame );
    var_fire_cont_frame = NULL;

    Py_XDECREF( var_enable_multithread );
    var_enable_multithread = NULL;

    Py_XDECREF( var_skip_utf8_validation );
    var_skip_utf8_validation = NULL;

    Py_XDECREF( var_websock );
    var_websock = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( websocket$_core$$$function_29_create_connection );
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



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_10_getstatus(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_10_getstatus,
        const_str_plain_getstatus,
#if PYTHON_VERSION >= 300
        const_str_digest_7dff4664eb69d4d6a6db9534e2f77bfb,
#endif
        codeobj_8448815dc509d82dab03d69eebaa7658,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_e0c17d22922d5453274ed2f333dd9b06,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_11_getheaders(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_11_getheaders,
        const_str_plain_getheaders,
#if PYTHON_VERSION >= 300
        const_str_digest_754e575f856b1feed47ee7d71a1ec327,
#endif
        codeobj_17991e3a86cf2f01ce6afc776e8ab538,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_ba8ba742aeea0662d4907c5d20e710b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_12_is_ssl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_12_is_ssl,
        const_str_plain_is_ssl,
#if PYTHON_VERSION >= 300
        const_str_digest_1b8665b5c08d925dd06458a7ca1a046e,
#endif
        codeobj_32c72d97bfbe0d41d47410ffed896d75,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_13_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_13_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 300
        const_str_digest_bda57df0bfcda4e5714668e9c57f6641,
#endif
        codeobj_dd0c403565596e7e14d4a939c444cb7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_a51327b9777dfe4493863ea3e052f555,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_14_send( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_14_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        const_str_digest_734ce3acdb53ad82fc8e207f77a2ee3f,
#endif
        codeobj_9334da5c512a0f0221bf3ab5dddb6568,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_e8d810aee13ecfc74db76fdf63cf20f0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_15_send_frame(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_15_send_frame,
        const_str_plain_send_frame,
#if PYTHON_VERSION >= 300
        const_str_digest_70c0611b99f8d24bc2d70a039a302b41,
#endif
        codeobj_44fe05b15031cc7a03aa5fd621d62899,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_aa3c9bf9f081516c4aabdba1a5a4b127,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_16_send_binary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_16_send_binary,
        const_str_plain_send_binary,
#if PYTHON_VERSION >= 300
        const_str_digest_538150842579c545beb428bd28298206,
#endif
        codeobj_64bca6e44ce31d42faae35db1e376e09,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_17_ping( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_17_ping,
        const_str_plain_ping,
#if PYTHON_VERSION >= 300
        const_str_digest_18924d73a76baeb5de82bcee7b2ee5b3,
#endif
        codeobj_fa7d64ae92da108615bd03f2a491cf94,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_7f4c86f8491d35689a71fd34466d34c1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_18_pong(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_18_pong,
        const_str_plain_pong,
#if PYTHON_VERSION >= 300
        const_str_digest_e458b7f1a62dbfd1601155522fc6ee9e,
#endif
        codeobj_8de68b3a7c96cbae04fde24c1c05b739,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_af225623490e748aeda42e11bb06770b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_19_recv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_19_recv,
        const_str_plain_recv,
#if PYTHON_VERSION >= 300
        const_str_digest_35c2dd2d54f767828efc5e418aa1d1bb,
#endif
        codeobj_b80de2f69593fdbfa97729464450d248,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_e32c22c56feb1e34cef7bdd4f53680e2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_d991215701b78fcdc373b38a0c13a0f3,
#endif
        codeobj_78da29ff9c20302fdd2af653d6ecd558,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_2540e4d0b0e0ff390130de9c97ea7f1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_20_recv_data( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_20_recv_data,
        const_str_plain_recv_data,
#if PYTHON_VERSION >= 300
        const_str_digest_a3976bb0e62ac72c987225bf245c09a7,
#endif
        codeobj_c5e1ec5a81681ef5eada8787f63a5a68,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_bacb76d54b85b281a320b9e0ca2de4dc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_21_recv_data_frame( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_21_recv_data_frame,
        const_str_plain_recv_data_frame,
#if PYTHON_VERSION >= 300
        const_str_digest_e3b48f7fac756662c2232e72f4dcefac,
#endif
        codeobj_1287f40297c5579255fde055d3d5a653,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_bacb76d54b85b281a320b9e0ca2de4dc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_22_recv_frame(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_22_recv_frame,
        const_str_plain_recv_frame,
#if PYTHON_VERSION >= 300
        const_str_digest_67521a11303b3e4673ef44c4b1c6b1c4,
#endif
        codeobj_83e93e54e340b951b9fe218f66b807a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_b38ff429b656222a7e65ac648639b901,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_23_send_close( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_23_send_close,
        const_str_plain_send_close,
#if PYTHON_VERSION >= 300
        const_str_digest_46538f33882c8318ab66d1da9e3ad6cc,
#endif
        codeobj_22b3e9d101030ef997c7c3f54cc66f7a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_6e9795cf586331f96119f6ef3d51ec6a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_24_close( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_24_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_461c3ab8570a17f6b02fadb9c21822bb,
#endif
        codeobj_46db69b7e2f7825e50c2d46ce839f431,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_baede49fd699dc503a3ef083bc418273,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_25_abort(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_25_abort,
        const_str_plain_abort,
#if PYTHON_VERSION >= 300
        const_str_digest_caa00f8c293bb117a8322f4d57f24fbf,
#endif
        codeobj_abdb233a346e655cb0aade571219f337,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_630e58630aabcd7da7c268add6bd0f03,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_26_shutdown(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_26_shutdown,
        const_str_plain_shutdown,
#if PYTHON_VERSION >= 300
        const_str_digest_0fecdb185cb4613eb886844651365c63,
#endif
        codeobj_35915f38e4c705aa0a7994750470cbe2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_b55f175d2bc0908dae27e37c6d35ec52,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_27__send(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_27__send,
        const_str_plain__send,
#if PYTHON_VERSION >= 300
        const_str_digest_e3fa095651363ec382cff996e4afa178,
#endif
        codeobj_11d13972e537f576bc1cb0df276f9c32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_28__recv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_28__recv,
        const_str_plain__recv,
#if PYTHON_VERSION >= 300
        const_str_digest_126024070dc2ca2465008ecbd4b280d2,
#endif
        codeobj_54f235464aa247be05edfe9dac5bd9bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_29_create_connection( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_29_create_connection,
        const_str_plain_create_connection,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c67c19294d2fbf3d85e49c905c3dc563,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_a9085280eedd5b9dff4fb2dc2924c641,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_2___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_2___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        const_str_digest_ff29c6c7605733750a781070e9b3747c,
#endif
        codeobj_0fa3c0c66f8d809f162fd8d31e728699,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_77cc1593d4b1bf9705c52c893c776278,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_3___next__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_3___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 300
        const_str_digest_e64771cf85b39130caa5fad5c9d36bd6,
#endif
        codeobj_df3e3c30b1f318c972d504b3296bbe16,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_4_next(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_4_next,
        const_str_plain_next,
#if PYTHON_VERSION >= 300
        const_str_digest_9affa989bf39937efc0ad8fa138d46c3,
#endif
        codeobj_455a7910b4a51dccd1080610f853fdea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_5_fileno(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_5_fileno,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 300
        const_str_digest_5952a84e708819b40485bd59cfa19d62,
#endif
        codeobj_b113b021489104de7f3953aa312e6709,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_6_set_mask_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_6_set_mask_key,
        const_str_plain_set_mask_key,
#if PYTHON_VERSION >= 300
        const_str_digest_824ced8f7427669ab996fc433ea4f9e2,
#endif
        codeobj_0d9015365d34e4ab09a5b18768a94c3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_32c9987a16d6f5701d99ba7519d26e43,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_7_gettimeout(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_7_gettimeout,
        const_str_plain_gettimeout,
#if PYTHON_VERSION >= 300
        const_str_digest_529f11d68664c0798804a09414549c3a,
#endif
        codeobj_fe6e3ce4f5ea90cd96c6059d0e7e63a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_4e771a29efeadd7113d848547aecca1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_8_settimeout(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_8_settimeout,
        const_str_plain_settimeout,
#if PYTHON_VERSION >= 300
        const_str_digest_c7ab516ce819cfdfedb14c34e6db6eaa,
#endif
        codeobj_e48fd18de11cb8a4380d86cbd8dfbb68,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_7b71e6ba39397b779b972105b36aef62,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_core$$$function_9_getsubprotocol(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_core$$$function_9_getsubprotocol,
        const_str_plain_getsubprotocol,
#if PYTHON_VERSION >= 300
        const_str_digest_26cef85f45a664e9c5be33e9e6b3f757,
#endif
        codeobj_b7f14d52174fa04801be722b821b9214,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_websocket$_core,
        const_str_digest_9ed974df8e4e83e2f22527ddcb009a06,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_websocket$_core =
{
    PyModuleDef_HEAD_INIT,
    "websocket._core",
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
MOD_ENTRY_DECL(websocket$_core)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(websocket$_core)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_websocket$_core );
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
    puts("websocket._core: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._core: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("websocket._core: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initwebsocket$_core" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_websocket$_core = Py_InitModule4(
        "websocket._core",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_websocket$_core = PyModule_Create( &mdef_websocket$_core );
#endif

    moduledict_websocket$_core = MODULE_DICT( module_websocket$_core );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_websocket$_core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_websocket$_core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_websocket$_core );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_3042c2f2559e37eab8b8954a1e29693c, module_websocket$_core );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_1251dad67652dca6dbad969cd6b370b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_websocket$_core_52 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_280d2d674f0e3cb9d1db822e3a6bcdec_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_6fc4ed4d6fa397c0103d45e9c12271f9;
        UPDATE_STRING_DICT0( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_9e3ea1bd785ec4ccebc61853c3cd87db;
        UPDATE_STRING_DICT0( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1251dad67652dca6dbad969cd6b370b2 = MAKE_MODULE_FRAME( codeobj_1251dad67652dca6dbad969cd6b370b2, module_websocket$_core );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1251dad67652dca6dbad969cd6b370b2 );
    assert( Py_REFCNT( frame_1251dad67652dca6dbad969cd6b370b2 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_9e3ea1bd785ec4ccebc61853c3cd87db;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_print_function );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_socket;
        tmp_globals_name_1 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 24;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_struct;
        tmp_globals_name_2 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 25;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_threading;
        tmp_globals_name_3 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 26;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_time;
        tmp_globals_name_4 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 27;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_six;
        tmp_globals_name_5 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 29;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__abnf;
        tmp_globals_name_6 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_6 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_6 = const_tuple_str_chr_42_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 32;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain__exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_7 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 33;
        tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_star_imported_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_2 );
        Py_DECREF( tmp_star_imported_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain__handshake;
        tmp_globals_name_8 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_8 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_8 = const_tuple_str_chr_42_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 34;
        tmp_star_imported_3 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_star_imported_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_3 );
        Py_DECREF( tmp_star_imported_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_4;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__http;
        tmp_globals_name_9 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_9 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_9 = const_tuple_str_chr_42_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 35;
        tmp_star_imported_4 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_star_imported_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_4 );
        Py_DECREF( tmp_star_imported_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_5;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain__logging;
        tmp_globals_name_10 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_10 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_10 = const_tuple_str_chr_42_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 36;
        tmp_star_imported_5 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_star_imported_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_5 );
        Py_DECREF( tmp_star_imported_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_6;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain__socket;
        tmp_globals_name_11 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_11 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_11 = const_tuple_str_chr_42_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 37;
        tmp_star_imported_6 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_star_imported_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_6 );
        Py_DECREF( tmp_star_imported_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_7;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain__ssl_compat;
        tmp_globals_name_12 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_12 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_12 = const_tuple_str_chr_42_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 38;
        tmp_star_imported_7 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_star_imported_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_7 );
        Py_DECREF( tmp_star_imported_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_8;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain__utils;
        tmp_globals_name_13 = (PyObject *)moduledict_websocket$_core;
        tmp_locals_name_13 = (PyObject *)moduledict_websocket$_core;
        tmp_fromlist_name_13 = const_tuple_str_chr_42_tuple;
        tmp_level_name_13 = const_int_pos_1;
        frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 39;
        tmp_star_imported_8 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_star_imported_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_websocket$_core, true, tmp_star_imported_8 );
        Py_DECREF( tmp_star_imported_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_str_plain_WebSocket_str_plain_create_connection_list );
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_object );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_object );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "object" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;

            goto try_except_handler_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_11 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 52;

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


            exception_lineno = 52;

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


            exception_lineno = 52;

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


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

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
        tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
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


            exception_lineno = 52;

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


            exception_lineno = 52;

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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_WebSocket;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 52;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_15;
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


                exception_lineno = 52;

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
                PyObject *tmp_tuple_element_3;
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
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 52;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 52;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 52;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 52;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_core_52 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_3042c2f2559e37eab8b8954a1e29693c;
        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_8c5b63cebae8c5120435645523edfda8;
        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_WebSocket;
        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_280d2d674f0e3cb9d1db822e3a6bcdec_2, codeobj_280d2d674f0e3cb9d1db822e3a6bcdec, module_websocket$_core, sizeof(void *) );
        frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 = cache_frame_280d2d674f0e3cb9d1db822e3a6bcdec_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_none_false_false_false_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_2___iter__(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain___iter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_3___next__(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain___next__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_4_next(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_next, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_5_fileno(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_fileno, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_6_set_mask_key(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_set_mask_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_7_gettimeout(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_gettimeout, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_8_settimeout(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_settimeout, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_property );

            if ( tmp_called_name_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_2 = tmp_mvar_value_4;
                Py_INCREF( tmp_called_name_2 );
                }
            }

            tmp_args_element_name_1 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_gettimeout );

            if ( tmp_args_element_name_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gettimeout" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_2 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_settimeout );

            if ( tmp_args_element_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settimeout" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_280d2d674f0e3cb9d1db822e3a6bcdec_2->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_timeout, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_9_getsubprotocol(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_getsubprotocol, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_3 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_property );

            if ( tmp_called_name_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 159;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                Py_INCREF( tmp_called_name_3 );
                }
            }

            tmp_args_element_name_3 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_getsubprotocol );

            if ( tmp_args_element_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getsubprotocol" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_280d2d674f0e3cb9d1db822e3a6bcdec_2->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_subprotocol, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_10_getstatus(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_getstatus, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_4;
            tmp_called_name_4 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_property );

            if ( tmp_called_name_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 170;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                Py_INCREF( tmp_called_name_4 );
                }
            }

            tmp_args_element_name_4 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_getstatus );

            if ( tmp_args_element_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getstatus" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_280d2d674f0e3cb9d1db822e3a6bcdec_2->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_status, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_11_getheaders(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_getheaders, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_12_is_ssl(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_is_ssl, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_5 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_property );

            if ( tmp_called_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_property );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_property );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_5 = tmp_mvar_value_7;
                Py_INCREF( tmp_called_name_5 );
                }
            }

            tmp_args_element_name_5 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_getheaders );

            if ( tmp_args_element_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getheaders" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_280d2d674f0e3cb9d1db822e3a6bcdec_2->m_frame.f_lineno = 184;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_headers, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_13_connect(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_connect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_8;
            tmp_source_name_5 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_ABNF );

            if ( tmp_source_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_ABNF );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABNF );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ABNF" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 241;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_source_name_5 = tmp_mvar_value_8;
                Py_INCREF( tmp_source_name_5 );
                }
            }

            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_OPCODE_TEXT );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_4 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_14_send( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_send, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_15_send_frame(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_send_frame, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_16_send_binary(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_send_binary, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_str_empty_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_17_ping( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_ping, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_18_pong(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_pong, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_19_recv(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_recv, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_20_recv_data( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_recv_data, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_21_recv_data_frame( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_recv_data_frame, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_22_recv_frame(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_recv_frame, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_10;
            tmp_tuple_element_5 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_STATUS_NORMAL );

            if ( tmp_tuple_element_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_STATUS_NORMAL );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STATUS_NORMAL );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STATUS_NORMAL" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 379;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_tuple_element_5 = tmp_mvar_value_9;
                Py_INCREF( tmp_tuple_element_5 );
                }
            }

            tmp_defaults_6 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_defaults_6, 0, tmp_tuple_element_5 );
            tmp_called_instance_1 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_six );

            if ( tmp_called_instance_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_six );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
                }

                if ( tmp_mvar_value_10 == NULL )
                {
                    Py_DECREF( tmp_defaults_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 379;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_10;
                Py_INCREF( tmp_called_instance_1 );
                }
            }

            frame_280d2d674f0e3cb9d1db822e3a6bcdec_2->m_frame.f_lineno = 379;
            tmp_tuple_element_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_b, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_defaults_6 );

                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM( tmp_defaults_6, 1, tmp_tuple_element_5 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_23_send_close( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_send_close, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_12;
            tmp_tuple_element_6 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_STATUS_NORMAL );

            if ( tmp_tuple_element_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_STATUS_NORMAL );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STATUS_NORMAL );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "STATUS_NORMAL" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 392;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_tuple_element_6 = tmp_mvar_value_11;
                Py_INCREF( tmp_tuple_element_6 );
                }
            }

            tmp_defaults_7 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_6 );
            tmp_called_instance_2 = PyObject_GetItem( locals_websocket$_core_52, const_str_plain_six );

            if ( tmp_called_instance_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_six );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
                }

                if ( tmp_mvar_value_12 == NULL )
                {
                    Py_DECREF( tmp_defaults_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 392;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_instance_2 = tmp_mvar_value_12;
                Py_INCREF( tmp_called_instance_2 );
                }
            }

            frame_280d2d674f0e3cb9d1db822e3a6bcdec_2->m_frame.f_lineno = 392;
            tmp_tuple_element_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_b, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_defaults_7 );

                exception_lineno = 392;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM( tmp_defaults_7, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = const_int_pos_3;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_defaults_7, 2, tmp_tuple_element_6 );
            tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_24_close( tmp_defaults_7 );



            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_close, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 392;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_25_abort(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_abort, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_26_shutdown(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain_shutdown, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_27__send(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain__send, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_websocket$_core$$$function_28__recv(  );



        tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain__recv, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_280d2d674f0e3cb9d1db822e3a6bcdec_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_280d2d674f0e3cb9d1db822e3a6bcdec_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_280d2d674f0e3cb9d1db822e3a6bcdec_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 == cache_frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 )
        {
            Py_DECREF( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 );
        }
        cache_frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 = NULL;

        assertFrameObject( frame_280d2d674f0e3cb9d1db822e3a6bcdec_2 );

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


                exception_lineno = 52;

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
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_websocket$_core_52, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_7 = const_str_plain_WebSocket;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_7 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_7 );
            tmp_tuple_element_7 = locals_websocket$_core_52;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_1251dad67652dca6dbad969cd6b370b2->m_frame.f_lineno = 52;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_17 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_core );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_websocket$_core_52 );
        locals_websocket$_core_52 = NULL;
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

        Py_DECREF( locals_websocket$_core_52 );
        locals_websocket$_core_52 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( websocket$_core );
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
        NUITKA_CANNOT_GET_HERE( websocket$_core );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 52;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_WebSocket, tmp_assign_source_17 );
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_13;
        tmp_tuple_element_8 = Py_None;
        tmp_defaults_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_defaults_8, 0, tmp_tuple_element_8 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_WebSocket );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WebSocket );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_defaults_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WebSocket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 461;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = tmp_mvar_value_13;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_defaults_8, 1, tmp_tuple_element_8 );
        tmp_assign_source_19 = MAKE_FUNCTION_websocket$_core$$$function_29_create_connection( tmp_defaults_8 );



        UPDATE_STRING_DICT1( moduledict_websocket$_core, (Nuitka_StringObject *)const_str_plain_create_connection, tmp_assign_source_19 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1251dad67652dca6dbad969cd6b370b2 );
#endif
    popFrameStack();

    assertFrameObject( frame_1251dad67652dca6dbad969cd6b370b2 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1251dad67652dca6dbad969cd6b370b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1251dad67652dca6dbad969cd6b370b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1251dad67652dca6dbad969cd6b370b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1251dad67652dca6dbad969cd6b370b2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_websocket$_core );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
