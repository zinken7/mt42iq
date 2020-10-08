/* Generated code for Python module 'attr.converters'
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

/* The "_module_attr$converters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_attr$converters;
PyDictObject *moduledict_attr$converters;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_NOTHING;
static PyObject *const_tuple_str_plain_NOTHING_str_plain_Factory_tuple;
static PyObject *const_str_digest_2dce1d8f92ec318bafaf52297701dd54;
static PyObject *const_str_digest_4ce4aef3df126a538cc1a6a5eb431ab8;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_converter_str_plain_optional_converter_tuple;
extern PyObject *const_str_plain_optional;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_37bbd897444903ebb1e2f7ca106ec494;
static PyObject *const_str_digest_7ca3466c33ff2dc357e962ebea2e894a;
extern PyObject *const_str_plain_factory;
extern PyObject *const_str_plain_val;
static PyObject *const_str_digest_b9f196381af3f48ee87924abe5a2bb87;
static PyObject *const_str_digest_009b548ba2aefa8a77e470e5e403a5c4;
extern PyObject *const_str_plain_default;
static PyObject *const_tuple_str_plain_val_str_plain_converter_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_12ef3f59c07ff43d3abcf0acebd7ce48;
static PyObject *const_str_digest_1db4fca6c2d0a09f4a10f02ec331114b;
extern PyObject *const_str_plain__make;
static PyObject *const_str_digest_9821652dede698e9972ef7e9246d84e6;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_default_if_none;
static PyObject *const_str_digest_394b0b05bdc7307a0003ebbdcb5994df;
static PyObject *const_tuple_str_plain_val_str_plain_default_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_converter;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_takes_self;
static PyObject *const_tuple_b20d16ad61a4fe415c893ab32cb68a4d_tuple;
extern PyObject *const_str_plain_Factory;
static PyObject *const_str_plain_default_if_none_converter;
static PyObject *const_str_plain_optional_converter;
static PyObject *const_str_digest_f6faec5a5c8d799dd8f5ecc50f8ff602;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_NOTHING_str_plain_Factory_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOTHING_str_plain_Factory_tuple, 0, const_str_plain_NOTHING ); Py_INCREF( const_str_plain_NOTHING );
    PyTuple_SET_ITEM( const_tuple_str_plain_NOTHING_str_plain_Factory_tuple, 1, const_str_plain_Factory ); Py_INCREF( const_str_plain_Factory );
    const_str_digest_2dce1d8f92ec318bafaf52297701dd54 = UNSTREAM_STRING_ASCII( &constant_bin[ 38978 ], 15, 0 );
    const_str_digest_4ce4aef3df126a538cc1a6a5eb431ab8 = UNSTREAM_STRING_ASCII( &constant_bin[ 38993 ], 247, 0 );
    const_tuple_str_plain_converter_str_plain_optional_converter_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_converter_str_plain_optional_converter_tuple, 0, const_str_plain_converter ); Py_INCREF( const_str_plain_converter );
    const_str_plain_optional_converter = UNSTREAM_STRING_ASCII( &constant_bin[ 39240 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_converter_str_plain_optional_converter_tuple, 1, const_str_plain_optional_converter ); Py_INCREF( const_str_plain_optional_converter );
    const_str_digest_37bbd897444903ebb1e2f7ca106ec494 = UNSTREAM_STRING_ASCII( &constant_bin[ 39258 ], 667, 0 );
    const_str_digest_7ca3466c33ff2dc357e962ebea2e894a = UNSTREAM_STRING_ASCII( &constant_bin[ 39925 ], 53, 0 );
    const_str_digest_b9f196381af3f48ee87924abe5a2bb87 = UNSTREAM_STRING_ASCII( &constant_bin[ 39978 ], 24, 0 );
    const_str_digest_009b548ba2aefa8a77e470e5e403a5c4 = UNSTREAM_STRING_ASCII( &constant_bin[ 40002 ], 50, 0 );
    const_tuple_str_plain_val_str_plain_converter_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_str_plain_converter_tuple, 0, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_str_plain_converter_tuple, 1, const_str_plain_converter ); Py_INCREF( const_str_plain_converter );
    const_str_digest_12ef3f59c07ff43d3abcf0acebd7ce48 = UNSTREAM_STRING_ASCII( &constant_bin[ 40052 ], 49, 0 );
    const_str_digest_1db4fca6c2d0a09f4a10f02ec331114b = UNSTREAM_STRING_ASCII( &constant_bin[ 40101 ], 46, 0 );
    const_str_digest_9821652dede698e9972ef7e9246d84e6 = UNSTREAM_STRING_ASCII( &constant_bin[ 40147 ], 36, 0 );
    const_str_plain_default_if_none = UNSTREAM_STRING_ASCII( &constant_bin[ 40002 ], 15, 1 );
    const_str_digest_394b0b05bdc7307a0003ebbdcb5994df = UNSTREAM_STRING_ASCII( &constant_bin[ 40183 ], 40, 0 );
    const_tuple_str_plain_val_str_plain_default_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_str_plain_default_tuple, 0, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_str_plain_default_tuple, 1, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_tuple_b20d16ad61a4fe415c893ab32cb68a4d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b20d16ad61a4fe415c893ab32cb68a4d_tuple, 0, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    PyTuple_SET_ITEM( const_tuple_b20d16ad61a4fe415c893ab32cb68a4d_tuple, 1, const_str_plain_factory ); Py_INCREF( const_str_plain_factory );
    const_str_plain_default_if_none_converter = UNSTREAM_STRING_ASCII( &constant_bin[ 40027 ], 25, 1 );
    PyTuple_SET_ITEM( const_tuple_b20d16ad61a4fe415c893ab32cb68a4d_tuple, 2, const_str_plain_default_if_none_converter ); Py_INCREF( const_str_plain_default_if_none_converter );
    const_str_digest_f6faec5a5c8d799dd8f5ecc50f8ff602 = UNSTREAM_STRING_ASCII( &constant_bin[ 40223 ], 29, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_attr$converters( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_df2dfca03b2dc92fab64fb1bed935ae5;
static PyCodeObject *codeobj_cbd6824cf24010670d7c69b54e810863;
static PyCodeObject *codeobj_9abf4e5672d41f5de449896cc5b6e358;
static PyCodeObject *codeobj_be44027f51382f200980891c75d6e8ff;
static PyCodeObject *codeobj_77c0ada138a8e77a351687e04ee9ad11;
static PyCodeObject *codeobj_1f5fa6bd9f04a0733cc708e5a79e2354;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1db4fca6c2d0a09f4a10f02ec331114b;
    codeobj_df2dfca03b2dc92fab64fb1bed935ae5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b9f196381af3f48ee87924abe5a2bb87, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_cbd6824cf24010670d7c69b54e810863 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_default_if_none, 29, const_tuple_b20d16ad61a4fe415c893ab32cb68a4d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9abf4e5672d41f5de449896cc5b6e358 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_default_if_none_converter, 64, const_tuple_str_plain_val_str_plain_default_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_be44027f51382f200980891c75d6e8ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_default_if_none_converter, 72, const_tuple_str_plain_val_str_plain_default_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_77c0ada138a8e77a351687e04ee9ad11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_optional, 10, const_tuple_str_plain_converter_str_plain_optional_converter_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f5fa6bd9f04a0733cc708e5a79e2354 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_optional_converter, 21, const_tuple_str_plain_val_str_plain_converter_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_attr$converters$$$function_1_optional(  );


static PyObject *MAKE_FUNCTION_attr$converters$$$function_1_optional$$$function_1_optional_converter(  );


static PyObject *MAKE_FUNCTION_attr$converters$$$function_2_default_if_none( PyObject *defaults );


static PyObject *MAKE_FUNCTION_attr$converters$$$function_2_default_if_none$$$function_1_default_if_none_converter(  );


static PyObject *MAKE_FUNCTION_attr$converters$$$function_2_default_if_none$$$function_2_default_if_none_converter(  );


// The module function definitions.
static PyObject *impl_attr$converters$$$function_1_optional( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_converter = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_optional_converter = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_attr$converters$$$function_1_optional$$$function_1_optional_converter(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_converter;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_optional_converter == NULL );
        var_optional_converter = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT( var_optional_converter );
    tmp_return_value = var_optional_converter;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_1_optional );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_converter );
    Py_DECREF( par_converter );
    par_converter = NULL;

    CHECK_OBJECT( (PyObject *)var_optional_converter );
    Py_DECREF( var_optional_converter );
    var_optional_converter = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_1_optional );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_attr$converters$$$function_1_optional$$$function_1_optional_converter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_1f5fa6bd9f04a0733cc708e5a79e2354;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1f5fa6bd9f04a0733cc708e5a79e2354 = NULL;
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
        CHECK_OBJECT( par_val );
        tmp_compexpr_left_1 = par_val;
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
    MAKE_OR_REUSE_FRAME( cache_frame_1f5fa6bd9f04a0733cc708e5a79e2354, codeobj_1f5fa6bd9f04a0733cc708e5a79e2354, module_attr$converters, sizeof(void *)+sizeof(void *) );
    frame_1f5fa6bd9f04a0733cc708e5a79e2354 = cache_frame_1f5fa6bd9f04a0733cc708e5a79e2354;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f5fa6bd9f04a0733cc708e5a79e2354 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f5fa6bd9f04a0733cc708e5a79e2354 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "converter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_val );
        tmp_args_element_name_1 = par_val;
        frame_1f5fa6bd9f04a0733cc708e5a79e2354->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f5fa6bd9f04a0733cc708e5a79e2354 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f5fa6bd9f04a0733cc708e5a79e2354 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f5fa6bd9f04a0733cc708e5a79e2354 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f5fa6bd9f04a0733cc708e5a79e2354, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f5fa6bd9f04a0733cc708e5a79e2354->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f5fa6bd9f04a0733cc708e5a79e2354, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f5fa6bd9f04a0733cc708e5a79e2354,
        type_description_1,
        par_val,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_1f5fa6bd9f04a0733cc708e5a79e2354 == cache_frame_1f5fa6bd9f04a0733cc708e5a79e2354 )
    {
        Py_DECREF( frame_1f5fa6bd9f04a0733cc708e5a79e2354 );
    }
    cache_frame_1f5fa6bd9f04a0733cc708e5a79e2354 = NULL;

    assertFrameObject( frame_1f5fa6bd9f04a0733cc708e5a79e2354 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_1_optional$$$function_1_optional_converter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_1_optional$$$function_1_optional_converter );
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


static PyObject *impl_attr$converters$$$function_2_default_if_none( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_default = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_factory = python_pars[ 1 ];
    PyObject *var_default_if_none_converter = NULL;
    struct Nuitka_FrameObject *frame_cbd6824cf24010670d7c69b54e810863;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cbd6824cf24010670d7c69b54e810863 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cbd6824cf24010670d7c69b54e810863, codeobj_cbd6824cf24010670d7c69b54e810863, module_attr$converters, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cbd6824cf24010670d7c69b54e810863 = cache_frame_cbd6824cf24010670d7c69b54e810863;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cbd6824cf24010670d7c69b54e810863 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cbd6824cf24010670d7c69b54e810863 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( PyCell_GET( par_default ) );
        tmp_compexpr_left_1 = PyCell_GET( par_default );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_NOTHING );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NOTHING );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NOTHING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_factory );
        tmp_compexpr_left_2 = par_factory;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_394b0b05bdc7307a0003ebbdcb5994df;
            frame_cbd6824cf24010670d7c69b54e810863->m_frame.f_lineno = 48;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 48;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( PyCell_GET( par_default ) );
        tmp_compexpr_left_3 = PyCell_GET( par_default );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_NOTHING );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NOTHING );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NOTHING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_2;
        tmp_and_left_value_2 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_factory );
        tmp_compexpr_left_4 = par_factory;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_right_value_2 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
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
            tmp_make_exception_arg_2 = const_str_digest_7ca3466c33ff2dc357e962ebea2e894a;
            frame_cbd6824cf24010670d7c69b54e810863->m_frame.f_lineno = 51;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 51;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_factory );
        tmp_compexpr_left_5 = par_factory;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_Factory );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Factory );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Factory" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 56;
                type_description_1 = "coo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_factory );
            tmp_args_element_name_1 = par_factory;
            frame_cbd6824cf24010670d7c69b54e810863->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "coo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_default );
                PyCell_SET( par_default, tmp_assign_source_1 );
                Py_XDECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( PyCell_GET( par_default ) );
        tmp_isinstance_inst_1 = PyCell_GET( par_default );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_Factory );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Factory );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Factory" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_4;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "coo";
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( PyCell_GET( par_default ) );
            tmp_source_name_1 = PyCell_GET( par_default );
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_takes_self );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "coo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 59;
                type_description_1 = "coo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_12ef3f59c07ff43d3abcf0acebd7ce48;
                frame_cbd6824cf24010670d7c69b54e810863->m_frame.f_lineno = 60;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 60;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_FUNCTION_attr$converters$$$function_2_default_if_none$$$function_1_default_if_none_converter(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_default;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );


            assert( var_default_if_none_converter == NULL );
            var_default_if_none_converter = tmp_assign_source_2;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_FUNCTION_attr$converters$$$function_2_default_if_none$$$function_2_default_if_none_converter(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = par_default;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );


            assert( var_default_if_none_converter == NULL );
            var_default_if_none_converter = tmp_assign_source_3;
        }
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbd6824cf24010670d7c69b54e810863 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbd6824cf24010670d7c69b54e810863 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cbd6824cf24010670d7c69b54e810863, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cbd6824cf24010670d7c69b54e810863->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cbd6824cf24010670d7c69b54e810863, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cbd6824cf24010670d7c69b54e810863,
        type_description_1,
        par_default,
        par_factory,
        var_default_if_none_converter
    );


    // Release cached frame.
    if ( frame_cbd6824cf24010670d7c69b54e810863 == cache_frame_cbd6824cf24010670d7c69b54e810863 )
    {
        Py_DECREF( frame_cbd6824cf24010670d7c69b54e810863 );
    }
    cache_frame_cbd6824cf24010670d7c69b54e810863 = NULL;

    assertFrameObject( frame_cbd6824cf24010670d7c69b54e810863 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_default_if_none_converter );
    tmp_return_value = var_default_if_none_converter;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_2_default_if_none );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_factory );
    Py_DECREF( par_factory );
    par_factory = NULL;

    CHECK_OBJECT( (PyObject *)var_default_if_none_converter );
    Py_DECREF( var_default_if_none_converter );
    var_default_if_none_converter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_default );
    Py_DECREF( par_default );
    par_default = NULL;

    CHECK_OBJECT( (PyObject *)par_factory );
    Py_DECREF( par_factory );
    par_factory = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_2_default_if_none );
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


static PyObject *impl_attr$converters$$$function_2_default_if_none$$$function_1_default_if_none_converter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_9abf4e5672d41f5de449896cc5b6e358;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9abf4e5672d41f5de449896cc5b6e358 = NULL;
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
        CHECK_OBJECT( par_val );
        tmp_compexpr_left_1 = par_val;
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
        CHECK_OBJECT( par_val );
        tmp_return_value = par_val;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_9abf4e5672d41f5de449896cc5b6e358, codeobj_9abf4e5672d41f5de449896cc5b6e358, module_attr$converters, sizeof(void *)+sizeof(void *) );
    frame_9abf4e5672d41f5de449896cc5b6e358 = cache_frame_9abf4e5672d41f5de449896cc5b6e358;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9abf4e5672d41f5de449896cc5b6e358 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9abf4e5672d41f5de449896cc5b6e358 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "default" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        frame_9abf4e5672d41f5de449896cc5b6e358->m_frame.f_lineno = 68;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_factory );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9abf4e5672d41f5de449896cc5b6e358 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9abf4e5672d41f5de449896cc5b6e358 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9abf4e5672d41f5de449896cc5b6e358 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9abf4e5672d41f5de449896cc5b6e358, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9abf4e5672d41f5de449896cc5b6e358->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9abf4e5672d41f5de449896cc5b6e358, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9abf4e5672d41f5de449896cc5b6e358,
        type_description_1,
        par_val,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9abf4e5672d41f5de449896cc5b6e358 == cache_frame_9abf4e5672d41f5de449896cc5b6e358 )
    {
        Py_DECREF( frame_9abf4e5672d41f5de449896cc5b6e358 );
    }
    cache_frame_9abf4e5672d41f5de449896cc5b6e358 = NULL;

    assertFrameObject( frame_9abf4e5672d41f5de449896cc5b6e358 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_2_default_if_none$$$function_1_default_if_none_converter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_2_default_if_none$$$function_1_default_if_none_converter );
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


static PyObject *impl_attr$converters$$$function_2_default_if_none$$$function_2_default_if_none_converter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_be44027f51382f200980891c75d6e8ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be44027f51382f200980891c75d6e8ff = NULL;
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
        CHECK_OBJECT( par_val );
        tmp_compexpr_left_1 = par_val;
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
        CHECK_OBJECT( par_val );
        tmp_return_value = par_val;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_be44027f51382f200980891c75d6e8ff, codeobj_be44027f51382f200980891c75d6e8ff, module_attr$converters, sizeof(void *)+sizeof(void *) );
    frame_be44027f51382f200980891c75d6e8ff = cache_frame_be44027f51382f200980891c75d6e8ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be44027f51382f200980891c75d6e8ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be44027f51382f200980891c75d6e8ff ) == 2 ); // Frame stack

    // Framed code:
    if ( PyCell_GET( self->m_closure[0] ) == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyCell_GET( self->m_closure[0] );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be44027f51382f200980891c75d6e8ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be44027f51382f200980891c75d6e8ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be44027f51382f200980891c75d6e8ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be44027f51382f200980891c75d6e8ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be44027f51382f200980891c75d6e8ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be44027f51382f200980891c75d6e8ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be44027f51382f200980891c75d6e8ff,
        type_description_1,
        par_val,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_be44027f51382f200980891c75d6e8ff == cache_frame_be44027f51382f200980891c75d6e8ff )
    {
        Py_DECREF( frame_be44027f51382f200980891c75d6e8ff );
    }
    cache_frame_be44027f51382f200980891c75d6e8ff = NULL;

    assertFrameObject( frame_be44027f51382f200980891c75d6e8ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_2_default_if_none$$$function_2_default_if_none_converter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( attr$converters$$$function_2_default_if_none$$$function_2_default_if_none_converter );
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



static PyObject *MAKE_FUNCTION_attr$converters$$$function_1_optional(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$converters$$$function_1_optional,
        const_str_plain_optional,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_77c0ada138a8e77a351687e04ee9ad11,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$converters,
        const_str_digest_4ce4aef3df126a538cc1a6a5eb431ab8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$converters$$$function_1_optional$$$function_1_optional_converter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$converters$$$function_1_optional$$$function_1_optional_converter,
        const_str_plain_optional_converter,
#if PYTHON_VERSION >= 300
        const_str_digest_9821652dede698e9972ef7e9246d84e6,
#endif
        codeobj_1f5fa6bd9f04a0733cc708e5a79e2354,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$converters,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$converters$$$function_2_default_if_none( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$converters$$$function_2_default_if_none,
        const_str_plain_default_if_none,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cbd6824cf24010670d7c69b54e810863,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$converters,
        const_str_digest_37bbd897444903ebb1e2f7ca106ec494,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$converters$$$function_2_default_if_none$$$function_1_default_if_none_converter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$converters$$$function_2_default_if_none$$$function_1_default_if_none_converter,
        const_str_plain_default_if_none_converter,
#if PYTHON_VERSION >= 300
        const_str_digest_009b548ba2aefa8a77e470e5e403a5c4,
#endif
        codeobj_9abf4e5672d41f5de449896cc5b6e358,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$converters,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$converters$$$function_2_default_if_none$$$function_2_default_if_none_converter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$converters$$$function_2_default_if_none$$$function_2_default_if_none_converter,
        const_str_plain_default_if_none_converter,
#if PYTHON_VERSION >= 300
        const_str_digest_009b548ba2aefa8a77e470e5e403a5c4,
#endif
        codeobj_be44027f51382f200980891c75d6e8ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_attr$converters,
        NULL,
        1
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_attr$converters =
{
    PyModuleDef_HEAD_INIT,
    "attr.converters",
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
MOD_ENTRY_DECL(attr$converters)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(attr$converters)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_attr$converters );
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
    puts("attr.converters: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("attr.converters: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("attr.converters: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initattr$converters" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_attr$converters = Py_InitModule4(
        "attr.converters",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_attr$converters = PyModule_Create( &mdef_attr$converters );
#endif

    moduledict_attr$converters = MODULE_DICT( module_attr$converters );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_attr$converters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_attr$converters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_attr$converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_attr$converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_attr$converters );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_2dce1d8f92ec318bafaf52297701dd54, module_attr$converters );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_df2dfca03b2dc92fab64fb1bed935ae5;
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
        tmp_assign_source_1 = const_str_digest_f6faec5a5c8d799dd8f5ecc50f8ff602;
        UPDATE_STRING_DICT0( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1db4fca6c2d0a09f4a10f02ec331114b;
        UPDATE_STRING_DICT0( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_df2dfca03b2dc92fab64fb1bed935ae5 = MAKE_MODULE_FRAME( codeobj_df2dfca03b2dc92fab64fb1bed935ae5, module_attr$converters );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_df2dfca03b2dc92fab64fb1bed935ae5 );
    assert( Py_REFCNT( frame_df2dfca03b2dc92fab64fb1bed935ae5 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_1db4fca6c2d0a09f4a10f02ec331114b;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_df2dfca03b2dc92fab64fb1bed935ae5->m_frame.f_lineno = 5;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__make;
        tmp_globals_name_1 = (PyObject *)moduledict_attr$converters;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_NOTHING_str_plain_Factory_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_df2dfca03b2dc92fab64fb1bed935ae5->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_attr$converters,
                const_str_plain_NOTHING,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_NOTHING );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_NOTHING, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_attr$converters,
                const_str_plain_Factory,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Factory );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_Factory, tmp_assign_source_10 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_attr$converters$$$function_1_optional(  );



        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_optional, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_NOTHING );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NOTHING );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NOTHING" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_defaults_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_12 = MAKE_FUNCTION_attr$converters$$$function_2_default_if_none( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_attr$converters, (Nuitka_StringObject *)const_str_plain_default_if_none, tmp_assign_source_12 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df2dfca03b2dc92fab64fb1bed935ae5 );
#endif
    popFrameStack();

    assertFrameObject( frame_df2dfca03b2dc92fab64fb1bed935ae5 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df2dfca03b2dc92fab64fb1bed935ae5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df2dfca03b2dc92fab64fb1bed935ae5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df2dfca03b2dc92fab64fb1bed935ae5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df2dfca03b2dc92fab64fb1bed935ae5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_attr$converters );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
