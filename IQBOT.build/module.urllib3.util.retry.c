/* Generated code for Python module 'urllib3.util.retry'
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

/* The "_module_urllib3$util$retry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$retry;
PyDictObject *moduledict_urllib3$util$retry;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_itertools;
static PyObject *const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_be3c2e7a479fa0076df719ca5a930f72;
static PyObject *const_str_digest_96630de8eadb33fda97640a57fbbbd1c;
extern PyObject *const_tuple_true_none_tuple;
static PyObject *const_str_plain_slept;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_retry_date_tuple;
static PyObject *const_str_plain_RETRY_AFTER_STATUS_CODES;
static PyObject *const_str_plain__sleep_backoff;
extern PyObject *const_int_pos_120;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_unknown;
static PyObject *const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_redirect_location;
static PyObject *const_str_plain_backoff_factor;
extern PyObject *const_str_plain_total;
static PyObject *const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f;
extern PyObject *const_str_plain_PUT;
extern PyObject *const_str_plain_mktime;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_from_int;
static PyObject *const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f;
extern PyObject *const_str_plain_raise_on_status;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_54874c179a81b955e41d4fd1580cddd0;
static PyObject *const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_email;
extern PyObject *const_str_plain_get_redirect_location;
static PyObject *const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_sleep_for_retry;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_cls;
extern PyObject *const_tuple_str_plain_self_str_plain_method_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_respect_retry_after_header;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_digest_297455e155b6c9736d87529e14591c5d;
static PyObject *const_int_pos_429;
static PyObject *const_str_digest_43a062f907032f59d25a421045c4a843;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_is_retry;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_1bde10c9faf6b4589142328617d2b45a;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_plain_RequestHistory;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_00aff75c087fe7f80636ea13a09e3e82;
static PyObject *const_int_pos_413;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_consecutive_errors_len;
static PyObject *const_str_digest_52dc615064dbc739578d7b66bd4357d4;
extern PyObject *const_str_plain_packages;
static PyObject *const_str_digest_3d8456b692ba12d694b1345117db0cc2;
static PyObject *const_str_plain__is_method_retryable;
static PyObject *const_str_digest_b0594eafa05dc6a6810bb2c7c291548b;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_61e2520c56b660178d4348ecd9080d8c;
static PyObject *const_str_plain_is_exhausted;
extern PyObject *const_str_plain_six;
static PyObject *const_str_plain_method_whitelist;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
static PyObject *const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple;
static PyObject *const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple;
extern PyObject *const_str_plain_seconds;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain__stacktrace;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
static PyObject *const_str_plain_parse_retry_after;
static PyObject *const_str_digest_d3c5cf2f2d706173f393307c5fa372aa;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_4291b42c0261755daa9f58af16f24a8c;
static PyObject *const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain_BACKOFF_MAX;
static PyObject *const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5;
static PyObject *const_tuple_str_plain_self_str_plain_err_tuple;
extern PyObject *const_str_plain_reversed;
extern PyObject *const_str_plain_getheader;
extern PyObject *const_str_plain_retries;
static PyObject *const_str_digest_9db0c4e907a20455d898e46f602427d6;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_digest_fc514c378d42c4c0744f71a520936e98;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
extern PyObject *const_str_plain_match;
static PyObject *const_list_int_pos_413_int_pos_429_int_pos_503_list;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_ReadTimeoutError;
static PyObject *const_str_digest_ca693a71271df261e783dd0ecf309ae0;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
extern PyObject *const_str_plain_frozenset;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
static PyObject *const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple;
static PyObject *const_str_plain_TRACE;
extern PyObject *const_str_plain_DEFAULT;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4;
static PyObject *const_str_digest_541aafc09da4591a658272cb389856a5;
extern PyObject *const_str_plain_response;
static PyObject *const_str_plain_new_retries;
static PyObject *const_str_plain_get_retry_after;
static PyObject *const_str_digest_6659ea07dd436805b2630885700a6e61;
extern PyObject *const_str_plain_Authorization;
static PyObject *const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple;
static PyObject *const_str_plain_DEFAULT_METHOD_WHITELIST;
static PyObject *const_str_digest_7fb2c7a5424e28db1a201939b12c8399;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_55857326d6523e3f76c12c271f391764;
static PyObject *const_str_plain_retry_after;
extern PyObject *const_str_plain_DELETE;
static PyObject *const_tuple_str_plain_self_str_plain_retry_counts_tuple;
extern PyObject *const_str_plain_increment;
static PyObject *const_str_plain_get_backoff_time;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_str_plain_ResponseError;
static PyObject *const_tuple_str_plain_takewhile_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_digest_4506185023298da4a69876975fb76211;
extern PyObject *const_str_plain_type;
static PyObject *const_list_str_plain_Authorization_list;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain_HEAD;
static PyObject *const_str_plain_has_retry_after;
static PyObject *const_int_pos_503;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_cause;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__is_connection_error;
static PyObject *const_str_digest_93b5718dbdad50e34931a5c649b12b14;
static PyObject *const_str_plain__is_read_error;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_retry_counts;
static PyObject *const_str_digest_683309cb722498c00ca029ec4e15acbf;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_kw;
static PyObject *const_str_digest_e80b9085df081452c8caeed4571c51b7;
static PyObject *const_str_plain_status_forcelist;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ConnectTimeoutError;
static PyObject *const_str_digest_cfc303935f94cd9bd4759913289d5001;
static PyObject *const_list_ba42ffc828ddfcf79c24367abe35499c_list;
static PyObject *const_tuple_str_plain_h_tuple;
extern PyObject *const_str_plain_OPTIONS;
static PyObject *const_str_plain_new_retry;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_takewhile;
static PyObject *const_str_plain_parsedate;
static PyObject *const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_remove_headers_on_redirect;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_method;
static PyObject *const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6;
static PyObject *const_str_plain_retry_date;
static PyObject *const_str_plain_status_count;
static PyObject *const_str_plain_backoff;
static PyObject *const_str_digest_ed2c0b12f2250d745518387535c4958e;
static PyObject *const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST;
extern PyObject *const_str_plain__pool;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_7e60379875538acb6d47a09b3bcd7fdf;
static PyObject *const_str_plain_backoff_value;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_logging;
static PyObject *const_tuple_str_plain_self_str_plain_backoff_tuple;
extern PyObject *const_str_digest_53eb1bcf3283c3fcccb95b51de02ce94;
extern PyObject *const_str_plain_GENERIC_ERROR;
static PyObject *const_str_digest_adf0407d4b5f2535bca90601d487b350;
static PyObject *const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
extern PyObject *const_str_plain_reraise;
static PyObject *const_str_digest_25ded409e041cb7d54dbe844ec9f890e;
extern PyObject *const_str_plain_raise_on_redirect;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 0, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 2, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 3, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 4, const_str_plain_redirect_location ); Py_INCREF( const_str_plain_redirect_location );
    const_str_digest_be3c2e7a479fa0076df719ca5a930f72 = UNSTREAM_STRING_ASCII( &constant_bin[ 2826573 ], 128, 0 );
    const_str_digest_96630de8eadb33fda97640a57fbbbd1c = UNSTREAM_STRING_ASCII( &constant_bin[ 2826701 ], 40, 0 );
    const_str_plain_slept = UNSTREAM_STRING_ASCII( &constant_bin[ 2826741 ], 5, 1 );
    const_str_plain_retry_date_tuple = UNSTREAM_STRING_ASCII( &constant_bin[ 2826746 ], 16, 1 );
    const_str_plain_RETRY_AFTER_STATUS_CODES = UNSTREAM_STRING_ASCII( &constant_bin[ 2826762 ], 24, 1 );
    const_str_plain__sleep_backoff = UNSTREAM_STRING_ASCII( &constant_bin[ 2826786 ], 14, 1 );
    const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 2, const_str_plain_status_code ); Py_INCREF( const_str_plain_status_code );
    const_str_plain_has_retry_after = UNSTREAM_STRING_ASCII( &constant_bin[ 2782368 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 3, const_str_plain_has_retry_after ); Py_INCREF( const_str_plain_has_retry_after );
    const_str_plain_backoff_factor = UNSTREAM_STRING_ASCII( &constant_bin[ 2826800 ], 14, 1 );
    const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f = UNSTREAM_STRING_ASCII( &constant_bin[ 2826814 ], 21, 0 );
    const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f = UNSTREAM_STRING_ASCII( &constant_bin[ 2826835 ], 20, 0 );
    const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_plain_retry_after = UNSTREAM_STRING_ASCII( &constant_bin[ 2782372 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, const_str_plain_retry_after ); Py_INCREF( const_str_plain_retry_after );
    const_str_digest_54874c179a81b955e41d4fd1580cddd0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2826855 ], 52, 0 );
    const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_PUT );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_GET );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_DELETE );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_HEAD );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_OPTIONS );
    const_str_plain_TRACE = UNSTREAM_STRING_ASCII( &constant_bin[ 2826907 ], 5, 1 );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_TRACE );
    assert( PySet_Size( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8 ) == 6 );
    const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 2, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_plain_respect_retry_after_header = UNSTREAM_STRING_ASCII( &constant_bin[ 2826912 ], 26, 1 );
    const_str_digest_297455e155b6c9736d87529e14591c5d = UNSTREAM_STRING_ASCII( &constant_bin[ 2826938 ], 14, 0 );
    const_int_pos_429 = PyLong_FromUnsignedLong( 429ul );
    const_str_digest_43a062f907032f59d25a421045c4a843 = UNSTREAM_STRING_ASCII( &constant_bin[ 2826952 ], 14, 0 );
    const_str_digest_1bde10c9faf6b4589142328617d2b45a = UNSTREAM_STRING_ASCII( &constant_bin[ 2826966 ], 49, 0 );
    const_str_plain_RequestHistory = UNSTREAM_STRING_ASCII( &constant_bin[ 2827015 ], 14, 1 );
    const_str_digest_00aff75c087fe7f80636ea13a09e3e82 = UNSTREAM_STRING_ASCII( &constant_bin[ 2827029 ], 14, 0 );
    const_int_pos_413 = PyLong_FromUnsignedLong( 413ul );
    const_str_plain_consecutive_errors_len = UNSTREAM_STRING_ASCII( &constant_bin[ 2827043 ], 22, 1 );
    const_str_digest_52dc615064dbc739578d7b66bd4357d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2827065 ], 30, 0 );
    const_str_digest_3d8456b692ba12d694b1345117db0cc2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2827095 ], 27, 0 );
    const_str_plain__is_method_retryable = UNSTREAM_STRING_ASCII( &constant_bin[ 2827122 ], 20, 1 );
    const_str_digest_b0594eafa05dc6a6810bb2c7c291548b = UNSTREAM_STRING_ASCII( &constant_bin[ 2826814 ], 11, 0 );
    const_str_digest_61e2520c56b660178d4348ecd9080d8c = UNSTREAM_STRING_ASCII( &constant_bin[ 2827142 ], 4659, 0 );
    const_str_plain_is_exhausted = UNSTREAM_STRING_ASCII( &constant_bin[ 2831801 ], 12, 1 );
    const_str_plain_method_whitelist = UNSTREAM_STRING_ASCII( &constant_bin[ 2829547 ], 16, 1 );
    const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21 = PyFrozenSet_New( NULL );
    const_int_pos_503 = PyLong_FromUnsignedLong( 503ul );
    PySet_Add( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_503 );
    PySet_Add( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_413 );
    PySet_Add( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_429 );
    assert( PySet_Size( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21 ) == 3 );
    const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 1, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 2, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 3, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 4, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 5, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 6, const_str_plain_method_whitelist ); Py_INCREF( const_str_plain_method_whitelist );
    const_str_plain_status_forcelist = UNSTREAM_STRING_ASCII( &constant_bin[ 2829443 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 7, const_str_plain_status_forcelist ); Py_INCREF( const_str_plain_status_forcelist );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 8, const_str_plain_backoff_factor ); Py_INCREF( const_str_plain_backoff_factor );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 9, const_str_plain_raise_on_redirect ); Py_INCREF( const_str_plain_raise_on_redirect );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 10, const_str_plain_raise_on_status ); Py_INCREF( const_str_plain_raise_on_status );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 11, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 12, const_str_plain_respect_retry_after_header ); Py_INCREF( const_str_plain_respect_retry_after_header );
    PyTuple_SET_ITEM( const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 13, const_str_plain_remove_headers_on_redirect ); Py_INCREF( const_str_plain_remove_headers_on_redirect );
    const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 1, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 2, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 3, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_str_plain_new_retries = UNSTREAM_STRING_ASCII( &constant_bin[ 2831813 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, const_str_plain_new_retries ); Py_INCREF( const_str_plain_new_retries );
    const_str_plain_parse_retry_after = UNSTREAM_STRING_ASCII( &constant_bin[ 2831824 ], 17, 1 );
    const_str_digest_d3c5cf2f2d706173f393307c5fa372aa = UNSTREAM_STRING_ASCII( &constant_bin[ 2831286 ], 15, 0 );
    const_str_digest_4291b42c0261755daa9f58af16f24a8c = UNSTREAM_STRING_ASCII( &constant_bin[ 2831841 ], 14, 0 );
    const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2831855 ], 20, 0 );
    const_str_plain_BACKOFF_MAX = UNSTREAM_STRING_ASCII( &constant_bin[ 2830687 ], 11, 1 );
    const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2831875 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_err_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_err_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_err_tuple, 1, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_digest_9db0c4e907a20455d898e46f602427d6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2831901 ], 42, 0 );
    const_str_digest_fc514c378d42c4c0744f71a520936e98 = UNSTREAM_STRING_ASCII( &constant_bin[ 2831943 ], 74, 0 );
    const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832017 ], 14, 0 );
    const_list_int_pos_413_int_pos_429_int_pos_503_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_413_int_pos_429_int_pos_503_list, 0, const_int_pos_413 ); Py_INCREF( const_int_pos_413 );
    PyList_SET_ITEM( const_list_int_pos_413_int_pos_429_int_pos_503_list, 1, const_int_pos_429 ); Py_INCREF( const_int_pos_429 );
    PyList_SET_ITEM( const_list_int_pos_413_int_pos_429_int_pos_503_list, 2, const_int_pos_503 ); Py_INCREF( const_int_pos_503 );
    const_str_digest_ca693a71271df261e783dd0ecf309ae0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832031 ], 9, 0 );
    const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 1, const_str_plain_MaxRetryError ); Py_INCREF( const_str_plain_MaxRetryError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 2, const_str_plain_ProtocolError ); Py_INCREF( const_str_plain_ProtocolError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 3, const_str_plain_ReadTimeoutError ); Py_INCREF( const_str_plain_ReadTimeoutError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 4, const_str_plain_ResponseError ); Py_INCREF( const_str_plain_ResponseError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 5, const_str_plain_InvalidHeader ); Py_INCREF( const_str_plain_InvalidHeader );
    const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 4, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 5, const_str_plain__pool ); Py_INCREF( const_str_plain__pool );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 6, const_str_plain__stacktrace ); Py_INCREF( const_str_plain__stacktrace );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 7, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 8, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 9, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 10, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    const_str_plain_status_count = UNSTREAM_STRING_ASCII( &constant_bin[ 2832040 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 11, const_str_plain_status_count ); Py_INCREF( const_str_plain_status_count );
    const_str_plain_cause = UNSTREAM_STRING_ASCII( &constant_bin[ 5193 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 12, const_str_plain_cause ); Py_INCREF( const_str_plain_cause );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 13, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 14, const_str_plain_redirect_location ); Py_INCREF( const_str_plain_redirect_location );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 15, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    const_str_plain_new_retry = UNSTREAM_STRING_ASCII( &constant_bin[ 2832052 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 16, const_str_plain_new_retry ); Py_INCREF( const_str_plain_new_retry );
    const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4, const_str_plain_Authorization );
    assert( PySet_Size( const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4 ) == 1 );
    const_str_digest_541aafc09da4591a658272cb389856a5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832061 ], 124, 0 );
    const_str_plain_get_retry_after = UNSTREAM_STRING_ASCII( &constant_bin[ 2832185 ], 15, 1 );
    const_str_digest_6659ea07dd436805b2630885700a6e61 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832200 ], 21, 0 );
    const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0, const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd ); Py_INCREF( const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd );
    const_str_plain_DEFAULT_METHOD_WHITELIST = UNSTREAM_STRING_ASCII( &constant_bin[ 2829821 ], 24, 1 );
    const_str_digest_7fb2c7a5424e28db1a201939b12c8399 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832221 ], 123, 0 );
    const_str_digest_55857326d6523e3f76c12c271f391764 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832344 ], 417, 0 );
    const_tuple_str_plain_self_str_plain_retry_counts_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_retry_counts_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_retry_counts = UNSTREAM_STRING_ASCII( &constant_bin[ 2832761 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, const_str_plain_retry_counts ); Py_INCREF( const_str_plain_retry_counts );
    const_str_plain_get_backoff_time = UNSTREAM_STRING_ASCII( &constant_bin[ 2826707 ], 16, 1 );
    const_tuple_str_plain_takewhile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_takewhile_tuple, 0, const_str_plain_takewhile ); Py_INCREF( const_str_plain_takewhile );
    const_str_digest_4506185023298da4a69876975fb76211 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832773 ], 18, 0 );
    const_list_str_plain_Authorization_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Authorization_list, 0, const_str_plain_Authorization ); Py_INCREF( const_str_plain_Authorization );
    const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, const_str_plain_slept ); Py_INCREF( const_str_plain_slept );
    const_str_plain__is_connection_error = UNSTREAM_STRING_ASCII( &constant_bin[ 2832791 ], 20, 1 );
    const_str_digest_93b5718dbdad50e34931a5c649b12b14 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832811 ], 18, 0 );
    const_str_plain__is_read_error = UNSTREAM_STRING_ASCII( &constant_bin[ 2831861 ], 14, 1 );
    const_str_digest_683309cb722498c00ca029ec4e15acbf = UNSTREAM_STRING_ASCII( &constant_bin[ 2832829 ], 23, 0 );
    const_str_digest_e80b9085df081452c8caeed4571c51b7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2826701 ], 22, 0 );
    const_str_digest_cfc303935f94cd9bd4759913289d5001 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832852 ], 124, 0 );
    const_list_ba42ffc828ddfcf79c24367abe35499c_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_ba42ffc828ddfcf79c24367abe35499c_list, 0, const_str_plain_HEAD ); Py_INCREF( const_str_plain_HEAD );
    PyList_SET_ITEM( const_list_ba42ffc828ddfcf79c24367abe35499c_list, 1, const_str_plain_GET ); Py_INCREF( const_str_plain_GET );
    PyList_SET_ITEM( const_list_ba42ffc828ddfcf79c24367abe35499c_list, 2, const_str_plain_PUT ); Py_INCREF( const_str_plain_PUT );
    PyList_SET_ITEM( const_list_ba42ffc828ddfcf79c24367abe35499c_list, 3, const_str_plain_DELETE ); Py_INCREF( const_str_plain_DELETE );
    PyList_SET_ITEM( const_list_ba42ffc828ddfcf79c24367abe35499c_list, 4, const_str_plain_OPTIONS ); Py_INCREF( const_str_plain_OPTIONS );
    PyList_SET_ITEM( const_list_ba42ffc828ddfcf79c24367abe35499c_list, 5, const_str_plain_TRACE ); Py_INCREF( const_str_plain_TRACE );
    const_tuple_str_plain_h_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_h_tuple, 0, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    const_str_plain_parsedate = UNSTREAM_STRING_ASCII( &constant_bin[ 459438 ], 9, 1 );
    const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 1, const_str_plain_consecutive_errors_len ); Py_INCREF( const_str_plain_consecutive_errors_len );
    const_str_plain_backoff_value = UNSTREAM_STRING_ASCII( &constant_bin[ 2832976 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 2, const_str_plain_backoff_value ); Py_INCREF( const_str_plain_backoff_value );
    const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2832989 ], 24, 0 );
    const_str_plain_retry_date = UNSTREAM_STRING_ASCII( &constant_bin[ 2826746 ], 10, 1 );
    const_str_plain_backoff = UNSTREAM_STRING_ASCII( &constant_bin[ 2826711 ], 7, 1 );
    const_str_digest_ed2c0b12f2250d745518387535c4958e = UNSTREAM_STRING_ASCII( &constant_bin[ 2833013 ], 323, 0 );
    const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 1, const_str_plain_retry_after ); Py_INCREF( const_str_plain_retry_after );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 2, const_str_plain_seconds ); Py_INCREF( const_str_plain_seconds );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 3, const_str_plain_retry_date_tuple ); Py_INCREF( const_str_plain_retry_date_tuple );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 4, const_str_plain_retry_date ); Py_INCREF( const_str_plain_retry_date );
    const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST = UNSTREAM_STRING_ASCII( &constant_bin[ 2833336 ], 34, 1 );
    const_str_digest_7e60379875538acb6d47a09b3bcd7fdf = UNSTREAM_STRING_ASCII( &constant_bin[ 2833370 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_backoff_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_backoff_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_backoff_tuple, 1, const_str_plain_backoff ); Py_INCREF( const_str_plain_backoff );
    const_str_digest_adf0407d4b5f2535bca90601d487b350 = UNSTREAM_STRING_ASCII( &constant_bin[ 2833396 ], 36, 0 );
    const_str_digest_3ff146bf2cbf06e10d34294d9109668e = UNSTREAM_STRING_ASCII( &constant_bin[ 2833432 ], 33, 0 );
    const_str_digest_25ded409e041cb7d54dbe844ec9f890e = UNSTREAM_STRING_ASCII( &constant_bin[ 2833465 ], 376, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$retry( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_549b265f122226cc34e4e320253f437e;
static PyCodeObject *codeobj_3de7fb3ea928e33f655dd95d8feacbe9;
static PyCodeObject *codeobj_62e7f01b58173660bf4e5206930ccbf6;
static PyCodeObject *codeobj_25eaa515616a2793d71a55c358cc7341;
static PyCodeObject *codeobj_58772d89658a206d9a97ea904ced4d4d;
static PyCodeObject *codeobj_9227f67a64b8b8cac7881acda5e73b98;
static PyCodeObject *codeobj_f7bb0cb72b5286e898524b106a948032;
static PyCodeObject *codeobj_cf71836de8e996fdd89878802f3cf5d2;
static PyCodeObject *codeobj_2865e5c422d984784495e1bb7764927f;
static PyCodeObject *codeobj_9e9c01812e1cddd9c67a05a521c9ebdf;
static PyCodeObject *codeobj_0ca77c1bc0c3ef6869662a53ca3d5951;
static PyCodeObject *codeobj_a31791f54f39e246526226f7509a0d03;
static PyCodeObject *codeobj_9f671fc8b3375f749545ff6447c5b8ce;
static PyCodeObject *codeobj_fb6b04cc0c4aa0657cff8be014c6d1e2;
static PyCodeObject *codeobj_6a35879bebe0b759a0d3fb6d9a12d5cd;
static PyCodeObject *codeobj_9a0b7c7d30d40c1a076eb39eb8b6193e;
static PyCodeObject *codeobj_a6b02bbc5da70dbdfb9572e4ed435828;
static PyCodeObject *codeobj_625dd47f5e9b75eab0b863b89e2e9a9e;
static PyCodeObject *codeobj_fd9d1969a47b64bb32905bf378172e50;
static PyCodeObject *codeobj_0debe66bd936630f88c730ae90ee670d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1bde10c9faf6b4589142328617d2b45a;
    codeobj_549b265f122226cc34e4e320253f437e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 220, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3de7fb3ea928e33f655dd95d8feacbe9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 183, const_tuple_str_plain_h_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_62e7f01b58173660bf4e5206930ccbf6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3d8456b692ba12d694b1345117db0cc2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_25eaa515616a2793d71a55c358cc7341 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Retry, 28, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_58772d89658a206d9a97ea904ced4d4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 159, const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 14, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9227f67a64b8b8cac7881acda5e73b98 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 405, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7bb0cb72b5286e898524b106a948032 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_connection_error, 284, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cf71836de8e996fdd89878802f3cf5d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_method_retryable, 296, const_tuple_str_plain_self_str_plain_method_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2865e5c422d984784495e1bb7764927f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_read_error, 290, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e9c01812e1cddd9c67a05a521c9ebdf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sleep_backoff, 262, const_tuple_str_plain_self_str_plain_backoff_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0ca77c1bc0c3ef6869662a53ca3d5951 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_int, 200, const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a31791f54f39e246526226f7509a0d03 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_backoff_time, 214, const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9f671fc8b3375f749545ff6447c5b8ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_retry_after, 244, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fb6b04cc0c4aa0657cff8be014c6d1e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_increment, 330, const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6a35879bebe0b759a0d3fb6d9a12d5cd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_exhausted, 321, const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9a0b7c7d30d40c1a076eb39eb8b6193e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_retry, 305, const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a6b02bbc5da70dbdfb9572e4ed435828 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 185, const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_625dd47f5e9b75eab0b863b89e2e9a9e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_retry_after, 228, const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fd9d1969a47b64bb32905bf378172e50 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sleep, 268, const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0debe66bd936630f88c730ae90ee670d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sleep_for_retry, 254, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$util$retry$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_total = python_pars[ 1 ];
    PyObject *par_connect = python_pars[ 2 ];
    PyObject *par_read = python_pars[ 3 ];
    PyObject *par_redirect = python_pars[ 4 ];
    PyObject *par_status = python_pars[ 5 ];
    PyObject *par_method_whitelist = python_pars[ 6 ];
    PyObject *par_status_forcelist = python_pars[ 7 ];
    PyObject *par_backoff_factor = python_pars[ 8 ];
    PyObject *par_raise_on_redirect = python_pars[ 9 ];
    PyObject *par_raise_on_status = python_pars[ 10 ];
    PyObject *par_history = python_pars[ 11 ];
    PyObject *par_respect_retry_after_header = python_pars[ 12 ];
    PyObject *par_remove_headers_on_redirect = python_pars[ 13 ];
    PyObject *outline_0_var_h = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_58772d89658a206d9a97ea904ced4d4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_3de7fb3ea928e33f655dd95d8feacbe9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3de7fb3ea928e33f655dd95d8feacbe9_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_58772d89658a206d9a97ea904ced4d4d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58772d89658a206d9a97ea904ced4d4d, codeobj_58772d89658a206d9a97ea904ced4d4d, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_58772d89658a206d9a97ea904ced4d4d = cache_frame_58772d89658a206d9a97ea904ced4d4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58772d89658a206d9a97ea904ced4d4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58772d89658a206d9a97ea904ced4d4d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_total );
        tmp_assattr_name_1 = par_total;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_total, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_connect );
        tmp_assattr_name_2 = par_connect;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_connect, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_read );
        tmp_assattr_name_3 = par_read;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_read, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_status );
        tmp_assattr_name_4 = par_status;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_status, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_redirect );
        tmp_compexpr_left_1 = par_redirect;
        tmp_compexpr_right_1 = Py_False;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_total );
        tmp_compexpr_left_2 = par_total;
        tmp_compexpr_right_2 = Py_False;
        tmp_or_right_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_int_0;
            {
                PyObject *old = par_redirect;
                assert( old != NULL );
                par_redirect = tmp_assign_source_1;
                Py_INCREF( par_redirect );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = Py_False;
            {
                PyObject *old = par_raise_on_redirect;
                assert( old != NULL );
                par_raise_on_redirect = tmp_assign_source_2;
                Py_INCREF( par_raise_on_redirect );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_redirect );
        tmp_assattr_name_5 = par_redirect;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_redirect, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_status_forcelist );
        tmp_or_left_value_2 = par_status_forcelist;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = PySet_New( NULL );
        tmp_assattr_name_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF( tmp_or_left_value_2 );
        tmp_assattr_name_6 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_status_forcelist, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_method_whitelist );
        tmp_assattr_name_7 = par_method_whitelist;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_method_whitelist, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_backoff_factor );
        tmp_assattr_name_8 = par_backoff_factor;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_backoff_factor, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( par_raise_on_redirect );
        tmp_assattr_name_9 = par_raise_on_redirect;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_raise_on_redirect, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( par_raise_on_status );
        tmp_assattr_name_10 = par_raise_on_status;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_raise_on_status, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( par_history );
        tmp_or_left_value_3 = par_history;
        tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
        if ( tmp_or_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_3 == 1 )
        {
            goto or_left_3;
        }
        else
        {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = const_tuple_empty;
        tmp_assattr_name_11 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assattr_name_11 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_history, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( par_respect_retry_after_header );
        tmp_assattr_name_12 = par_respect_retry_after_header;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_respect_retry_after_header, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_frozenset_arg_1;
        PyObject *tmp_assattr_target_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_remove_headers_on_redirect );
            tmp_iter_arg_1 = par_remove_headers_on_redirect;
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_3de7fb3ea928e33f655dd95d8feacbe9_2, codeobj_3de7fb3ea928e33f655dd95d8feacbe9, module_urllib3$util$retry, sizeof(void *) );
        frame_3de7fb3ea928e33f655dd95d8feacbe9_2 = cache_frame_3de7fb3ea928e33f655dd95d8feacbe9_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 183;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_h;
                outline_0_var_h = tmp_assign_source_6;
                Py_INCREF( outline_0_var_h );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT( outline_0_var_h );
            tmp_called_instance_1 = outline_0_var_h;
            frame_3de7fb3ea928e33f655dd95d8feacbe9_2->m_frame.f_lineno = 183;
            tmp_append_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_frozenset_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_frozenset_arg_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
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
        RESTORE_FRAME_EXCEPTION( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_3de7fb3ea928e33f655dd95d8feacbe9_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_3de7fb3ea928e33f655dd95d8feacbe9_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_3de7fb3ea928e33f655dd95d8feacbe9_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_3de7fb3ea928e33f655dd95d8feacbe9_2,
            type_description_2,
            outline_0_var_h
        );


        // Release cached frame.
        if ( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 == cache_frame_3de7fb3ea928e33f655dd95d8feacbe9_2 )
        {
            Py_DECREF( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 );
        }
        cache_frame_3de7fb3ea928e33f655dd95d8feacbe9_2 = NULL;

        assertFrameObject( frame_3de7fb3ea928e33f655dd95d8feacbe9_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_h );
        outline_0_var_h = NULL;

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

        Py_XDECREF( outline_0_var_h );
        outline_0_var_h = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
        return NULL;
        outline_exception_1:;
        exception_lineno = 183;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_assattr_name_13 = PyFrozenSet_New( tmp_frozenset_arg_1 );
        Py_DECREF( tmp_frozenset_arg_1 );
        if ( tmp_assattr_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_remove_headers_on_redirect, tmp_assattr_name_13 );
        Py_DECREF( tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58772d89658a206d9a97ea904ced4d4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58772d89658a206d9a97ea904ced4d4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58772d89658a206d9a97ea904ced4d4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58772d89658a206d9a97ea904ced4d4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58772d89658a206d9a97ea904ced4d4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58772d89658a206d9a97ea904ced4d4d,
        type_description_1,
        par_self,
        par_total,
        par_connect,
        par_read,
        par_redirect,
        par_status,
        par_method_whitelist,
        par_status_forcelist,
        par_backoff_factor,
        par_raise_on_redirect,
        par_raise_on_status,
        par_history,
        par_respect_retry_after_header,
        par_remove_headers_on_redirect
    );


    // Release cached frame.
    if ( frame_58772d89658a206d9a97ea904ced4d4d == cache_frame_58772d89658a206d9a97ea904ced4d4d )
    {
        Py_DECREF( frame_58772d89658a206d9a97ea904ced4d4d );
    }
    cache_frame_58772d89658a206d9a97ea904ced4d4d = NULL;

    assertFrameObject( frame_58772d89658a206d9a97ea904ced4d4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_total );
    Py_DECREF( par_total );
    par_total = NULL;

    CHECK_OBJECT( (PyObject *)par_connect );
    Py_DECREF( par_connect );
    par_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    CHECK_OBJECT( (PyObject *)par_redirect );
    Py_DECREF( par_redirect );
    par_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_method_whitelist );
    Py_DECREF( par_method_whitelist );
    par_method_whitelist = NULL;

    CHECK_OBJECT( (PyObject *)par_status_forcelist );
    Py_DECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    CHECK_OBJECT( (PyObject *)par_backoff_factor );
    Py_DECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    CHECK_OBJECT( (PyObject *)par_raise_on_redirect );
    Py_DECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_raise_on_status );
    Py_DECREF( par_raise_on_status );
    par_raise_on_status = NULL;

    CHECK_OBJECT( (PyObject *)par_history );
    Py_DECREF( par_history );
    par_history = NULL;

    CHECK_OBJECT( (PyObject *)par_respect_retry_after_header );
    Py_DECREF( par_respect_retry_after_header );
    par_respect_retry_after_header = NULL;

    CHECK_OBJECT( (PyObject *)par_remove_headers_on_redirect );
    Py_DECREF( par_remove_headers_on_redirect );
    par_remove_headers_on_redirect = NULL;

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

    CHECK_OBJECT( (PyObject *)par_total );
    Py_DECREF( par_total );
    par_total = NULL;

    CHECK_OBJECT( (PyObject *)par_connect );
    Py_DECREF( par_connect );
    par_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_read );
    Py_DECREF( par_read );
    par_read = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)par_method_whitelist );
    Py_DECREF( par_method_whitelist );
    par_method_whitelist = NULL;

    CHECK_OBJECT( (PyObject *)par_status_forcelist );
    Py_DECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    CHECK_OBJECT( (PyObject *)par_backoff_factor );
    Py_DECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    Py_XDECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_raise_on_status );
    Py_DECREF( par_raise_on_status );
    par_raise_on_status = NULL;

    CHECK_OBJECT( (PyObject *)par_history );
    Py_DECREF( par_history );
    par_history = NULL;

    CHECK_OBJECT( (PyObject *)par_respect_retry_after_header );
    Py_DECREF( par_respect_retry_after_header );
    par_respect_retry_after_header = NULL;

    CHECK_OBJECT( (PyObject *)par_remove_headers_on_redirect );
    Py_DECREF( par_remove_headers_on_redirect );
    par_remove_headers_on_redirect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
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


static PyObject *impl_urllib3$util$retry$$$function_2_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_a6b02bbc5da70dbdfb9572e4ed435828;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a6b02bbc5da70dbdfb9572e4ed435828 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a6b02bbc5da70dbdfb9572e4ed435828, codeobj_a6b02bbc5da70dbdfb9572e4ed435828, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a6b02bbc5da70dbdfb9572e4ed435828 = cache_frame_a6b02bbc5da70dbdfb9572e4ed435828;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a6b02bbc5da70dbdfb9572e4ed435828 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a6b02bbc5da70dbdfb9572e4ed435828 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_source_name_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_source_name_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_source_name_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_source_name_12;
        tmp_dict_key_1 = const_str_plain_total;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 12 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_connect;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_read;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_redirect;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_status;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_status );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_method_whitelist;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_method_whitelist );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_status_forcelist;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_status_forcelist );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_backoff_factor;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_backoff_factor );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_9 = const_str_plain_raise_on_redirect;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_raise_on_redirect );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 192;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_10 = const_str_plain_raise_on_status;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_raise_on_status );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_11 = const_str_plain_history;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_history );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_12 = const_str_plain_remove_headers_on_redirect;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_remove_headers_on_redirect );
        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 195;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        assert( var_params == NULL );
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_params );
        tmp_called_instance_1 = var_params;
        CHECK_OBJECT( par_kw );
        tmp_args_element_name_1 = par_kw;
        frame_a6b02bbc5da70dbdfb9572e4ed435828->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_update, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT( par_self );
        tmp_type_arg_1 = par_self;
        tmp_dircall_arg1_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_dircall_arg1_1 == NULL) );
        CHECK_OBJECT( var_params );
        tmp_dircall_arg2_1 = var_params;
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6b02bbc5da70dbdfb9572e4ed435828 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6b02bbc5da70dbdfb9572e4ed435828 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6b02bbc5da70dbdfb9572e4ed435828 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a6b02bbc5da70dbdfb9572e4ed435828, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a6b02bbc5da70dbdfb9572e4ed435828->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a6b02bbc5da70dbdfb9572e4ed435828, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6b02bbc5da70dbdfb9572e4ed435828,
        type_description_1,
        par_self,
        par_kw,
        var_params
    );


    // Release cached frame.
    if ( frame_a6b02bbc5da70dbdfb9572e4ed435828 == cache_frame_a6b02bbc5da70dbdfb9572e4ed435828 )
    {
        Py_DECREF( frame_a6b02bbc5da70dbdfb9572e4ed435828 );
    }
    cache_frame_a6b02bbc5da70dbdfb9572e4ed435828 = NULL;

    assertFrameObject( frame_a6b02bbc5da70dbdfb9572e4ed435828 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_2_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_2_new );
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


static PyObject *impl_urllib3$util$retry$$$function_3_from_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_retries = python_pars[ 1 ];
    PyObject *par_redirect = python_pars[ 2 ];
    PyObject *par_default = python_pars[ 3 ];
    PyObject *var_new_retries = NULL;
    struct Nuitka_FrameObject *frame_0ca77c1bc0c3ef6869662a53ca3d5951;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ca77c1bc0c3ef6869662a53ca3d5951 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ca77c1bc0c3ef6869662a53ca3d5951, codeobj_0ca77c1bc0c3ef6869662a53ca3d5951, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0ca77c1bc0c3ef6869662a53ca3d5951 = cache_frame_0ca77c1bc0c3ef6869662a53ca3d5951;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ca77c1bc0c3ef6869662a53ca3d5951 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ca77c1bc0c3ef6869662a53ca3d5951 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_retries );
        tmp_compexpr_left_1 = par_retries;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_default );
            tmp_compexpr_left_2 = par_default;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT( par_default );
            tmp_assign_source_1 = par_default;
            Py_INCREF( tmp_assign_source_1 );
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT( par_cls );
            tmp_source_name_1 = par_cls;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEFAULT );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            condexpr_end_1:;
            {
                PyObject *old = par_retries;
                assert( old != NULL );
                par_retries = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_retries );
        tmp_isinstance_inst_1 = par_retries;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( par_retries );
        tmp_return_value = par_retries;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( par_redirect );
        tmp_value_name_1 = par_redirect;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = Py_None;
        tmp_assign_source_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_2 = tmp_and_left_value_1;
        and_end_1:;
        {
            PyObject *old = par_redirect;
            assert( old != NULL );
            par_redirect = tmp_assign_source_2;
            Py_INCREF( par_redirect );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_cls );
        tmp_called_name_1 = par_cls;
        CHECK_OBJECT( par_retries );
        tmp_tuple_element_1 = par_retries;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_redirect;
        CHECK_OBJECT( par_redirect );
        tmp_dict_value_1 = par_redirect;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0ca77c1bc0c3ef6869662a53ca3d5951->m_frame.f_lineno = 210;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_retries == NULL );
        var_new_retries = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        tmp_args_element_name_1 = const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
        CHECK_OBJECT( par_retries );
        tmp_args_element_name_2 = par_retries;
        CHECK_OBJECT( var_new_retries );
        tmp_args_element_name_3 = var_new_retries;
        frame_0ca77c1bc0c3ef6869662a53ca3d5951->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_debug, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ca77c1bc0c3ef6869662a53ca3d5951 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ca77c1bc0c3ef6869662a53ca3d5951 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ca77c1bc0c3ef6869662a53ca3d5951 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ca77c1bc0c3ef6869662a53ca3d5951, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ca77c1bc0c3ef6869662a53ca3d5951->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ca77c1bc0c3ef6869662a53ca3d5951, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ca77c1bc0c3ef6869662a53ca3d5951,
        type_description_1,
        par_cls,
        par_retries,
        par_redirect,
        par_default,
        var_new_retries
    );


    // Release cached frame.
    if ( frame_0ca77c1bc0c3ef6869662a53ca3d5951 == cache_frame_0ca77c1bc0c3ef6869662a53ca3d5951 )
    {
        Py_DECREF( frame_0ca77c1bc0c3ef6869662a53ca3d5951 );
    }
    cache_frame_0ca77c1bc0c3ef6869662a53ca3d5951 = NULL;

    assertFrameObject( frame_0ca77c1bc0c3ef6869662a53ca3d5951 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_new_retries );
    tmp_return_value = var_new_retries;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_3_from_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_retries );
    Py_DECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_redirect );
    Py_DECREF( par_redirect );
    par_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_redirect );
    Py_DECREF( par_redirect );
    par_redirect = NULL;

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_3_from_int );
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


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_consecutive_errors_len = NULL;
    PyObject *var_backoff_value = NULL;
    struct Nuitka_FrameObject *frame_a31791f54f39e246526226f7509a0d03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a31791f54f39e246526226f7509a0d03 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a31791f54f39e246526226f7509a0d03, codeobj_a31791f54f39e246526226f7509a0d03, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a31791f54f39e246526226f7509a0d03 = cache_frame_a31791f54f39e246526226f7509a0d03;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a31791f54f39e246526226f7509a0d03 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a31791f54f39e246526226f7509a0d03 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_takewhile );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "takewhile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  );



        tmp_called_name_2 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_history );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 221;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a31791f54f39e246526226f7509a0d03->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 221;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a31791f54f39e246526226f7509a0d03->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_consecutive_errors_len == NULL );
        var_consecutive_errors_len = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_consecutive_errors_len );
        tmp_compexpr_left_1 = var_consecutive_errors_len;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
        tmp_return_value = const_int_0;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_backoff_factor );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT( var_consecutive_errors_len );
        tmp_left_name_3 = var_consecutive_errors_len;
        tmp_right_name_3 = const_int_pos_1;
        tmp_right_name_2 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
        assert( !(tmp_right_name_2 == NULL) );
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_backoff_value == NULL );
        var_backoff_value = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BACKOFF_MAX );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_backoff_value );
        tmp_args_element_name_5 = var_backoff_value;
        frame_a31791f54f39e246526226f7509a0d03->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a31791f54f39e246526226f7509a0d03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a31791f54f39e246526226f7509a0d03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a31791f54f39e246526226f7509a0d03 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a31791f54f39e246526226f7509a0d03, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a31791f54f39e246526226f7509a0d03->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a31791f54f39e246526226f7509a0d03, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a31791f54f39e246526226f7509a0d03,
        type_description_1,
        par_self,
        var_consecutive_errors_len,
        var_backoff_value
    );


    // Release cached frame.
    if ( frame_a31791f54f39e246526226f7509a0d03 == cache_frame_a31791f54f39e246526226f7509a0d03 )
    {
        Py_DECREF( frame_a31791f54f39e246526226f7509a0d03 );
    }
    cache_frame_a31791f54f39e246526226f7509a0d03 = NULL;

    assertFrameObject( frame_a31791f54f39e246526226f7509a0d03 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_consecutive_errors_len );
    Py_DECREF( var_consecutive_errors_len );
    var_consecutive_errors_len = NULL;

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

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

    Py_XDECREF( var_consecutive_errors_len );
    var_consecutive_errors_len = NULL;

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time );
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


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_549b265f122226cc34e4e320253f437e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_549b265f122226cc34e4e320253f437e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_549b265f122226cc34e4e320253f437e, codeobj_549b265f122226cc34e4e320253f437e, module_urllib3$util$retry, sizeof(void *) );
    frame_549b265f122226cc34e4e320253f437e = cache_frame_549b265f122226cc34e4e320253f437e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_549b265f122226cc34e4e320253f437e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_549b265f122226cc34e4e320253f437e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_1 = par_x;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_redirect_location );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_return_value = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_1 );
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_549b265f122226cc34e4e320253f437e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_549b265f122226cc34e4e320253f437e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_549b265f122226cc34e4e320253f437e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_549b265f122226cc34e4e320253f437e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_549b265f122226cc34e4e320253f437e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_549b265f122226cc34e4e320253f437e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_549b265f122226cc34e4e320253f437e,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_549b265f122226cc34e4e320253f437e == cache_frame_549b265f122226cc34e4e320253f437e )
    {
        Py_DECREF( frame_549b265f122226cc34e4e320253f437e );
    }
    cache_frame_549b265f122226cc34e4e320253f437e = NULL;

    assertFrameObject( frame_549b265f122226cc34e4e320253f437e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda );
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


static PyObject *impl_urllib3$util$retry$$$function_5_parse_retry_after( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_retry_after = python_pars[ 1 ];
    PyObject *var_seconds = NULL;
    PyObject *var_retry_date_tuple = NULL;
    PyObject *var_retry_date = NULL;
    struct Nuitka_FrameObject *frame_625dd47f5e9b75eab0b863b89e2e9a9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_625dd47f5e9b75eab0b863b89e2e9a9e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_625dd47f5e9b75eab0b863b89e2e9a9e, codeobj_625dd47f5e9b75eab0b863b89e2e9a9e, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_625dd47f5e9b75eab0b863b89e2e9a9e = cache_frame_625dd47f5e9b75eab0b863b89e2e9a9e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_625dd47f5e9b75eab0b863b89e2e9a9e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_625dd47f5e9b75eab0b863b89e2e9a9e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
        CHECK_OBJECT( par_retry_after );
        tmp_args_element_name_2 = par_retry_after;
        frame_625dd47f5e9b75eab0b863b89e2e9a9e->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_match, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 230;
            type_description_1 = "ooooo";
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
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT( par_retry_after );
            tmp_int_arg_1 = par_retry_after;
            tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_seconds == NULL );
            var_seconds = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_email );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "email" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_utils );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_retry_after );
            tmp_args_element_name_3 = par_retry_after;
            frame_625dd47f5e9b75eab0b863b89e2e9a9e->m_frame.f_lineno = 233;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_parsedate, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_retry_date_tuple == NULL );
            var_retry_date_tuple = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( var_retry_date_tuple );
            tmp_compexpr_left_1 = var_retry_date_tuple;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidHeader );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidHeader" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 235;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_3;
                tmp_left_name_1 = const_str_digest_52dc615064dbc739578d7b66bd4357d4;
                CHECK_OBJECT( par_retry_after );
                tmp_right_name_1 = par_retry_after;
                tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_625dd47f5e9b75eab0b863b89e2e9a9e->m_frame.f_lineno = 235;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 235;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 236;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT( var_retry_date_tuple );
            tmp_args_element_name_5 = var_retry_date_tuple;
            frame_625dd47f5e9b75eab0b863b89e2e9a9e->m_frame.f_lineno = 236;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_mktime, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_retry_date == NULL );
            var_retry_date = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT( var_retry_date );
            tmp_left_name_2 = var_retry_date;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

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

                exception_lineno = 237;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_5;
            frame_625dd47f5e9b75eab0b863b89e2e9a9e->m_frame.f_lineno = 237;
            tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_time );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_seconds == NULL );
            var_seconds = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_seconds );
        tmp_compexpr_left_2 = var_seconds;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_int_0;
            {
                PyObject *old = var_seconds;
                assert( old != NULL );
                var_seconds = tmp_assign_source_5;
                Py_INCREF( var_seconds );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    if ( var_seconds == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "seconds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_seconds;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_625dd47f5e9b75eab0b863b89e2e9a9e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_625dd47f5e9b75eab0b863b89e2e9a9e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_625dd47f5e9b75eab0b863b89e2e9a9e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_625dd47f5e9b75eab0b863b89e2e9a9e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_625dd47f5e9b75eab0b863b89e2e9a9e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_625dd47f5e9b75eab0b863b89e2e9a9e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_625dd47f5e9b75eab0b863b89e2e9a9e,
        type_description_1,
        par_self,
        par_retry_after,
        var_seconds,
        var_retry_date_tuple,
        var_retry_date
    );


    // Release cached frame.
    if ( frame_625dd47f5e9b75eab0b863b89e2e9a9e == cache_frame_625dd47f5e9b75eab0b863b89e2e9a9e )
    {
        Py_DECREF( frame_625dd47f5e9b75eab0b863b89e2e9a9e );
    }
    cache_frame_625dd47f5e9b75eab0b863b89e2e9a9e = NULL;

    assertFrameObject( frame_625dd47f5e9b75eab0b863b89e2e9a9e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_5_parse_retry_after );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_retry_after );
    Py_DECREF( par_retry_after );
    par_retry_after = NULL;

    Py_XDECREF( var_seconds );
    var_seconds = NULL;

    Py_XDECREF( var_retry_date_tuple );
    var_retry_date_tuple = NULL;

    Py_XDECREF( var_retry_date );
    var_retry_date = NULL;

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

    CHECK_OBJECT( (PyObject *)par_retry_after );
    Py_DECREF( par_retry_after );
    par_retry_after = NULL;

    Py_XDECREF( var_seconds );
    var_seconds = NULL;

    Py_XDECREF( var_retry_date_tuple );
    var_retry_date_tuple = NULL;

    Py_XDECREF( var_retry_date );
    var_retry_date = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_5_parse_retry_after );
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


static PyObject *impl_urllib3$util$retry$$$function_6_get_retry_after( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_retry_after = NULL;
    struct Nuitka_FrameObject *frame_9f671fc8b3375f749545ff6447c5b8ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9f671fc8b3375f749545ff6447c5b8ce = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f671fc8b3375f749545ff6447c5b8ce, codeobj_9f671fc8b3375f749545ff6447c5b8ce, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9f671fc8b3375f749545ff6447c5b8ce = cache_frame_9f671fc8b3375f749545ff6447c5b8ce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f671fc8b3375f749545ff6447c5b8ce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f671fc8b3375f749545ff6447c5b8ce ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_response );
        tmp_called_instance_1 = par_response;
        frame_9f671fc8b3375f749545ff6447c5b8ce->m_frame.f_lineno = 247;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getheader, &PyTuple_GET_ITEM( const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_retry_after == NULL );
        var_retry_after = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_retry_after );
        tmp_compexpr_left_1 = var_retry_after;
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
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_retry_after );
        tmp_args_element_name_1 = var_retry_after;
        frame_9f671fc8b3375f749545ff6447c5b8ce->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_parse_retry_after, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f671fc8b3375f749545ff6447c5b8ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f671fc8b3375f749545ff6447c5b8ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f671fc8b3375f749545ff6447c5b8ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f671fc8b3375f749545ff6447c5b8ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f671fc8b3375f749545ff6447c5b8ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f671fc8b3375f749545ff6447c5b8ce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f671fc8b3375f749545ff6447c5b8ce,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if ( frame_9f671fc8b3375f749545ff6447c5b8ce == cache_frame_9f671fc8b3375f749545ff6447c5b8ce )
    {
        Py_DECREF( frame_9f671fc8b3375f749545ff6447c5b8ce );
    }
    cache_frame_9f671fc8b3375f749545ff6447c5b8ce = NULL;

    assertFrameObject( frame_9f671fc8b3375f749545ff6447c5b8ce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_6_get_retry_after );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)var_retry_after );
    Py_DECREF( var_retry_after );
    var_retry_after = NULL;

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

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_6_get_retry_after );
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


static PyObject *impl_urllib3$util$retry$$$function_7_sleep_for_retry( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_retry_after = NULL;
    struct Nuitka_FrameObject *frame_0debe66bd936630f88c730ae90ee670d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0debe66bd936630f88c730ae90ee670d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0debe66bd936630f88c730ae90ee670d, codeobj_0debe66bd936630f88c730ae90ee670d, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0debe66bd936630f88c730ae90ee670d = cache_frame_0debe66bd936630f88c730ae90ee670d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0debe66bd936630f88c730ae90ee670d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0debe66bd936630f88c730ae90ee670d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_response );
        tmp_args_element_name_1 = par_response;
        frame_0debe66bd936630f88c730ae90ee670d->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_retry_after, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_retry_after == NULL );
        var_retry_after = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_retry_after );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_retry_after );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
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
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

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

                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            CHECK_OBJECT( var_retry_after );
            tmp_args_element_name_2 = var_retry_after;
            frame_0debe66bd936630f88c730ae90ee670d->m_frame.f_lineno = 257;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sleep, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0debe66bd936630f88c730ae90ee670d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0debe66bd936630f88c730ae90ee670d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0debe66bd936630f88c730ae90ee670d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0debe66bd936630f88c730ae90ee670d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0debe66bd936630f88c730ae90ee670d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0debe66bd936630f88c730ae90ee670d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0debe66bd936630f88c730ae90ee670d,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if ( frame_0debe66bd936630f88c730ae90ee670d == cache_frame_0debe66bd936630f88c730ae90ee670d )
    {
        Py_DECREF( frame_0debe66bd936630f88c730ae90ee670d );
    }
    cache_frame_0debe66bd936630f88c730ae90ee670d = NULL;

    assertFrameObject( frame_0debe66bd936630f88c730ae90ee670d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_7_sleep_for_retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)var_retry_after );
    Py_DECREF( var_retry_after );
    var_retry_after = NULL;

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

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_7_sleep_for_retry );
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


static PyObject *impl_urllib3$util$retry$$$function_8__sleep_backoff( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_backoff = NULL;
    struct Nuitka_FrameObject *frame_9e9c01812e1cddd9c67a05a521c9ebdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e9c01812e1cddd9c67a05a521c9ebdf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e9c01812e1cddd9c67a05a521c9ebdf, codeobj_9e9c01812e1cddd9c67a05a521c9ebdf, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_9e9c01812e1cddd9c67a05a521c9ebdf = cache_frame_9e9c01812e1cddd9c67a05a521c9ebdf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e9c01812e1cddd9c67a05a521c9ebdf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e9c01812e1cddd9c67a05a521c9ebdf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_9e9c01812e1cddd9c67a05a521c9ebdf->m_frame.f_lineno = 263;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_backoff_time );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_backoff == NULL );
        var_backoff = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_backoff );
        tmp_compexpr_left_1 = var_backoff;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

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

            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_backoff );
        tmp_args_element_name_1 = var_backoff;
        frame_9e9c01812e1cddd9c67a05a521c9ebdf->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sleep, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e9c01812e1cddd9c67a05a521c9ebdf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e9c01812e1cddd9c67a05a521c9ebdf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e9c01812e1cddd9c67a05a521c9ebdf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e9c01812e1cddd9c67a05a521c9ebdf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e9c01812e1cddd9c67a05a521c9ebdf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e9c01812e1cddd9c67a05a521c9ebdf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e9c01812e1cddd9c67a05a521c9ebdf,
        type_description_1,
        par_self,
        var_backoff
    );


    // Release cached frame.
    if ( frame_9e9c01812e1cddd9c67a05a521c9ebdf == cache_frame_9e9c01812e1cddd9c67a05a521c9ebdf )
    {
        Py_DECREF( frame_9e9c01812e1cddd9c67a05a521c9ebdf );
    }
    cache_frame_9e9c01812e1cddd9c67a05a521c9ebdf = NULL;

    assertFrameObject( frame_9e9c01812e1cddd9c67a05a521c9ebdf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_8__sleep_backoff );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_backoff );
    Py_DECREF( var_backoff );
    var_backoff = NULL;

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

    Py_XDECREF( var_backoff );
    var_backoff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_8__sleep_backoff );
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


static PyObject *impl_urllib3$util$retry$$$function_9_sleep( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_slept = NULL;
    struct Nuitka_FrameObject *frame_fd9d1969a47b64bb32905bf378172e50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fd9d1969a47b64bb32905bf378172e50 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd9d1969a47b64bb32905bf378172e50, codeobj_fd9d1969a47b64bb32905bf378172e50, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fd9d1969a47b64bb32905bf378172e50 = cache_frame_fd9d1969a47b64bb32905bf378172e50;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd9d1969a47b64bb32905bf378172e50 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd9d1969a47b64bb32905bf378172e50 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_response );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_response );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_response );
            tmp_args_element_name_1 = par_response;
            frame_fd9d1969a47b64bb32905bf378172e50->m_frame.f_lineno = 278;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sleep_for_retry, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_slept == NULL );
            var_slept = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_slept );
            tmp_truth_name_2 = CHECK_IF_TRUE( var_slept );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
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
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_fd9d1969a47b64bb32905bf378172e50->m_frame.f_lineno = 282;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__sleep_backoff );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd9d1969a47b64bb32905bf378172e50 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd9d1969a47b64bb32905bf378172e50 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd9d1969a47b64bb32905bf378172e50 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd9d1969a47b64bb32905bf378172e50, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd9d1969a47b64bb32905bf378172e50->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd9d1969a47b64bb32905bf378172e50, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd9d1969a47b64bb32905bf378172e50,
        type_description_1,
        par_self,
        par_response,
        var_slept
    );


    // Release cached frame.
    if ( frame_fd9d1969a47b64bb32905bf378172e50 == cache_frame_fd9d1969a47b64bb32905bf378172e50 )
    {
        Py_DECREF( frame_fd9d1969a47b64bb32905bf378172e50 );
    }
    cache_frame_fd9d1969a47b64bb32905bf378172e50 = NULL;

    assertFrameObject( frame_fd9d1969a47b64bb32905bf378172e50 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_9_sleep );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_slept );
    var_slept = NULL;

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

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_slept );
    var_slept = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_9_sleep );
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


static PyObject *impl_urllib3$util$retry$$$function_10__is_connection_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f7bb0cb72b5286e898524b106a948032;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f7bb0cb72b5286e898524b106a948032 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f7bb0cb72b5286e898524b106a948032, codeobj_f7bb0cb72b5286e898524b106a948032, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_f7bb0cb72b5286e898524b106a948032 = cache_frame_f7bb0cb72b5286e898524b106a948032;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7bb0cb72b5286e898524b106a948032 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7bb0cb72b5286e898524b106a948032 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_err );
        tmp_isinstance_inst_1 = par_err;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7bb0cb72b5286e898524b106a948032 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7bb0cb72b5286e898524b106a948032 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7bb0cb72b5286e898524b106a948032 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7bb0cb72b5286e898524b106a948032, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7bb0cb72b5286e898524b106a948032->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7bb0cb72b5286e898524b106a948032, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7bb0cb72b5286e898524b106a948032,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if ( frame_f7bb0cb72b5286e898524b106a948032 == cache_frame_f7bb0cb72b5286e898524b106a948032 )
    {
        Py_DECREF( frame_f7bb0cb72b5286e898524b106a948032 );
    }
    cache_frame_f7bb0cb72b5286e898524b106a948032 = NULL;

    assertFrameObject( frame_f7bb0cb72b5286e898524b106a948032 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_10__is_connection_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_10__is_connection_error );
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


static PyObject *impl_urllib3$util$retry$$$function_11__is_read_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2865e5c422d984784495e1bb7764927f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2865e5c422d984784495e1bb7764927f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2865e5c422d984784495e1bb7764927f, codeobj_2865e5c422d984784495e1bb7764927f, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_2865e5c422d984784495e1bb7764927f = cache_frame_2865e5c422d984784495e1bb7764927f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2865e5c422d984784495e1bb7764927f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2865e5c422d984784495e1bb7764927f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_err );
        tmp_isinstance_inst_1 = par_err;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadTimeoutError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_isinstance_cls_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2865e5c422d984784495e1bb7764927f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2865e5c422d984784495e1bb7764927f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2865e5c422d984784495e1bb7764927f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2865e5c422d984784495e1bb7764927f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2865e5c422d984784495e1bb7764927f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2865e5c422d984784495e1bb7764927f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2865e5c422d984784495e1bb7764927f,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if ( frame_2865e5c422d984784495e1bb7764927f == cache_frame_2865e5c422d984784495e1bb7764927f )
    {
        Py_DECREF( frame_2865e5c422d984784495e1bb7764927f );
    }
    cache_frame_2865e5c422d984784495e1bb7764927f = NULL;

    assertFrameObject( frame_2865e5c422d984784495e1bb7764927f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_11__is_read_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_err );
    Py_DECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_11__is_read_error );
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


static PyObject *impl_urllib3$util$retry$$$function_12__is_method_retryable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_cf71836de8e996fdd89878802f3cf5d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf71836de8e996fdd89878802f3cf5d2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf71836de8e996fdd89878802f3cf5d2, codeobj_cf71836de8e996fdd89878802f3cf5d2, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_cf71836de8e996fdd89878802f3cf5d2 = cache_frame_cf71836de8e996fdd89878802f3cf5d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf71836de8e996fdd89878802f3cf5d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf71836de8e996fdd89878802f3cf5d2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method_whitelist );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 300;
            type_description_1 = "oo";
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
        CHECK_OBJECT( par_method );
        tmp_called_instance_1 = par_method;
        frame_cf71836de8e996fdd89878802f3cf5d2->m_frame.f_lineno = 300;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_method_whitelist );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oo";
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf71836de8e996fdd89878802f3cf5d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf71836de8e996fdd89878802f3cf5d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf71836de8e996fdd89878802f3cf5d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf71836de8e996fdd89878802f3cf5d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf71836de8e996fdd89878802f3cf5d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf71836de8e996fdd89878802f3cf5d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf71836de8e996fdd89878802f3cf5d2,
        type_description_1,
        par_self,
        par_method
    );


    // Release cached frame.
    if ( frame_cf71836de8e996fdd89878802f3cf5d2 == cache_frame_cf71836de8e996fdd89878802f3cf5d2 )
    {
        Py_DECREF( frame_cf71836de8e996fdd89878802f3cf5d2 );
    }
    cache_frame_cf71836de8e996fdd89878802f3cf5d2 = NULL;

    assertFrameObject( frame_cf71836de8e996fdd89878802f3cf5d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_12__is_method_retryable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_12__is_method_retryable );
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


static PyObject *impl_urllib3$util$retry$$$function_13_is_retry( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_status_code = python_pars[ 2 ];
    PyObject *par_has_retry_after = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_9a0b7c7d30d40c1a076eb39eb8b6193e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9a0b7c7d30d40c1a076eb39eb8b6193e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a0b7c7d30d40c1a076eb39eb8b6193e, codeobj_9a0b7c7d30d40c1a076eb39eb8b6193e, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9a0b7c7d30d40c1a076eb39eb8b6193e = cache_frame_9a0b7c7d30d40c1a076eb39eb8b6193e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a0b7c7d30d40c1a076eb39eb8b6193e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a0b7c7d30d40c1a076eb39eb8b6193e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_method );
        tmp_args_element_name_1 = par_method;
        frame_9a0b7c7d30d40c1a076eb39eb8b6193e->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__is_method_retryable, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_status_forcelist );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 315;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( par_status_code );
        tmp_compexpr_left_1 = par_status_code;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status_forcelist );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_return_value = Py_True;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_source_name_3;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_source_name_4;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_total );
        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF( tmp_and_left_value_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_and_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_respect_retry_after_header );
        if ( tmp_and_left_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
        if ( tmp_and_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_3 );

            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_3 == 1 )
        {
            goto and_right_3;
        }
        else
        {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF( tmp_and_left_value_3 );
        CHECK_OBJECT( par_has_retry_after );
        tmp_and_left_value_4 = par_has_retry_after;
        tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
        if ( tmp_and_left_truth_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_4 == 1 )
        {
            goto and_right_4;
        }
        else
        {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT( par_status_code );
        tmp_compexpr_left_2 = par_status_code;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_RETRY_AFTER_STATUS_CODES );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        Py_INCREF( tmp_and_right_value_3 );
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_return_value = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_return_value = tmp_and_left_value_2;
        and_end_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a0b7c7d30d40c1a076eb39eb8b6193e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a0b7c7d30d40c1a076eb39eb8b6193e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a0b7c7d30d40c1a076eb39eb8b6193e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a0b7c7d30d40c1a076eb39eb8b6193e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a0b7c7d30d40c1a076eb39eb8b6193e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a0b7c7d30d40c1a076eb39eb8b6193e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a0b7c7d30d40c1a076eb39eb8b6193e,
        type_description_1,
        par_self,
        par_method,
        par_status_code,
        par_has_retry_after
    );


    // Release cached frame.
    if ( frame_9a0b7c7d30d40c1a076eb39eb8b6193e == cache_frame_9a0b7c7d30d40c1a076eb39eb8b6193e )
    {
        Py_DECREF( frame_9a0b7c7d30d40c1a076eb39eb8b6193e );
    }
    cache_frame_9a0b7c7d30d40c1a076eb39eb8b6193e = NULL;

    assertFrameObject( frame_9a0b7c7d30d40c1a076eb39eb8b6193e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_13_is_retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_status_code );
    Py_DECREF( par_status_code );
    par_status_code = NULL;

    CHECK_OBJECT( (PyObject *)par_has_retry_after );
    Py_DECREF( par_has_retry_after );
    par_has_retry_after = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_status_code );
    Py_DECREF( par_status_code );
    par_status_code = NULL;

    CHECK_OBJECT( (PyObject *)par_has_retry_after );
    Py_DECREF( par_has_retry_after );
    par_has_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_13_is_retry );
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


static PyObject *impl_urllib3$util$retry$$$function_14_is_exhausted( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_retry_counts = NULL;
    struct Nuitka_FrameObject *frame_6a35879bebe0b759a0d3fb6d9a12d5cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6a35879bebe0b759a0d3fb6d9a12d5cd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a35879bebe0b759a0d3fb6d9a12d5cd, codeobj_6a35879bebe0b759a0d3fb6d9a12d5cd, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_6a35879bebe0b759a0d3fb6d9a12d5cd = cache_frame_6a35879bebe0b759a0d3fb6d9a12d5cd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a35879bebe0b759a0d3fb6d9a12d5cd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a35879bebe0b759a0d3fb6d9a12d5cd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyTuple_New( 5 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_status );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_1, 4, tmp_tuple_element_1 );
        assert( var_retry_counts == NULL );
        var_retry_counts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyFilter_Type;
        tmp_args_element_name_1 = Py_None;
        CHECK_OBJECT( var_retry_counts );
        tmp_args_element_name_2 = var_retry_counts;
        frame_6a35879bebe0b759a0d3fb6d9a12d5cd->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_retry_counts;
            assert( old != NULL );
            var_retry_counts = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_retry_counts );
        tmp_operand_name_1 = var_retry_counts;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        assert( !(tmp_res == -1) );
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_retry_counts );
        tmp_args_element_name_3 = var_retry_counts;
        frame_6a35879bebe0b759a0d3fb6d9a12d5cd->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_6a35879bebe0b759a0d3fb6d9a12d5cd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a35879bebe0b759a0d3fb6d9a12d5cd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a35879bebe0b759a0d3fb6d9a12d5cd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a35879bebe0b759a0d3fb6d9a12d5cd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a35879bebe0b759a0d3fb6d9a12d5cd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a35879bebe0b759a0d3fb6d9a12d5cd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a35879bebe0b759a0d3fb6d9a12d5cd,
        type_description_1,
        par_self,
        var_retry_counts
    );


    // Release cached frame.
    if ( frame_6a35879bebe0b759a0d3fb6d9a12d5cd == cache_frame_6a35879bebe0b759a0d3fb6d9a12d5cd )
    {
        Py_DECREF( frame_6a35879bebe0b759a0d3fb6d9a12d5cd );
    }
    cache_frame_6a35879bebe0b759a0d3fb6d9a12d5cd = NULL;

    assertFrameObject( frame_6a35879bebe0b759a0d3fb6d9a12d5cd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_14_is_exhausted );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_retry_counts );
    Py_DECREF( var_retry_counts );
    var_retry_counts = NULL;

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

    Py_XDECREF( var_retry_counts );
    var_retry_counts = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_14_is_exhausted );
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


static PyObject *impl_urllib3$util$retry$$$function_15_increment( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_response = python_pars[ 3 ];
    PyObject *par_error = python_pars[ 4 ];
    PyObject *par__pool = python_pars[ 5 ];
    PyObject *par__stacktrace = python_pars[ 6 ];
    PyObject *var_total = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_read = NULL;
    PyObject *var_redirect = NULL;
    PyObject *var_status_count = NULL;
    PyObject *var_cause = NULL;
    PyObject *var_status = NULL;
    PyObject *var_redirect_location = NULL;
    PyObject *var_history = NULL;
    PyObject *var_new_retry = NULL;
    struct Nuitka_FrameObject *frame_fb6b04cc0c4aa0657cff8be014c6d1e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fb6b04cc0c4aa0657cff8be014c6d1e2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fb6b04cc0c4aa0657cff8be014c6d1e2, codeobj_fb6b04cc0c4aa0657cff8be014c6d1e2, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fb6b04cc0c4aa0657cff8be014c6d1e2 = cache_frame_fb6b04cc0c4aa0657cff8be014c6d1e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fb6b04cc0c4aa0657cff8be014c6d1e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fb6b04cc0c4aa0657cff8be014c6d1e2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_False;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
        CHECK_OBJECT( par_error );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_error );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

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

                exception_lineno = 344;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_error );
            tmp_type_arg_1 = par_error;
            tmp_args_element_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_args_element_name_1 == NULL) );
            CHECK_OBJECT( par_error );
            tmp_args_element_name_2 = par_error;
            CHECK_OBJECT( par__stacktrace );
            tmp_args_element_name_3 = par__stacktrace;
            frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 344;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_raise_type_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_reraise, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 344;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_total );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_total == NULL );
        var_total = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_total );
        tmp_compexpr_left_2 = var_total;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_total );
            tmp_left_name_1 = var_total;
            tmp_right_name_1 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = tmp_left_name_1;
            var_total = tmp_assign_source_2;

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_connect );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_connect == NULL );
        var_connect = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_read == NULL );
        var_read = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_redirect );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_redirect == NULL );
        var_redirect = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_status );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_status_count == NULL );
        var_status_count = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_plain_unknown;
        assert( var_cause == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_cause = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_status = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert( var_redirect_location == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_redirect_location = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_error );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_error );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_error );
        tmp_args_element_name_4 = par_error;
        frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__is_connection_error, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_connect );
            tmp_compexpr_left_3 = var_connect;
            tmp_compexpr_right_3 = Py_False;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_type_arg_2;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

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

                    exception_lineno = 361;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_2;
                CHECK_OBJECT( par_error );
                tmp_type_arg_2 = par_error;
                tmp_args_element_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_args_element_name_5 == NULL) );
                CHECK_OBJECT( par_error );
                tmp_args_element_name_6 = par_error;
                CHECK_OBJECT( par__stacktrace );
                tmp_args_element_name_7 = par__stacktrace;
                frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 361;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_raise_type_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_reraise, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 361;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 361;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( var_connect );
                tmp_compexpr_left_4 = var_connect;
                tmp_compexpr_right_4 = Py_None;
                tmp_condition_result_5 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    CHECK_OBJECT( var_connect );
                    tmp_left_name_2 = var_connect;
                    tmp_right_name_2 = const_int_pos_1;
                    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 363;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_10 = tmp_left_name_2;
                    var_connect = tmp_assign_source_10;

                }
                branch_no_5:;
            }
            branch_end_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            int tmp_truth_name_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_8;
            int tmp_truth_name_5;
            CHECK_OBJECT( par_error );
            tmp_truth_name_4 = CHECK_IF_TRUE( par_error );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_self );
            tmp_called_instance_4 = par_self;
            CHECK_OBJECT( par_error );
            tmp_args_element_name_8 = par_error;
            frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 365;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__is_read_error, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 365;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            tmp_condition_result_6 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_6 = tmp_and_left_value_3;
            and_end_3:;
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
                nuitka_bool tmp_condition_result_7;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_args_element_name_9;
                CHECK_OBJECT( var_read );
                tmp_compexpr_left_5 = var_read;
                tmp_compexpr_right_5 = Py_False;
                tmp_or_left_value_1 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_called_instance_5 = par_self;
                CHECK_OBJECT( par_method );
                tmp_args_element_name_9 = par_method;
                frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 367;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__is_method_retryable, call_args );
                }

                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_7 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_condition_result_7 = tmp_or_left_value_1;
                or_end_1:;
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_type_arg_3;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_args_element_name_12;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 368;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_6 = tmp_mvar_value_3;
                    CHECK_OBJECT( par_error );
                    tmp_type_arg_3 = par_error;
                    tmp_args_element_name_10 = BUILTIN_TYPE1( tmp_type_arg_3 );
                    assert( !(tmp_args_element_name_10 == NULL) );
                    CHECK_OBJECT( par_error );
                    tmp_args_element_name_11 = par_error;
                    CHECK_OBJECT( par__stacktrace );
                    tmp_args_element_name_12 = par__stacktrace;
                    frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 368;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                        tmp_raise_type_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_6, const_str_plain_reraise, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_10 );
                    if ( tmp_raise_type_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 368;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 368;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    nuitka_bool tmp_condition_result_8;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    CHECK_OBJECT( var_read );
                    tmp_compexpr_left_6 = var_read;
                    tmp_compexpr_right_6 = Py_None;
                    tmp_condition_result_8 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_left_name_3;
                        PyObject *tmp_right_name_3;
                        CHECK_OBJECT( var_read );
                        tmp_left_name_3 = var_read;
                        tmp_right_name_3 = const_int_pos_1;
                        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 370;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_11 = tmp_left_name_3;
                        var_read = tmp_assign_source_11;

                    }
                    branch_no_8:;
                }
                branch_end_7:;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                nuitka_bool tmp_condition_result_9;
                int tmp_and_left_truth_4;
                nuitka_bool tmp_and_left_value_4;
                nuitka_bool tmp_and_right_value_4;
                int tmp_truth_name_6;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_call_result_3;
                int tmp_truth_name_7;
                CHECK_OBJECT( par_response );
                tmp_truth_name_6 = CHECK_IF_TRUE( par_response );
                if ( tmp_truth_name_6 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_4 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                CHECK_OBJECT( par_response );
                tmp_called_instance_7 = par_response;
                frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 372;
                tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_get_redirect_location );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 372;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_7 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_7 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 372;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_4 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
                tmp_condition_result_9 = tmp_and_right_value_4;
                goto and_end_4;
                and_left_4:;
                tmp_condition_result_9 = tmp_and_left_value_4;
                and_end_4:;
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
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    CHECK_OBJECT( var_redirect );
                    tmp_compexpr_left_7 = var_redirect;
                    tmp_compexpr_right_7 = Py_None;
                    tmp_condition_result_10 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_left_name_4;
                        PyObject *tmp_right_name_4;
                        CHECK_OBJECT( var_redirect );
                        tmp_left_name_4 = var_redirect;
                        tmp_right_name_4 = const_int_pos_1;
                        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_4, tmp_right_name_4 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 375;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_12 = tmp_left_name_4;
                        var_redirect = tmp_assign_source_12;

                    }
                    branch_no_10:;
                }
                {
                    PyObject *tmp_assign_source_13;
                    tmp_assign_source_13 = const_str_digest_93b5718dbdad50e34931a5c649b12b14;
                    {
                        PyObject *old = var_cause;
                        assert( old != NULL );
                        var_cause = tmp_assign_source_13;
                        Py_INCREF( var_cause );
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_called_instance_8;
                    CHECK_OBJECT( par_response );
                    tmp_called_instance_8 = par_response;
                    frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 377;
                    tmp_assign_source_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_get_redirect_location );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 377;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_redirect_location;
                        assert( old != NULL );
                        var_redirect_location = tmp_assign_source_14;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_15;
                    PyObject *tmp_source_name_7;
                    CHECK_OBJECT( par_response );
                    tmp_source_name_7 = par_response;
                    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_status );
                    if ( tmp_assign_source_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 378;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_status;
                        assert( old != NULL );
                        var_status = tmp_assign_source_15;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_9;
                branch_no_9:;
                {
                    PyObject *tmp_assign_source_16;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_mvar_value_4;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

                    if (unlikely( tmp_mvar_value_4 == NULL ))
                    {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
                    }

                    if ( tmp_mvar_value_4 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 383;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_8 = tmp_mvar_value_4;
                    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_GENERIC_ERROR );
                    if ( tmp_assign_source_16 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 383;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_cause;
                        assert( old != NULL );
                        var_cause = tmp_assign_source_16;
                        Py_DECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_11;
                    int tmp_and_left_truth_5;
                    nuitka_bool tmp_and_left_value_5;
                    nuitka_bool tmp_and_right_value_5;
                    int tmp_truth_name_8;
                    PyObject *tmp_source_name_9;
                    PyObject *tmp_attribute_value_1;
                    int tmp_truth_name_9;
                    CHECK_OBJECT( par_response );
                    tmp_truth_name_8 = CHECK_IF_TRUE( par_response );
                    if ( tmp_truth_name_8 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 384;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
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
                    CHECK_OBJECT( par_response );
                    tmp_source_name_9 = par_response;
                    tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_status );
                    if ( tmp_attribute_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 384;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_truth_name_9 = CHECK_IF_TRUE( tmp_attribute_value_1 );
                    if ( tmp_truth_name_9 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_attribute_value_1 );

                        exception_lineno = 384;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_5 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF( tmp_attribute_value_1 );
                    tmp_condition_result_11 = tmp_and_right_value_5;
                    goto and_end_5;
                    and_left_5:;
                    tmp_condition_result_11 = tmp_and_left_value_5;
                    and_end_5:;
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
                        nuitka_bool tmp_condition_result_12;
                        PyObject *tmp_compexpr_left_8;
                        PyObject *tmp_compexpr_right_8;
                        CHECK_OBJECT( var_status_count );
                        tmp_compexpr_left_8 = var_status_count;
                        tmp_compexpr_right_8 = Py_None;
                        tmp_condition_result_12 = ( tmp_compexpr_left_8 != tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_12;
                        }
                        else
                        {
                            goto branch_no_12;
                        }
                        branch_yes_12:;
                        {
                            PyObject *tmp_assign_source_17;
                            PyObject *tmp_left_name_5;
                            PyObject *tmp_right_name_5;
                            CHECK_OBJECT( var_status_count );
                            tmp_left_name_5 = var_status_count;
                            tmp_right_name_5 = const_int_pos_1;
                            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_5, tmp_right_name_5 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 386;
                                type_description_1 = "ooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_17 = tmp_left_name_5;
                            var_status_count = tmp_assign_source_17;

                        }
                        branch_no_12:;
                    }
                    {
                        PyObject *tmp_assign_source_18;
                        PyObject *tmp_called_name_1;
                        PyObject *tmp_source_name_10;
                        PyObject *tmp_source_name_11;
                        PyObject *tmp_mvar_value_5;
                        PyObject *tmp_kw_name_1;
                        PyObject *tmp_dict_key_1;
                        PyObject *tmp_dict_value_1;
                        PyObject *tmp_source_name_12;
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

                        if (unlikely( tmp_mvar_value_5 == NULL ))
                        {
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
                        }

                        if ( tmp_mvar_value_5 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 387;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_11 = tmp_mvar_value_5;
                        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SPECIFIC_ERROR );
                        if ( tmp_source_name_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 387;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
                        Py_DECREF( tmp_source_name_10 );
                        if ( tmp_called_name_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 387;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_dict_key_1 = const_str_plain_status_code;
                        CHECK_OBJECT( par_response );
                        tmp_source_name_12 = par_response;
                        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_status );
                        if ( tmp_dict_value_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_1 );

                            exception_lineno = 388;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                        Py_DECREF( tmp_dict_value_1 );
                        assert( !(tmp_res != 0) );
                        frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 387;
                        tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
                        Py_DECREF( tmp_called_name_1 );
                        Py_DECREF( tmp_kw_name_1 );
                        if ( tmp_assign_source_18 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 387;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_cause;
                            assert( old != NULL );
                            var_cause = tmp_assign_source_18;
                            Py_DECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_19;
                        PyObject *tmp_source_name_13;
                        CHECK_OBJECT( par_response );
                        tmp_source_name_13 = par_response;
                        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_status );
                        if ( tmp_assign_source_19 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 389;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_status;
                            assert( old != NULL );
                            var_status = tmp_assign_source_19;
                            Py_DECREF( old );
                        }

                    }
                    branch_no_11:;
                }
                branch_end_9:;
            }
            branch_end_6:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_6;
        PyObject *tmp_source_name_14;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_history );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestHistory );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestHistory" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        CHECK_OBJECT( par_method );
        tmp_args_element_name_13 = par_method;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_14 = par_url;
        CHECK_OBJECT( par_error );
        tmp_args_element_name_15 = par_error;
        if ( var_status == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_16 = var_status;
        if ( var_redirect_location == NULL )
        {
            Py_DECREF( tmp_left_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect_location" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = var_redirect_location;
        frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_1 );
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_history == NULL );
        var_history = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_15;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_new );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_total;
        CHECK_OBJECT( var_total );
        tmp_dict_value_2 = var_total;
        tmp_kw_name_2 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_connect;
        if ( var_connect == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = var_connect;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_read;
        if ( var_read == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = var_read;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_redirect;
        if ( var_redirect == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = var_redirect;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_status;
        if ( var_status_count == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status_count" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = var_status_count;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_history;
        CHECK_OBJECT( var_history );
        tmp_dict_value_7 = var_history;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 393;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_new_retry == NULL );
        var_new_retry = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_10;
        CHECK_OBJECT( var_new_retry );
        tmp_called_instance_9 = var_new_retry;
        frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 398;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_is_exhausted );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_10 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MaxRetryError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 399;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( par__pool );
            tmp_args_element_name_18 = par__pool;
            CHECK_OBJECT( par_url );
            tmp_args_element_name_19 = par_url;
            CHECK_OBJECT( par_error );
            tmp_or_left_value_2 = par_error;
            tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
            if ( tmp_or_left_truth_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( tmp_or_left_truth_2 == 1 )
            {
                goto or_left_2;
            }
            else
            {
                goto or_right_2;
            }
            or_right_2:;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 399;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_8;
            if ( var_cause == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cause" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 399;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_21 = var_cause;
            frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 399;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_or_right_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_20 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            Py_INCREF( tmp_or_left_value_2 );
            tmp_args_element_name_20 = tmp_or_left_value_2;
            or_end_2:;
            frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 399;
            {
                PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_raise_type_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_4;
            exception_lineno = 399;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_13:;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_9;
        tmp_args_element_name_22 = const_str_digest_adf0407d4b5f2535bca90601d487b350;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_23 = par_url;
        CHECK_OBJECT( var_new_retry );
        tmp_args_element_name_24 = var_new_retry;
        frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_10, const_str_plain_debug, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb6b04cc0c4aa0657cff8be014c6d1e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb6b04cc0c4aa0657cff8be014c6d1e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb6b04cc0c4aa0657cff8be014c6d1e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb6b04cc0c4aa0657cff8be014c6d1e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb6b04cc0c4aa0657cff8be014c6d1e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fb6b04cc0c4aa0657cff8be014c6d1e2,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_response,
        par_error,
        par__pool,
        par__stacktrace,
        var_total,
        var_connect,
        var_read,
        var_redirect,
        var_status_count,
        var_cause,
        var_status,
        var_redirect_location,
        var_history,
        var_new_retry
    );


    // Release cached frame.
    if ( frame_fb6b04cc0c4aa0657cff8be014c6d1e2 == cache_frame_fb6b04cc0c4aa0657cff8be014c6d1e2 )
    {
        Py_DECREF( frame_fb6b04cc0c4aa0657cff8be014c6d1e2 );
    }
    cache_frame_fb6b04cc0c4aa0657cff8be014c6d1e2 = NULL;

    assertFrameObject( frame_fb6b04cc0c4aa0657cff8be014c6d1e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_new_retry );
    tmp_return_value = var_new_retry;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_15_increment );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)par__pool );
    Py_DECREF( par__pool );
    par__pool = NULL;

    CHECK_OBJECT( (PyObject *)par__stacktrace );
    Py_DECREF( par__stacktrace );
    par__stacktrace = NULL;

    CHECK_OBJECT( (PyObject *)var_total );
    Py_DECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_status_count );
    var_status_count = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    CHECK_OBJECT( (PyObject *)var_history );
    Py_DECREF( var_history );
    var_history = NULL;

    CHECK_OBJECT( (PyObject *)var_new_retry );
    Py_DECREF( var_new_retry );
    var_new_retry = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_response );
    Py_DECREF( par_response );
    par_response = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)par__pool );
    Py_DECREF( par__pool );
    par__pool = NULL;

    CHECK_OBJECT( (PyObject *)par__stacktrace );
    Py_DECREF( par__stacktrace );
    par__stacktrace = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_status_count );
    var_status_count = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

    Py_XDECREF( var_new_retry );
    var_new_retry = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_15_increment );
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


static PyObject *impl_urllib3$util$retry$$$function_16___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9227f67a64b8b8cac7881acda5e73b98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9227f67a64b8b8cac7881acda5e73b98 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9227f67a64b8b8cac7881acda5e73b98, codeobj_9227f67a64b8b8cac7881acda5e73b98, module_urllib3$util$retry, sizeof(void *) );
    frame_9227f67a64b8b8cac7881acda5e73b98 = cache_frame_9227f67a64b8b8cac7881acda5e73b98;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9227f67a64b8b8cac7881acda5e73b98 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9227f67a64b8b8cac7881acda5e73b98 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_source_name_1 = const_str_digest_541aafc09da4591a658272cb389856a5;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_dict_key_1 = const_str_plain_cls;
        CHECK_OBJECT( par_self );
        tmp_type_arg_1 = par_self;
        tmp_dict_value_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_dict_value_1 == NULL) );
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_self;
        CHECK_OBJECT( par_self );
        tmp_dict_value_2 = par_self;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_9227f67a64b8b8cac7881acda5e73b98->m_frame.f_lineno = 406;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9227f67a64b8b8cac7881acda5e73b98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9227f67a64b8b8cac7881acda5e73b98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9227f67a64b8b8cac7881acda5e73b98 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9227f67a64b8b8cac7881acda5e73b98, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9227f67a64b8b8cac7881acda5e73b98->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9227f67a64b8b8cac7881acda5e73b98, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9227f67a64b8b8cac7881acda5e73b98,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9227f67a64b8b8cac7881acda5e73b98 == cache_frame_9227f67a64b8b8cac7881acda5e73b98 )
    {
        Py_DECREF( frame_9227f67a64b8b8cac7881acda5e73b98 );
    }
    cache_frame_9227f67a64b8b8cac7881acda5e73b98 = NULL;

    assertFrameObject( frame_9227f67a64b8b8cac7881acda5e73b98 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_16___repr__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_16___repr__ );
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



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_10__is_connection_error,
        const_str_plain__is_connection_error,
#if PYTHON_VERSION >= 300
        const_str_digest_7e60379875538acb6d47a09b3bcd7fdf,
#endif
        codeobj_f7bb0cb72b5286e898524b106a948032,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_7fb2c7a5424e28db1a201939b12c8399,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_11__is_read_error,
        const_str_plain__is_read_error,
#if PYTHON_VERSION >= 300
        const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9,
#endif
        codeobj_2865e5c422d984784495e1bb7764927f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_be3c2e7a479fa0076df719ca5a930f72,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_12__is_method_retryable,
        const_str_plain__is_method_retryable,
#if PYTHON_VERSION >= 300
        const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5,
#endif
        codeobj_cf71836de8e996fdd89878802f3cf5d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_cfc303935f94cd9bd4759913289d5001,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_13_is_retry,
        const_str_plain_is_retry,
#if PYTHON_VERSION >= 300
        const_str_digest_43a062f907032f59d25a421045c4a843,
#endif
        codeobj_9a0b7c7d30d40c1a076eb39eb8b6193e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_25ded409e041cb7d54dbe844ec9f890e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_14_is_exhausted,
        const_str_plain_is_exhausted,
#if PYTHON_VERSION >= 300
        const_str_digest_4506185023298da4a69876975fb76211,
#endif
        codeobj_6a35879bebe0b759a0d3fb6d9a12d5cd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_15_increment,
        const_str_plain_increment,
#if PYTHON_VERSION >= 300
        const_str_digest_d3c5cf2f2d706173f393307c5fa372aa,
#endif
        codeobj_fb6b04cc0c4aa0657cff8be014c6d1e2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_55857326d6523e3f76c12c271f391764,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_16___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_4291b42c0261755daa9f58af16f24a8c,
#endif
        codeobj_9227f67a64b8b8cac7881acda5e73b98,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_297455e155b6c9736d87529e14591c5d,
#endif
        codeobj_58772d89658a206d9a97ea904ced4d4d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_2_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 300
        const_str_digest_ca693a71271df261e783dd0ecf309ae0,
#endif
        codeobj_a6b02bbc5da70dbdfb9572e4ed435828,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_3_from_int,
        const_str_plain_from_int,
#if PYTHON_VERSION >= 300
        const_str_digest_00aff75c087fe7f80636ea13a09e3e82,
#endif
        codeobj_0ca77c1bc0c3ef6869662a53ca3d5951,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_54874c179a81b955e41d4fd1580cddd0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time,
        const_str_plain_get_backoff_time,
#if PYTHON_VERSION >= 300
        const_str_digest_e80b9085df081452c8caeed4571c51b7,
#endif
        codeobj_a31791f54f39e246526226f7509a0d03,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_fc514c378d42c4c0744f71a520936e98,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_96630de8eadb33fda97640a57fbbbd1c,
#endif
        codeobj_549b265f122226cc34e4e320253f437e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_5_parse_retry_after,
        const_str_plain_parse_retry_after,
#if PYTHON_VERSION >= 300
        const_str_digest_683309cb722498c00ca029ec4e15acbf,
#endif
        codeobj_625dd47f5e9b75eab0b863b89e2e9a9e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_6_get_retry_after,
        const_str_plain_get_retry_after,
#if PYTHON_VERSION >= 300
        const_str_digest_6659ea07dd436805b2630885700a6e61,
#endif
        codeobj_9f671fc8b3375f749545ff6447c5b8ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_9db0c4e907a20455d898e46f602427d6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_7_sleep_for_retry,
        const_str_plain_sleep_for_retry,
#if PYTHON_VERSION >= 300
        const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f,
#endif
        codeobj_0debe66bd936630f88c730ae90ee670d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_8__sleep_backoff,
        const_str_plain__sleep_backoff,
#if PYTHON_VERSION >= 300
        const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f,
#endif
        codeobj_9e9c01812e1cddd9c67a05a521c9ebdf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_9_sleep,
        const_str_plain_sleep,
#if PYTHON_VERSION >= 300
        const_str_digest_b0594eafa05dc6a6810bb2c7c291548b,
#endif
        codeobj_fd9d1969a47b64bb32905bf378172e50,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_ed2c0b12f2250d745518387535c4958e,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$retry =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.retry",
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
MOD_ENTRY_DECL(urllib3$util$retry)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(urllib3$util$retry)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$retry );
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
    puts("urllib3.util.retry: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.retry: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.retry: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$retry" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$retry = Py_InitModule4(
        "urllib3.util.retry",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$retry = PyModule_Create( &mdef_urllib3$util$retry );
#endif

    moduledict_urllib3$util$retry = MODULE_DICT( module_urllib3$util$retry );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$util$retry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$retry );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd, module_urllib3$util$retry );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_62e7f01b58173660bf4e5206930ccbf6;
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
    PyObject *locals_urllib3$util$retry_28 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_25eaa515616a2793d71a55c358cc7341_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_25eaa515616a2793d71a55c358cc7341_2 = NULL;
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
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1bde10c9faf6b4589142328617d2b45a;
        UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_62e7f01b58173660bf4e5206930ccbf6 = MAKE_MODULE_FRAME( codeobj_62e7f01b58173660bf4e5206930ccbf6, module_urllib3$util$retry );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_62e7f01b58173660bf4e5206930ccbf6 );
    assert( Py_REFCNT( frame_62e7f01b58173660bf4e5206930ccbf6 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_1bde10c9faf6b4589142328617d2b45a;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_time;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_collections;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_namedtuple_tuple;
        tmp_level_name_3 = const_int_0;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_namedtuple );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_itertools;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_takewhile_tuple;
        tmp_level_name_4 = const_int_0;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        assert( !(tmp_import_name_from_3 == NULL) );
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_takewhile );
        Py_DECREF( tmp_import_name_from_3 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_email;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_re;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
        tmp_level_name_7 = const_int_pos_2;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ConnectTimeoutError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ConnectTimeoutError );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_MaxRetryError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MaxRetryError );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ProtocolError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ProtocolError );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ReadTimeoutError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ReadTimeoutError );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ResponseError,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ResponseError );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_InvalidHeader,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_InvalidHeader );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_17 );
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_packages;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_six_tuple;
        tmp_level_name_8 = const_int_pos_2;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 17;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_six,
                const_int_pos_2
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_six );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0 ) );

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtuple" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_4;
        tmp_call_arg_element_1 = const_str_plain_RequestHistory;
        tmp_call_arg_element_2 = LIST_COPY( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list );
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_call_arg_element_2 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory, tmp_assign_source_20 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 28;

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


            exception_lineno = 28;

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


            exception_lineno = 28;

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


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

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
        tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
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


            exception_lineno = 28;

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


            exception_lineno = 28;

            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_24;
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


                exception_lineno = 28;

                goto try_except_handler_2;
            }
            tmp_tuple_element_1 = const_str_plain_Retry;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 28;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_24;
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


                exception_lineno = 28;

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


                    exception_lineno = 28;

                    goto try_except_handler_2;
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

                    exception_lineno = 28;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 28;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_25;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$util$retry_28 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_61e2520c56b660178d4348ecd9080d8c;
        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_Retry;
        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_25eaa515616a2793d71a55c358cc7341_2, codeobj_25eaa515616a2793d71a55c358cc7341, module_urllib3$util$retry, sizeof(void *) );
        frame_25eaa515616a2793d71a55c358cc7341_2 = cache_frame_25eaa515616a2793d71a55c358cc7341_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_25eaa515616a2793d71a55c358cc7341_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_25eaa515616a2793d71a55c358cc7341_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_arg_element_3;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$retry_28, const_str_plain_frozenset );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
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
            tmp_called_name_3 = PyObject_GetItem( locals_urllib3$util$retry_28, const_str_plain_frozenset );

            if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "frozenset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_call_arg_element_3 = LIST_COPY( const_list_ba42ffc828ddfcf79c24367abe35499c_list );
            frame_25eaa515616a2793d71a55c358cc7341_2->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = { tmp_call_arg_element_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_call_arg_element_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_dictset_value = const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_DEFAULT_METHOD_WHITELIST, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_arg_element_4;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$retry_28, const_str_plain_frozenset );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
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
            tmp_called_name_4 = PyObject_GetItem( locals_urllib3$util$retry_28, const_str_plain_frozenset );

            if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "frozenset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_call_arg_element_4 = LIST_COPY( const_list_int_pos_413_int_pos_429_int_pos_503_list );
            frame_25eaa515616a2793d71a55c358cc7341_2->m_frame.f_lineno = 152;
            {
                PyObject *call_args[] = { tmp_call_arg_element_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_call_arg_element_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_dictset_value = const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_4:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_RETRY_AFTER_STATUS_CODES, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_arg_element_5;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$retry_28, const_str_plain_frozenset );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
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
            tmp_called_name_5 = PyObject_GetItem( locals_urllib3$util$retry_28, const_str_plain_frozenset );

            if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "frozenset" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_call_arg_element_5 = LIST_COPY( const_list_str_plain_Authorization_list );
            frame_25eaa515616a2793d71a55c358cc7341_2->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = { tmp_call_arg_element_5 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_call_arg_element_5 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_dictset_value = const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4;
            Py_INCREF( tmp_dictset_value );
            condexpr_end_5:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = const_int_pos_120;
        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_BACKOFF_MAX, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            tmp_tuple_element_3 = const_int_pos_10;
            tmp_defaults_1 = PyTuple_New( 13 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_None;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_None;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_None;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_None;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_3 );
            tmp_tuple_element_3 = PyObject_GetItem( locals_urllib3$util$retry_28, const_str_plain_DEFAULT_METHOD_WHITELIST );

            if ( tmp_tuple_element_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_defaults_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_METHOD_WHITELIST" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_defaults_1 );

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_None;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_3 );
            tmp_tuple_element_3 = const_int_0;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_True;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_True;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 9, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_None;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 10, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_True;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 11, tmp_tuple_element_3 );
            tmp_tuple_element_3 = PyObject_GetItem( locals_urllib3$util$retry_28, const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST );

            if ( tmp_tuple_element_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_defaults_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_REDIRECT_HEADERS_BLACKLIST" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_defaults_1 );

                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM( tmp_defaults_1, 12, tmp_tuple_element_3 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain___init__, tmp_dictset_value );
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
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_new, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_defaults_2;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_3;
            tmp_res = MAPPING_HAS_ITEM( locals_urllib3$util$retry_28, const_str_plain_classmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
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
            tmp_called_name_6 = PyObject_GetItem( locals_urllib3$util$retry_28, const_str_plain_classmethod );

            if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = const_tuple_true_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_args_element_name_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( tmp_defaults_2 );



            frame_25eaa515616a2793d71a55c358cc7341_2->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_defaults_3 = const_tuple_true_none_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( tmp_defaults_3 );



            tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
            Py_DECREF( tmp_classmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_from_int, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_get_backoff_time, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_parse_retry_after, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_get_retry_after, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_sleep_for_retry, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain__sleep_backoff, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_sleep, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain__is_connection_error, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain__is_read_error, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain__is_method_retryable, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_is_retry, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_is_exhausted, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = const_tuple_none_none_none_none_none_none_tuple;
            Py_INCREF( tmp_defaults_7 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( tmp_defaults_7 );



            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain_increment, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  );



        tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain___repr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_25eaa515616a2793d71a55c358cc7341_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_25eaa515616a2793d71a55c358cc7341_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_25eaa515616a2793d71a55c358cc7341_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_25eaa515616a2793d71a55c358cc7341_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_25eaa515616a2793d71a55c358cc7341_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_25eaa515616a2793d71a55c358cc7341_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_25eaa515616a2793d71a55c358cc7341_2 == cache_frame_25eaa515616a2793d71a55c358cc7341_2 )
        {
            Py_DECREF( frame_25eaa515616a2793d71a55c358cc7341_2 );
        }
        cache_frame_25eaa515616a2793d71a55c358cc7341_2 = NULL;

        assertFrameObject( frame_25eaa515616a2793d71a55c358cc7341_2 );

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
            nuitka_bool tmp_condition_result_10;
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


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_urllib3$util$retry_28, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_7 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Retry;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_urllib3$util$retry_28;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 28;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$retry );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_urllib3$util$retry_28 );
        locals_urllib3$util$retry_28 = NULL;
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

        Py_DECREF( locals_urllib3$util$retry_28 );
        locals_urllib3$util$retry_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$util$retry );
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
        NUITKA_CANNOT_GET_HERE( urllib3$util$retry );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 28;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_26 );
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

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 412;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_5;
        frame_62e7f01b58173660bf4e5206930ccbf6->m_frame.f_lineno = 412;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 412;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = tmp_mvar_value_6;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_DEFAULT, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62e7f01b58173660bf4e5206930ccbf6 );
#endif
    popFrameStack();

    assertFrameObject( frame_62e7f01b58173660bf4e5206930ccbf6 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62e7f01b58173660bf4e5206930ccbf6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62e7f01b58173660bf4e5206930ccbf6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62e7f01b58173660bf4e5206930ccbf6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62e7f01b58173660bf4e5206930ccbf6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_urllib3$util$retry );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
