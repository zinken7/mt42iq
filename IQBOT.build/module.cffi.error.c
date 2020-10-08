/* Generated code for Python module 'cffi.error'
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

/* The "_module_cffi$error" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cffi$error;
PyDictObject *moduledict_cffi$error;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_type_Exception_tuple;
static PyObject *const_str_digest_c4e6b47ae4fa98ff866d700bf13df092;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_a8a5e5c0d67cb45fcf4e0b5df8025ddb;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_11b9c203992002e261d15ef4c6b78698;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_PkgConfigError;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_7970a51cdb0bcec16415cad6149724b5;
static PyObject *const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_d76462298f66c95b4d3ee22e9427a916;
static PyObject *const_str_digest_3724faae17b279c3a14bbff924153de1;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_type_AttributeError_type_TypeError_type_IndexError_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_VerificationMissing;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_VerificationError;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_coord;
static PyObject *const_str_digest_944515b04dea37c94b9315e0a374a922;
extern PyObject *const_str_plain_linenum;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_FFIError;
extern PyObject *const_str_plain_cffi;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_current_decl;
static PyObject *const_str_digest_b8adbe184bc290e41466209967cd68c8;
static PyObject *const_str_digest_ec917649e2e35b6fa38dad1664d3e5ae;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_CDefError;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_c4e6b47ae4fa98ff866d700bf13df092 = UNSTREAM_STRING_ASCII( &constant_bin[ 68425 ], 10, 0 );
    const_str_digest_a8a5e5c0d67cb45fcf4e0b5df8025ddb = UNSTREAM_STRING_ASCII( &constant_bin[ 68435 ], 19, 0 );
    const_str_digest_11b9c203992002e261d15ef4c6b78698 = UNSTREAM_STRING_ASCII( &constant_bin[ 68454 ], 17, 0 );
    const_str_digest_7970a51cdb0bcec16415cad6149724b5 = UNSTREAM_STRING_ASCII( &constant_bin[ 68471 ], 45, 0 );
    const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple, 1, const_str_plain_current_decl ); Py_INCREF( const_str_plain_current_decl );
    PyTuple_SET_ITEM( const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple, 2, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple, 3, const_str_plain_linenum ); Py_INCREF( const_str_plain_linenum );
    PyTuple_SET_ITEM( const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple, 4, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_str_digest_3724faae17b279c3a14bbff924153de1 = UNSTREAM_STRING_ASCII( &constant_bin[ 68516 ], 55, 0 );
    const_tuple_type_AttributeError_type_TypeError_type_IndexError_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_type_AttributeError_type_TypeError_type_IndexError_tuple, 0, (PyObject *)PyExc_AttributeError ); Py_INCREF( (PyObject *)PyExc_AttributeError );
    PyTuple_SET_ITEM( const_tuple_type_AttributeError_type_TypeError_type_IndexError_tuple, 1, (PyObject *)PyExc_TypeError ); Py_INCREF( (PyObject *)PyExc_TypeError );
    PyTuple_SET_ITEM( const_tuple_type_AttributeError_type_TypeError_type_IndexError_tuple, 2, (PyObject *)PyExc_IndexError ); Py_INCREF( (PyObject *)PyExc_IndexError );
    const_str_digest_944515b04dea37c94b9315e0a374a922 = UNSTREAM_STRING_ASCII( &constant_bin[ 68571 ], 41, 0 );
    const_str_digest_b8adbe184bc290e41466209967cd68c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 68612 ], 7, 0 );
    const_str_digest_ec917649e2e35b6fa38dad1664d3e5ae = UNSTREAM_STRING_ASCII( &constant_bin[ 68619 ], 108, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cffi$error( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_62e634b7e60f99c187a8b8fb31ce6cfb;
static PyCodeObject *codeobj_43d3af660ed640911c5f4e7f96155146;
static PyCodeObject *codeobj_aababe513fe86ab7c57df56d04871e5c;
static PyCodeObject *codeobj_7fe6bd9f81a41d03ec594c6e6d4eb0f4;
static PyCodeObject *codeobj_226d7d30f2510baf26cb31be97e38a0c;
static PyCodeObject *codeobj_9e8d166bd477bf20c838fce203aa6264;
static PyCodeObject *codeobj_697e12439256bef656d5588d10a1a56d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_944515b04dea37c94b9315e0a374a922;
    codeobj_62e634b7e60f99c187a8b8fb31ce6cfb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a8a5e5c0d67cb45fcf4e0b5df8025ddb, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_43d3af660ed640911c5f4e7f96155146 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CDefError, 5, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_aababe513fe86ab7c57df56d04871e5c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FFIError, 2, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_7fe6bd9f81a41d03ec594c6e6d4eb0f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PkgConfigError, 28, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_226d7d30f2510baf26cb31be97e38a0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_VerificationError, 17, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9e8d166bd477bf20c838fce203aa6264 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_VerificationMissing, 22, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_697e12439256bef656d5588d10a1a56d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 7, const_tuple_27780189ddb9bcc490ef3df1bdddb4ab_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_cffi$error$$$function_1___str__(  );


// The module function definitions.
static PyObject *impl_cffi$error$$$function_1___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_current_decl = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_linenum = NULL;
    PyObject *var_prefix = NULL;
    struct Nuitka_FrameObject *frame_697e12439256bef656d5588d10a1a56d;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_697e12439256bef656d5588d10a1a56d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_697e12439256bef656d5588d10a1a56d, codeobj_697e12439256bef656d5588d10a1a56d, module_cffi$error, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_697e12439256bef656d5588d10a1a56d = cache_frame_697e12439256bef656d5588d10a1a56d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_697e12439256bef656d5588d10a1a56d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_697e12439256bef656d5588d10a1a56d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( var_current_decl == NULL );
        var_current_decl = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( var_current_decl );
        tmp_source_name_3 = var_current_decl;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coord );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( var_filename == NULL );
        var_filename = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_current_decl );
        tmp_source_name_5 = var_current_decl;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coord );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_line );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( var_linenum == NULL );
        var_linenum = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_b8adbe184bc290e41466209967cd68c8;
        CHECK_OBJECT( var_filename );
        tmp_tuple_element_1 = var_filename;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_linenum );
        tmp_tuple_element_1 = var_linenum;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( var_prefix == NULL );
        var_prefix = tmp_assign_source_4;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_697e12439256bef656d5588d10a1a56d, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_697e12439256bef656d5588d10a1a56d, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = const_tuple_type_AttributeError_type_TypeError_type_IndexError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_str_empty;
            assert( var_prefix == NULL );
            Py_INCREF( tmp_assign_source_5 );
            var_prefix = tmp_assign_source_5;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 8;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_697e12439256bef656d5588d10a1a56d->m_frame) frame_697e12439256bef656d5588d10a1a56d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    goto try_end_2;
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
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cffi$error$$$function_1___str__ );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_2;
        tmp_left_name_2 = const_str_digest_d76462298f66c95b4d3ee22e9427a916;
        if ( var_prefix == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_prefix;
        tmp_right_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_args );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_2 );

            exception_lineno = 15;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_2 );

            exception_lineno = 15;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_697e12439256bef656d5588d10a1a56d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_697e12439256bef656d5588d10a1a56d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_697e12439256bef656d5588d10a1a56d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_697e12439256bef656d5588d10a1a56d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_697e12439256bef656d5588d10a1a56d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_697e12439256bef656d5588d10a1a56d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_697e12439256bef656d5588d10a1a56d,
        type_description_1,
        par_self,
        var_current_decl,
        var_filename,
        var_linenum,
        var_prefix
    );


    // Release cached frame.
    if ( frame_697e12439256bef656d5588d10a1a56d == cache_frame_697e12439256bef656d5588d10a1a56d )
    {
        Py_DECREF( frame_697e12439256bef656d5588d10a1a56d );
    }
    cache_frame_697e12439256bef656d5588d10a1a56d = NULL;

    assertFrameObject( frame_697e12439256bef656d5588d10a1a56d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cffi$error$$$function_1___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_current_decl );
    var_current_decl = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_linenum );
    var_linenum = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

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

    Py_XDECREF( var_current_decl );
    var_current_decl = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_linenum );
    var_linenum = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cffi$error$$$function_1___str__ );
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



static PyObject *MAKE_FUNCTION_cffi$error$$$function_1___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cffi$error$$$function_1___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_11b9c203992002e261d15ef4c6b78698,
#endif
        codeobj_697e12439256bef656d5588d10a1a56d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cffi$error,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cffi$error =
{
    PyModuleDef_HEAD_INIT,
    "cffi.error",
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
MOD_ENTRY_DECL(cffi$error)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(cffi$error)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cffi$error );
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
    puts("cffi.error: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cffi.error: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cffi.error: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcffi$error" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cffi$error = Py_InitModule4(
        "cffi.error",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cffi$error = PyModule_Create( &mdef_cffi$error );
#endif

    moduledict_cffi$error = MODULE_DICT( module_cffi$error );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_cffi$error,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cffi$error,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cffi$error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cffi$error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cffi$error );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c4e6b47ae4fa98ff866d700bf13df092, module_cffi$error );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
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
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    struct Nuitka_FrameObject *frame_62e634b7e60f99c187a8b8fb31ce6cfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_cffi$error_2 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_aababe513fe86ab7c57df56d04871e5c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_aababe513fe86ab7c57df56d04871e5c_2 = NULL;
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
    PyObject *locals_cffi$error_5 = NULL;
    struct Nuitka_FrameObject *frame_43d3af660ed640911c5f4e7f96155146_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_43d3af660ed640911c5f4e7f96155146_3 = NULL;
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
    PyObject *locals_cffi$error_17 = NULL;
    struct Nuitka_FrameObject *frame_226d7d30f2510baf26cb31be97e38a0c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_226d7d30f2510baf26cb31be97e38a0c_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_cffi$error_22 = NULL;
    struct Nuitka_FrameObject *frame_9e8d166bd477bf20c838fce203aa6264_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e8d166bd477bf20c838fce203aa6264_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_cffi$error_28 = NULL;
    struct Nuitka_FrameObject *frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_944515b04dea37c94b9315e0a374a922;
        UPDATE_STRING_DICT0( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_62e634b7e60f99c187a8b8fb31ce6cfb = MAKE_MODULE_FRAME( codeobj_62e634b7e60f99c187a8b8fb31ce6cfb, module_cffi$error );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_62e634b7e60f99c187a8b8fb31ce6cfb );
    assert( Py_REFCNT( frame_62e634b7e60f99c187a8b8fb31ce6cfb ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_944515b04dea37c94b9315e0a374a922;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_4 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
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


            exception_lineno = 2;

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


            exception_lineno = 2;

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


            exception_lineno = 2;

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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

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
        tmp_assign_source_6 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
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


            exception_lineno = 2;

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


            exception_lineno = 2;

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
            PyObject *tmp_assign_source_7;
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


                exception_lineno = 2;

                goto try_except_handler_1;
            }
            tmp_tuple_element_1 = const_str_plain_FFIError;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 2;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 2;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_7;
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


                exception_lineno = 2;

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


                    exception_lineno = 2;

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

                    exception_lineno = 2;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 2;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 2;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_8;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_cffi$error_2 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_c4e6b47ae4fa98ff866d700bf13df092;
        tmp_res = PyObject_SetItem( locals_cffi$error_2, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_FFIError;
        tmp_res = PyObject_SetItem( locals_cffi$error_2, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_aababe513fe86ab7c57df56d04871e5c_2, codeobj_aababe513fe86ab7c57df56d04871e5c, module_cffi$error, sizeof(void *) );
        frame_aababe513fe86ab7c57df56d04871e5c_2 = cache_frame_aababe513fe86ab7c57df56d04871e5c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_aababe513fe86ab7c57df56d04871e5c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_aababe513fe86ab7c57df56d04871e5c_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_cffi;
        tmp_res = PyObject_SetItem( locals_cffi$error_2, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_aababe513fe86ab7c57df56d04871e5c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_aababe513fe86ab7c57df56d04871e5c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_aababe513fe86ab7c57df56d04871e5c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_aababe513fe86ab7c57df56d04871e5c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_aababe513fe86ab7c57df56d04871e5c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_aababe513fe86ab7c57df56d04871e5c_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_aababe513fe86ab7c57df56d04871e5c_2 == cache_frame_aababe513fe86ab7c57df56d04871e5c_2 )
        {
            Py_DECREF( frame_aababe513fe86ab7c57df56d04871e5c_2 );
        }
        cache_frame_aababe513fe86ab7c57df56d04871e5c_2 = NULL;

        assertFrameObject( frame_aababe513fe86ab7c57df56d04871e5c_2 );

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
            tmp_compexpr_right_1 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 2;

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
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_cffi$error_2, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 2;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_FFIError;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_cffi$error_2;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 2;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 2;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_9 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_cffi$error_2 );
        locals_cffi$error_2 = NULL;
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

        Py_DECREF( locals_cffi$error_2 );
        locals_cffi$error_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
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
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 2;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain_FFIError, tmp_assign_source_9 );
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_11 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
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


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_9;
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


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 5;

            goto try_except_handler_4;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 5;

                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = const_str_plain_CDefError;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 5;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 5;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_14;
        }
        {
            nuitka_bool tmp_condition_result_11;
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


                exception_lineno = 5;

                goto try_except_handler_4;
            }
            tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
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


                    exception_lineno = 5;

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

                    exception_lineno = 5;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 5;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 5;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_15;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_cffi$error_5 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_c4e6b47ae4fa98ff866d700bf13df092;
        tmp_res = PyObject_SetItem( locals_cffi$error_5, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_CDefError;
        tmp_res = PyObject_SetItem( locals_cffi$error_5, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_43d3af660ed640911c5f4e7f96155146_3, codeobj_43d3af660ed640911c5f4e7f96155146, module_cffi$error, sizeof(void *) );
        frame_43d3af660ed640911c5f4e7f96155146_3 = cache_frame_43d3af660ed640911c5f4e7f96155146_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_43d3af660ed640911c5f4e7f96155146_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_43d3af660ed640911c5f4e7f96155146_3 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_cffi;
        tmp_res = PyObject_SetItem( locals_cffi$error_5, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_cffi$error$$$function_1___str__(  );



        tmp_res = PyObject_SetItem( locals_cffi$error_5, const_str_plain___str__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_43d3af660ed640911c5f4e7f96155146_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_43d3af660ed640911c5f4e7f96155146_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_43d3af660ed640911c5f4e7f96155146_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_43d3af660ed640911c5f4e7f96155146_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_43d3af660ed640911c5f4e7f96155146_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_43d3af660ed640911c5f4e7f96155146_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_43d3af660ed640911c5f4e7f96155146_3 == cache_frame_43d3af660ed640911c5f4e7f96155146_3 )
        {
            Py_DECREF( frame_43d3af660ed640911c5f4e7f96155146_3 );
        }
        cache_frame_43d3af660ed640911c5f4e7f96155146_3 = NULL;

        assertFrameObject( frame_43d3af660ed640911c5f4e7f96155146_3 );

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 5;

                goto try_except_handler_6;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_cffi$error_5, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 5;

                goto try_except_handler_6;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_CDefError;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_cffi$error_5;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 5;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 5;

                goto try_except_handler_6;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_16 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_cffi$error_5 );
        locals_cffi$error_5 = NULL;
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

        Py_DECREF( locals_cffi$error_5 );
        locals_cffi$error_5 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
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
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 5;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain_CDefError, tmp_assign_source_16 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_18 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
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


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_20 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_15;
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


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_7;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_7;
            }
            tmp_tuple_element_7 = const_str_plain_VerificationError;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_7 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 17;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_7;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_21;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_7;
            }
            tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_8 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 17;

                    goto try_except_handler_7;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_8 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 17;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_8 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 17;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 17;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_7;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_22;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_cffi$error_17 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_c4e6b47ae4fa98ff866d700bf13df092;
        tmp_res = PyObject_SetItem( locals_cffi$error_17, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_7970a51cdb0bcec16415cad6149724b5;
        tmp_res = PyObject_SetItem( locals_cffi$error_17, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_VerificationError;
        tmp_res = PyObject_SetItem( locals_cffi$error_17, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_9;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_226d7d30f2510baf26cb31be97e38a0c_4, codeobj_226d7d30f2510baf26cb31be97e38a0c, module_cffi$error, sizeof(void *) );
        frame_226d7d30f2510baf26cb31be97e38a0c_4 = cache_frame_226d7d30f2510baf26cb31be97e38a0c_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_226d7d30f2510baf26cb31be97e38a0c_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_226d7d30f2510baf26cb31be97e38a0c_4 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_cffi;
        tmp_res = PyObject_SetItem( locals_cffi$error_17, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_226d7d30f2510baf26cb31be97e38a0c_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_226d7d30f2510baf26cb31be97e38a0c_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_226d7d30f2510baf26cb31be97e38a0c_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_226d7d30f2510baf26cb31be97e38a0c_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_226d7d30f2510baf26cb31be97e38a0c_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_226d7d30f2510baf26cb31be97e38a0c_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_226d7d30f2510baf26cb31be97e38a0c_4 == cache_frame_226d7d30f2510baf26cb31be97e38a0c_4 )
        {
            Py_DECREF( frame_226d7d30f2510baf26cb31be97e38a0c_4 );
        }
        cache_frame_226d7d30f2510baf26cb31be97e38a0c_4 = NULL;

        assertFrameObject( frame_226d7d30f2510baf26cb31be97e38a0c_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            tmp_compexpr_right_3 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_9;
            }
            tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_cffi$error_17, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_9;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = const_str_plain_VerificationError;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_9 );
            tmp_tuple_element_9 = locals_cffi$error_17;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 17;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;

                goto try_except_handler_9;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_23 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_23 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_cffi$error_17 );
        locals_cffi$error_17 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_cffi$error_17 );
        locals_cffi$error_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 17;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain_VerificationError, tmp_assign_source_23 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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

    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_4;
        tmp_dircall_arg1_4 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_4 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_25 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_class_creation_4__bases );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_8;
        }
        else
        {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_subscribed_name_4 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_type_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
        Py_DECREF( tmp_type_arg_7 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_4 );
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_10;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_13 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
        tmp_condition_result_22 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_14 = tmp_class_creation_4__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_10;
            }
            tmp_tuple_element_10 = const_str_plain_VerificationMissing;
            tmp_args_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_10 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 22;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_10;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_15 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_10;
            }
            tmp_condition_result_23 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_8;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto try_except_handler_10;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_8 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_8 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 22;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_11 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 22;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_10;
            }
            branch_no_15:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_29;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_cffi$error_22 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_c4e6b47ae4fa98ff866d700bf13df092;
        tmp_res = PyObject_SetItem( locals_cffi$error_22, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_ec917649e2e35b6fa38dad1664d3e5ae;
        tmp_res = PyObject_SetItem( locals_cffi$error_22, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_VerificationMissing;
        tmp_res = PyObject_SetItem( locals_cffi$error_22, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_12;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_9e8d166bd477bf20c838fce203aa6264_5, codeobj_9e8d166bd477bf20c838fce203aa6264, module_cffi$error, sizeof(void *) );
        frame_9e8d166bd477bf20c838fce203aa6264_5 = cache_frame_9e8d166bd477bf20c838fce203aa6264_5;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_9e8d166bd477bf20c838fce203aa6264_5 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_9e8d166bd477bf20c838fce203aa6264_5 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_cffi;
        tmp_res = PyObject_SetItem( locals_cffi$error_22, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9e8d166bd477bf20c838fce203aa6264_5 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9e8d166bd477bf20c838fce203aa6264_5 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_9e8d166bd477bf20c838fce203aa6264_5, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_9e8d166bd477bf20c838fce203aa6264_5->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_9e8d166bd477bf20c838fce203aa6264_5, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_9e8d166bd477bf20c838fce203aa6264_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if ( frame_9e8d166bd477bf20c838fce203aa6264_5 == cache_frame_9e8d166bd477bf20c838fce203aa6264_5 )
        {
            Py_DECREF( frame_9e8d166bd477bf20c838fce203aa6264_5 );
        }
        cache_frame_9e8d166bd477bf20c838fce203aa6264_5 = NULL;

        assertFrameObject( frame_9e8d166bd477bf20c838fce203aa6264_5 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            tmp_compexpr_right_4 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_12;
            }
            tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_16;
            }
            else
            {
                goto branch_no_16;
            }
            branch_yes_16:;
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_cffi$error_22, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_12;
            }
            branch_no_16:;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = const_str_plain_VerificationMissing;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_12 );
            tmp_tuple_element_12 = locals_cffi$error_22;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 22;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_12;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_30 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_cffi$error_22 );
        locals_cffi$error_22 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_cffi$error_22 );
        locals_cffi$error_22 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 22;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain_VerificationMissing, tmp_assign_source_30 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = const_tuple_type_Exception_tuple;
        Py_INCREF( tmp_dircall_arg1_5 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_32 = impl___internal__$$$function_3__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert( tmp_class_creation_5__class_decl_dict == NULL );
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_9;
        }
        else
        {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = const_str_plain_metaclass;
        tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_class_creation_5__bases );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_10;
        }
        else
        {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_subscribed_name_5 = tmp_class_creation_5__bases;
        tmp_subscript_name_5 = const_int_0;
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        if ( tmp_type_arg_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_9 );
        Py_DECREF( tmp_type_arg_9 );
        if ( tmp_metaclass_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_5 );
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_34 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
        Py_DECREF( tmp_metaclass_name_5 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        tmp_key_name_15 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        tmp_condition_result_27 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_13;
        }
        branch_no_17:;
    }
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_source_name_17 = tmp_class_creation_5__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_17, const_str_plain___prepare__ );
        tmp_condition_result_28 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_name_9;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_9;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_source_name_18 = tmp_class_creation_5__metaclass;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_13;
            }
            tmp_tuple_element_13 = const_str_plain_PkgConfigError;
            tmp_args_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_13 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 28;
            tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_name_9 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_13;
            }
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_35;
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_source_name_19 = tmp_class_creation_5__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_19, const_str_plain___getitem__ );
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_13;
            }
            tmp_condition_result_29 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_19;
            }
            else
            {
                goto branch_no_19;
            }
            branch_yes_19:;
            {
                PyObject *tmp_raise_type_5;
                PyObject *tmp_raise_value_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_getattr_target_5;
                PyObject *tmp_getattr_attr_5;
                PyObject *tmp_getattr_default_5;
                PyObject *tmp_source_name_20;
                PyObject *tmp_type_arg_10;
                tmp_raise_type_5 = PyExc_TypeError;
                tmp_left_name_5 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_5__metaclass );
                tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
                tmp_getattr_attr_5 = const_str_plain___name__;
                tmp_getattr_default_5 = const_str_angle_metaclass;
                tmp_tuple_element_14 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
                if ( tmp_tuple_element_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_13;
                }
                tmp_right_name_5 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_14 );
                CHECK_OBJECT( tmp_class_creation_5__prepared );
                tmp_type_arg_10 = tmp_class_creation_5__prepared;
                tmp_source_name_20 = BUILTIN_TYPE1( tmp_type_arg_10 );
                assert( !(tmp_source_name_20 == NULL) );
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_20 );
                if ( tmp_tuple_element_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_5 );

                    exception_lineno = 28;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_14 );
                tmp_raise_value_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_raise_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_5;
                Py_INCREF( tmp_raise_type_5 );
                exception_value = tmp_raise_value_5;
                exception_lineno = 28;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_13;
            }
            branch_no_19:;
        }
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = PyDict_New();
            assert( tmp_class_creation_5__prepared == NULL );
            tmp_class_creation_5__prepared = tmp_assign_source_36;
        }
        branch_end_18:;
    }
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT( tmp_class_creation_5__prepared );
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_cffi$error_28 = tmp_set_locals_5;
            Py_INCREF( tmp_set_locals_5 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_c4e6b47ae4fa98ff866d700bf13df092;
        tmp_res = PyObject_SetItem( locals_cffi$error_28, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_digest_3724faae17b279c3a14bbff924153de1;
        tmp_res = PyObject_SetItem( locals_cffi$error_28, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_PkgConfigError;
        tmp_res = PyObject_SetItem( locals_cffi$error_28, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_15;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6, codeobj_7fe6bd9f81a41d03ec594c6e6d4eb0f4, module_cffi$error, sizeof(void *) );
        frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 = cache_frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_str_plain_cffi;
        tmp_res = PyObject_SetItem( locals_cffi$error_28, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame.
        if ( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 == cache_frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 )
        {
            Py_DECREF( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 );
        }
        cache_frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 = NULL;

        assertFrameObject( frame_7fe6bd9f81a41d03ec594c6e6d4eb0f4_6 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_compexpr_left_5 = tmp_class_creation_5__bases;
            tmp_compexpr_right_5 = const_tuple_type_Exception_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_15;
            }
            tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_20;
            }
            else
            {
                goto branch_no_20;
            }
            branch_yes_20:;
            tmp_dictset_value = const_tuple_type_Exception_tuple;
            tmp_res = PyObject_SetItem( locals_cffi$error_28, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_15;
            }
            branch_no_20:;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kw_name_10;
            CHECK_OBJECT( tmp_class_creation_5__metaclass );
            tmp_called_name_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_15 = const_str_plain_PkgConfigError;
            tmp_args_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_tuple_element_15 = tmp_class_creation_5__bases;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_15 );
            tmp_tuple_element_15 = locals_cffi$error_28;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_class_creation_5__class_decl_dict );
            tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame.f_lineno = 28;
            tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_10 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;

                goto try_except_handler_15;
            }
            assert( outline_4_var___class__ == NULL );
            outline_4_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT( outline_4_var___class__ );
        tmp_assign_source_37 = outline_4_var___class__;
        Py_INCREF( tmp_assign_source_37 );
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF( locals_cffi$error_28 );
        locals_cffi$error_28 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_cffi$error_28 );
        locals_cffi$error_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
        Py_DECREF( outline_4_var___class__ );
        outline_4_var___class__ = NULL;

        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( cffi$error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_5:;
        exception_lineno = 28;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1( moduledict_cffi$error, (Nuitka_StringObject *)const_str_plain_PkgConfigError, tmp_assign_source_37 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62e634b7e60f99c187a8b8fb31ce6cfb );
#endif
    popFrameStack();

    assertFrameObject( frame_62e634b7e60f99c187a8b8fb31ce6cfb );

    goto frame_no_exception_6;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62e634b7e60f99c187a8b8fb31ce6cfb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62e634b7e60f99c187a8b8fb31ce6cfb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62e634b7e60f99c187a8b8fb31ce6cfb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62e634b7e60f99c187a8b8fb31ce6cfb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;


    return MOD_RETURN_VALUE( module_cffi$error );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
