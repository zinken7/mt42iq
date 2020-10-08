/* Generated code for Python module 'rsa.parallel'
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

/* The "_module_rsa$parallel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$parallel;
PyDictObject *moduledict_rsa$parallel;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_prime;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_str_plain_nbits_str_plain_pipe_str_plain_integer_tuple;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_pipe;
extern PyObject *const_str_plain_poolsize;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_1e4b6f6561674f4ddde9efbb7886bc96;
static PyObject *const_str_plain_terminate;
static PyObject *const_str_plain_procs;
static PyObject *const_dict_a4e9cc949514cefd5d2e68f5660af214;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_mp;
static PyObject *const_str_plain_Process;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_0;
static PyObject *const_str_plain_pipe_recv;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_target;
static PyObject *const_list_str_plain_getprime_list;
static PyObject *const_str_digest_32a783ca8e3a0c94067a8237d2c8c776;
static PyObject *const_tuple_str_plain___str_plain_nbits_str_plain_pipe_send_tuple;
extern PyObject *const_str_plain_randnum;
static PyObject *const_str_plain_pipe_send;
extern PyObject *const_tuple_str_plain_range_tuple;
static PyObject *const_str_digest_bbcff8cee42067105af91e6547635dbe;
extern PyObject *const_str_digest_eae335f7395ee2b175bb07ef24fa2bea;
static PyObject *const_str_plain_duplex;
static PyObject *const_str_digest_2b86c831a093e96b675d06065b6d8c21;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_nbits;
extern PyObject *const_str_plain_getprime;
static PyObject *const_str_plain_Pipe;
extern PyObject *const_str_plain_rsa;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_is_prime;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_read_random_odd_int;
extern PyObject *const_str_plain_recv;
static PyObject *const_str_plain_multiprocessing;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_digest_38ae76d41c37a561fb493fd3359762a3;
extern PyObject *const_str_plain_send;
static PyObject *const_str_plain__find_prime;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_80a4fbfb30bab2dc11755845a500384f;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_nbits_str_plain_pipe_str_plain_integer_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_pipe_str_plain_integer_tuple, 0, const_str_plain_nbits ); Py_INCREF( const_str_plain_nbits );
    const_str_plain_pipe = UNSTREAM_STRING_ASCII( &constant_bin[ 2733581 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_pipe_str_plain_integer_tuple, 1, const_str_plain_pipe ); Py_INCREF( const_str_plain_pipe );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_pipe_str_plain_integer_tuple, 2, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    const_str_digest_1e4b6f6561674f4ddde9efbb7886bc96 = UNSTREAM_STRING_ASCII( &constant_bin[ 2733585 ], 12, 0 );
    const_str_plain_terminate = UNSTREAM_STRING_ASCII( &constant_bin[ 48243 ], 9, 1 );
    const_str_plain_procs = UNSTREAM_STRING_ASCII( &constant_bin[ 2733597 ], 5, 1 );
    const_dict_a4e9cc949514cefd5d2e68f5660af214 = _PyDict_NewPresized( 1 );
    const_str_plain_duplex = UNSTREAM_STRING_ASCII( &constant_bin[ 2733602 ], 6, 1 );
    PyDict_SetItem( const_dict_a4e9cc949514cefd5d2e68f5660af214, const_str_plain_duplex, Py_False );
    assert( PyDict_Size( const_dict_a4e9cc949514cefd5d2e68f5660af214 ) == 1 );
    const_str_plain_mp = UNSTREAM_STRING_ASCII( &constant_bin[ 3199 ], 2, 1 );
    const_str_plain_Process = UNSTREAM_STRING_ASCII( &constant_bin[ 1509032 ], 7, 1 );
    const_str_plain_pipe_recv = UNSTREAM_STRING_ASCII( &constant_bin[ 2733608 ], 9, 1 );
    const_list_str_plain_getprime_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_getprime_list, 0, const_str_plain_getprime ); Py_INCREF( const_str_plain_getprime );
    const_str_digest_32a783ca8e3a0c94067a8237d2c8c776 = UNSTREAM_STRING_ASCII( &constant_bin[ 2733617 ], 341, 0 );
    const_tuple_str_plain___str_plain_nbits_str_plain_pipe_send_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain___str_plain_nbits_str_plain_pipe_send_tuple, 0, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_str_plain___str_plain_nbits_str_plain_pipe_send_tuple, 1, const_str_plain_nbits ); Py_INCREF( const_str_plain_nbits );
    const_str_plain_pipe_send = UNSTREAM_STRING_ASCII( &constant_bin[ 2733958 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain___str_plain_nbits_str_plain_pipe_send_tuple, 2, const_str_plain_pipe_send ); Py_INCREF( const_str_plain_pipe_send );
    const_str_digest_bbcff8cee42067105af91e6547635dbe = UNSTREAM_STRING_ASCII( &constant_bin[ 2733967 ], 132, 0 );
    const_str_digest_2b86c831a093e96b675d06065b6d8c21 = UNSTREAM_STRING_ASCII( &constant_bin[ 2734099 ], 43, 0 );
    const_str_plain_Pipe = UNSTREAM_STRING_ASCII( &constant_bin[ 2734142 ], 4, 1 );
    const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 0, const_str_plain_nbits ); Py_INCREF( const_str_plain_nbits );
    PyTuple_SET_ITEM( const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 1, const_str_plain_poolsize ); Py_INCREF( const_str_plain_poolsize );
    PyTuple_SET_ITEM( const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 2, const_str_plain_pipe_recv ); Py_INCREF( const_str_plain_pipe_recv );
    PyTuple_SET_ITEM( const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 3, const_str_plain_pipe_send ); Py_INCREF( const_str_plain_pipe_send );
    PyTuple_SET_ITEM( const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 4, const_str_plain_procs ); Py_INCREF( const_str_plain_procs );
    PyTuple_SET_ITEM( const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_multiprocessing = UNSTREAM_STRING_ASCII( &constant_bin[ 2460035 ], 15, 1 );
    const_str_plain__find_prime = UNSTREAM_STRING_ASCII( &constant_bin[ 2734146 ], 11, 1 );
    const_str_digest_80a4fbfb30bab2dc11755845a500384f = UNSTREAM_STRING_ASCII( &constant_bin[ 2734157 ], 21, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$parallel( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_30b82d7afc14ede6ae28f8d7fc6b5375;
static PyCodeObject *codeobj_e1a1c34801baa02981a50fa2137c7c57;
static PyCodeObject *codeobj_6c4318ea12b032c545417a76d743c723;
static PyCodeObject *codeobj_f3b602b7dc1bca598854b8f4ce1d0503;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2b86c831a093e96b675d06065b6d8c21;
    codeobj_30b82d7afc14ede6ae28f8d7fc6b5375 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 69, const_tuple_str_plain___str_plain_nbits_str_plain_pipe_send_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1a1c34801baa02981a50fa2137c7c57 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_80a4fbfb30bab2dc11755845a500384f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6c4318ea12b032c545417a76d743c723 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find_prime, 36, const_tuple_str_plain_nbits_str_plain_pipe_str_plain_integer_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f3b602b7dc1bca598854b8f4ce1d0503 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getprime, 46, const_tuple_9dcc7afe85099972d66a5d0a5dac3af0_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$parallel$$$function_1__find_prime(  );


static PyObject *MAKE_FUNCTION_rsa$parallel$$$function_2_getprime(  );


// The module function definitions.
static PyObject *impl_rsa$parallel$$$function_1__find_prime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nbits = python_pars[ 0 ];
    PyObject *par_pipe = python_pars[ 1 ];
    PyObject *var_integer = NULL;
    struct Nuitka_FrameObject *frame_6c4318ea12b032c545417a76d743c723;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c4318ea12b032c545417a76d743c723 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c4318ea12b032c545417a76d743c723, codeobj_6c4318ea12b032c545417a76d743c723, module_rsa$parallel, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c4318ea12b032c545417a76d743c723 = cache_frame_6c4318ea12b032c545417a76d743c723;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c4318ea12b032c545417a76d743c723 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c4318ea12b032c545417a76d743c723 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_rsa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsa" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_randnum );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_nbits );
        tmp_args_element_name_1 = par_nbits;
        frame_6c4318ea12b032c545417a76d743c723->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read_random_odd_int, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_integer;
            var_integer = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_rsa );

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

            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prime );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_integer );
        tmp_args_element_name_2 = var_integer;
        frame_6c4318ea12b032c545417a76d743c723->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_is_prime, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 41;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_pipe );
            tmp_called_instance_3 = par_pipe;
            CHECK_OBJECT( var_integer );
            tmp_args_element_name_3 = var_integer;
            frame_6c4318ea12b032c545417a76d743c723->m_frame.f_lineno = 42;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_send, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c4318ea12b032c545417a76d743c723 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c4318ea12b032c545417a76d743c723 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c4318ea12b032c545417a76d743c723 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c4318ea12b032c545417a76d743c723, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c4318ea12b032c545417a76d743c723->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c4318ea12b032c545417a76d743c723, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c4318ea12b032c545417a76d743c723,
        type_description_1,
        par_nbits,
        par_pipe,
        var_integer
    );


    // Release cached frame.
    if ( frame_6c4318ea12b032c545417a76d743c723 == cache_frame_6c4318ea12b032c545417a76d743c723 )
    {
        Py_DECREF( frame_6c4318ea12b032c545417a76d743c723 );
    }
    cache_frame_6c4318ea12b032c545417a76d743c723 = NULL;

    assertFrameObject( frame_6c4318ea12b032c545417a76d743c723 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_1__find_prime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    CHECK_OBJECT( (PyObject *)par_pipe );
    Py_DECREF( par_pipe );
    par_pipe = NULL;

    CHECK_OBJECT( (PyObject *)var_integer );
    Py_DECREF( var_integer );
    var_integer = NULL;

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

    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    CHECK_OBJECT( (PyObject *)par_pipe );
    Py_DECREF( par_pipe );
    par_pipe = NULL;

    Py_XDECREF( var_integer );
    var_integer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_1__find_prime );
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


static PyObject *impl_rsa$parallel$$$function_2_getprime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nbits = python_pars[ 0 ];
    PyObject *par_poolsize = python_pars[ 1 ];
    PyObject *var_pipe_recv = NULL;
    PyObject *var_pipe_send = NULL;
    PyObject *var_procs = NULL;
    PyObject *var_p = NULL;
    PyObject *var_result = NULL;
    PyObject *outline_0_var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f3b602b7dc1bca598854b8f4ce1d0503;
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
    struct Nuitka_FrameObject *frame_30b82d7afc14ede6ae28f8d7fc6b5375_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_f3b602b7dc1bca598854b8f4ce1d0503 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f3b602b7dc1bca598854b8f4ce1d0503, codeobj_f3b602b7dc1bca598854b8f4ce1d0503, module_rsa$parallel, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f3b602b7dc1bca598854b8f4ce1d0503 = cache_frame_f3b602b7dc1bca598854b8f4ce1d0503;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f3b602b7dc1bca598854b8f4ce1d0503 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f3b602b7dc1bca598854b8f4ce1d0503 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Pipe );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_a4e9cc949514cefd5d2e68f5660af214 );
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 65;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooo";
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


            type_description_1 = "ooooooo";
            exception_lineno = 65;
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


            type_description_1 = "ooooooo";
            exception_lineno = 65;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 65;
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

            type_description_1 = "ooooooo";
            exception_lineno = 65;
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
        assert( var_pipe_recv == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_pipe_recv = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_pipe_send == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_pipe_send = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_range );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "range" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 70;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_poolsize );
            tmp_args_element_name_1 = par_poolsize;
            frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_30b82d7afc14ede6ae28f8d7fc6b5375_2, codeobj_30b82d7afc14ede6ae28f8d7fc6b5375, module_rsa$parallel, sizeof(void *)+sizeof(void *)+sizeof(void *) );
        frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 = cache_frame_30b82d7afc14ede6ae28f8d7fc6b5375_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "ooo";
                    exception_lineno = 69;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_10 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var__;
                outline_0_var__ = tmp_assign_source_10;
                Py_INCREF( outline_0_var__ );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_mp );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mp" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Process );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
            tmp_dict_key_1 = const_str_plain_target;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain__find_prime );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__find_prime );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_find_prime" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }

            tmp_dict_value_1 = tmp_mvar_value_4;
            tmp_kw_name_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_args;
            CHECK_OBJECT( par_nbits );
            tmp_tuple_element_1 = par_nbits;
            tmp_dict_value_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dict_value_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_pipe_send );
            tmp_tuple_element_1 = var_pipe_send;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dict_value_2, 1, tmp_tuple_element_1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_30b82d7afc14ede6ae28f8d7fc6b5375_2->m_frame.f_lineno = 69;
            tmp_append_value_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_2 = "ooo";
                goto try_except_handler_6;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_2 = "ooo";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_6 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_6 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_2_getprime );
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

        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_30b82d7afc14ede6ae28f8d7fc6b5375_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_30b82d7afc14ede6ae28f8d7fc6b5375_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_30b82d7afc14ede6ae28f8d7fc6b5375_2,
            type_description_2,
            outline_0_var__,
            par_nbits,
            var_pipe_send
        );


        // Release cached frame.
        if ( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 == cache_frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 )
        {
            Py_DECREF( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 );
        }
        cache_frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 = NULL;

        assertFrameObject( frame_30b82d7afc14ede6ae28f8d7fc6b5375_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_2_getprime );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF( outline_0_var__ );
        outline_0_var__ = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var__ );
        outline_0_var__ = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_2_getprime );
        return NULL;
        outline_exception_1:;
        exception_lineno = 69;
        goto try_except_handler_4;
        outline_result_1:;
        assert( var_procs == NULL );
        var_procs = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( var_procs );
        tmp_iter_arg_3 = var_procs;
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 72;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_13;
            Py_INCREF( var_p );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_p );
        tmp_called_instance_1 = var_p;
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 73;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_start );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_pipe_recv );
        tmp_called_instance_2 = var_pipe_recv;
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 75;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_recv );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_14;
    }
    goto try_end_4;
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
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_f3b602b7dc1bca598854b8f4ce1d0503, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_f3b602b7dc1bca598854b8f4ce1d0503, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_pipe_recv );
        tmp_called_instance_3 = var_pipe_recv;
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 77;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( var_pipe_send );
        tmp_called_instance_4 = var_pipe_send;
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 78;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 68;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame) frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_2_getprime );
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
    try_end_4:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT( var_pipe_recv );
        tmp_called_instance_5 = var_pipe_recv;
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 77;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_close );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT( var_pipe_send );
        tmp_called_instance_6 = var_pipe_send;
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 78;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_close );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT( var_procs );
        tmp_iter_arg_4 = var_procs;
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_15;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_16 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 81;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_17 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_17;
            Py_INCREF( var_p );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT( var_p );
        tmp_called_instance_7 = var_p;
        frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame.f_lineno = 82;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_terminate );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3b602b7dc1bca598854b8f4ce1d0503 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3b602b7dc1bca598854b8f4ce1d0503 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f3b602b7dc1bca598854b8f4ce1d0503, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f3b602b7dc1bca598854b8f4ce1d0503->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f3b602b7dc1bca598854b8f4ce1d0503, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f3b602b7dc1bca598854b8f4ce1d0503,
        type_description_1,
        par_nbits,
        par_poolsize,
        var_pipe_recv,
        var_pipe_send,
        var_procs,
        var_p,
        var_result
    );


    // Release cached frame.
    if ( frame_f3b602b7dc1bca598854b8f4ce1d0503 == cache_frame_f3b602b7dc1bca598854b8f4ce1d0503 )
    {
        Py_DECREF( frame_f3b602b7dc1bca598854b8f4ce1d0503 );
    }
    cache_frame_f3b602b7dc1bca598854b8f4ce1d0503 = NULL;

    assertFrameObject( frame_f3b602b7dc1bca598854b8f4ce1d0503 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_2_getprime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    CHECK_OBJECT( (PyObject *)par_poolsize );
    Py_DECREF( par_poolsize );
    par_poolsize = NULL;

    CHECK_OBJECT( (PyObject *)var_pipe_recv );
    Py_DECREF( var_pipe_recv );
    var_pipe_recv = NULL;

    CHECK_OBJECT( (PyObject *)var_pipe_send );
    Py_DECREF( var_pipe_send );
    var_pipe_send = NULL;

    CHECK_OBJECT( (PyObject *)var_procs );
    Py_DECREF( var_procs );
    var_procs = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    CHECK_OBJECT( (PyObject *)par_poolsize );
    Py_DECREF( par_poolsize );
    par_poolsize = NULL;

    Py_XDECREF( var_pipe_recv );
    var_pipe_recv = NULL;

    Py_XDECREF( var_pipe_send );
    var_pipe_send = NULL;

    Py_XDECREF( var_procs );
    var_procs = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$parallel$$$function_2_getprime );
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



static PyObject *MAKE_FUNCTION_rsa$parallel$$$function_1__find_prime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$parallel$$$function_1__find_prime,
        const_str_plain__find_prime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6c4318ea12b032c545417a76d743c723,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$parallel,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$parallel$$$function_2_getprime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$parallel$$$function_2_getprime,
        const_str_plain_getprime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f3b602b7dc1bca598854b8f4ce1d0503,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$parallel,
        const_str_digest_32a783ca8e3a0c94067a8237d2c8c776,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$parallel =
{
    PyModuleDef_HEAD_INIT,
    "rsa.parallel",
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
MOD_ENTRY_DECL(rsa$parallel)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$parallel)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$parallel );
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
    puts("rsa.parallel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.parallel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.parallel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$parallel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$parallel = Py_InitModule4(
        "rsa.parallel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$parallel = PyModule_Create( &mdef_rsa$parallel );
#endif

    moduledict_rsa$parallel = MODULE_DICT( module_rsa$parallel );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$parallel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$parallel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$parallel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$parallel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$parallel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_1e4b6f6561674f4ddde9efbb7886bc96, module_rsa$parallel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e1a1c34801baa02981a50fa2137c7c57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_bbcff8cee42067105af91e6547635dbe;
        UPDATE_STRING_DICT0( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_2b86c831a093e96b675d06065b6d8c21;
        UPDATE_STRING_DICT0( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e1a1c34801baa02981a50fa2137c7c57 = MAKE_MODULE_FRAME( codeobj_e1a1c34801baa02981a50fa2137c7c57, module_rsa$parallel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e1a1c34801baa02981a50fa2137c7c57 );
    assert( Py_REFCNT( frame_e1a1c34801baa02981a50fa2137c7c57 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_2b86c831a093e96b675d06065b6d8c21;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_e1a1c34801baa02981a50fa2137c7c57->m_frame.f_lineno = 27;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_print_function );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_multiprocessing;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$parallel;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_e1a1c34801baa02981a50fa2137c7c57->m_frame.f_lineno = 29;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_mp, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_865e7095d477d90f1eead964158b0a6f;
        tmp_globals_name_2 = (PyObject *)moduledict_rsa$parallel;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_range_tuple;
        tmp_level_name_2 = const_int_0;
        frame_e1a1c34801baa02981a50fa2137c7c57->m_frame.f_lineno = 31;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_range );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_eae335f7395ee2b175bb07ef24fa2bea;
        tmp_globals_name_3 = (PyObject *)moduledict_rsa$parallel;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_e1a1c34801baa02981a50fa2137c7c57->m_frame.f_lineno = 32;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_rsa, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_38ae76d41c37a561fb493fd3359762a3;
        tmp_globals_name_4 = (PyObject *)moduledict_rsa$parallel;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_e1a1c34801baa02981a50fa2137c7c57->m_frame.f_lineno = 33;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_rsa, tmp_assign_source_8 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1a1c34801baa02981a50fa2137c7c57 );
#endif
    popFrameStack();

    assertFrameObject( frame_e1a1c34801baa02981a50fa2137c7c57 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1a1c34801baa02981a50fa2137c7c57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1a1c34801baa02981a50fa2137c7c57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1a1c34801baa02981a50fa2137c7c57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1a1c34801baa02981a50fa2137c7c57, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_rsa$parallel$$$function_1__find_prime(  );



        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain__find_prime, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_rsa$parallel$$$function_2_getprime(  );



        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain_getprime, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_str_plain_getprime_list );
        UPDATE_STRING_DICT1( moduledict_rsa$parallel, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }

    return MOD_RETURN_VALUE( module_rsa$parallel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
