/* Generated code for Python module 'oauth2client._openssl_crypt'
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

/* The "_module_oauth2client$_openssl_crypt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauth2client$_openssl_crypt;
PyDictObject *moduledict_oauth2client$_openssl_crypt;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_is_x509_cert;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain__helpers_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain__parse_pem_key;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_Error;
static PyObject *const_str_digest_33a5ba79ff9a7367d42be1e08f9c25d0;
extern PyObject *const_str_plain_from_string;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_str_plain_signature;
static PyObject *const_bytes_digest_75c66781a217e4de91cce63507d0b1d8;
static PyObject *const_str_digest_10753e74c7a352d0713bd7236a936507;
static PyObject *const_str_digest_453ca5d5d015648288ea8d394986d3f6;
extern PyObject *const_str_plain_pkcs12_key_as_pem;
static PyObject *const_str_digest_f99f3600e4a5f80ff5d402391dce00ae;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_bc86e3aa7c8ac1f56a86584e87473920;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_dump_privatekey;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_key_pem;
extern PyObject *const_str_plain_OpenSSLSigner;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_8dbcd53b5190a1951e1340ef11fd6207;
extern PyObject *const_str_plain_private_key_password;
static PyObject *const_tuple_str_plain_key_pem_str_plain_is_x509_cert_str_plain_pubkey_tuple;
static PyObject *const_str_plain_load_pkcs12;
static PyObject *const_str_digest_81ec6a66c3663fe29557a172963ce6d5;
extern PyObject *const_str_plain_message;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_crypto;
extern PyObject *const_str_plain_OpenSSL;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_pubkey;
extern PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
static PyObject *const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain__helpers;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_int_0;
static PyObject *const_str_digest_705e90d68939845c88207072998f2062;
static PyObject *const_str_digest_222d248530036bf98658e45939741f56;
extern PyObject *const_tuple_0731cad9b517cc58a815b8d6c26074f8_tuple;
extern PyObject *const_str_plain_oauth2client;
extern PyObject *const_str_plain__key;
static PyObject *const_str_digest_7dc6ea8a2f4fd7607231fbf936487c01;
extern PyObject *const_str_digest_91148e04add4911e064cb976e215cef5;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_pkcs12;
extern PyObject *const_str_plain__to_bytes;
static PyObject *const_str_plain_load_privatekey;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_OpenSSLVerifier;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_1f217db3c627f9d3e3100784b8f83ac5;
extern PyObject *const_str_digest_95651dfc823924a56b238acf49f575b4;
static PyObject *const_str_digest_f85d40b82b989c975420366a584e1092;
extern PyObject *const_str_digest_0ec4fcb01a64994bf5601bfc06bf61fa;
extern PyObject *const_tuple_str_plain_self_str_plain_pkey_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
extern PyObject *const_str_plain__pubkey;
static PyObject *const_str_plain_FILETYPE_PEM;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_1b0005d4a1d9252f6a2c3d14c0abe711;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_pkey;
static PyObject *const_str_digest_acb67ec99e5c1d4b9d743d8896bba199;
static PyObject *const_tuple_7ee0873efce83c5333b09549fd6984dd_tuple;
extern PyObject *const_tuple_str_plain_crypto_tuple;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_load_certificate;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_self_str_plain_pubkey_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_585989921de58e779af6c1e1594d53a0;
extern PyObject *const_str_plain_parsed_pem_key;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_sha256;
static PyObject *const_tuple_bytes_digest_75c66781a217e4de91cce63507d0b1d8_tuple;
static PyObject *const_str_plain_private_key_bytes;
static PyObject *const_str_plain_get_privatekey;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_33a5ba79ff9a7367d42be1e08f9c25d0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423300 ], 24, 0 );
    const_bytes_digest_75c66781a217e4de91cce63507d0b1d8 = UNSTREAM_BYTES( &constant_bin[ 2423324 ], 10 );
    const_str_digest_10753e74c7a352d0713bd7236a936507 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423334 ], 403, 0 );
    const_str_digest_453ca5d5d015648288ea8d394986d3f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423737 ], 49, 0 );
    const_str_digest_f99f3600e4a5f80ff5d402391dce00ae = UNSTREAM_STRING_ASCII( &constant_bin[ 2423786 ], 58, 0 );
    const_str_digest_bc86e3aa7c8ac1f56a86584e87473920 = UNSTREAM_STRING_ASCII( &constant_bin[ 2423844 ], 472, 0 );
    const_str_plain_dump_privatekey = UNSTREAM_STRING_ASCII( &constant_bin[ 2424316 ], 15, 1 );
    const_str_digest_8dbcd53b5190a1951e1340ef11fd6207 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424331 ], 22, 0 );
    const_tuple_str_plain_key_pem_str_plain_is_x509_cert_str_plain_pubkey_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_pem_str_plain_is_x509_cert_str_plain_pubkey_tuple, 0, const_str_plain_key_pem ); Py_INCREF( const_str_plain_key_pem );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_pem_str_plain_is_x509_cert_str_plain_pubkey_tuple, 1, const_str_plain_is_x509_cert ); Py_INCREF( const_str_plain_is_x509_cert );
    PyTuple_SET_ITEM( const_tuple_str_plain_key_pem_str_plain_is_x509_cert_str_plain_pubkey_tuple, 2, const_str_plain_pubkey ); Py_INCREF( const_str_plain_pubkey );
    const_str_plain_load_pkcs12 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424353 ], 11, 1 );
    const_str_digest_81ec6a66c3663fe29557a172963ce6d5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424364 ], 318, 0 );
    const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb = UNSTREAM_STRING_ASCII( &constant_bin[ 2424682 ], 27, 0 );
    const_str_digest_705e90d68939845c88207072998f2062 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424709 ], 36, 0 );
    const_str_digest_222d248530036bf98658e45939741f56 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424745 ], 22, 0 );
    const_str_digest_7dc6ea8a2f4fd7607231fbf936487c01 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424767 ], 108, 0 );
    const_str_plain_pkcs12 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424358 ], 6, 1 );
    const_str_plain_load_privatekey = UNSTREAM_STRING_ASCII( &constant_bin[ 2424875 ], 15, 1 );
    const_str_digest_1f217db3c627f9d3e3100784b8f83ac5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2424890 ], 271, 0 );
    const_str_digest_f85d40b82b989c975420366a584e1092 = UNSTREAM_STRING_ASCII( &constant_bin[ 2425161 ], 18, 0 );
    const_str_plain_FILETYPE_PEM = UNSTREAM_STRING_ASCII( &constant_bin[ 2425179 ], 12, 1 );
    const_str_digest_1b0005d4a1d9252f6a2c3d14c0abe711 = UNSTREAM_STRING_ASCII( &constant_bin[ 2425191 ], 116, 0 );
    const_str_digest_acb67ec99e5c1d4b9d743d8896bba199 = UNSTREAM_STRING_ASCII( &constant_bin[ 2425307 ], 27, 0 );
    const_tuple_7ee0873efce83c5333b09549fd6984dd_tuple = PyTuple_New( 3 );
    const_str_plain_private_key_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 2424971 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_7ee0873efce83c5333b09549fd6984dd_tuple, 0, const_str_plain_private_key_bytes ); Py_INCREF( const_str_plain_private_key_bytes );
    PyTuple_SET_ITEM( const_tuple_7ee0873efce83c5333b09549fd6984dd_tuple, 1, const_str_plain_private_key_password ); Py_INCREF( const_str_plain_private_key_password );
    PyTuple_SET_ITEM( const_tuple_7ee0873efce83c5333b09549fd6984dd_tuple, 2, const_str_plain_pkcs12 ); Py_INCREF( const_str_plain_pkcs12 );
    const_str_plain_load_certificate = UNSTREAM_STRING_ASCII( &constant_bin[ 2425334 ], 16, 1 );
    const_str_digest_585989921de58e779af6c1e1594d53a0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2425350 ], 25, 0 );
    const_tuple_bytes_digest_75c66781a217e4de91cce63507d0b1d8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_digest_75c66781a217e4de91cce63507d0b1d8_tuple, 0, const_bytes_digest_75c66781a217e4de91cce63507d0b1d8 ); Py_INCREF( const_bytes_digest_75c66781a217e4de91cce63507d0b1d8 );
    const_str_plain_get_privatekey = UNSTREAM_STRING_ASCII( &constant_bin[ 2425375 ], 14, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$_openssl_crypt( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3c2efbe46201c95aa696cd09985d50fd;
static PyCodeObject *codeobj_cce1c60b0339406e9aee9052241aeb9c;
static PyCodeObject *codeobj_7c32b3a4ab64ac11761d5b8384d8bb49;
static PyCodeObject *codeobj_0b5b9bf9fb72690ed48f2ff5b576ae41;
static PyCodeObject *codeobj_adc6fe82b04e06448aa48da614c0c4d0;
static PyCodeObject *codeobj_5d5b8f36c2b8c7380a416a935b2bc044;
static PyCodeObject *codeobj_5c7a653a5c13c580a9fe582e8a415a26;
static PyCodeObject *codeobj_45c0cb47873830a05c10a2c83ce36e0d;
static PyCodeObject *codeobj_05a09eeab150b151fd2727ea9fe03094;
static PyCodeObject *codeobj_37b03adb17661a2ea4333283871c1145;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f99f3600e4a5f80ff5d402391dce00ae;
    codeobj_3c2efbe46201c95aa696cd09985d50fd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_705e90d68939845c88207072998f2062, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_cce1c60b0339406e9aee9052241aeb9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OpenSSLSigner, 76, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_7c32b3a4ab64ac11761d5b8384d8bb49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_OpenSSLVerifier, 21, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_0b5b9bf9fb72690ed48f2ff5b576ae41 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 79, const_tuple_str_plain_self_str_plain_pkey_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_adc6fe82b04e06448aa48da614c0c4d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 24, const_tuple_str_plain_self_str_plain_pubkey_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5d5b8f36c2b8c7380a416a935b2bc044 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 99, const_tuple_0731cad9b517cc58a815b8d6c26074f8_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c7a653a5c13c580a9fe582e8a415a26 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 53, const_tuple_str_plain_key_pem_str_plain_is_x509_cert_str_plain_pubkey_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_45c0cb47873830a05c10a2c83ce36e0d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pkcs12_key_as_pem, 123, const_tuple_7ee0873efce83c5333b09549fd6984dd_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05a09eeab150b151fd2727ea9fe03094 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 87, const_tuple_str_plain_self_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_37b03adb17661a2ea4333283871c1145 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 32, const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_2_verify(  );


static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_3_from_string(  );


static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_5_sign(  );


static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_6_from_string( PyObject *defaults );


static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_7_pkcs12_key_as_pem(  );


// The module function definitions.
static PyObject *impl_oauth2client$_openssl_crypt$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pubkey = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_adc6fe82b04e06448aa48da614c0c4d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_adc6fe82b04e06448aa48da614c0c4d0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_adc6fe82b04e06448aa48da614c0c4d0, codeobj_adc6fe82b04e06448aa48da614c0c4d0, module_oauth2client$_openssl_crypt, sizeof(void *)+sizeof(void *) );
    frame_adc6fe82b04e06448aa48da614c0c4d0 = cache_frame_adc6fe82b04e06448aa48da614c0c4d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_adc6fe82b04e06448aa48da614c0c4d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_adc6fe82b04e06448aa48da614c0c4d0 ) == 2 ); // Frame stack

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


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc6fe82b04e06448aa48da614c0c4d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc6fe82b04e06448aa48da614c0c4d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adc6fe82b04e06448aa48da614c0c4d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adc6fe82b04e06448aa48da614c0c4d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adc6fe82b04e06448aa48da614c0c4d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_adc6fe82b04e06448aa48da614c0c4d0,
        type_description_1,
        par_self,
        par_pubkey
    );


    // Release cached frame.
    if ( frame_adc6fe82b04e06448aa48da614c0c4d0 == cache_frame_adc6fe82b04e06448aa48da614c0c4d0 )
    {
        Py_DECREF( frame_adc6fe82b04e06448aa48da614c0c4d0 );
    }
    cache_frame_adc6fe82b04e06448aa48da614c0c4d0 = NULL;

    assertFrameObject( frame_adc6fe82b04e06448aa48da614c0c4d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_1___init__ );
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


static PyObject *impl_oauth2client$_openssl_crypt$$$function_2_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_signature = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_37b03adb17661a2ea4333283871c1145;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_37b03adb17661a2ea4333283871c1145 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37b03adb17661a2ea4333283871c1145, codeobj_37b03adb17661a2ea4333283871c1145, module_oauth2client$_openssl_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_37b03adb17661a2ea4333283871c1145 = cache_frame_37b03adb17661a2ea4333283871c1145;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37b03adb17661a2ea4333283871c1145 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37b03adb17661a2ea4333283871c1145 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__to_bytes );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_tuple_element_1 = par_message;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_37b03adb17661a2ea4333283871c1145->m_frame.f_lineno = 45;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__to_bytes );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_signature );
        tmp_tuple_element_2 = par_signature;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_37b03adb17661a2ea4333283871c1145->m_frame.f_lineno = 46;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_signature;
            assert( old != NULL );
            par_signature = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_verify );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pubkey );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_2 = par_signature;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_3 = par_message;
        tmp_args_element_name_4 = const_str_plain_sha256;
        frame_37b03adb17661a2ea4333283871c1145->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_37b03adb17661a2ea4333283871c1145, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_37b03adb17661a2ea4333283871c1145, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Error );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
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
            exception_lineno = 47;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_37b03adb17661a2ea4333283871c1145->m_frame) frame_37b03adb17661a2ea4333283871c1145->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_2_verify );
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
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b03adb17661a2ea4333283871c1145 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b03adb17661a2ea4333283871c1145 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37b03adb17661a2ea4333283871c1145 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37b03adb17661a2ea4333283871c1145, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37b03adb17661a2ea4333283871c1145->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37b03adb17661a2ea4333283871c1145, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37b03adb17661a2ea4333283871c1145,
        type_description_1,
        par_self,
        par_message,
        par_signature
    );


    // Release cached frame.
    if ( frame_37b03adb17661a2ea4333283871c1145 == cache_frame_37b03adb17661a2ea4333283871c1145 )
    {
        Py_DECREF( frame_37b03adb17661a2ea4333283871c1145 );
    }
    cache_frame_37b03adb17661a2ea4333283871c1145 = NULL;

    assertFrameObject( frame_37b03adb17661a2ea4333283871c1145 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_2_verify );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_2_verify );
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


static PyObject *impl_oauth2client$_openssl_crypt$$$function_3_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key_pem = python_pars[ 0 ];
    PyObject *par_is_x509_cert = python_pars[ 1 ];
    PyObject *var_pubkey = NULL;
    struct Nuitka_FrameObject *frame_5c7a653a5c13c580a9fe582e8a415a26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5c7a653a5c13c580a9fe582e8a415a26 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c7a653a5c13c580a9fe582e8a415a26, codeobj_5c7a653a5c13c580a9fe582e8a415a26, module_oauth2client$_openssl_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c7a653a5c13c580a9fe582e8a415a26 = cache_frame_5c7a653a5c13c580a9fe582e8a415a26;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c7a653a5c13c580a9fe582e8a415a26 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c7a653a5c13c580a9fe582e8a415a26 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_key_pem );
        tmp_args_element_name_1 = par_key_pem;
        frame_5c7a653a5c13c580a9fe582e8a415a26->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__to_bytes, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooo";
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


            exception_lineno = 69;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 70;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load_certificate );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 70;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_FILETYPE_PEM );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 70;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key_pem );
            tmp_args_element_name_3 = par_key_pem;
            frame_5c7a653a5c13c580a9fe582e8a415a26->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_pubkey == NULL );
            var_pubkey = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_load_privatekey );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_5;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_FILETYPE_PEM );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key_pem );
            tmp_args_element_name_5 = par_key_pem;
            frame_5c7a653a5c13c580a9fe582e8a415a26->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_pubkey == NULL );
            var_pubkey = tmp_assign_source_3;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSLVerifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_6;
        CHECK_OBJECT( var_pubkey );
        tmp_args_element_name_6 = var_pubkey;
        frame_5c7a653a5c13c580a9fe582e8a415a26->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c7a653a5c13c580a9fe582e8a415a26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c7a653a5c13c580a9fe582e8a415a26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c7a653a5c13c580a9fe582e8a415a26 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c7a653a5c13c580a9fe582e8a415a26, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c7a653a5c13c580a9fe582e8a415a26->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c7a653a5c13c580a9fe582e8a415a26, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c7a653a5c13c580a9fe582e8a415a26,
        type_description_1,
        par_key_pem,
        par_is_x509_cert,
        var_pubkey
    );


    // Release cached frame.
    if ( frame_5c7a653a5c13c580a9fe582e8a415a26 == cache_frame_5c7a653a5c13c580a9fe582e8a415a26 )
    {
        Py_DECREF( frame_5c7a653a5c13c580a9fe582e8a415a26 );
    }
    cache_frame_5c7a653a5c13c580a9fe582e8a415a26 = NULL;

    assertFrameObject( frame_5c7a653a5c13c580a9fe582e8a415a26 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_3_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key_pem );
    Py_DECREF( par_key_pem );
    par_key_pem = NULL;

    CHECK_OBJECT( (PyObject *)par_is_x509_cert );
    Py_DECREF( par_is_x509_cert );
    par_is_x509_cert = NULL;

    CHECK_OBJECT( (PyObject *)var_pubkey );
    Py_DECREF( var_pubkey );
    var_pubkey = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key_pem );
    Py_DECREF( par_key_pem );
    par_key_pem = NULL;

    CHECK_OBJECT( (PyObject *)par_is_x509_cert );
    Py_DECREF( par_is_x509_cert );
    par_is_x509_cert = NULL;

    Py_XDECREF( var_pubkey );
    var_pubkey = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_3_from_string );
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


static PyObject *impl_oauth2client$_openssl_crypt$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pkey = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0b5b9bf9fb72690ed48f2ff5b576ae41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b5b9bf9fb72690ed48f2ff5b576ae41 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b5b9bf9fb72690ed48f2ff5b576ae41, codeobj_0b5b9bf9fb72690ed48f2ff5b576ae41, module_oauth2client$_openssl_crypt, sizeof(void *)+sizeof(void *) );
    frame_0b5b9bf9fb72690ed48f2ff5b576ae41 = cache_frame_0b5b9bf9fb72690ed48f2ff5b576ae41;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b5b9bf9fb72690ed48f2ff5b576ae41 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b5b9bf9fb72690ed48f2ff5b576ae41 ) == 2 ); // Frame stack

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


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b5b9bf9fb72690ed48f2ff5b576ae41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b5b9bf9fb72690ed48f2ff5b576ae41 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b5b9bf9fb72690ed48f2ff5b576ae41, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b5b9bf9fb72690ed48f2ff5b576ae41->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b5b9bf9fb72690ed48f2ff5b576ae41, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b5b9bf9fb72690ed48f2ff5b576ae41,
        type_description_1,
        par_self,
        par_pkey
    );


    // Release cached frame.
    if ( frame_0b5b9bf9fb72690ed48f2ff5b576ae41 == cache_frame_0b5b9bf9fb72690ed48f2ff5b576ae41 )
    {
        Py_DECREF( frame_0b5b9bf9fb72690ed48f2ff5b576ae41 );
    }
    cache_frame_0b5b9bf9fb72690ed48f2ff5b576ae41 = NULL;

    assertFrameObject( frame_0b5b9bf9fb72690ed48f2ff5b576ae41 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_4___init__ );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_4___init__ );
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


static PyObject *impl_oauth2client$_openssl_crypt$$$function_5_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_05a09eeab150b151fd2727ea9fe03094;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_05a09eeab150b151fd2727ea9fe03094 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05a09eeab150b151fd2727ea9fe03094, codeobj_05a09eeab150b151fd2727ea9fe03094, module_oauth2client$_openssl_crypt, sizeof(void *)+sizeof(void *) );
    frame_05a09eeab150b151fd2727ea9fe03094 = cache_frame_05a09eeab150b151fd2727ea9fe03094;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05a09eeab150b151fd2727ea9fe03094 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05a09eeab150b151fd2727ea9fe03094 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__to_bytes );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_tuple_element_1 = par_message;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_05a09eeab150b151fd2727ea9fe03094->m_frame.f_lineno = 96;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
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
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sign );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__key );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_args_element_name_2 = par_message;
        tmp_args_element_name_3 = const_str_plain_sha256;
        frame_05a09eeab150b151fd2727ea9fe03094->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05a09eeab150b151fd2727ea9fe03094 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05a09eeab150b151fd2727ea9fe03094 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05a09eeab150b151fd2727ea9fe03094 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05a09eeab150b151fd2727ea9fe03094, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05a09eeab150b151fd2727ea9fe03094->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05a09eeab150b151fd2727ea9fe03094, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05a09eeab150b151fd2727ea9fe03094,
        type_description_1,
        par_self,
        par_message
    );


    // Release cached frame.
    if ( frame_05a09eeab150b151fd2727ea9fe03094 == cache_frame_05a09eeab150b151fd2727ea9fe03094 )
    {
        Py_DECREF( frame_05a09eeab150b151fd2727ea9fe03094 );
    }
    cache_frame_05a09eeab150b151fd2727ea9fe03094 = NULL;

    assertFrameObject( frame_05a09eeab150b151fd2727ea9fe03094 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_5_sign );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_5_sign );
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


static PyObject *impl_oauth2client$_openssl_crypt$$$function_6_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *par_password = python_pars[ 1 ];
    PyObject *var_parsed_pem_key = NULL;
    PyObject *var_pkey = NULL;
    struct Nuitka_FrameObject *frame_5d5b8f36c2b8c7380a416a935b2bc044;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d5b8f36c2b8c7380a416a935b2bc044 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d5b8f36c2b8c7380a416a935b2bc044, codeobj_5d5b8f36c2b8c7380a416a935b2bc044, module_oauth2client$_openssl_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5d5b8f36c2b8c7380a416a935b2bc044 = cache_frame_5d5b8f36c2b8c7380a416a935b2bc044;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d5b8f36c2b8c7380a416a935b2bc044 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d5b8f36c2b8c7380a416a935b2bc044 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_1 = par_key;
        frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__to_bytes, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_key;
            assert( old != NULL );
            par_key = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__parse_pem_key, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_parsed_pem_key == NULL );
        var_parsed_pem_key = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_parsed_pem_key );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_parsed_pem_key );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 116;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load_privatekey );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 116;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_FILETYPE_PEM );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 116;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_parsed_pem_key );
            tmp_args_element_name_4 = var_parsed_pem_key;
            frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_pkey == NULL );
            var_pkey = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__helpers );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_helpers" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 118;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_5;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__to_bytes );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_password );
            tmp_tuple_element_1 = par_password;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
            frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame.f_lineno = 118;
            tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_password;
                assert( old != NULL );
                par_password = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 119;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_6;
            CHECK_OBJECT( par_key );
            tmp_args_element_name_5 = par_key;
            CHECK_OBJECT( par_password );
            tmp_args_element_name_6 = par_password;
            frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame.f_lineno = 119;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_called_instance_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_load_pkcs12, call_args );
            }

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame.f_lineno = 119;
            tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_privatekey );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_pkey == NULL );
            var_pkey = tmp_assign_source_5;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OpenSSLSigner" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_7;
        CHECK_OBJECT( var_pkey );
        tmp_args_element_name_7 = var_pkey;
        frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d5b8f36c2b8c7380a416a935b2bc044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d5b8f36c2b8c7380a416a935b2bc044 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d5b8f36c2b8c7380a416a935b2bc044 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d5b8f36c2b8c7380a416a935b2bc044, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d5b8f36c2b8c7380a416a935b2bc044->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d5b8f36c2b8c7380a416a935b2bc044, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d5b8f36c2b8c7380a416a935b2bc044,
        type_description_1,
        par_key,
        par_password,
        var_parsed_pem_key,
        var_pkey
    );


    // Release cached frame.
    if ( frame_5d5b8f36c2b8c7380a416a935b2bc044 == cache_frame_5d5b8f36c2b8c7380a416a935b2bc044 )
    {
        Py_DECREF( frame_5d5b8f36c2b8c7380a416a935b2bc044 );
    }
    cache_frame_5d5b8f36c2b8c7380a416a935b2bc044 = NULL;

    assertFrameObject( frame_5d5b8f36c2b8c7380a416a935b2bc044 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_6_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)var_parsed_pem_key );
    Py_DECREF( var_parsed_pem_key );
    var_parsed_pem_key = NULL;

    CHECK_OBJECT( (PyObject *)var_pkey );
    Py_DECREF( var_pkey );
    var_pkey = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( var_parsed_pem_key );
    var_parsed_pem_key = NULL;

    Py_XDECREF( var_pkey );
    var_pkey = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_6_from_string );
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


static PyObject *impl_oauth2client$_openssl_crypt$$$function_7_pkcs12_key_as_pem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_private_key_bytes = python_pars[ 0 ];
    PyObject *par_private_key_password = python_pars[ 1 ];
    PyObject *var_pkcs12 = NULL;
    struct Nuitka_FrameObject *frame_45c0cb47873830a05c10a2c83ce36e0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_45c0cb47873830a05c10a2c83ce36e0d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_45c0cb47873830a05c10a2c83ce36e0d, codeobj_45c0cb47873830a05c10a2c83ce36e0d, module_oauth2client$_openssl_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_45c0cb47873830a05c10a2c83ce36e0d = cache_frame_45c0cb47873830a05c10a2c83ce36e0d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_45c0cb47873830a05c10a2c83ce36e0d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_45c0cb47873830a05c10a2c83ce36e0d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_private_key_password );
        tmp_args_element_name_1 = par_private_key_password;
        frame_45c0cb47873830a05c10a2c83ce36e0d->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__to_bytes, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_private_key_password;
            assert( old != NULL );
            par_private_key_password = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_private_key_bytes );
        tmp_args_element_name_2 = par_private_key_bytes;
        CHECK_OBJECT( par_private_key_password );
        tmp_args_element_name_3 = par_private_key_password;
        frame_45c0cb47873830a05c10a2c83ce36e0d->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_load_pkcs12, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_pkcs12 == NULL );
        var_pkcs12 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dump_privatekey );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_crypto );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "crypto" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_FILETYPE_PEM );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pkcs12 );
        tmp_called_instance_3 = var_pkcs12;
        frame_45c0cb47873830a05c10a2c83ce36e0d->m_frame.f_lineno = 136;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_privatekey );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_45c0cb47873830a05c10a2c83ce36e0d->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45c0cb47873830a05c10a2c83ce36e0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_45c0cb47873830a05c10a2c83ce36e0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45c0cb47873830a05c10a2c83ce36e0d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_45c0cb47873830a05c10a2c83ce36e0d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_45c0cb47873830a05c10a2c83ce36e0d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_45c0cb47873830a05c10a2c83ce36e0d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45c0cb47873830a05c10a2c83ce36e0d,
        type_description_1,
        par_private_key_bytes,
        par_private_key_password,
        var_pkcs12
    );


    // Release cached frame.
    if ( frame_45c0cb47873830a05c10a2c83ce36e0d == cache_frame_45c0cb47873830a05c10a2c83ce36e0d )
    {
        Py_DECREF( frame_45c0cb47873830a05c10a2c83ce36e0d );
    }
    cache_frame_45c0cb47873830a05c10a2c83ce36e0d = NULL;

    assertFrameObject( frame_45c0cb47873830a05c10a2c83ce36e0d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_7_pkcs12_key_as_pem );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_private_key_bytes );
    Py_DECREF( par_private_key_bytes );
    par_private_key_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_private_key_password );
    Py_DECREF( par_private_key_password );
    par_private_key_password = NULL;

    CHECK_OBJECT( (PyObject *)var_pkcs12 );
    Py_DECREF( var_pkcs12 );
    var_pkcs12 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_private_key_bytes );
    Py_DECREF( par_private_key_bytes );
    par_private_key_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_private_key_password );
    Py_DECREF( par_private_key_password );
    par_private_key_password = NULL;

    Py_XDECREF( var_pkcs12 );
    var_pkcs12 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt$$$function_7_pkcs12_key_as_pem );
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



static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_openssl_crypt$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_33a5ba79ff9a7367d42be1e08f9c25d0,
#endif
        codeobj_adc6fe82b04e06448aa48da614c0c4d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_openssl_crypt,
        const_str_digest_7dc6ea8a2f4fd7607231fbf936487c01,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_2_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_openssl_crypt$$$function_2_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 300
        const_str_digest_8dbcd53b5190a1951e1340ef11fd6207,
#endif
        codeobj_37b03adb17661a2ea4333283871c1145,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_openssl_crypt,
        const_str_digest_bc86e3aa7c8ac1f56a86584e87473920,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_3_from_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_openssl_crypt$$$function_3_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 300
        const_str_digest_acb67ec99e5c1d4b9d743d8896bba199,
#endif
        codeobj_5c7a653a5c13c580a9fe582e8a415a26,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_openssl_crypt,
        const_str_digest_10753e74c7a352d0713bd7236a936507,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_openssl_crypt$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_222d248530036bf98658e45939741f56,
#endif
        codeobj_0b5b9bf9fb72690ed48f2ff5b576ae41,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_openssl_crypt,
        const_str_digest_1b0005d4a1d9252f6a2c3d14c0abe711,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_5_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_openssl_crypt$$$function_5_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 300
        const_str_digest_f85d40b82b989c975420366a584e1092,
#endif
        codeobj_05a09eeab150b151fd2727ea9fe03094,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_openssl_crypt,
        const_str_digest_0ec4fcb01a64994bf5601bfc06bf61fa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_6_from_string( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_openssl_crypt$$$function_6_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 300
        const_str_digest_585989921de58e779af6c1e1594d53a0,
#endif
        codeobj_5d5b8f36c2b8c7380a416a935b2bc044,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_openssl_crypt,
        const_str_digest_81ec6a66c3663fe29557a172963ce6d5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_7_pkcs12_key_as_pem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_openssl_crypt$$$function_7_pkcs12_key_as_pem,
        const_str_plain_pkcs12_key_as_pem,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45c0cb47873830a05c10a2c83ce36e0d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_openssl_crypt,
        const_str_digest_1f217db3c627f9d3e3100784b8f83ac5,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$_openssl_crypt =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client._openssl_crypt",
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
MOD_ENTRY_DECL(oauth2client$_openssl_crypt)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(oauth2client$_openssl_crypt)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$_openssl_crypt );
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
    puts("oauth2client._openssl_crypt: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._openssl_crypt: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._openssl_crypt: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauth2client$_openssl_crypt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$_openssl_crypt = Py_InitModule4(
        "oauth2client._openssl_crypt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_oauth2client$_openssl_crypt = PyModule_Create( &mdef_oauth2client$_openssl_crypt );
#endif

    moduledict_oauth2client$_openssl_crypt = MODULE_DICT( module_oauth2client$_openssl_crypt );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_oauth2client$_openssl_crypt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_oauth2client$_openssl_crypt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_openssl_crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_openssl_crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_oauth2client$_openssl_crypt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb, module_oauth2client$_openssl_crypt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_3c2efbe46201c95aa696cd09985d50fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_oauth2client$_openssl_crypt_21 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7c32b3a4ab64ac11761d5b8384d8bb49_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 = NULL;
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
    PyObject *locals_oauth2client$_openssl_crypt_76 = NULL;
    struct Nuitka_FrameObject *frame_cce1c60b0339406e9aee9052241aeb9c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cce1c60b0339406e9aee9052241aeb9c_3 = NULL;
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
        tmp_assign_source_1 = const_str_digest_453ca5d5d015648288ea8d394986d3f6;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_f99f3600e4a5f80ff5d402391dce00ae;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_3c2efbe46201c95aa696cd09985d50fd = MAKE_MODULE_FRAME( codeobj_3c2efbe46201c95aa696cd09985d50fd, module_oauth2client$_openssl_crypt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3c2efbe46201c95aa696cd09985d50fd );
    assert( Py_REFCNT( frame_3c2efbe46201c95aa696cd09985d50fd ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_f99f3600e4a5f80ff5d402391dce00ae;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_OpenSSL;
        tmp_globals_name_1 = (PyObject *)moduledict_oauth2client$_openssl_crypt;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_crypto_tuple;
        tmp_level_name_1 = const_int_0;
        frame_3c2efbe46201c95aa696cd09985d50fd->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_crypto );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_crypto, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_oauth2client;
        tmp_globals_name_2 = (PyObject *)moduledict_oauth2client$_openssl_crypt;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain__helpers_tuple;
        tmp_level_name_2 = const_int_0;
        frame_3c2efbe46201c95aa696cd09985d50fd->m_frame.f_lineno = 18;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__helpers );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain__helpers, tmp_assign_source_5 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_6 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
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


            exception_lineno = 21;

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


            exception_lineno = 21;

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


            exception_lineno = 21;

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


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

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
        tmp_assign_source_8 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
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


            exception_lineno = 21;

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


            exception_lineno = 21;

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
            PyObject *tmp_assign_source_9;
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


                exception_lineno = 21;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_OpenSSLVerifier;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_3c2efbe46201c95aa696cd09985d50fd->m_frame.f_lineno = 21;
            tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_9;
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


                exception_lineno = 21;

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


                    exception_lineno = 21;

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

                    exception_lineno = 21;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 21;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 21;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_10;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauth2client$_openssl_crypt_21 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb;
        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_91148e04add4911e064cb976e215cef5;
        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_OpenSSLVerifier;
        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_7c32b3a4ab64ac11761d5b8384d8bb49_2, codeobj_7c32b3a4ab64ac11761d5b8384d8bb49, module_oauth2client$_openssl_crypt, sizeof(void *) );
        frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 = cache_frame_7c32b3a4ab64ac11761d5b8384d8bb49_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_2_verify(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain_verify, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM( locals_oauth2client$_openssl_crypt_21, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
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
            tmp_called_name_2 = PyObject_GetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain_staticmethod );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_3_from_string(  );



            frame_7c32b3a4ab64ac11761d5b8384d8bb49_2->m_frame.f_lineno = 53;
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


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_3_from_string(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain_from_string, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_7c32b3a4ab64ac11761d5b8384d8bb49_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_7c32b3a4ab64ac11761d5b8384d8bb49_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_7c32b3a4ab64ac11761d5b8384d8bb49_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 == cache_frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 )
        {
            Py_DECREF( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 );
        }
        cache_frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 = NULL;

        assertFrameObject( frame_7c32b3a4ab64ac11761d5b8384d8bb49_2 );

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


                exception_lineno = 21;

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
            tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_21, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_OpenSSLVerifier;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_oauth2client$_openssl_crypt_21;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_3c2efbe46201c95aa696cd09985d50fd->m_frame.f_lineno = 21;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_11 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_11 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_oauth2client$_openssl_crypt_21 );
        locals_oauth2client$_openssl_crypt_21 = NULL;
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

        Py_DECREF( locals_oauth2client$_openssl_crypt_21 );
        locals_oauth2client$_openssl_crypt_21 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt );
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
        NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLVerifier, tmp_assign_source_11 );
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_13 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 76;

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


            exception_lineno = 76;

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


            exception_lineno = 76;

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


            exception_lineno = 76;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

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
        tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_15;
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


            exception_lineno = 76;

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


            exception_lineno = 76;

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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = const_str_plain_OpenSSLSigner;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_3c2efbe46201c95aa696cd09985d50fd->m_frame.f_lineno = 76;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_16;
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


                exception_lineno = 76;

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


                    exception_lineno = 76;

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

                    exception_lineno = 76;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 76;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_17;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_oauth2client$_openssl_crypt_76 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_d45a20eeafb65ffb5e1659b43582b4bb;
        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_95651dfc823924a56b238acf49f575b4;
        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_OpenSSLSigner;
        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_cce1c60b0339406e9aee9052241aeb9c_3, codeobj_cce1c60b0339406e9aee9052241aeb9c, module_oauth2client$_openssl_crypt, sizeof(void *) );
        frame_cce1c60b0339406e9aee9052241aeb9c_3 = cache_frame_cce1c60b0339406e9aee9052241aeb9c_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_cce1c60b0339406e9aee9052241aeb9c_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_cce1c60b0339406e9aee9052241aeb9c_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_4___init__(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_5_sign(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain_sign, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_defaults_1;
            PyObject *tmp_staticmethod_arg_2;
            PyObject *tmp_defaults_2;
            tmp_res = MAPPING_HAS_ITEM( locals_oauth2client$_openssl_crypt_76, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
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
            tmp_called_name_5 = PyObject_GetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain_staticmethod );

            if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_1 = const_tuple_bytes_digest_75c66781a217e4de91cce63507d0b1d8_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_args_element_name_2 = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_6_from_string( tmp_defaults_1 );



            frame_cce1c60b0339406e9aee9052241aeb9c_3->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_defaults_2 = const_tuple_bytes_digest_75c66781a217e4de91cce63507d0b1d8_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_staticmethod_arg_2 = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_6_from_string( tmp_defaults_2 );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
            Py_DECREF( tmp_staticmethod_arg_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain_from_string, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cce1c60b0339406e9aee9052241aeb9c_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_cce1c60b0339406e9aee9052241aeb9c_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_cce1c60b0339406e9aee9052241aeb9c_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_cce1c60b0339406e9aee9052241aeb9c_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_cce1c60b0339406e9aee9052241aeb9c_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_cce1c60b0339406e9aee9052241aeb9c_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_cce1c60b0339406e9aee9052241aeb9c_3 == cache_frame_cce1c60b0339406e9aee9052241aeb9c_3 )
        {
            Py_DECREF( frame_cce1c60b0339406e9aee9052241aeb9c_3 );
        }
        cache_frame_cce1c60b0339406e9aee9052241aeb9c_3 = NULL;

        assertFrameObject( frame_cce1c60b0339406e9aee9052241aeb9c_3 );

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


                exception_lineno = 76;

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
            tmp_res = PyObject_SetItem( locals_oauth2client$_openssl_crypt_76, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_OpenSSLSigner;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_oauth2client$_openssl_crypt_76;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_3c2efbe46201c95aa696cd09985d50fd->m_frame.f_lineno = 76;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_18 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_oauth2client$_openssl_crypt_76 );
        locals_oauth2client$_openssl_crypt_76 = NULL;
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

        Py_DECREF( locals_oauth2client$_openssl_crypt_76 );
        locals_oauth2client$_openssl_crypt_76 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt );
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
        NUITKA_CANNOT_GET_HERE( oauth2client$_openssl_crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 76;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_OpenSSLSigner, tmp_assign_source_18 );
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
    RESTORE_FRAME_EXCEPTION( frame_3c2efbe46201c95aa696cd09985d50fd );
#endif
    popFrameStack();

    assertFrameObject( frame_3c2efbe46201c95aa696cd09985d50fd );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c2efbe46201c95aa696cd09985d50fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c2efbe46201c95aa696cd09985d50fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c2efbe46201c95aa696cd09985d50fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c2efbe46201c95aa696cd09985d50fd, exception_lineno );
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

    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_oauth2client$_openssl_crypt$$$function_7_pkcs12_key_as_pem(  );



        UPDATE_STRING_DICT1( moduledict_oauth2client$_openssl_crypt, (Nuitka_StringObject *)const_str_plain_pkcs12_key_as_pem, tmp_assign_source_20 );
    }

    return MOD_RETURN_VALUE( module_oauth2client$_openssl_crypt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
