/* Generated code for Python module 'pyasn1_modules.pem'
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

/* The "_module_pyasn1_modules$pem" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1_modules$pem;
PyDictObject *moduledict_pyasn1_modules$pem;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_9b02e8f66087246f5290f408cd07f8d6;
extern PyObject *const_str_plain_idx;
static PyObject *const_str_digest_8c08dd6a507b5b0d5045a52c97cd2688;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_endMarker;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_readPemBlocksFromFile;
static PyObject *const_str_plain_stopMarkers;
static PyObject *const_str_plain_readPemFromFile;
static PyObject *const_str_plain_readBase64FromFile;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_digest_bd360cd4eda7b927ddcc5733d31ab2b4;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_int_0_int_pos_1_int_pos_2_tuple;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_readline;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_c9e0ace64f4cd2826bb360e8a68ae1a8;
extern PyObject *const_str_plain_state;
static PyObject *const_tuple_0ab244363f626258f6c1e7871520fda7_tuple;
extern PyObject *const_str_plain_b64decode;
static PyObject *const_str_plain_readBase64fromText;
extern PyObject *const_str_plain_substrate;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_stDump;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_base64;
static PyObject *const_tuple_e504843db9a11e2b19ec1da7d71d2333_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_plain_certLines;
extern PyObject *const_str_plain_markers;
static PyObject *const_str_plain_stSpam;
static PyObject *const_str_digest_08c6e40c84bf3e2940ed64abd2dd5a8d;
extern PyObject *const_tuple_str_plain_y_tuple;
static PyObject *const_tuple_str_plain_text_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_fileObj_tuple;
static PyObject *const_str_plain_certLine;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_stHam;
static PyObject *const_str_plain_startMarker;
static PyObject *const_str_digest_71e25f25cc435e059f38340d20a05e7e;
static PyObject *const_str_plain_fileObj;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_startMarkers;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_9b02e8f66087246f5290f408cd07f8d6 = UNSTREAM_STRING_ASCII( &constant_bin[ 2427993 ], 27, 0 );
    const_str_digest_8c08dd6a507b5b0d5045a52c97cd2688 = UNSTREAM_STRING_ASCII( &constant_bin[ 2646412 ], 39, 0 );
    const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple = PyTuple_New( 5 );
    const_str_plain_fileObj = UNSTREAM_STRING_ASCII( &constant_bin[ 2646451 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple, 0, const_str_plain_fileObj ); Py_INCREF( const_str_plain_fileObj );
    const_str_plain_startMarker = UNSTREAM_STRING_ASCII( &constant_bin[ 2646458 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple, 1, const_str_plain_startMarker ); Py_INCREF( const_str_plain_startMarker );
    const_str_plain_endMarker = UNSTREAM_STRING_ASCII( &constant_bin[ 2646469 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple, 2, const_str_plain_endMarker ); Py_INCREF( const_str_plain_endMarker );
    PyTuple_SET_ITEM( const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple, 3, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple, 4, const_str_plain_substrate ); Py_INCREF( const_str_plain_substrate );
    const_str_plain_stopMarkers = UNSTREAM_STRING_ASCII( &constant_bin[ 2646478 ], 11, 1 );
    const_str_plain_readPemFromFile = UNSTREAM_STRING_ASCII( &constant_bin[ 2646489 ], 15, 1 );
    const_str_plain_readBase64FromFile = UNSTREAM_STRING_ASCII( &constant_bin[ 2646504 ], 18, 1 );
    const_str_digest_bd360cd4eda7b927ddcc5733d31ab2b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 2646522 ], 27, 0 );
    const_tuple_int_0_int_pos_1_int_pos_2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_int_pos_2_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_int_pos_2_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_int_pos_2_tuple, 2, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_str_digest_c9e0ace64f4cd2826bb360e8a68ae1a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 2646549 ], 25, 0 );
    const_tuple_0ab244363f626258f6c1e7871520fda7_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 0, const_str_plain_fileObj ); Py_INCREF( const_str_plain_fileObj );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 1, const_str_plain_markers ); Py_INCREF( const_str_plain_markers );
    const_str_plain_startMarkers = UNSTREAM_STRING_ASCII( &constant_bin[ 2646574 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 2, const_str_plain_startMarkers ); Py_INCREF( const_str_plain_startMarkers );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 3, const_str_plain_stopMarkers ); Py_INCREF( const_str_plain_stopMarkers );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 4, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 5, const_str_plain_substrate ); Py_INCREF( const_str_plain_substrate );
    const_str_plain_certLines = UNSTREAM_STRING_ASCII( &constant_bin[ 2646586 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 6, const_str_plain_certLines ); Py_INCREF( const_str_plain_certLines );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 7, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    const_str_plain_certLine = UNSTREAM_STRING_ASCII( &constant_bin[ 2646586 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 8, const_str_plain_certLine ); Py_INCREF( const_str_plain_certLine );
    const_str_plain_readBase64fromText = UNSTREAM_STRING_ASCII( &constant_bin[ 2646595 ], 18, 1 );
    const_str_plain_stDump = UNSTREAM_STRING_ASCII( &constant_bin[ 2542868 ], 6, 1 );
    const_tuple_e504843db9a11e2b19ec1da7d71d2333_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_e504843db9a11e2b19ec1da7d71d2333_tuple, 0, const_str_digest_9b02e8f66087246f5290f408cd07f8d6 ); Py_INCREF( const_str_digest_9b02e8f66087246f5290f408cd07f8d6 );
    PyTuple_SET_ITEM( const_tuple_e504843db9a11e2b19ec1da7d71d2333_tuple, 1, const_str_digest_c9e0ace64f4cd2826bb360e8a68ae1a8 ); Py_INCREF( const_str_digest_c9e0ace64f4cd2826bb360e8a68ae1a8 );
    const_str_plain_stSpam = UNSTREAM_STRING_ASCII( &constant_bin[ 2646613 ], 6, 1 );
    const_str_digest_08c6e40c84bf3e2940ed64abd2dd5a8d = UNSTREAM_STRING_ASCII( &constant_bin[ 2646530 ], 18, 0 );
    const_tuple_str_plain_text_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_tuple, 0, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    const_tuple_str_plain_fileObj_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fileObj_tuple, 0, const_str_plain_fileObj ); Py_INCREF( const_str_plain_fileObj );
    const_str_plain_stHam = UNSTREAM_STRING_ASCII( &constant_bin[ 2646619 ], 5, 1 );
    const_str_digest_71e25f25cc435e059f38340d20a05e7e = UNSTREAM_STRING_ASCII( &constant_bin[ 2646624 ], 49, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1_modules$pem( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_17b23696c06ee82108281be8f695433d;
static PyCodeObject *codeobj_3a6268bd9b66017967f9b415be86f058;
static PyCodeObject *codeobj_d157a772ee68c0205ce77e777908d7b8;
static PyCodeObject *codeobj_a11ccda6d50ffd7ce209f18adda0e6d0;
static PyCodeObject *codeobj_0bd5715db431629dbe3d1b24ad2e4cd2;
static PyCodeObject *codeobj_9099f1d330817fd42490f50f321d5bbc;
static PyCodeObject *codeobj_4ac97d485f16bb7e85d15f3207807592;
static PyCodeObject *codeobj_a0fd27f80b93a1f509b76a1cc4c2c21d;
static PyCodeObject *codeobj_764fca9cb6a6c2a604b407639553f495;
static PyCodeObject *codeobj_817865121e607fd8f73c4cbc4c1776b1;
static PyCodeObject *codeobj_11c2f6598f1cd3542fa8857782e4c386;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_71e25f25cc435e059f38340d20a05e7e;
    codeobj_17b23696c06ee82108281be8f695433d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 16, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a6268bd9b66017967f9b415be86f058 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 18, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d157a772ee68c0205ce77e777908d7b8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 17, const_tuple_str_plain_y_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a11ccda6d50ffd7ce209f18adda0e6d0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 19, const_tuple_str_plain_y_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0bd5715db431629dbe3d1b24ad2e4cd2 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 42, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9099f1d330817fd42490f50f321d5bbc = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 44, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ac97d485f16bb7e85d15f3207807592 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bd360cd4eda7b927ddcc5733d31ab2b4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a0fd27f80b93a1f509b76a1cc4c2c21d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readBase64FromFile, 64, const_tuple_str_plain_fileObj_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_764fca9cb6a6c2a604b407639553f495 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readBase64fromText, 57, const_tuple_str_plain_text_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_817865121e607fd8f73c4cbc4c1776b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readPemBlocksFromFile, 15, const_tuple_0ab244363f626258f6c1e7871520fda7_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_11c2f6598f1cd3542fa8857782e4c386 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readPemFromFile, 50, const_tuple_8636c7b5e503c0f34f180a31f45bb76d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile(  );


static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_4_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_2_readPemFromFile( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_3_readBase64fromText(  );


static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_4_readBase64FromFile(  );


// The module function definitions.
static PyObject *impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fileObj = python_pars[ 0 ];
    PyObject *par_markers = python_pars[ 1 ];
    PyObject *var_startMarkers = NULL;
    PyObject *var_stopMarkers = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_substrate = NULL;
    PyObject *var_certLines = NULL;
    PyObject *var_state = NULL;
    PyObject *var_certLine = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_817865121e607fd8f73c4cbc4c1776b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_0bd5715db431629dbe3d1b24ad2e4cd2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_9099f1d330817fd42490f50f321d5bbc_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_9099f1d330817fd42490f50f321d5bbc_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_817865121e607fd8f73c4cbc4c1776b1 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_817865121e607fd8f73c4cbc4c1776b1, codeobj_817865121e607fd8f73c4cbc4c1776b1, module_pyasn1_modules$pem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_817865121e607fd8f73c4cbc4c1776b1 = cache_frame_817865121e607fd8f73c4cbc4c1776b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_817865121e607fd8f73c4cbc4c1776b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_817865121e607fd8f73c4cbc4c1776b1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_1 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_1 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_1_lambda(  );



        tmp_called_name_2 = (PyObject *)&PyEnum_Type;
        tmp_called_name_3 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_4 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_2_lambda(  );



        CHECK_OBJECT( par_markers );
        tmp_args_element_name_5 = par_markers;
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 17;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 17;
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

            exception_lineno = 17;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_dict_seq_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = TO_DICT( tmp_dict_seq_1, NULL );
        Py_DECREF( tmp_dict_seq_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_startMarkers == NULL );
        var_startMarkers = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_seq_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_called_name_4 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_6 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_3_lambda(  );



        tmp_called_name_5 = (PyObject *)&PyEnum_Type;
        tmp_called_name_6 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_9 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_4_lambda(  );



        CHECK_OBJECT( par_markers );
        tmp_args_element_name_10 = par_markers;
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 19;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 19;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 18;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_dict_seq_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_dict_seq_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = TO_DICT( tmp_dict_seq_2, NULL );
        Py_DECREF( tmp_dict_seq_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_stopMarkers == NULL );
        var_stopMarkers = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_neg_1;
        assert( var_idx == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_idx = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_empty;
        assert( var_substrate == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_substrate = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New( 0 );
        assert( var_certLines == NULL );
        var_certLines = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stSpam );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stSpam );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stSpam" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_6 = tmp_mvar_value_1;
        assert( var_state == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_state = tmp_assign_source_6;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_fileObj );
        tmp_called_instance_1 = par_fileObj;
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 25;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readline );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_certLine;
            var_certLine = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_certLine );
        tmp_operand_name_1 = var_certLine;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_certLine );
        tmp_called_instance_2 = var_certLine;
        frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 28;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_certLine;
            assert( old != NULL );
            var_certLine = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        if ( var_state == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = var_state;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stSpam );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stSpam );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stSpam" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_key_name_1;
            PyObject *tmp_dict_name_1;
            CHECK_OBJECT( var_certLine );
            tmp_key_name_1 = var_certLine;
            CHECK_OBJECT( var_startMarkers );
            tmp_dict_name_1 = var_startMarkers;
            tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
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
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = PyList_New( 0 );
                {
                    PyObject *old = var_certLines;
                    assert( old != NULL );
                    var_certLines = tmp_assign_source_9;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_dict_name_2;
                PyObject *tmp_key_name_2;
                CHECK_OBJECT( var_startMarkers );
                tmp_dict_name_2 = var_startMarkers;
                CHECK_OBJECT( var_certLine );
                tmp_key_name_2 = var_certLine;
                tmp_assign_source_10 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_idx;
                    assert( old != NULL );
                    var_idx = tmp_assign_source_10;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stHam );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stHam );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stHam" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 33;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_11 = tmp_mvar_value_3;
                {
                    PyObject *old = var_state;
                    var_state = tmp_assign_source_11;
                    Py_INCREF( var_state );
                    Py_XDECREF( old );
                }

            }
            goto loop_start_1;
            branch_no_3:;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        if ( var_state == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_state;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stHam );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stHam );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stHam" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_4;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooooo";
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
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_key_name_3;
            PyObject *tmp_dict_name_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_dict_name_4;
            PyObject *tmp_key_name_4;
            CHECK_OBJECT( var_certLine );
            tmp_key_name_3 = var_certLine;
            CHECK_OBJECT( var_stopMarkers );
            tmp_dict_name_3 = var_stopMarkers;
            tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooooooooo";
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
            CHECK_OBJECT( var_stopMarkers );
            tmp_dict_name_4 = var_stopMarkers;
            CHECK_OBJECT( var_certLine );
            tmp_key_name_4 = var_certLine;
            tmp_compexpr_left_3 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_idx );
            tmp_compexpr_right_3 = var_idx;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 36;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_assign_source_12;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stDump );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stDump );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stDump" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 37;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assign_source_12 = tmp_mvar_value_5;
                {
                    PyObject *old = var_state;
                    var_state = tmp_assign_source_12;
                    Py_INCREF( var_state );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_11;
                CHECK_OBJECT( var_certLines );
                tmp_called_instance_3 = var_certLines;
                CHECK_OBJECT( var_certLine );
                tmp_args_element_name_11 = var_certLine;
                frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 39;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 39;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_mvar_value_6;
        if ( var_state == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "state" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_state;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stDump );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stDump );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stDump" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = tmp_mvar_value_6;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
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
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 41;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_7;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_2;
                PyObject *tmp_args_element_name_12;
                tmp_source_name_2 = const_str_empty;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
                assert( !(tmp_called_name_7 == NULL) );
                // Tried code:
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_iter_arg_1;
                    CHECK_OBJECT( var_certLines );
                    tmp_iter_arg_1 = var_certLines;
                    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
                    if ( tmp_assign_source_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 42;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    assert( tmp_listcomp_1__$0 == NULL );
                    tmp_listcomp_1__$0 = tmp_assign_source_14;
                }
                {
                    PyObject *tmp_assign_source_15;
                    tmp_assign_source_15 = PyList_New( 0 );
                    assert( tmp_listcomp_1__contraction == NULL );
                    tmp_listcomp_1__contraction = tmp_assign_source_15;
                }
                MAKE_OR_REUSE_FRAME( cache_frame_0bd5715db431629dbe3d1b24ad2e4cd2_2, codeobj_0bd5715db431629dbe3d1b24ad2e4cd2, module_pyasn1_modules$pem, sizeof(void *) );
                frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 = cache_frame_0bd5715db431629dbe3d1b24ad2e4cd2_2;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_2:;
                {
                    PyObject *tmp_next_source_1;
                    PyObject *tmp_assign_source_16;
                    CHECK_OBJECT( tmp_listcomp_1__$0 );
                    tmp_next_source_1 = tmp_listcomp_1__$0;
                    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_1 );
                    if ( tmp_assign_source_16 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_2;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "o";
                            exception_lineno = 42;
                            goto try_except_handler_3;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_1__iter_value_0;
                        tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_17;
                    CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                    tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
                    {
                        PyObject *old = outline_0_var_x;
                        outline_0_var_x = tmp_assign_source_17;
                        Py_INCREF( outline_0_var_x );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_1;
                    PyObject *tmp_append_value_1;
                    PyObject *tmp_called_instance_4;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_args_element_name_13;
                    CHECK_OBJECT( tmp_listcomp_1__contraction );
                    tmp_append_list_1 = tmp_listcomp_1__contraction;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_base64 );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto try_except_handler_3;
                    }

                    tmp_called_instance_4 = tmp_mvar_value_8;
                    CHECK_OBJECT( outline_0_var_x );
                    tmp_args_element_name_13 = outline_0_var_x;
                    frame_0bd5715db431629dbe3d1b24ad2e4cd2_2->m_frame.f_lineno = 42;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_13 };
                        tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_b64decode, call_args );
                    }

                    if ( tmp_append_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 42;
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


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto try_except_handler_3;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 42;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                goto loop_start_2;
                loop_end_2:;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_args_element_name_12 = tmp_listcomp_1__contraction;
                Py_INCREF( tmp_args_element_name_12 );
                goto try_return_handler_3;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
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
                RESTORE_FRAME_EXCEPTION( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_1;

                frame_return_exit_2:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_2;

                frame_exception_exit_2:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_0bd5715db431629dbe3d1b24ad2e4cd2_2->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_0bd5715db431629dbe3d1b24ad2e4cd2_2, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_0bd5715db431629dbe3d1b24ad2e4cd2_2,
                    type_description_2,
                    outline_0_var_x
                );


                // Release cached frame.
                if ( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 == cache_frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 )
                {
                    Py_DECREF( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 );
                }
                cache_frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 = NULL;

                assertFrameObject( frame_0bd5715db431629dbe3d1b24ad2e4cd2_2 );

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
                NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
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
                NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
                return NULL;
                outline_exception_1:;
                exception_lineno = 42;
                goto frame_exception_exit_1;
                outline_result_1:;
                frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 42;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12 };
                    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 42;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_substrate;
                    assert( old != NULL );
                    var_substrate = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_3;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_args_element_name_14;
                tmp_called_instance_5 = const_str_empty;
                frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 44;
                tmp_source_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_encode );
                if ( tmp_source_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
                Py_DECREF( tmp_source_name_3 );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_19;
                    PyObject *tmp_iter_arg_2;
                    CHECK_OBJECT( var_certLines );
                    tmp_iter_arg_2 = var_certLines;
                    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_2 );
                    if ( tmp_assign_source_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 44;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_4;
                    }
                    assert( tmp_listcomp_2__$0 == NULL );
                    tmp_listcomp_2__$0 = tmp_assign_source_19;
                }
                {
                    PyObject *tmp_assign_source_20;
                    tmp_assign_source_20 = PyList_New( 0 );
                    assert( tmp_listcomp_2__contraction == NULL );
                    tmp_listcomp_2__contraction = tmp_assign_source_20;
                }
                MAKE_OR_REUSE_FRAME( cache_frame_9099f1d330817fd42490f50f321d5bbc_3, codeobj_9099f1d330817fd42490f50f321d5bbc, module_pyasn1_modules$pem, sizeof(void *) );
                frame_9099f1d330817fd42490f50f321d5bbc_3 = cache_frame_9099f1d330817fd42490f50f321d5bbc_3;

                // Push the new frame as the currently active one.
                pushFrameStack( frame_9099f1d330817fd42490f50f321d5bbc_3 );

                // Mark the frame object as in use, ref count 1 will be up for reuse.
                assert( Py_REFCNT( frame_9099f1d330817fd42490f50f321d5bbc_3 ) == 2 ); // Frame stack

                // Framed code:
                // Tried code:
                loop_start_3:;
                {
                    PyObject *tmp_next_source_2;
                    PyObject *tmp_assign_source_21;
                    CHECK_OBJECT( tmp_listcomp_2__$0 );
                    tmp_next_source_2 = tmp_listcomp_2__$0;
                    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_2 );
                    if ( tmp_assign_source_21 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_3;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_2 = "o";
                            exception_lineno = 44;
                            goto try_except_handler_5;
                        }
                    }

                    {
                        PyObject *old = tmp_listcomp_2__iter_value_0;
                        tmp_listcomp_2__iter_value_0 = tmp_assign_source_21;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_22;
                    CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
                    tmp_assign_source_22 = tmp_listcomp_2__iter_value_0;
                    {
                        PyObject *old = outline_1_var_x;
                        outline_1_var_x = tmp_assign_source_22;
                        Py_INCREF( outline_1_var_x );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_append_list_2;
                    PyObject *tmp_append_value_2;
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_args_element_name_15;
                    PyObject *tmp_called_instance_6;
                    CHECK_OBJECT( tmp_listcomp_2__contraction );
                    tmp_append_list_2 = tmp_listcomp_2__contraction;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_base64 );

                    if (unlikely( tmp_mvar_value_9 == NULL ))
                    {
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
                    }

                    if ( tmp_mvar_value_9 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto try_except_handler_5;
                    }

                    tmp_source_name_4 = tmp_mvar_value_9;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_b64decode );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto try_except_handler_5;
                    }
                    CHECK_OBJECT( outline_1_var_x );
                    tmp_called_instance_6 = outline_1_var_x;
                    frame_9099f1d330817fd42490f50f321d5bbc_3->m_frame.f_lineno = 44;
                    tmp_args_element_name_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_encode );
                    if ( tmp_args_element_name_15 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto try_except_handler_5;
                    }
                    frame_9099f1d330817fd42490f50f321d5bbc_3->m_frame.f_lineno = 44;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_15 };
                        tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_element_name_15 );
                    if ( tmp_append_value_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 44;
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


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto try_except_handler_5;
                    }
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }
                goto loop_start_3;
                loop_end_3:;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_args_element_name_14 = tmp_listcomp_2__contraction;
                Py_INCREF( tmp_args_element_name_14 );
                goto try_return_handler_5;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
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
                RESTORE_FRAME_EXCEPTION( frame_9099f1d330817fd42490f50f321d5bbc_3 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto frame_no_exception_2;

                frame_return_exit_3:;
#if 0
                RESTORE_FRAME_EXCEPTION( frame_9099f1d330817fd42490f50f321d5bbc_3 );
#endif

                // Put the previous frame back on top.
                popFrameStack();

                goto try_return_handler_4;

                frame_exception_exit_3:;

#if 0
                RESTORE_FRAME_EXCEPTION( frame_9099f1d330817fd42490f50f321d5bbc_3 );
#endif

                if ( exception_tb == NULL )
                {
                    exception_tb = MAKE_TRACEBACK( frame_9099f1d330817fd42490f50f321d5bbc_3, exception_lineno );
                }
                else if ( exception_tb->tb_frame != &frame_9099f1d330817fd42490f50f321d5bbc_3->m_frame )
                {
                    exception_tb = ADD_TRACEBACK( exception_tb, frame_9099f1d330817fd42490f50f321d5bbc_3, exception_lineno );
                }

                // Attachs locals to frame if any.
                Nuitka_Frame_AttachLocals(
                    (struct Nuitka_FrameObject *)frame_9099f1d330817fd42490f50f321d5bbc_3,
                    type_description_2,
                    outline_1_var_x
                );


                // Release cached frame.
                if ( frame_9099f1d330817fd42490f50f321d5bbc_3 == cache_frame_9099f1d330817fd42490f50f321d5bbc_3 )
                {
                    Py_DECREF( frame_9099f1d330817fd42490f50f321d5bbc_3 );
                }
                cache_frame_9099f1d330817fd42490f50f321d5bbc_3 = NULL;

                assertFrameObject( frame_9099f1d330817fd42490f50f321d5bbc_3 );

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
                NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
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
                NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
                return NULL;
                outline_exception_2:;
                exception_lineno = 44;
                goto frame_exception_exit_1;
                outline_result_2:;
                frame_817865121e607fd8f73c4cbc4c1776b1->m_frame.f_lineno = 44;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14 };
                    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_14 );
                if ( tmp_assign_source_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 44;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_substrate;
                    assert( old != NULL );
                    var_substrate = tmp_assign_source_18;
                    Py_DECREF( old );
                }

            }
            branch_end_7:;
        }
        goto loop_end_1;
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_idx );
        tmp_tuple_element_1 = var_idx;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_substrate == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "substrate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_substrate;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_817865121e607fd8f73c4cbc4c1776b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_817865121e607fd8f73c4cbc4c1776b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_817865121e607fd8f73c4cbc4c1776b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_817865121e607fd8f73c4cbc4c1776b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_817865121e607fd8f73c4cbc4c1776b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_817865121e607fd8f73c4cbc4c1776b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_817865121e607fd8f73c4cbc4c1776b1,
        type_description_1,
        par_fileObj,
        par_markers,
        var_startMarkers,
        var_stopMarkers,
        var_idx,
        var_substrate,
        var_certLines,
        var_state,
        var_certLine
    );


    // Release cached frame.
    if ( frame_817865121e607fd8f73c4cbc4c1776b1 == cache_frame_817865121e607fd8f73c4cbc4c1776b1 )
    {
        Py_DECREF( frame_817865121e607fd8f73c4cbc4c1776b1 );
    }
    cache_frame_817865121e607fd8f73c4cbc4c1776b1 = NULL;

    assertFrameObject( frame_817865121e607fd8f73c4cbc4c1776b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fileObj );
    Py_DECREF( par_fileObj );
    par_fileObj = NULL;

    CHECK_OBJECT( (PyObject *)par_markers );
    Py_DECREF( par_markers );
    par_markers = NULL;

    CHECK_OBJECT( (PyObject *)var_startMarkers );
    Py_DECREF( var_startMarkers );
    var_startMarkers = NULL;

    CHECK_OBJECT( (PyObject *)var_stopMarkers );
    Py_DECREF( var_stopMarkers );
    var_stopMarkers = NULL;

    CHECK_OBJECT( (PyObject *)var_idx );
    Py_DECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_substrate );
    var_substrate = NULL;

    CHECK_OBJECT( (PyObject *)var_certLines );
    Py_DECREF( var_certLines );
    var_certLines = NULL;

    Py_XDECREF( var_state );
    var_state = NULL;

    CHECK_OBJECT( (PyObject *)var_certLine );
    Py_DECREF( var_certLine );
    var_certLine = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fileObj );
    Py_DECREF( par_fileObj );
    par_fileObj = NULL;

    CHECK_OBJECT( (PyObject *)par_markers );
    Py_DECREF( par_markers );
    par_markers = NULL;

    Py_XDECREF( var_startMarkers );
    var_startMarkers = NULL;

    Py_XDECREF( var_stopMarkers );
    var_stopMarkers = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    Py_XDECREF( var_substrate );
    var_substrate = NULL;

    Py_XDECREF( var_certLines );
    var_certLines = NULL;

    Py_XDECREF( var_state );
    var_state = NULL;

    Py_XDECREF( var_certLine );
    var_certLine = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile );
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


static PyObject *impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_17b23696c06ee82108281be8f695433d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_17b23696c06ee82108281be8f695433d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17b23696c06ee82108281be8f695433d, codeobj_17b23696c06ee82108281be8f695433d, module_pyasn1_modules$pem, sizeof(void *) );
    frame_17b23696c06ee82108281be8f695433d = cache_frame_17b23696c06ee82108281be8f695433d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17b23696c06ee82108281be8f695433d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17b23696c06ee82108281be8f695433d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_1 = par_x;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        tmp_subscript_name_2 = const_int_0;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17b23696c06ee82108281be8f695433d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_17b23696c06ee82108281be8f695433d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17b23696c06ee82108281be8f695433d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17b23696c06ee82108281be8f695433d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17b23696c06ee82108281be8f695433d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17b23696c06ee82108281be8f695433d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17b23696c06ee82108281be8f695433d,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_17b23696c06ee82108281be8f695433d == cache_frame_17b23696c06ee82108281be8f695433d )
    {
        Py_DECREF( frame_17b23696c06ee82108281be8f695433d );
    }
    cache_frame_17b23696c06ee82108281be8f695433d = NULL;

    assertFrameObject( frame_17b23696c06ee82108281be8f695433d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_1_lambda );
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
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_1_lambda );
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


static PyObject *impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d157a772ee68c0205ce77e777908d7b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d157a772ee68c0205ce77e777908d7b8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d157a772ee68c0205ce77e777908d7b8, codeobj_d157a772ee68c0205ce77e777908d7b8, module_pyasn1_modules$pem, sizeof(void *) );
    frame_d157a772ee68c0205ce77e777908d7b8 = cache_frame_d157a772ee68c0205ce77e777908d7b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d157a772ee68c0205ce77e777908d7b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d157a772ee68c0205ce77e777908d7b8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_1 = par_y;
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d157a772ee68c0205ce77e777908d7b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d157a772ee68c0205ce77e777908d7b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d157a772ee68c0205ce77e777908d7b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d157a772ee68c0205ce77e777908d7b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d157a772ee68c0205ce77e777908d7b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d157a772ee68c0205ce77e777908d7b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d157a772ee68c0205ce77e777908d7b8,
        type_description_1,
        par_y
    );


    // Release cached frame.
    if ( frame_d157a772ee68c0205ce77e777908d7b8 == cache_frame_d157a772ee68c0205ce77e777908d7b8 )
    {
        Py_DECREF( frame_d157a772ee68c0205ce77e777908d7b8 );
    }
    cache_frame_d157a772ee68c0205ce77e777908d7b8 = NULL;

    assertFrameObject( frame_d157a772ee68c0205ce77e777908d7b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_2_lambda );
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


static PyObject *impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3a6268bd9b66017967f9b415be86f058;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a6268bd9b66017967f9b415be86f058 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a6268bd9b66017967f9b415be86f058, codeobj_3a6268bd9b66017967f9b415be86f058, module_pyasn1_modules$pem, sizeof(void *) );
    frame_3a6268bd9b66017967f9b415be86f058 = cache_frame_3a6268bd9b66017967f9b415be86f058;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a6268bd9b66017967f9b415be86f058 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a6268bd9b66017967f9b415be86f058 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_1 = par_x;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        tmp_subscript_name_2 = const_int_0;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 18;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a6268bd9b66017967f9b415be86f058 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a6268bd9b66017967f9b415be86f058 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a6268bd9b66017967f9b415be86f058 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a6268bd9b66017967f9b415be86f058, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a6268bd9b66017967f9b415be86f058->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a6268bd9b66017967f9b415be86f058, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a6268bd9b66017967f9b415be86f058,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_3a6268bd9b66017967f9b415be86f058 == cache_frame_3a6268bd9b66017967f9b415be86f058 )
    {
        Py_DECREF( frame_3a6268bd9b66017967f9b415be86f058 );
    }
    cache_frame_3a6268bd9b66017967f9b415be86f058 = NULL;

    assertFrameObject( frame_3a6268bd9b66017967f9b415be86f058 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_3_lambda );
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
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_3_lambda );
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


static PyObject *impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_4_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a11ccda6d50ffd7ce209f18adda0e6d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a11ccda6d50ffd7ce209f18adda0e6d0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a11ccda6d50ffd7ce209f18adda0e6d0, codeobj_a11ccda6d50ffd7ce209f18adda0e6d0, module_pyasn1_modules$pem, sizeof(void *) );
    frame_a11ccda6d50ffd7ce209f18adda0e6d0 = cache_frame_a11ccda6d50ffd7ce209f18adda0e6d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a11ccda6d50ffd7ce209f18adda0e6d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a11ccda6d50ffd7ce209f18adda0e6d0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_1 = par_y;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a11ccda6d50ffd7ce209f18adda0e6d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a11ccda6d50ffd7ce209f18adda0e6d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a11ccda6d50ffd7ce209f18adda0e6d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a11ccda6d50ffd7ce209f18adda0e6d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a11ccda6d50ffd7ce209f18adda0e6d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a11ccda6d50ffd7ce209f18adda0e6d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a11ccda6d50ffd7ce209f18adda0e6d0,
        type_description_1,
        par_y
    );


    // Release cached frame.
    if ( frame_a11ccda6d50ffd7ce209f18adda0e6d0 == cache_frame_a11ccda6d50ffd7ce209f18adda0e6d0 )
    {
        Py_DECREF( frame_a11ccda6d50ffd7ce209f18adda0e6d0 );
    }
    cache_frame_a11ccda6d50ffd7ce209f18adda0e6d0 = NULL;

    assertFrameObject( frame_a11ccda6d50ffd7ce209f18adda0e6d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_4_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_4_lambda );
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


static PyObject *impl_pyasn1_modules$pem$$$function_2_readPemFromFile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fileObj = python_pars[ 0 ];
    PyObject *par_startMarker = python_pars[ 1 ];
    PyObject *par_endMarker = python_pars[ 2 ];
    PyObject *var_idx = NULL;
    PyObject *var_substrate = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_11c2f6598f1cd3542fa8857782e4c386;
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
    static struct Nuitka_FrameObject *cache_frame_11c2f6598f1cd3542fa8857782e4c386 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11c2f6598f1cd3542fa8857782e4c386, codeobj_11c2f6598f1cd3542fa8857782e4c386, module_pyasn1_modules$pem, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_11c2f6598f1cd3542fa8857782e4c386 = cache_frame_11c2f6598f1cd3542fa8857782e4c386;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11c2f6598f1cd3542fa8857782e4c386 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11c2f6598f1cd3542fa8857782e4c386 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_readPemBlocksFromFile );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_readPemBlocksFromFile );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "readPemBlocksFromFile" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fileObj );
        tmp_args_element_name_1 = par_fileObj;
        CHECK_OBJECT( par_startMarker );
        tmp_tuple_element_1 = par_startMarker;
        tmp_args_element_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_endMarker );
        tmp_tuple_element_1 = par_endMarker;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
        frame_11c2f6598f1cd3542fa8857782e4c386->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
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
            exception_lineno = 53;
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
            exception_lineno = 53;
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
                    exception_lineno = 53;
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
            exception_lineno = 53;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11c2f6598f1cd3542fa8857782e4c386 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11c2f6598f1cd3542fa8857782e4c386 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11c2f6598f1cd3542fa8857782e4c386, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11c2f6598f1cd3542fa8857782e4c386->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11c2f6598f1cd3542fa8857782e4c386, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11c2f6598f1cd3542fa8857782e4c386,
        type_description_1,
        par_fileObj,
        par_startMarker,
        par_endMarker,
        var_idx,
        var_substrate
    );


    // Release cached frame.
    if ( frame_11c2f6598f1cd3542fa8857782e4c386 == cache_frame_11c2f6598f1cd3542fa8857782e4c386 )
    {
        Py_DECREF( frame_11c2f6598f1cd3542fa8857782e4c386 );
    }
    cache_frame_11c2f6598f1cd3542fa8857782e4c386 = NULL;

    assertFrameObject( frame_11c2f6598f1cd3542fa8857782e4c386 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_idx == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_idx = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_substrate == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_substrate = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( var_substrate );
    tmp_return_value = var_substrate;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_2_readPemFromFile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fileObj );
    Py_DECREF( par_fileObj );
    par_fileObj = NULL;

    CHECK_OBJECT( (PyObject *)par_startMarker );
    Py_DECREF( par_startMarker );
    par_startMarker = NULL;

    CHECK_OBJECT( (PyObject *)par_endMarker );
    Py_DECREF( par_endMarker );
    par_endMarker = NULL;

    CHECK_OBJECT( (PyObject *)var_idx );
    Py_DECREF( var_idx );
    var_idx = NULL;

    CHECK_OBJECT( (PyObject *)var_substrate );
    Py_DECREF( var_substrate );
    var_substrate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fileObj );
    Py_DECREF( par_fileObj );
    par_fileObj = NULL;

    CHECK_OBJECT( (PyObject *)par_startMarker );
    Py_DECREF( par_startMarker );
    par_startMarker = NULL;

    CHECK_OBJECT( (PyObject *)par_endMarker );
    Py_DECREF( par_endMarker );
    par_endMarker = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_2_readPemFromFile );
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


static PyObject *impl_pyasn1_modules$pem$$$function_3_readBase64fromText( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_764fca9cb6a6c2a604b407639553f495;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_764fca9cb6a6c2a604b407639553f495 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_764fca9cb6a6c2a604b407639553f495, codeobj_764fca9cb6a6c2a604b407639553f495, module_pyasn1_modules$pem, sizeof(void *) );
    frame_764fca9cb6a6c2a604b407639553f495 = cache_frame_764fca9cb6a6c2a604b407639553f495;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_764fca9cb6a6c2a604b407639553f495 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_764fca9cb6a6c2a604b407639553f495 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_sys );

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

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
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
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_base64 );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 59;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_text );
            tmp_args_element_name_1 = par_text;
            frame_764fca9cb6a6c2a604b407639553f495->m_frame.f_lineno = 59;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_b64decode, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_base64 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 61;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_b64decode );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_text );
            tmp_called_instance_2 = par_text;
            frame_764fca9cb6a6c2a604b407639553f495->m_frame.f_lineno = 61;
            tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_encode );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 61;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_764fca9cb6a6c2a604b407639553f495->m_frame.f_lineno = 61;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_764fca9cb6a6c2a604b407639553f495 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_764fca9cb6a6c2a604b407639553f495 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_764fca9cb6a6c2a604b407639553f495 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_764fca9cb6a6c2a604b407639553f495, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_764fca9cb6a6c2a604b407639553f495->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_764fca9cb6a6c2a604b407639553f495, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_764fca9cb6a6c2a604b407639553f495,
        type_description_1,
        par_text
    );


    // Release cached frame.
    if ( frame_764fca9cb6a6c2a604b407639553f495 == cache_frame_764fca9cb6a6c2a604b407639553f495 )
    {
        Py_DECREF( frame_764fca9cb6a6c2a604b407639553f495 );
    }
    cache_frame_764fca9cb6a6c2a604b407639553f495 = NULL;

    assertFrameObject( frame_764fca9cb6a6c2a604b407639553f495 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_3_readBase64fromText );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

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

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_3_readBase64fromText );
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


static PyObject *impl_pyasn1_modules$pem$$$function_4_readBase64FromFile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fileObj = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a0fd27f80b93a1f509b76a1cc4c2c21d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0fd27f80b93a1f509b76a1cc4c2c21d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0fd27f80b93a1f509b76a1cc4c2c21d, codeobj_a0fd27f80b93a1f509b76a1cc4c2c21d, module_pyasn1_modules$pem, sizeof(void *) );
    frame_a0fd27f80b93a1f509b76a1cc4c2c21d = cache_frame_a0fd27f80b93a1f509b76a1cc4c2c21d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0fd27f80b93a1f509b76a1cc4c2c21d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0fd27f80b93a1f509b76a1cc4c2c21d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_readBase64fromText );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_readBase64fromText );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "readBase64fromText" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fileObj );
        tmp_called_instance_1 = par_fileObj;
        frame_a0fd27f80b93a1f509b76a1cc4c2c21d->m_frame.f_lineno = 65;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_read );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a0fd27f80b93a1f509b76a1cc4c2c21d->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0fd27f80b93a1f509b76a1cc4c2c21d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0fd27f80b93a1f509b76a1cc4c2c21d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0fd27f80b93a1f509b76a1cc4c2c21d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0fd27f80b93a1f509b76a1cc4c2c21d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0fd27f80b93a1f509b76a1cc4c2c21d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0fd27f80b93a1f509b76a1cc4c2c21d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0fd27f80b93a1f509b76a1cc4c2c21d,
        type_description_1,
        par_fileObj
    );


    // Release cached frame.
    if ( frame_a0fd27f80b93a1f509b76a1cc4c2c21d == cache_frame_a0fd27f80b93a1f509b76a1cc4c2c21d )
    {
        Py_DECREF( frame_a0fd27f80b93a1f509b76a1cc4c2c21d );
    }
    cache_frame_a0fd27f80b93a1f509b76a1cc4c2c21d = NULL;

    assertFrameObject( frame_a0fd27f80b93a1f509b76a1cc4c2c21d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_4_readBase64FromFile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fileObj );
    Py_DECREF( par_fileObj );
    par_fileObj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fileObj );
    Py_DECREF( par_fileObj );
    par_fileObj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1_modules$pem$$$function_4_readBase64FromFile );
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



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile,
        const_str_plain_readPemBlocksFromFile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_817865121e607fd8f73c4cbc4c1776b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_8c08dd6a507b5b0d5045a52c97cd2688,
#endif
        codeobj_17b23696c06ee82108281be8f695433d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_8c08dd6a507b5b0d5045a52c97cd2688,
#endif
        codeobj_d157a772ee68c0205ce77e777908d7b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_8c08dd6a507b5b0d5045a52c97cd2688,
#endif
        codeobj_3a6268bd9b66017967f9b415be86f058,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_4_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile$$$function_4_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_8c08dd6a507b5b0d5045a52c97cd2688,
#endif
        codeobj_a11ccda6d50ffd7ce209f18adda0e6d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_2_readPemFromFile( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_2_readPemFromFile,
        const_str_plain_readPemFromFile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_11c2f6598f1cd3542fa8857782e4c386,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_3_readBase64fromText(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_3_readBase64fromText,
        const_str_plain_readBase64fromText,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_764fca9cb6a6c2a604b407639553f495,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1_modules$pem$$$function_4_readBase64FromFile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1_modules$pem$$$function_4_readBase64FromFile,
        const_str_plain_readBase64FromFile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0fd27f80b93a1f509b76a1cc4c2c21d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1_modules$pem,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1_modules$pem =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1_modules.pem",
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
MOD_ENTRY_DECL(pyasn1_modules$pem)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(pyasn1_modules$pem)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1_modules$pem );
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
    puts("pyasn1_modules.pem: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1_modules.pem: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1_modules.pem: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1_modules$pem" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1_modules$pem = Py_InitModule4(
        "pyasn1_modules.pem",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1_modules$pem = PyModule_Create( &mdef_pyasn1_modules$pem );
#endif

    moduledict_pyasn1_modules$pem = MODULE_DICT( module_pyasn1_modules$pem );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyasn1_modules$pem,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1_modules$pem,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1_modules$pem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1_modules$pem,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1_modules$pem );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_08c6e40c84bf3e2940ed64abd2dd5a8d, module_pyasn1_modules$pem );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4ac97d485f16bb7e85d15f3207807592;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_71e25f25cc435e059f38340d20a05e7e;
        UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4ac97d485f16bb7e85d15f3207807592 = MAKE_MODULE_FRAME( codeobj_4ac97d485f16bb7e85d15f3207807592, module_pyasn1_modules$pem );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4ac97d485f16bb7e85d15f3207807592 );
    assert( Py_REFCNT( frame_4ac97d485f16bb7e85d15f3207807592 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_71e25f25cc435e059f38340d20a05e7e;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_base64;
        tmp_globals_name_1 = (PyObject *)moduledict_pyasn1_modules$pem;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_4ac97d485f16bb7e85d15f3207807592->m_frame.f_lineno = 7;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_base64, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_pyasn1_modules$pem;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_4ac97d485f16bb7e85d15f3207807592->m_frame.f_lineno = 8;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_int_0_int_pos_1_int_pos_2_tuple;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_6 == NULL) );
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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



            exception_lineno = 10;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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



            exception_lineno = 10;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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



            exception_lineno = 10;
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac97d485f16bb7e85d15f3207807592 );
#endif
    popFrameStack();

    assertFrameObject( frame_4ac97d485f16bb7e85d15f3207807592 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac97d485f16bb7e85d15f3207807592 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ac97d485f16bb7e85d15f3207807592, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ac97d485f16bb7e85d15f3207807592->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ac97d485f16bb7e85d15f3207807592, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stSpam, tmp_assign_source_10 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stHam, tmp_assign_source_11 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
        UPDATE_STRING_DICT0( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_stDump, tmp_assign_source_12 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_1_readPemBlocksFromFile(  );



        UPDATE_STRING_DICT1( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_readPemBlocksFromFile, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_e504843db9a11e2b19ec1da7d71d2333_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_14 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_2_readPemFromFile( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_readPemFromFile, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_3_readBase64fromText(  );



        UPDATE_STRING_DICT1( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_readBase64fromText, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_pyasn1_modules$pem$$$function_4_readBase64FromFile(  );



        UPDATE_STRING_DICT1( moduledict_pyasn1_modules$pem, (Nuitka_StringObject *)const_str_plain_readBase64FromFile, tmp_assign_source_16 );
    }

    return MOD_RETURN_VALUE( module_pyasn1_modules$pem );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
