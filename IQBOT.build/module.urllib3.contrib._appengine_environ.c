/* Generated code for Python module 'urllib3.contrib._appengine_environ'
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

/* The "_module_urllib3$contrib$_appengine_environ" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$contrib$_appengine_environ;
PyDictObject *moduledict_urllib3$contrib$_appengine_environ;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_true;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_SERVER_SOFTWARE;
static PyObject *const_str_digest_834f395e3a9af1a0987e03fdddc4066c;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_is_prod_appengine_mvms;
static PyObject *const_str_plain_is_appengine;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_f285ef7197a32a4b57cba83490cacb2e;
extern PyObject *const_str_digest_69842644472ec63a1714dd81a5a07a97;
extern PyObject *const_int_0;
static PyObject *const_str_digest_7208b452354e571df9395b5ae24d4c10;
extern PyObject *const_str_digest_899293462d3855f098cc8907b836b3af;
static PyObject *const_str_plain_is_prod_appengine;
static PyObject *const_str_digest_2b4862aa1a02e00d10388ac826d1bfd3;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_os;
static PyObject *const_tuple_str_plain_GAE_VM_false_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_APPENGINE_RUNTIME;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_GAE_VM;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_is_appengine_sandbox;
static PyObject *const_str_plain_is_local_appengine;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_834f395e3a9af1a0987e03fdddc4066c = UNSTREAM_STRING_ASCII( &constant_bin[ 2787958 ], 43, 0 );
    const_str_plain_is_prod_appengine_mvms = UNSTREAM_STRING_ASCII( &constant_bin[ 2788001 ], 22, 1 );
    const_str_plain_is_appengine = UNSTREAM_STRING_ASCII( &constant_bin[ 2788023 ], 12, 1 );
    const_str_digest_f285ef7197a32a4b57cba83490cacb2e = UNSTREAM_STRING_ASCII( &constant_bin[ 2787966 ], 34, 0 );
    const_str_digest_7208b452354e571df9395b5ae24d4c10 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788035 ], 65, 0 );
    const_str_plain_is_prod_appengine = UNSTREAM_STRING_ASCII( &constant_bin[ 2788001 ], 17, 1 );
    const_str_digest_2b4862aa1a02e00d10388ac826d1bfd3 = UNSTREAM_STRING_ASCII( &constant_bin[ 2788100 ], 66, 0 );
    const_tuple_str_plain_GAE_VM_false_tuple = PyTuple_New( 2 );
    const_str_plain_GAE_VM = UNSTREAM_STRING_ASCII( &constant_bin[ 2788166 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GAE_VM_false_tuple, 0, const_str_plain_GAE_VM ); Py_INCREF( const_str_plain_GAE_VM );
    PyTuple_SET_ITEM( const_tuple_str_plain_GAE_VM_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_plain_APPENGINE_RUNTIME = UNSTREAM_STRING_ASCII( &constant_bin[ 2788172 ], 17, 1 );
    const_str_plain_is_local_appengine = UNSTREAM_STRING_ASCII( &constant_bin[ 2788189 ], 18, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$contrib$_appengine_environ( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b639dff8c820bf5be1410d97384d0b65;
static PyCodeObject *codeobj_524783786b230e2dbaf8e202d892056e;
static PyCodeObject *codeobj_91646968c39d3db50f589058fbd92c66;
static PyCodeObject *codeobj_f5f462ac6884abc3c996f393168e20b8;
static PyCodeObject *codeobj_0530ceb9c6ae516eb545229187f9765c;
static PyCodeObject *codeobj_411e7faa610ab4dfa1fbd06407d4323b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7208b452354e571df9395b5ae24d4c10;
    codeobj_b639dff8c820bf5be1410d97384d0b65 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_834f395e3a9af1a0987e03fdddc4066c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_524783786b230e2dbaf8e202d892056e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_appengine, 8, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_91646968c39d3db50f589058fbd92c66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_appengine_sandbox, 14, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f5f462ac6884abc3c996f393168e20b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_local_appengine, 18, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0530ceb9c6ae516eb545229187f9765c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_prod_appengine, 23, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_411e7faa610ab4dfa1fbd06407d4323b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_prod_appengine_mvms, 29, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_1_is_appengine(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms(  );


// The module function definitions.
static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_1_is_appengine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_524783786b230e2dbaf8e202d892056e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_524783786b230e2dbaf8e202d892056e = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_524783786b230e2dbaf8e202d892056e, codeobj_524783786b230e2dbaf8e202d892056e, module_urllib3$contrib$_appengine_environ, 0 );
    frame_524783786b230e2dbaf8e202d892056e = cache_frame_524783786b230e2dbaf8e202d892056e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_524783786b230e2dbaf8e202d892056e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_524783786b230e2dbaf8e202d892056e ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_local_appengine );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_local_appengine );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_local_appengine" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_524783786b230e2dbaf8e202d892056e->m_frame.f_lineno = 9;
        tmp_or_left_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 11;

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
        Py_DECREF( tmp_or_left_value_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_prod_appengine );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_prod_appengine" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_524783786b230e2dbaf8e202d892056e->m_frame.f_lineno = 10;
        tmp_or_left_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_or_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 11;

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
        Py_DECREF( tmp_or_left_value_2 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_prod_appengine_mvms" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        frame_524783786b230e2dbaf8e202d892056e->m_frame.f_lineno = 11;
        tmp_or_right_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        if ( tmp_or_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_524783786b230e2dbaf8e202d892056e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_524783786b230e2dbaf8e202d892056e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_524783786b230e2dbaf8e202d892056e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_524783786b230e2dbaf8e202d892056e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_524783786b230e2dbaf8e202d892056e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_524783786b230e2dbaf8e202d892056e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_524783786b230e2dbaf8e202d892056e,
        type_description_1
    );


    // Release cached frame.
    if ( frame_524783786b230e2dbaf8e202d892056e == cache_frame_524783786b230e2dbaf8e202d892056e )
    {
        Py_DECREF( frame_524783786b230e2dbaf8e202d892056e );
    }
    cache_frame_524783786b230e2dbaf8e202d892056e = NULL;

    assertFrameObject( frame_524783786b230e2dbaf8e202d892056e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_1_is_appengine );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_91646968c39d3db50f589058fbd92c66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_91646968c39d3db50f589058fbd92c66 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_91646968c39d3db50f589058fbd92c66, codeobj_91646968c39d3db50f589058fbd92c66, module_urllib3$contrib$_appengine_environ, 0 );
    frame_91646968c39d3db50f589058fbd92c66 = cache_frame_91646968c39d3db50f589058fbd92c66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_91646968c39d3db50f589058fbd92c66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_91646968c39d3db50f589058fbd92c66 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_appengine );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_appengine" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_91646968c39d3db50f589058fbd92c66->m_frame.f_lineno = 15;
        tmp_and_left_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 15;

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
        Py_DECREF( tmp_and_left_value_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_prod_appengine_mvms" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_91646968c39d3db50f589058fbd92c66->m_frame.f_lineno = 15;
        tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_and_right_value_1 );
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91646968c39d3db50f589058fbd92c66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_91646968c39d3db50f589058fbd92c66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91646968c39d3db50f589058fbd92c66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_91646968c39d3db50f589058fbd92c66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_91646968c39d3db50f589058fbd92c66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_91646968c39d3db50f589058fbd92c66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_91646968c39d3db50f589058fbd92c66,
        type_description_1
    );


    // Release cached frame.
    if ( frame_91646968c39d3db50f589058fbd92c66 == cache_frame_91646968c39d3db50f589058fbd92c66 )
    {
        Py_DECREF( frame_91646968c39d3db50f589058fbd92c66 );
    }
    cache_frame_91646968c39d3db50f589058fbd92c66 = NULL;

    assertFrameObject( frame_91646968c39d3db50f589058fbd92c66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f5f462ac6884abc3c996f393168e20b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f5f462ac6884abc3c996f393168e20b8 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_f5f462ac6884abc3c996f393168e20b8, codeobj_f5f462ac6884abc3c996f393168e20b8, module_urllib3$contrib$_appengine_environ, 0 );
    frame_f5f462ac6884abc3c996f393168e20b8 = cache_frame_f5f462ac6884abc3c996f393168e20b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f5f462ac6884abc3c996f393168e20b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f5f462ac6884abc3c996f393168e20b8 ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        tmp_compexpr_left_1 = const_str_plain_APPENGINE_RUNTIME;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

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

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_compexpr_left_2 = const_str_digest_69842644472ec63a1714dd81a5a07a97;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_environ );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_SERVER_SOFTWARE;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5f462ac6884abc3c996f393168e20b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5f462ac6884abc3c996f393168e20b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5f462ac6884abc3c996f393168e20b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5f462ac6884abc3c996f393168e20b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5f462ac6884abc3c996f393168e20b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5f462ac6884abc3c996f393168e20b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5f462ac6884abc3c996f393168e20b8,
        type_description_1
    );


    // Release cached frame.
    if ( frame_f5f462ac6884abc3c996f393168e20b8 == cache_frame_f5f462ac6884abc3c996f393168e20b8 )
    {
        Py_DECREF( frame_f5f462ac6884abc3c996f393168e20b8 );
    }
    cache_frame_f5f462ac6884abc3c996f393168e20b8 = NULL;

    assertFrameObject( frame_f5f462ac6884abc3c996f393168e20b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0530ceb9c6ae516eb545229187f9765c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0530ceb9c6ae516eb545229187f9765c = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_0530ceb9c6ae516eb545229187f9765c, codeobj_0530ceb9c6ae516eb545229187f9765c, module_urllib3$contrib$_appengine_environ, 0 );
    frame_0530ceb9c6ae516eb545229187f9765c = cache_frame_0530ceb9c6ae516eb545229187f9765c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0530ceb9c6ae516eb545229187f9765c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0530ceb9c6ae516eb545229187f9765c ) == 2 ); // Frame stack

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_1 = const_str_plain_APPENGINE_RUNTIME;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

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

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_compexpr_left_2 = const_str_digest_899293462d3855f098cc8907b836b3af;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_environ );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_SERVER_SOFTWARE;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_prod_appengine_mvms" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_3;
        frame_0530ceb9c6ae516eb545229187f9765c->m_frame.f_lineno = 26;
        tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0530ceb9c6ae516eb545229187f9765c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0530ceb9c6ae516eb545229187f9765c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0530ceb9c6ae516eb545229187f9765c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0530ceb9c6ae516eb545229187f9765c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0530ceb9c6ae516eb545229187f9765c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0530ceb9c6ae516eb545229187f9765c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0530ceb9c6ae516eb545229187f9765c,
        type_description_1
    );


    // Release cached frame.
    if ( frame_0530ceb9c6ae516eb545229187f9765c == cache_frame_0530ceb9c6ae516eb545229187f9765c )
    {
        Py_DECREF( frame_0530ceb9c6ae516eb545229187f9765c );
    }
    cache_frame_0530ceb9c6ae516eb545229187f9765c = NULL;

    assertFrameObject( frame_0530ceb9c6ae516eb545229187f9765c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine );
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


static PyObject *impl_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_411e7faa610ab4dfa1fbd06407d4323b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_411e7faa610ab4dfa1fbd06407d4323b = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_411e7faa610ab4dfa1fbd06407d4323b, codeobj_411e7faa610ab4dfa1fbd06407d4323b, module_urllib3$contrib$_appengine_environ, 0 );
    frame_411e7faa610ab4dfa1fbd06407d4323b = cache_frame_411e7faa610ab4dfa1fbd06407d4323b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_411e7faa610ab4dfa1fbd06407d4323b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_411e7faa610ab4dfa1fbd06407d4323b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os );

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

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_411e7faa610ab4dfa1fbd06407d4323b->m_frame.f_lineno = 30;
        tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_GAE_VM_false_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_true;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_411e7faa610ab4dfa1fbd06407d4323b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_411e7faa610ab4dfa1fbd06407d4323b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_411e7faa610ab4dfa1fbd06407d4323b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_411e7faa610ab4dfa1fbd06407d4323b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_411e7faa610ab4dfa1fbd06407d4323b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_411e7faa610ab4dfa1fbd06407d4323b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_411e7faa610ab4dfa1fbd06407d4323b,
        type_description_1
    );


    // Release cached frame.
    if ( frame_411e7faa610ab4dfa1fbd06407d4323b == cache_frame_411e7faa610ab4dfa1fbd06407d4323b )
    {
        Py_DECREF( frame_411e7faa610ab4dfa1fbd06407d4323b );
    }
    cache_frame_411e7faa610ab4dfa1fbd06407d4323b = NULL;

    assertFrameObject( frame_411e7faa610ab4dfa1fbd06407d4323b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms );
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



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_1_is_appengine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_1_is_appengine,
        const_str_plain_is_appengine,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_524783786b230e2dbaf8e202d892056e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$_appengine_environ,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox,
        const_str_plain_is_appengine_sandbox,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_91646968c39d3db50f589058fbd92c66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$_appengine_environ,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine,
        const_str_plain_is_local_appengine,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f5f462ac6884abc3c996f393168e20b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$_appengine_environ,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine,
        const_str_plain_is_prod_appengine,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0530ceb9c6ae516eb545229187f9765c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$_appengine_environ,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms,
        const_str_plain_is_prod_appengine_mvms,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_411e7faa610ab4dfa1fbd06407d4323b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$_appengine_environ,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$contrib$_appengine_environ =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.contrib._appengine_environ",
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
MOD_ENTRY_DECL(urllib3$contrib$_appengine_environ)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(urllib3$contrib$_appengine_environ)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$contrib$_appengine_environ );
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
    puts("urllib3.contrib._appengine_environ: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib._appengine_environ: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib._appengine_environ: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$contrib$_appengine_environ" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$contrib$_appengine_environ = Py_InitModule4(
        "urllib3.contrib._appengine_environ",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$contrib$_appengine_environ = PyModule_Create( &mdef_urllib3$contrib$_appengine_environ );
#endif

    moduledict_urllib3$contrib$_appengine_environ = MODULE_DICT( module_urllib3$contrib$_appengine_environ );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_urllib3$contrib$_appengine_environ,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$contrib$_appengine_environ,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$_appengine_environ,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$_appengine_environ,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$contrib$_appengine_environ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_f285ef7197a32a4b57cba83490cacb2e, module_urllib3$contrib$_appengine_environ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b639dff8c820bf5be1410d97384d0b65;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_2b4862aa1a02e00d10388ac826d1bfd3;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_7208b452354e571df9395b5ae24d4c10;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b639dff8c820bf5be1410d97384d0b65 = MAKE_MODULE_FRAME( codeobj_b639dff8c820bf5be1410d97384d0b65, module_urllib3$contrib$_appengine_environ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b639dff8c820bf5be1410d97384d0b65 );
    assert( Py_REFCNT( frame_b639dff8c820bf5be1410d97384d0b65 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_7208b452354e571df9395b5ae24d4c10;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$_appengine_environ;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_b639dff8c820bf5be1410d97384d0b65->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b639dff8c820bf5be1410d97384d0b65 );
#endif
    popFrameStack();

    assertFrameObject( frame_b639dff8c820bf5be1410d97384d0b65 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b639dff8c820bf5be1410d97384d0b65 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b639dff8c820bf5be1410d97384d0b65, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b639dff8c820bf5be1410d97384d0b65->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b639dff8c820bf5be1410d97384d0b65, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_1_is_appengine(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_2_is_appengine_sandbox(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_appengine_sandbox, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_3_is_local_appengine(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_local_appengine, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_4_is_prod_appengine(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_urllib3$contrib$_appengine_environ$$$function_5_is_prod_appengine_mvms(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$_appengine_environ, (Nuitka_StringObject *)const_str_plain_is_prod_appengine_mvms, tmp_assign_source_9 );
    }

    return MOD_RETURN_VALUE( module_urllib3$contrib$_appengine_environ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
