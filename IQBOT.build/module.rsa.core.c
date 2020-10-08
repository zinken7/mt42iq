/* Generated code for Python module 'rsa.core'
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

/* The "_module_rsa$core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$core;
PyDictObject *moduledict_rsa$core;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_is_integer_tuple;
extern PyObject *const_str_plain_var;
static PyObject *const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple;
static PyObject *const_str_digest_0bbed2a9507b54b5428613b88a005787;
extern PyObject *const_str_plain_decrypt_int;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_ekey;
extern PyObject *const_str_plain_is_integer;
static PyObject *const_tuple_str_plain_var_str_plain_name_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_657a529c70c4f51d8665d77ec28e0635;
static PyObject *const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple;
static PyObject *const_str_digest_6ffa01082e57cae8da1ce4750e9afb65;
extern PyObject *const_str_plain_pow;
extern PyObject *const_int_0;
static PyObject *const_str_digest_823dc7392d217ac8d54d878c27819303;
extern PyObject *const_str_plain_encrypt_int;
extern PyObject *const_str_digest_a899a62361d9cc42adab5d09beed3c11;
static PyObject *const_str_plain_assert_int;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_5298abc39e77bfd31d069aecbbe5e8e2;
static PyObject *const_str_plain_cyphertext;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_2f13592eab59235e4783de3c59391ed7;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e;
static PyObject *const_str_plain_dkey;
static PyObject *const_str_digest_4a8fded047fc28b14705ebfa0682e947;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_is_integer_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_integer_tuple, 0, const_str_plain_is_integer ); Py_INCREF( const_str_plain_is_integer );
    const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple, 0, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_plain_ekey = UNSTREAM_STRING_ASCII( &constant_bin[ 453257 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple, 1, const_str_plain_ekey ); Py_INCREF( const_str_plain_ekey );
    PyTuple_SET_ITEM( const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_0bbed2a9507b54b5428613b88a005787 = UNSTREAM_STRING_ASCII( &constant_bin[ 2720567 ], 17, 0 );
    const_tuple_str_plain_var_str_plain_name_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_var_str_plain_name_tuple, 0, const_str_plain_var ); Py_INCREF( const_str_plain_var );
    PyTuple_SET_ITEM( const_tuple_str_plain_var_str_plain_name_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_digest_657a529c70c4f51d8665d77ec28e0635 = UNSTREAM_STRING_ASCII( &constant_bin[ 2720584 ], 64, 0 );
    const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple = PyTuple_New( 4 );
    const_str_plain_cyphertext = UNSTREAM_STRING_ASCII( &constant_bin[ 2720648 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple, 0, const_str_plain_cyphertext ); Py_INCREF( const_str_plain_cyphertext );
    const_str_plain_dkey = UNSTREAM_STRING_ASCII( &constant_bin[ 664567 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple, 1, const_str_plain_dkey ); Py_INCREF( const_str_plain_dkey );
    PyTuple_SET_ITEM( const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_6ffa01082e57cae8da1ce4750e9afb65 = UNSTREAM_STRING_ASCII( &constant_bin[ 2720658 ], 39, 0 );
    const_str_digest_823dc7392d217ac8d54d878c27819303 = UNSTREAM_STRING_ASCII( &constant_bin[ 2720697 ], 72, 0 );
    const_str_plain_assert_int = UNSTREAM_STRING_ASCII( &constant_bin[ 2720769 ], 10, 1 );
    const_str_digest_5298abc39e77bfd31d069aecbbe5e8e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 2720779 ], 39, 0 );
    const_str_digest_2f13592eab59235e4783de3c59391ed7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2720818 ], 35, 0 );
    const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e = UNSTREAM_STRING_ASCII( &constant_bin[ 2720853 ], 31, 0 );
    const_str_digest_4a8fded047fc28b14705ebfa0682e947 = UNSTREAM_STRING_ASCII( &constant_bin[ 2720884 ], 125, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$core( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_710a3b2c56035505bf7e254671b340fe;
static PyCodeObject *codeobj_cf64cb7ee1a4850d614acc096f39f3ab;
static PyCodeObject *codeobj_1433c12ced0ea51617d7ecfb66245670;
static PyCodeObject *codeobj_71d3b93c5796f26f175664d1b10fbc76;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5298abc39e77bfd31d069aecbbe5e8e2;
    codeobj_710a3b2c56035505bf7e254671b340fe = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0bbed2a9507b54b5428613b88a005787, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_cf64cb7ee1a4850d614acc096f39f3ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_assert_int, 26, const_tuple_str_plain_var_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1433c12ced0ea51617d7ecfb66245670 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decrypt_int, 49, const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_71d3b93c5796f26f175664d1b10fbc76 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encrypt_int, 33, const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$core$$$function_1_assert_int(  );


static PyObject *MAKE_FUNCTION_rsa$core$$$function_2_encrypt_int(  );


static PyObject *MAKE_FUNCTION_rsa$core$$$function_3_decrypt_int(  );


// The module function definitions.
static PyObject *impl_rsa$core$$$function_1_assert_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_var = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_cf64cb7ee1a4850d614acc096f39f3ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf64cb7ee1a4850d614acc096f39f3ab = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf64cb7ee1a4850d614acc096f39f3ab, codeobj_cf64cb7ee1a4850d614acc096f39f3ab, module_rsa$core, sizeof(void *)+sizeof(void *) );
    frame_cf64cb7ee1a4850d614acc096f39f3ab = cache_frame_cf64cb7ee1a4850d614acc096f39f3ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf64cb7ee1a4850d614acc096f39f3ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf64cb7ee1a4850d614acc096f39f3ab ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_is_integer );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_integer );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_integer" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_var );
        tmp_args_element_name_1 = par_var;
        frame_cf64cb7ee1a4850d614acc096f39f3ab->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 27;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        tmp_left_name_1 = const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_var );
        tmp_source_name_1 = par_var;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_make_exception_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cf64cb7ee1a4850d614acc096f39f3ab->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
        }

        Py_DECREF( tmp_make_exception_arg_1 );
        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 30;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf64cb7ee1a4850d614acc096f39f3ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf64cb7ee1a4850d614acc096f39f3ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf64cb7ee1a4850d614acc096f39f3ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf64cb7ee1a4850d614acc096f39f3ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf64cb7ee1a4850d614acc096f39f3ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf64cb7ee1a4850d614acc096f39f3ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf64cb7ee1a4850d614acc096f39f3ab,
        type_description_1,
        par_var,
        par_name
    );


    // Release cached frame.
    if ( frame_cf64cb7ee1a4850d614acc096f39f3ab == cache_frame_cf64cb7ee1a4850d614acc096f39f3ab )
    {
        Py_DECREF( frame_cf64cb7ee1a4850d614acc096f39f3ab );
    }
    cache_frame_cf64cb7ee1a4850d614acc096f39f3ab = NULL;

    assertFrameObject( frame_cf64cb7ee1a4850d614acc096f39f3ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$core$$$function_1_assert_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_var );
    Py_DECREF( par_var );
    par_var = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_var );
    Py_DECREF( par_var );
    par_var = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$core$$$function_1_assert_int );
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


static PyObject *impl_rsa$core$$$function_2_encrypt_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *par_ekey = python_pars[ 1 ];
    PyObject *par_n = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_71d3b93c5796f26f175664d1b10fbc76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_71d3b93c5796f26f175664d1b10fbc76 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71d3b93c5796f26f175664d1b10fbc76, codeobj_71d3b93c5796f26f175664d1b10fbc76, module_rsa$core, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_71d3b93c5796f26f175664d1b10fbc76 = cache_frame_71d3b93c5796f26f175664d1b10fbc76;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71d3b93c5796f26f175664d1b10fbc76 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71d3b93c5796f26f175664d1b10fbc76 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_assert_int );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_int );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "assert_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_message );
        tmp_args_element_name_1 = par_message;
        tmp_args_element_name_2 = const_str_plain_message;
        frame_71d3b93c5796f26f175664d1b10fbc76->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_assert_int );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_int );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "assert_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_ekey );
        tmp_args_element_name_3 = par_ekey;
        tmp_args_element_name_4 = const_str_plain_ekey;
        frame_71d3b93c5796f26f175664d1b10fbc76->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_assert_int );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_int );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "assert_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        tmp_args_element_name_6 = const_str_plain_n;
        frame_71d3b93c5796f26f175664d1b10fbc76->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_message );
        tmp_compexpr_left_1 = par_message;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooo";
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
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_6ffa01082e57cae8da1ce4750e9afb65;
            frame_71d3b93c5796f26f175664d1b10fbc76->m_frame.f_lineno = 41;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 41;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_message );
        tmp_compexpr_left_2 = par_message;
        CHECK_OBJECT( par_n );
        tmp_compexpr_right_2 = par_n;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_1 = const_str_digest_2f13592eab59235e4783de3c59391ed7;
            CHECK_OBJECT( par_message );
            tmp_tuple_element_1 = par_message;
            tmp_right_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_n );
            tmp_tuple_element_1 = par_n;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_71d3b93c5796f26f175664d1b10fbc76->m_frame.f_lineno = 44;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_OverflowError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 44;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_pow );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( par_message );
        tmp_args_element_name_7 = par_message;
        CHECK_OBJECT( par_ekey );
        tmp_args_element_name_8 = par_ekey;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_9 = par_n;
        frame_71d3b93c5796f26f175664d1b10fbc76->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71d3b93c5796f26f175664d1b10fbc76 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_71d3b93c5796f26f175664d1b10fbc76 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71d3b93c5796f26f175664d1b10fbc76 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71d3b93c5796f26f175664d1b10fbc76, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71d3b93c5796f26f175664d1b10fbc76->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71d3b93c5796f26f175664d1b10fbc76, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71d3b93c5796f26f175664d1b10fbc76,
        type_description_1,
        par_message,
        par_ekey,
        par_n
    );


    // Release cached frame.
    if ( frame_71d3b93c5796f26f175664d1b10fbc76 == cache_frame_71d3b93c5796f26f175664d1b10fbc76 )
    {
        Py_DECREF( frame_71d3b93c5796f26f175664d1b10fbc76 );
    }
    cache_frame_71d3b93c5796f26f175664d1b10fbc76 = NULL;

    assertFrameObject( frame_71d3b93c5796f26f175664d1b10fbc76 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$core$$$function_2_encrypt_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_ekey );
    Py_DECREF( par_ekey );
    par_ekey = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_message );
    Py_DECREF( par_message );
    par_message = NULL;

    CHECK_OBJECT( (PyObject *)par_ekey );
    Py_DECREF( par_ekey );
    par_ekey = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$core$$$function_2_encrypt_int );
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


static PyObject *impl_rsa$core$$$function_3_decrypt_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cyphertext = python_pars[ 0 ];
    PyObject *par_dkey = python_pars[ 1 ];
    PyObject *par_n = python_pars[ 2 ];
    PyObject *var_message = NULL;
    struct Nuitka_FrameObject *frame_1433c12ced0ea51617d7ecfb66245670;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1433c12ced0ea51617d7ecfb66245670 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1433c12ced0ea51617d7ecfb66245670, codeobj_1433c12ced0ea51617d7ecfb66245670, module_rsa$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1433c12ced0ea51617d7ecfb66245670 = cache_frame_1433c12ced0ea51617d7ecfb66245670;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1433c12ced0ea51617d7ecfb66245670 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1433c12ced0ea51617d7ecfb66245670 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_assert_int );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_int );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "assert_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_cyphertext );
        tmp_args_element_name_1 = par_cyphertext;
        tmp_args_element_name_2 = const_str_plain_cyphertext;
        frame_1433c12ced0ea51617d7ecfb66245670->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_assert_int );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_int );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "assert_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_dkey );
        tmp_args_element_name_3 = par_dkey;
        tmp_args_element_name_4 = const_str_plain_dkey;
        frame_1433c12ced0ea51617d7ecfb66245670->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_assert_int );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_int );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "assert_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        tmp_args_element_name_6 = const_str_plain_n;
        frame_1433c12ced0ea51617d7ecfb66245670->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_pow );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( par_cyphertext );
        tmp_args_element_name_7 = par_cyphertext;
        CHECK_OBJECT( par_dkey );
        tmp_args_element_name_8 = par_dkey;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_9 = par_n;
        frame_1433c12ced0ea51617d7ecfb66245670->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_message == NULL );
        var_message = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1433c12ced0ea51617d7ecfb66245670 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1433c12ced0ea51617d7ecfb66245670 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1433c12ced0ea51617d7ecfb66245670, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1433c12ced0ea51617d7ecfb66245670->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1433c12ced0ea51617d7ecfb66245670, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1433c12ced0ea51617d7ecfb66245670,
        type_description_1,
        par_cyphertext,
        par_dkey,
        par_n,
        var_message
    );


    // Release cached frame.
    if ( frame_1433c12ced0ea51617d7ecfb66245670 == cache_frame_1433c12ced0ea51617d7ecfb66245670 )
    {
        Py_DECREF( frame_1433c12ced0ea51617d7ecfb66245670 );
    }
    cache_frame_1433c12ced0ea51617d7ecfb66245670 = NULL;

    assertFrameObject( frame_1433c12ced0ea51617d7ecfb66245670 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_message );
    tmp_return_value = var_message;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$core$$$function_3_decrypt_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cyphertext );
    Py_DECREF( par_cyphertext );
    par_cyphertext = NULL;

    CHECK_OBJECT( (PyObject *)par_dkey );
    Py_DECREF( par_dkey );
    par_dkey = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cyphertext );
    Py_DECREF( par_cyphertext );
    par_cyphertext = NULL;

    CHECK_OBJECT( (PyObject *)par_dkey );
    Py_DECREF( par_dkey );
    par_dkey = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$core$$$function_3_decrypt_int );
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



static PyObject *MAKE_FUNCTION_rsa$core$$$function_1_assert_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$core$$$function_1_assert_int,
        const_str_plain_assert_int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf64cb7ee1a4850d614acc096f39f3ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$core,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$core$$$function_2_encrypt_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$core$$$function_2_encrypt_int,
        const_str_plain_encrypt_int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_71d3b93c5796f26f175664d1b10fbc76,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$core,
        const_str_digest_657a529c70c4f51d8665d77ec28e0635,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$core$$$function_3_decrypt_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$core$$$function_3_decrypt_int,
        const_str_plain_decrypt_int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1433c12ced0ea51617d7ecfb66245670,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$core,
        const_str_digest_823dc7392d217ac8d54d878c27819303,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$core =
{
    PyModuleDef_HEAD_INIT,
    "rsa.core",
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
MOD_ENTRY_DECL(rsa$core)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$core)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$core );
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
    puts("rsa.core: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.core: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.core: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$core" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$core = Py_InitModule4(
        "rsa.core",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$core = PyModule_Create( &mdef_rsa$core );
#endif

    moduledict_rsa$core = MODULE_DICT( module_rsa$core );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$core );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a899a62361d9cc42adab5d09beed3c11, module_rsa$core );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_710a3b2c56035505bf7e254671b340fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_4a8fded047fc28b14705ebfa0682e947;
        UPDATE_STRING_DICT0( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5298abc39e77bfd31d069aecbbe5e8e2;
        UPDATE_STRING_DICT0( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_710a3b2c56035505bf7e254671b340fe = MAKE_MODULE_FRAME( codeobj_710a3b2c56035505bf7e254671b340fe, module_rsa$core );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_710a3b2c56035505bf7e254671b340fe );
    assert( Py_REFCNT( frame_710a3b2c56035505bf7e254671b340fe ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_5298abc39e77bfd31d069aecbbe5e8e2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_865e7095d477d90f1eead964158b0a6f;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$core;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_is_integer_tuple;
        tmp_level_name_1 = const_int_0;
        frame_710a3b2c56035505bf7e254671b340fe->m_frame.f_lineno = 23;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_is_integer );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_is_integer, tmp_assign_source_4 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_710a3b2c56035505bf7e254671b340fe );
#endif
    popFrameStack();

    assertFrameObject( frame_710a3b2c56035505bf7e254671b340fe );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_710a3b2c56035505bf7e254671b340fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_710a3b2c56035505bf7e254671b340fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_710a3b2c56035505bf7e254671b340fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_710a3b2c56035505bf7e254671b340fe, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_rsa$core$$$function_1_assert_int(  );



        UPDATE_STRING_DICT1( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_assert_int, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_rsa$core$$$function_2_encrypt_int(  );



        UPDATE_STRING_DICT1( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_encrypt_int, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_rsa$core$$$function_3_decrypt_int(  );



        UPDATE_STRING_DICT1( moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain_decrypt_int, tmp_assign_source_7 );
    }

    return MOD_RETURN_VALUE( module_rsa$core );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
