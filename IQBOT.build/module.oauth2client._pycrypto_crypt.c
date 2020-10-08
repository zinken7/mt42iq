/* Generated code for Python module 'oauth2client._pycrypto_crypt'
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

/* The "_module_oauth2client$_pycrypto_crypt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauth2client$_pycrypto_crypt;
PyDictObject *moduledict_oauth2client$_pycrypto_crypt;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_is_x509_cert;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain__helpers_tuple;
static PyObject *const_str_digest_5008b28f75e9a8ef79bf71b64d6cd92f;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_PKCS1_v1_5;
extern PyObject *const_str_plain_PyCryptoSigner;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain__parse_pem_key;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_RSA;
extern PyObject *const_slice_int_pos_1_int_neg_1_none;
extern PyObject *const_str_plain_notasecret;
static PyObject *const_str_digest_30371e0e8ec6720a4150af0f46507ae3;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_from_string;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain__urlsafe_b64decode;
extern PyObject *const_tuple_str_plain_notasecret_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple;
static PyObject *const_str_digest_46d0fe09c2c187c9551959b8787665c3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_PyCryptoVerifier;
extern PyObject *const_str_plain_key_pem;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_a706952e0b2f261d09c2c5f6ae3f41f9;
static PyObject *const_str_plain_SHA256;
static PyObject *const_str_digest_4c103175f05ed14c4f65a1cb84aa216c;
extern PyObject *const_str_plain_message;
static PyObject *const_str_digest_423e6e4e80847b2e773bcb7d4be052f4;
static PyObject *const_str_digest_4ee6d49526f58d4fff6e68f06291cb31;
static PyObject *const_tuple_str_plain_RSA_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain_pemLines;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_pubkey;
extern PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
static PyObject *const_tuple_str_plain_SHA256_tuple;
static PyObject *const_str_digest_65d97903ab4949452c79ee278e7e3fcb;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_str_plain_PKCS1_v1_5_tuple;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain__helpers;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_int_0;
static PyObject *const_str_digest_c15875af781e35606b1294eea7beddae;
static PyObject *const_str_digest_08bfed830fab8b2946807c47cdaaf1f6;
extern PyObject *const_tuple_0731cad9b517cc58a815b8d6c26074f8_tuple;
extern PyObject *const_str_plain_oauth2client;
static PyObject *const_tuple_str_plain_DerSequence_tuple;
extern PyObject *const_str_plain__key;
static PyObject *const_str_plain_certDer;
extern PyObject *const_str_digest_91148e04add4911e064cb976e215cef5;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_824e4a3bf4f7d5f8f26c4e62ecf3bcfe;
extern PyObject *const_str_plain__to_bytes;
static PyObject *const_str_plain_certSeq;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_tuple_bytes_chr_32_bytes_empty_tuple;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_5a50a9e09e675bd4a54bc064133e7e7e;
static PyObject *const_str_digest_a884bac59d6a168d92da7c347a692229;
extern PyObject *const_str_digest_95651dfc823924a56b238acf49f575b4;
static PyObject *const_str_plain_tbsSeq;
extern PyObject *const_tuple_str_plain_self_str_plain_pkey_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple;
extern PyObject *const_bytes_empty;
extern PyObject *const_str_plain_type;
extern PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
extern PyObject *const_str_plain__pubkey;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_e8e8906ea031bbbd3acaba5c6178669a;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_f1a878c74332ecdd97b0339116d3d699;
extern PyObject *const_bytes_chr_32;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_pkey;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_importKey;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_self_str_plain_pubkey_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_DerSequence;
extern PyObject *const_str_plain_parsed_pem_key;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_7c65783ea592da7deacc72a90fc07e1d;
static PyObject *const_str_digest_2b17fe0dc1e2c340826026f9c6c2f88d;
static PyObject *const_str_digest_e95b09fa334fbf8aa1ba0e1464a53fdb;
static PyObject *const_str_digest_1ba48a66bfbe1e9dac45fafdd717fdc1;
static PyObject *const_str_digest_6964971b6e7ba64281d96769e0e6ed08;
static PyObject *const_str_digest_ded0bc0013cb0faf0512b43e508d5c9b;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_5008b28f75e9a8ef79bf71b64d6cd92f = UNSTREAM_STRING_ASCII( &constant_bin[ 2429461 ], 16, 0 );
    const_str_plain_PKCS1_v1_5 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429477 ], 10, 1 );
    const_str_plain_RSA = UNSTREAM_STRING_ASCII( &constant_bin[ 2423574 ], 3, 1 );
    const_str_digest_30371e0e8ec6720a4150af0f46507ae3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429487 ], 419, 0 );
    const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 0, const_str_plain_key_pem ); Py_INCREF( const_str_plain_key_pem );
    PyTuple_SET_ITEM( const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 1, const_str_plain_is_x509_cert ); Py_INCREF( const_str_plain_is_x509_cert );
    const_str_plain_pemLines = UNSTREAM_STRING_ASCII( &constant_bin[ 2429906 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 2, const_str_plain_pemLines ); Py_INCREF( const_str_plain_pemLines );
    const_str_plain_certDer = UNSTREAM_STRING_ASCII( &constant_bin[ 2429914 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 3, const_str_plain_certDer ); Py_INCREF( const_str_plain_certDer );
    const_str_plain_certSeq = UNSTREAM_STRING_ASCII( &constant_bin[ 2429921 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 4, const_str_plain_certSeq ); Py_INCREF( const_str_plain_certSeq );
    const_str_plain_tbsSeq = UNSTREAM_STRING_ASCII( &constant_bin[ 2429928 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 5, const_str_plain_tbsSeq ); Py_INCREF( const_str_plain_tbsSeq );
    PyTuple_SET_ITEM( const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 6, const_str_plain_pubkey ); Py_INCREF( const_str_plain_pubkey );
    const_str_digest_46d0fe09c2c187c9551959b8787665c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429934 ], 50, 0 );
    const_str_digest_a706952e0b2f261d09c2c5f6ae3f41f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 2429984 ], 23, 0 );
    const_str_plain_SHA256 = UNSTREAM_STRING_ASCII( &constant_bin[ 2430007 ], 6, 1 );
    const_str_digest_4c103175f05ed14c4f65a1cb84aa216c = UNSTREAM_STRING_ASCII( &constant_bin[ 2430013 ], 351, 0 );
    const_str_digest_423e6e4e80847b2e773bcb7d4be052f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2430364 ], 25, 0 );
    const_str_digest_4ee6d49526f58d4fff6e68f06291cb31 = UNSTREAM_STRING_ASCII( &constant_bin[ 2430389 ], 28, 0 );
    const_tuple_str_plain_RSA_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RSA_tuple, 0, const_str_plain_RSA ); Py_INCREF( const_str_plain_RSA );
    const_tuple_str_plain_SHA256_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SHA256_tuple, 0, const_str_plain_SHA256 ); Py_INCREF( const_str_plain_SHA256 );
    const_str_digest_65d97903ab4949452c79ee278e7e3fcb = UNSTREAM_STRING_ASCII( &constant_bin[ 2430417 ], 16, 0 );
    const_tuple_str_plain_PKCS1_v1_5_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PKCS1_v1_5_tuple, 0, const_str_plain_PKCS1_v1_5 ); Py_INCREF( const_str_plain_PKCS1_v1_5 );
    const_str_digest_c15875af781e35606b1294eea7beddae = UNSTREAM_STRING_ASCII( &constant_bin[ 2430433 ], 16, 0 );
    const_str_digest_08bfed830fab8b2946807c47cdaaf1f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2430449 ], 28, 0 );
    const_tuple_str_plain_DerSequence_tuple = PyTuple_New( 1 );
    const_str_plain_DerSequence = UNSTREAM_STRING_ASCII( &constant_bin[ 2430477 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DerSequence_tuple, 0, const_str_plain_DerSequence ); Py_INCREF( const_str_plain_DerSequence );
    const_str_digest_824e4a3bf4f7d5f8f26c4e62ecf3bcfe = UNSTREAM_STRING_ASCII( &constant_bin[ 2430488 ], 19, 0 );
    const_tuple_bytes_chr_32_bytes_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_bytes_empty_tuple, 0, const_bytes_chr_32 ); Py_INCREF( const_bytes_chr_32 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_bytes_empty_tuple, 1, const_bytes_empty ); Py_INCREF( const_bytes_empty );
    const_str_digest_5a50a9e09e675bd4a54bc064133e7e7e = UNSTREAM_STRING_ASCII( &constant_bin[ 2430507 ], 112, 0 );
    const_str_digest_a884bac59d6a168d92da7c347a692229 = UNSTREAM_STRING_ASCII( &constant_bin[ 2430619 ], 177, 0 );
    const_str_digest_e8e8906ea031bbbd3acaba5c6178669a = UNSTREAM_STRING_ASCII( &constant_bin[ 2430796 ], 116, 0 );
    const_str_digest_f1a878c74332ecdd97b0339116d3d699 = UNSTREAM_STRING_ASCII( &constant_bin[ 2430912 ], 37, 0 );
    const_str_plain_importKey = UNSTREAM_STRING_ASCII( &constant_bin[ 2430949 ], 9, 1 );
    const_str_digest_7c65783ea592da7deacc72a90fc07e1d = UNSTREAM_STRING_ASCII( &constant_bin[ 2430958 ], 11, 0 );
    const_str_digest_2b17fe0dc1e2c340826026f9c6c2f88d = UNSTREAM_STRING_ASCII( &constant_bin[ 2430969 ], 23, 0 );
    const_str_digest_e95b09fa334fbf8aa1ba0e1464a53fdb = UNSTREAM_STRING_ASCII( &constant_bin[ 2430992 ], 26, 0 );
    const_str_digest_1ba48a66bfbe1e9dac45fafdd717fdc1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2431018 ], 131, 0 );
    const_str_digest_6964971b6e7ba64281d96769e0e6ed08 = UNSTREAM_STRING_ASCII( &constant_bin[ 2431149 ], 320, 0 );
    const_str_digest_ded0bc0013cb0faf0512b43e508d5c9b = UNSTREAM_STRING_ASCII( &constant_bin[ 2431469 ], 59, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauth2client$_pycrypto_crypt( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a766eb42c45479a023698c661558f474;
static PyCodeObject *codeobj_a4f9d433c5a28ec5c47618e8924dfef0;
static PyCodeObject *codeobj_576a2496dbe95c3f091cdd91c94356f1;
static PyCodeObject *codeobj_e1513efd8fa5ec9ec2bbd3784217765e;
static PyCodeObject *codeobj_d9a168663066fc5dc7bb2308f46a2bc1;
static PyCodeObject *codeobj_ecb324bf6db8064a9a7ad9c5c64521f3;
static PyCodeObject *codeobj_4ce2c3a4a799cde09d3781877aeee6f8;
static PyCodeObject *codeobj_8126c6fe8b3c29db97c9b1794eaeb1bb;
static PyCodeObject *codeobj_2e4fbe56eec7a906b533909216d47647;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ded0bc0013cb0faf0512b43e508d5c9b;
    codeobj_a766eb42c45479a023698c661558f474 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f1a878c74332ecdd97b0339116d3d699, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a4f9d433c5a28ec5c47618e8924dfef0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyCryptoSigner, 78, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_576a2496dbe95c3f091cdd91c94356f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyCryptoVerifier, 24, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e1513efd8fa5ec9ec2bbd3784217765e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 81, const_tuple_str_plain_self_str_plain_pkey_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9a168663066fc5dc7bb2308f46a2bc1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 27, const_tuple_str_plain_self_str_plain_pubkey_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ecb324bf6db8064a9a7ad9c5c64521f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 101, const_tuple_0731cad9b517cc58a815b8d6c26074f8_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ce2c3a4a799cde09d3781877aeee6f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_string, 52, const_tuple_0f60d8972fb71d02e53bb22108fead21_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8126c6fe8b3c29db97c9b1794eaeb1bb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 89, const_tuple_str_plain_self_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2e4fbe56eec7a906b533909216d47647 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 36, const_tuple_str_plain_self_str_plain_message_str_plain_signature_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_2_verify(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_3_from_string(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_5_sign(  );


static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_6_from_string( PyObject *defaults );


// The module function definitions.
static PyObject *impl_oauth2client$_pycrypto_crypt$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pubkey = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d9a168663066fc5dc7bb2308f46a2bc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9a168663066fc5dc7bb2308f46a2bc1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9a168663066fc5dc7bb2308f46a2bc1, codeobj_d9a168663066fc5dc7bb2308f46a2bc1, module_oauth2client$_pycrypto_crypt, sizeof(void *)+sizeof(void *) );
    frame_d9a168663066fc5dc7bb2308f46a2bc1 = cache_frame_d9a168663066fc5dc7bb2308f46a2bc1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9a168663066fc5dc7bb2308f46a2bc1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9a168663066fc5dc7bb2308f46a2bc1 ) == 2 ); // Frame stack

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


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a168663066fc5dc7bb2308f46a2bc1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a168663066fc5dc7bb2308f46a2bc1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9a168663066fc5dc7bb2308f46a2bc1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9a168663066fc5dc7bb2308f46a2bc1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9a168663066fc5dc7bb2308f46a2bc1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9a168663066fc5dc7bb2308f46a2bc1,
        type_description_1,
        par_self,
        par_pubkey
    );


    // Release cached frame.
    if ( frame_d9a168663066fc5dc7bb2308f46a2bc1 == cache_frame_d9a168663066fc5dc7bb2308f46a2bc1 )
    {
        Py_DECREF( frame_d9a168663066fc5dc7bb2308f46a2bc1 );
    }
    cache_frame_d9a168663066fc5dc7bb2308f46a2bc1 = NULL;

    assertFrameObject( frame_d9a168663066fc5dc7bb2308f46a2bc1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_1___init__ );
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


static PyObject *impl_oauth2client$_pycrypto_crypt$$$function_2_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    PyObject *par_signature = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_2e4fbe56eec7a906b533909216d47647;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2e4fbe56eec7a906b533909216d47647 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e4fbe56eec7a906b533909216d47647, codeobj_2e4fbe56eec7a906b533909216d47647, module_oauth2client$_pycrypto_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2e4fbe56eec7a906b533909216d47647 = cache_frame_2e4fbe56eec7a906b533909216d47647;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e4fbe56eec7a906b533909216d47647 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e4fbe56eec7a906b533909216d47647 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__to_bytes );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_tuple_element_1 = par_message;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_2e4fbe56eec7a906b533909216d47647->m_frame.f_lineno = 48;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_PKCS1_v1_5 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PKCS1_v1_5 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PKCS1_v1_5" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_new );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pubkey );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2e4fbe56eec7a906b533909216d47647->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_verify );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_SHA256 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA256 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHA256" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_3 = par_message;
        frame_2e4fbe56eec7a906b533909216d47647->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_signature );
        tmp_args_element_name_4 = par_signature;
        frame_2e4fbe56eec7a906b533909216d47647->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e4fbe56eec7a906b533909216d47647 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e4fbe56eec7a906b533909216d47647 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e4fbe56eec7a906b533909216d47647 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e4fbe56eec7a906b533909216d47647, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e4fbe56eec7a906b533909216d47647->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e4fbe56eec7a906b533909216d47647, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e4fbe56eec7a906b533909216d47647,
        type_description_1,
        par_self,
        par_message,
        par_signature
    );


    // Release cached frame.
    if ( frame_2e4fbe56eec7a906b533909216d47647 == cache_frame_2e4fbe56eec7a906b533909216d47647 )
    {
        Py_DECREF( frame_2e4fbe56eec7a906b533909216d47647 );
    }
    cache_frame_2e4fbe56eec7a906b533909216d47647 = NULL;

    assertFrameObject( frame_2e4fbe56eec7a906b533909216d47647 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_2_verify );
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

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_2_verify );
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


static PyObject *impl_oauth2client$_pycrypto_crypt$$$function_3_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key_pem = python_pars[ 0 ];
    PyObject *par_is_x509_cert = python_pars[ 1 ];
    PyObject *var_pemLines = NULL;
    PyObject *var_certDer = NULL;
    PyObject *var_certSeq = NULL;
    PyObject *var_tbsSeq = NULL;
    PyObject *var_pubkey = NULL;
    struct Nuitka_FrameObject *frame_4ce2c3a4a799cde09d3781877aeee6f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4ce2c3a4a799cde09d3781877aeee6f8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ce2c3a4a799cde09d3781877aeee6f8, codeobj_4ce2c3a4a799cde09d3781877aeee6f8, module_oauth2client$_pycrypto_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4ce2c3a4a799cde09d3781877aeee6f8 = cache_frame_4ce2c3a4a799cde09d3781877aeee6f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ce2c3a4a799cde09d3781877aeee6f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ce2c3a4a799cde09d3781877aeee6f8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_is_x509_cert );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_is_x509_cert );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

                exception_lineno = 65;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_key_pem );
            tmp_args_element_name_1 = par_key_pem;
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 65;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__to_bytes, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "ooooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( par_key_pem );
            tmp_called_instance_3 = par_key_pem;
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 66;
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_bytes_chr_32_bytes_empty_tuple, 0 ) );

            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 66;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_split );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pemLines == NULL );
            var_pemLines = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

                exception_lineno = 67;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__urlsafe_b64decode );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_2 = const_bytes_empty;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
            assert( !(tmp_called_name_2 == NULL) );
            CHECK_OBJECT( var_pemLines );
            tmp_subscribed_name_1 = var_pemLines;
            tmp_subscript_name_1 = const_slice_int_pos_1_int_neg_1_none;
            tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 67;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 67;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 67;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 67;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_certDer == NULL );
            var_certDer = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_DerSequence );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DerSequence );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DerSequence" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 68;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 68;
            tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_certSeq == NULL );
            var_certSeq = tmp_assign_source_4;
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( var_certSeq );
            tmp_called_instance_4 = var_certSeq;
            CHECK_OBJECT( var_certDer );
            tmp_args_element_name_4 = var_certDer;
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_decode, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_DerSequence );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DerSequence );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DerSequence" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 70;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 70;
            tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_tbsSeq == NULL );
            var_tbsSeq = tmp_assign_source_5;
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_tbsSeq );
            tmp_source_name_3 = var_tbsSeq;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decode );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_certSeq );
            tmp_subscribed_name_2 = var_certSeq;
            tmp_subscript_name_2 = const_int_0;
            tmp_args_element_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 71;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_RSA );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RSA );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RSA" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_5;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_importKey );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_tbsSeq );
            tmp_subscribed_name_3 = var_tbsSeq;
            tmp_subscript_name_3 = const_int_pos_6;
            tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 6 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pubkey == NULL );
            var_pubkey = tmp_assign_source_6;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_RSA );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RSA );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RSA" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 74;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_6;
            CHECK_OBJECT( par_key_pem );
            tmp_args_element_name_7 = par_key_pem;
            frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 74;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_importKey, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pubkey == NULL );
            var_pubkey = tmp_assign_source_7;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCryptoVerifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        CHECK_OBJECT( var_pubkey );
        tmp_args_element_name_8 = var_pubkey;
        frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ce2c3a4a799cde09d3781877aeee6f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ce2c3a4a799cde09d3781877aeee6f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ce2c3a4a799cde09d3781877aeee6f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ce2c3a4a799cde09d3781877aeee6f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ce2c3a4a799cde09d3781877aeee6f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ce2c3a4a799cde09d3781877aeee6f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ce2c3a4a799cde09d3781877aeee6f8,
        type_description_1,
        par_key_pem,
        par_is_x509_cert,
        var_pemLines,
        var_certDer,
        var_certSeq,
        var_tbsSeq,
        var_pubkey
    );


    // Release cached frame.
    if ( frame_4ce2c3a4a799cde09d3781877aeee6f8 == cache_frame_4ce2c3a4a799cde09d3781877aeee6f8 )
    {
        Py_DECREF( frame_4ce2c3a4a799cde09d3781877aeee6f8 );
    }
    cache_frame_4ce2c3a4a799cde09d3781877aeee6f8 = NULL;

    assertFrameObject( frame_4ce2c3a4a799cde09d3781877aeee6f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_3_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_key_pem );
    Py_DECREF( par_key_pem );
    par_key_pem = NULL;

    CHECK_OBJECT( (PyObject *)par_is_x509_cert );
    Py_DECREF( par_is_x509_cert );
    par_is_x509_cert = NULL;

    Py_XDECREF( var_pemLines );
    var_pemLines = NULL;

    Py_XDECREF( var_certDer );
    var_certDer = NULL;

    Py_XDECREF( var_certSeq );
    var_certSeq = NULL;

    Py_XDECREF( var_tbsSeq );
    var_tbsSeq = NULL;

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

    Py_XDECREF( par_key_pem );
    par_key_pem = NULL;

    CHECK_OBJECT( (PyObject *)par_is_x509_cert );
    Py_DECREF( par_is_x509_cert );
    par_is_x509_cert = NULL;

    Py_XDECREF( var_pemLines );
    var_pemLines = NULL;

    Py_XDECREF( var_certDer );
    var_certDer = NULL;

    Py_XDECREF( var_certSeq );
    var_certSeq = NULL;

    Py_XDECREF( var_tbsSeq );
    var_tbsSeq = NULL;

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
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_3_from_string );
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


static PyObject *impl_oauth2client$_pycrypto_crypt$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pkey = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e1513efd8fa5ec9ec2bbd3784217765e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1513efd8fa5ec9ec2bbd3784217765e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1513efd8fa5ec9ec2bbd3784217765e, codeobj_e1513efd8fa5ec9ec2bbd3784217765e, module_oauth2client$_pycrypto_crypt, sizeof(void *)+sizeof(void *) );
    frame_e1513efd8fa5ec9ec2bbd3784217765e = cache_frame_e1513efd8fa5ec9ec2bbd3784217765e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1513efd8fa5ec9ec2bbd3784217765e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1513efd8fa5ec9ec2bbd3784217765e ) == 2 ); // Frame stack

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


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1513efd8fa5ec9ec2bbd3784217765e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1513efd8fa5ec9ec2bbd3784217765e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1513efd8fa5ec9ec2bbd3784217765e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1513efd8fa5ec9ec2bbd3784217765e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1513efd8fa5ec9ec2bbd3784217765e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1513efd8fa5ec9ec2bbd3784217765e,
        type_description_1,
        par_self,
        par_pkey
    );


    // Release cached frame.
    if ( frame_e1513efd8fa5ec9ec2bbd3784217765e == cache_frame_e1513efd8fa5ec9ec2bbd3784217765e )
    {
        Py_DECREF( frame_e1513efd8fa5ec9ec2bbd3784217765e );
    }
    cache_frame_e1513efd8fa5ec9ec2bbd3784217765e = NULL;

    assertFrameObject( frame_e1513efd8fa5ec9ec2bbd3784217765e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_4___init__ );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_4___init__ );
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


static PyObject *impl_oauth2client$_pycrypto_crypt$$$function_5_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_message = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_8126c6fe8b3c29db97c9b1794eaeb1bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8126c6fe8b3c29db97c9b1794eaeb1bb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8126c6fe8b3c29db97c9b1794eaeb1bb, codeobj_8126c6fe8b3c29db97c9b1794eaeb1bb, module_oauth2client$_pycrypto_crypt, sizeof(void *)+sizeof(void *) );
    frame_8126c6fe8b3c29db97c9b1794eaeb1bb = cache_frame_8126c6fe8b3c29db97c9b1794eaeb1bb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8126c6fe8b3c29db97c9b1794eaeb1bb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8126c6fe8b3c29db97c9b1794eaeb1bb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__to_bytes );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_message );
        tmp_tuple_element_1 = par_message;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_81b3970727674c20ce12b1a4757dad21 );
        frame_8126c6fe8b3c29db97c9b1794eaeb1bb->m_frame.f_lineno = 98;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
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
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_PKCS1_v1_5 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PKCS1_v1_5 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PKCS1_v1_5" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_new );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__key );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8126c6fe8b3c29db97c9b1794eaeb1bb->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sign );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_SHA256 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHA256 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHA256" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_3 = par_message;
        frame_8126c6fe8b3c29db97c9b1794eaeb1bb->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_new, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8126c6fe8b3c29db97c9b1794eaeb1bb->m_frame.f_lineno = 99;
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


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8126c6fe8b3c29db97c9b1794eaeb1bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8126c6fe8b3c29db97c9b1794eaeb1bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8126c6fe8b3c29db97c9b1794eaeb1bb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8126c6fe8b3c29db97c9b1794eaeb1bb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8126c6fe8b3c29db97c9b1794eaeb1bb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8126c6fe8b3c29db97c9b1794eaeb1bb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8126c6fe8b3c29db97c9b1794eaeb1bb,
        type_description_1,
        par_self,
        par_message
    );


    // Release cached frame.
    if ( frame_8126c6fe8b3c29db97c9b1794eaeb1bb == cache_frame_8126c6fe8b3c29db97c9b1794eaeb1bb )
    {
        Py_DECREF( frame_8126c6fe8b3c29db97c9b1794eaeb1bb );
    }
    cache_frame_8126c6fe8b3c29db97c9b1794eaeb1bb = NULL;

    assertFrameObject( frame_8126c6fe8b3c29db97c9b1794eaeb1bb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_5_sign );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_5_sign );
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


static PyObject *impl_oauth2client$_pycrypto_crypt$$$function_6_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    struct Nuitka_FrameObject *frame_ecb324bf6db8064a9a7ad9c5c64521f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ecb324bf6db8064a9a7ad9c5c64521f3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ecb324bf6db8064a9a7ad9c5c64521f3, codeobj_ecb324bf6db8064a9a7ad9c5c64521f3, module_oauth2client$_pycrypto_crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ecb324bf6db8064a9a7ad9c5c64521f3 = cache_frame_ecb324bf6db8064a9a7ad9c5c64521f3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ecb324bf6db8064a9a7ad9c5c64521f3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ecb324bf6db8064a9a7ad9c5c64521f3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__parse_pem_key );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain__helpers );

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

            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_2 = par_key;
        frame_ecb324bf6db8064a9a7ad9c5c64521f3->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__to_bytes, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ecb324bf6db8064a9a7ad9c5c64521f3->m_frame.f_lineno = 116;
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


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_parsed_pem_key == NULL );
        var_parsed_pem_key = tmp_assign_source_1;
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


            exception_lineno = 117;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_RSA );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RSA );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RSA" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 118;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            CHECK_OBJECT( var_parsed_pem_key );
            tmp_args_element_name_3 = var_parsed_pem_key;
            frame_ecb324bf6db8064a9a7ad9c5c64521f3->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_importKey, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_pkey == NULL );
            var_pkey = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_5a50a9e09e675bd4a54bc064133e7e7e;
            frame_ecb324bf6db8064a9a7ad9c5c64521f3->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 120;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyCryptoSigner" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        if ( var_pkey == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_pkey;
        frame_ecb324bf6db8064a9a7ad9c5c64521f3->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecb324bf6db8064a9a7ad9c5c64521f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecb324bf6db8064a9a7ad9c5c64521f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecb324bf6db8064a9a7ad9c5c64521f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ecb324bf6db8064a9a7ad9c5c64521f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ecb324bf6db8064a9a7ad9c5c64521f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ecb324bf6db8064a9a7ad9c5c64521f3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ecb324bf6db8064a9a7ad9c5c64521f3,
        type_description_1,
        par_key,
        par_password,
        var_parsed_pem_key,
        var_pkey
    );


    // Release cached frame.
    if ( frame_ecb324bf6db8064a9a7ad9c5c64521f3 == cache_frame_ecb324bf6db8064a9a7ad9c5c64521f3 )
    {
        Py_DECREF( frame_ecb324bf6db8064a9a7ad9c5c64521f3 );
    }
    cache_frame_ecb324bf6db8064a9a7ad9c5c64521f3 = NULL;

    assertFrameObject( frame_ecb324bf6db8064a9a7ad9c5c64521f3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_6_from_string );
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

    Py_XDECREF( var_pkey );
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

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
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
    NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt$$$function_6_from_string );
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



static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pycrypto_crypt$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_423e6e4e80847b2e773bcb7d4be052f4,
#endif
        codeobj_d9a168663066fc5dc7bb2308f46a2bc1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pycrypto_crypt,
        const_str_digest_1ba48a66bfbe1e9dac45fafdd717fdc1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_2_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pycrypto_crypt$$$function_2_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 300
        const_str_digest_a706952e0b2f261d09c2c5f6ae3f41f9,
#endif
        codeobj_2e4fbe56eec7a906b533909216d47647,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pycrypto_crypt,
        const_str_digest_30371e0e8ec6720a4150af0f46507ae3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_3_from_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pycrypto_crypt$$$function_3_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 300
        const_str_digest_08bfed830fab8b2946807c47cdaaf1f6,
#endif
        codeobj_4ce2c3a4a799cde09d3781877aeee6f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pycrypto_crypt,
        const_str_digest_6964971b6e7ba64281d96769e0e6ed08,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pycrypto_crypt$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_2b17fe0dc1e2c340826026f9c6c2f88d,
#endif
        codeobj_e1513efd8fa5ec9ec2bbd3784217765e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pycrypto_crypt,
        const_str_digest_e8e8906ea031bbbd3acaba5c6178669a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_5_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pycrypto_crypt$$$function_5_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 300
        const_str_digest_824e4a3bf4f7d5f8f26c4e62ecf3bcfe,
#endif
        codeobj_8126c6fe8b3c29db97c9b1794eaeb1bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pycrypto_crypt,
        const_str_digest_a884bac59d6a168d92da7c347a692229,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_6_from_string( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauth2client$_pycrypto_crypt$$$function_6_from_string,
        const_str_plain_from_string,
#if PYTHON_VERSION >= 300
        const_str_digest_e95b09fa334fbf8aa1ba0e1464a53fdb,
#endif
        codeobj_ecb324bf6db8064a9a7ad9c5c64521f3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_oauth2client$_pycrypto_crypt,
        const_str_digest_4c103175f05ed14c4f65a1cb84aa216c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauth2client$_pycrypto_crypt =
{
    PyModuleDef_HEAD_INIT,
    "oauth2client._pycrypto_crypt",
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
MOD_ENTRY_DECL(oauth2client$_pycrypto_crypt)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(oauth2client$_pycrypto_crypt)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauth2client$_pycrypto_crypt );
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
    puts("oauth2client._pycrypto_crypt: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._pycrypto_crypt: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauth2client._pycrypto_crypt: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauth2client$_pycrypto_crypt" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauth2client$_pycrypto_crypt = Py_InitModule4(
        "oauth2client._pycrypto_crypt",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_oauth2client$_pycrypto_crypt = PyModule_Create( &mdef_oauth2client$_pycrypto_crypt );
#endif

    moduledict_oauth2client$_pycrypto_crypt = MODULE_DICT( module_oauth2client$_pycrypto_crypt );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_oauth2client$_pycrypto_crypt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_oauth2client$_pycrypto_crypt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_pycrypto_crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_oauth2client$_pycrypto_crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_oauth2client$_pycrypto_crypt );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4ee6d49526f58d4fff6e68f06291cb31, module_oauth2client$_pycrypto_crypt );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    struct Nuitka_FrameObject *frame_a766eb42c45479a023698c661558f474;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_oauth2client$_pycrypto_crypt_24 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_576a2496dbe95c3f091cdd91c94356f1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_576a2496dbe95c3f091cdd91c94356f1_2 = NULL;
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
    PyObject *locals_oauth2client$_pycrypto_crypt_78 = NULL;
    struct Nuitka_FrameObject *frame_a4f9d433c5a28ec5c47618e8924dfef0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a4f9d433c5a28ec5c47618e8924dfef0_3 = NULL;
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
        tmp_assign_source_1 = const_str_digest_46d0fe09c2c187c9551959b8787665c3;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ded0bc0013cb0faf0512b43e508d5c9b;
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a766eb42c45479a023698c661558f474 = MAKE_MODULE_FRAME( codeobj_a766eb42c45479a023698c661558f474, module_oauth2client$_pycrypto_crypt );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a766eb42c45479a023698c661558f474 );
    assert( Py_REFCNT( frame_a766eb42c45479a023698c661558f474 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_ded0bc0013cb0faf0512b43e508d5c9b;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_7c65783ea592da7deacc72a90fc07e1d;
        tmp_globals_name_1 = (PyObject *)moduledict_oauth2client$_pycrypto_crypt;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_SHA256_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_SHA256 );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_SHA256, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_65d97903ab4949452c79ee278e7e3fcb;
        tmp_globals_name_2 = (PyObject *)moduledict_oauth2client$_pycrypto_crypt;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_RSA_tuple;
        tmp_level_name_2 = const_int_0;
        frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 17;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_RSA );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_RSA, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_c15875af781e35606b1294eea7beddae;
        tmp_globals_name_3 = (PyObject *)moduledict_oauth2client$_pycrypto_crypt;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PKCS1_v1_5_tuple;
        tmp_level_name_3 = const_int_0;
        frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 18;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_PKCS1_v1_5 );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_PKCS1_v1_5, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_5008b28f75e9a8ef79bf71b64d6cd92f;
        tmp_globals_name_4 = (PyObject *)moduledict_oauth2client$_pycrypto_crypt;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_DerSequence_tuple;
        tmp_level_name_4 = const_int_0;
        frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 19;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_DerSequence );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_DerSequence, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_oauth2client;
        tmp_globals_name_5 = (PyObject *)moduledict_oauth2client$_pycrypto_crypt;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain__helpers_tuple;
        tmp_level_name_5 = const_int_0;
        frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 21;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__helpers );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain__helpers, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_9 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 24;

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


            exception_lineno = 24;

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


            exception_lineno = 24;

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


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

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
        tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
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


            exception_lineno = 24;

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


            exception_lineno = 24;

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
            PyObject *tmp_assign_source_12;
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


                exception_lineno = 24;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_PyCryptoVerifier;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 24;
            tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_12;
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


                exception_lineno = 24;

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


                    exception_lineno = 24;

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

                    exception_lineno = 24;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 24;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 24;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_13;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauth2client$_pycrypto_crypt_24 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4ee6d49526f58d4fff6e68f06291cb31;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_91148e04add4911e064cb976e215cef5;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_PyCryptoVerifier;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_576a2496dbe95c3f091cdd91c94356f1_2, codeobj_576a2496dbe95c3f091cdd91c94356f1, module_oauth2client$_pycrypto_crypt, sizeof(void *) );
        frame_576a2496dbe95c3f091cdd91c94356f1_2 = cache_frame_576a2496dbe95c3f091cdd91c94356f1_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_576a2496dbe95c3f091cdd91c94356f1_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_576a2496dbe95c3f091cdd91c94356f1_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_2_verify(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain_verify, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_staticmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM( locals_oauth2client$_pycrypto_crypt_24, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
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
            tmp_called_name_2 = PyObject_GetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain_staticmethod );

            if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_3_from_string(  );



            frame_576a2496dbe95c3f091cdd91c94356f1_2->m_frame.f_lineno = 52;
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


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_3_from_string(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain_from_string, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_576a2496dbe95c3f091cdd91c94356f1_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_576a2496dbe95c3f091cdd91c94356f1_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_576a2496dbe95c3f091cdd91c94356f1_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_576a2496dbe95c3f091cdd91c94356f1_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_576a2496dbe95c3f091cdd91c94356f1_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_576a2496dbe95c3f091cdd91c94356f1_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_576a2496dbe95c3f091cdd91c94356f1_2 == cache_frame_576a2496dbe95c3f091cdd91c94356f1_2 )
        {
            Py_DECREF( frame_576a2496dbe95c3f091cdd91c94356f1_2 );
        }
        cache_frame_576a2496dbe95c3f091cdd91c94356f1_2 = NULL;

        assertFrameObject( frame_576a2496dbe95c3f091cdd91c94356f1_2 );

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


                exception_lineno = 24;

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
            tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_24, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_PyCryptoVerifier;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_oauth2client$_pycrypto_crypt_24;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 24;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_14 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_oauth2client$_pycrypto_crypt_24 );
        locals_oauth2client$_pycrypto_crypt_24 = NULL;
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

        Py_DECREF( locals_oauth2client$_pycrypto_crypt_24 );
        locals_oauth2client$_pycrypto_crypt_24 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt );
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
        NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 24;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoVerifier, tmp_assign_source_14 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_16 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
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


            exception_lineno = 78;

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


            exception_lineno = 78;

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


            exception_lineno = 78;

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


            exception_lineno = 78;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

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
        tmp_assign_source_18 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_18;
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


            exception_lineno = 78;

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


            exception_lineno = 78;

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
            PyObject *tmp_assign_source_19;
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


                exception_lineno = 78;

                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = const_str_plain_PyCryptoSigner;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 78;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_19;
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


                exception_lineno = 78;

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


                    exception_lineno = 78;

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

                    exception_lineno = 78;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 78;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 78;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_20;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_oauth2client$_pycrypto_crypt_78 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_4ee6d49526f58d4fff6e68f06291cb31;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_95651dfc823924a56b238acf49f575b4;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_PyCryptoSigner;
        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_a4f9d433c5a28ec5c47618e8924dfef0_3, codeobj_a4f9d433c5a28ec5c47618e8924dfef0, module_oauth2client$_pycrypto_crypt, sizeof(void *) );
        frame_a4f9d433c5a28ec5c47618e8924dfef0_3 = cache_frame_a4f9d433c5a28ec5c47618e8924dfef0_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_a4f9d433c5a28ec5c47618e8924dfef0_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_a4f9d433c5a28ec5c47618e8924dfef0_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_4___init__(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_5_sign(  );



        tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain_sign, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
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
            tmp_res = MAPPING_HAS_ITEM( locals_oauth2client$_pycrypto_crypt_78, const_str_plain_staticmethod );

            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
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
            tmp_called_name_5 = PyObject_GetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain_staticmethod );

            if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_1 = const_tuple_str_plain_notasecret_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_args_element_name_2 = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_6_from_string( tmp_defaults_1 );



            frame_a4f9d433c5a28ec5c47618e8924dfef0_3->m_frame.f_lineno = 101;
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


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_defaults_2 = const_tuple_str_plain_notasecret_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_staticmethod_arg_2 = MAKE_FUNCTION_oauth2client$_pycrypto_crypt$$$function_6_from_string( tmp_defaults_2 );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
            Py_DECREF( tmp_staticmethod_arg_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain_from_string, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a4f9d433c5a28ec5c47618e8924dfef0_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_a4f9d433c5a28ec5c47618e8924dfef0_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_a4f9d433c5a28ec5c47618e8924dfef0_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_a4f9d433c5a28ec5c47618e8924dfef0_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_a4f9d433c5a28ec5c47618e8924dfef0_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_a4f9d433c5a28ec5c47618e8924dfef0_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_a4f9d433c5a28ec5c47618e8924dfef0_3 == cache_frame_a4f9d433c5a28ec5c47618e8924dfef0_3 )
        {
            Py_DECREF( frame_a4f9d433c5a28ec5c47618e8924dfef0_3 );
        }
        cache_frame_a4f9d433c5a28ec5c47618e8924dfef0_3 = NULL;

        assertFrameObject( frame_a4f9d433c5a28ec5c47618e8924dfef0_3 );

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


                exception_lineno = 78;

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
            tmp_res = PyObject_SetItem( locals_oauth2client$_pycrypto_crypt_78, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_PyCryptoSigner;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_oauth2client$_pycrypto_crypt_78;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_a766eb42c45479a023698c661558f474->m_frame.f_lineno = 78;
            tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_21 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_21 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_oauth2client$_pycrypto_crypt_78 );
        locals_oauth2client$_pycrypto_crypt_78 = NULL;
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

        Py_DECREF( locals_oauth2client$_pycrypto_crypt_78 );
        locals_oauth2client$_pycrypto_crypt_78 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt );
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
        NUITKA_CANNOT_GET_HERE( oauth2client$_pycrypto_crypt );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 78;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_oauth2client$_pycrypto_crypt, (Nuitka_StringObject *)const_str_plain_PyCryptoSigner, tmp_assign_source_21 );
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
    RESTORE_FRAME_EXCEPTION( frame_a766eb42c45479a023698c661558f474 );
#endif
    popFrameStack();

    assertFrameObject( frame_a766eb42c45479a023698c661558f474 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a766eb42c45479a023698c661558f474 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a766eb42c45479a023698c661558f474, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a766eb42c45479a023698c661558f474->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a766eb42c45479a023698c661558f474, exception_lineno );
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


    return MOD_RETURN_VALUE( module_oauth2client$_pycrypto_crypt );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
