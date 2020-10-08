/* Generated code for Python module 'httplib2.iri2uri'
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

/* The "_module_httplib2$iri2uri" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httplib2$iri2uri;
PyDictObject *moduledict_httplib2$iri2uri;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_urllib;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_idna;
extern PyObject *const_str_plain_retval;
static PyObject *const_str_digest_7bceca1e67472947ef9afb259088fa85;
extern PyObject *const_str_plain_high;
extern PyObject *const_str_plain_authority;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_tuple_str_plain_c_tuple;
static PyObject *const_str_plain_escape_range;
extern PyObject *const_str_plain___contributors__;
static PyObject *const_str_digest_691bcb2dbdb55609d35d1cc4b41ec2d7;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_076d2a5f973ac73dd30c47d9dc8e6f04;
static PyObject *const_str_digest_0cbc5f618e817db3e5420de8f7e1ba69;
static PyObject *const_str_digest_71dd8f58cc9e0e42228fe2c6b0d9db59;
extern PyObject *const_str_plain_uri;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_571f8905888117917ae2bc3ce7e9a829;
static PyObject *const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_d8b86ecb9a056483a759465735c45fcc;
extern PyObject *const_str_plain_iri2uri;
extern PyObject *const_str_plain_MIT;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_fragment;
static PyObject *const_tuple_str_plain_o_tuple;
extern PyObject *const_str_plain___license__;
static PyObject *const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple;
extern PyObject *const_str_plain_low;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_digest_12bb0324f53f161a2f7e05d6e066a209;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_tuple_str_plain_idna_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_cd6c3d0590d34dd2f89e0333f1e5e8bf;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_str_plain_urlsplit;
extern PyObject *const_str_plain___cached__;
static PyObject *const_list_5e4cd2a58d8d5eee95c7d54624012a44_list;
extern PyObject *const_str_plain_urlunsplit;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_7bceca1e67472947ef9afb259088fa85 = UNSTREAM_STRING_ASCII( &constant_bin[ 459778 ], 16, 0 );
    const_str_plain_escape_range = UNSTREAM_STRING_ASCII( &constant_bin[ 459794 ], 12, 1 );
    const_str_digest_691bcb2dbdb55609d35d1cc4b41ec2d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 459806 ], 47, 0 );
    const_str_digest_076d2a5f973ac73dd30c47d9dc8e6f04 = UNSTREAM_STRING_ASCII( &constant_bin[ 459853 ], 5, 0 );
    const_str_digest_0cbc5f618e817db3e5420de8f7e1ba69 = UNSTREAM_STRING_ASCII( &constant_bin[ 459858 ], 25, 0 );
    const_str_digest_71dd8f58cc9e0e42228fe2c6b0d9db59 = UNSTREAM_STRING_ASCII( &constant_bin[ 459883 ], 25, 0 );
    const_str_digest_571f8905888117917ae2bc3ce7e9a829 = UNSTREAM_STRING_ASCII( &constant_bin[ 459908 ], 158, 0 );
    const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple, 1, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    PyTuple_SET_ITEM( const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple, 3, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    PyTuple_SET_ITEM( const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple, 4, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    const_str_digest_d8b86ecb9a056483a759465735c45fcc = UNSTREAM_STRING_ASCII( &constant_bin[ 460066 ], 5, 0 );
    const_tuple_str_plain_o_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_o_tuple, 0, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple, 0, const_str_plain_uri ); Py_INCREF( const_str_plain_uri );
    PyTuple_SET_ITEM( const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple, 2, const_str_plain_authority ); Py_INCREF( const_str_plain_authority );
    PyTuple_SET_ITEM( const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple, 4, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple, 5, const_str_plain_fragment ); Py_INCREF( const_str_plain_fragment );
    const_list_5e4cd2a58d8d5eee95c7d54624012a44_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 460071 ], 245 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_httplib2$iri2uri( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_063d0d57e377675dfe155202e71febe0;
static PyCodeObject *codeobj_75eb0b1720206f1dbc2532a7371206f4;
static PyCodeObject *codeobj_e8d8c37be07d6f71a886073aa3c85b29;
static PyCodeObject *codeobj_3fa7addc75d1f8828393ba98f122148f;
static PyCodeObject *codeobj_2806ecb7095ddf687135ca517021ddaf;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_691bcb2dbdb55609d35d1cc4b41ec2d7;
    codeobj_063d0d57e377675dfe155202e71febe0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 71, const_tuple_str_plain_c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_75eb0b1720206f1dbc2532a7371206f4 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 55, const_tuple_str_plain_o_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e8d8c37be07d6f71a886073aa3c85b29 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0cbc5f618e817db3e5420de8f7e1ba69, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3fa7addc75d1f8828393ba98f122148f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 48, const_tuple_7dcff63bddb8ea4dbad5749bb171e949_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2806ecb7095ddf687135ca517021ddaf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iri2uri, 60, const_tuple_b81a18adcdbbda1a5ffca3239d2e9f1c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_httplib2$iri2uri$$$function_1_encode(  );


static PyObject *MAKE_FUNCTION_httplib2$iri2uri$$$function_2_iri2uri(  );


// The module function definitions.
static PyObject *impl_httplib2$iri2uri$$$function_1_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_retval = NULL;
    PyObject *var_i = NULL;
    PyObject *var_low = NULL;
    PyObject *var_high = NULL;
    PyObject *outline_0_var_o = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3fa7addc75d1f8828393ba98f122148f;
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
    int tmp_res;
    struct Nuitka_FrameObject *frame_75eb0b1720206f1dbc2532a7371206f4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_75eb0b1720206f1dbc2532a7371206f4_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3fa7addc75d1f8828393ba98f122148f = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_c );
        tmp_assign_source_1 = par_c;
        assert( var_retval == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_retval = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fa7addc75d1f8828393ba98f122148f, codeobj_3fa7addc75d1f8828393ba98f122148f, module_httplib2$iri2uri, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fa7addc75d1f8828393ba98f122148f = cache_frame_3fa7addc75d1f8828393ba98f122148f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fa7addc75d1f8828393ba98f122148f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fa7addc75d1f8828393ba98f122148f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT( par_c );
        tmp_ord_arg_1 = par_c;
        tmp_assign_source_2 = BUILTIN_ORD( tmp_ord_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_escape_range );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_escape_range );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "escape_range" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = tmp_mvar_value_1;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 51;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooooo";
            exception_lineno = 51;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ooooo";
            exception_lineno = 51;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

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
                    exception_lineno = 51;
                    goto try_except_handler_4;
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
            exception_lineno = 51;
            goto try_except_handler_4;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_low;
            var_low = tmp_assign_source_8;
            Py_INCREF( var_low );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_high;
            var_high = tmp_assign_source_9;
            Py_INCREF( var_high );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_1 = var_i;
        CHECK_OBJECT( var_low );
        tmp_compexpr_right_1 = var_low;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_2 = var_i;
        CHECK_OBJECT( var_low );
        tmp_compexpr_right_2 = var_low;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_3 = var_i;
        CHECK_OBJECT( var_high );
        tmp_compexpr_right_3 = var_high;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_source_name_1 = const_str_empty;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
            assert( !(tmp_called_name_1 == NULL) );
            // Tried code:
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_c );
                tmp_called_instance_1 = par_c;
                frame_3fa7addc75d1f8828393ba98f122148f->m_frame.f_lineno = 55;
                tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_1 = "ooooo";
                    goto try_except_handler_5;
                }
                tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_1 = "ooooo";
                    goto try_except_handler_5;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_12;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_75eb0b1720206f1dbc2532a7371206f4_2, codeobj_75eb0b1720206f1dbc2532a7371206f4, module_httplib2$iri2uri, sizeof(void *) );
            frame_75eb0b1720206f1dbc2532a7371206f4_2 = cache_frame_75eb0b1720206f1dbc2532a7371206f4_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_75eb0b1720206f1dbc2532a7371206f4_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_75eb0b1720206f1dbc2532a7371206f4_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_2 = tmp_listcomp_1__$0;
                tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_13 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 55;
                        goto try_except_handler_6;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_o;
                    outline_0_var_o = tmp_assign_source_14;
                    Py_INCREF( outline_0_var_o );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                tmp_left_name_1 = const_str_digest_d8b86ecb9a056483a759465735c45fcc;
                CHECK_OBJECT( outline_0_var_o );
                tmp_right_name_1 = outline_0_var_o;
                tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto try_except_handler_6;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_2 = "o";
                    goto try_except_handler_6;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_args_element_name_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_args_element_name_1 );
            goto try_return_handler_6;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_1_encode );
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

            goto frame_return_exit_2;
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
            RESTORE_FRAME_EXCEPTION( frame_75eb0b1720206f1dbc2532a7371206f4_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_75eb0b1720206f1dbc2532a7371206f4_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_5;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_75eb0b1720206f1dbc2532a7371206f4_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_75eb0b1720206f1dbc2532a7371206f4_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_75eb0b1720206f1dbc2532a7371206f4_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_75eb0b1720206f1dbc2532a7371206f4_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_75eb0b1720206f1dbc2532a7371206f4_2,
                type_description_2,
                outline_0_var_o
            );


            // Release cached frame.
            if ( frame_75eb0b1720206f1dbc2532a7371206f4_2 == cache_frame_75eb0b1720206f1dbc2532a7371206f4_2 )
            {
                Py_DECREF( frame_75eb0b1720206f1dbc2532a7371206f4_2 );
            }
            cache_frame_75eb0b1720206f1dbc2532a7371206f4_2 = NULL;

            assertFrameObject( frame_75eb0b1720206f1dbc2532a7371206f4_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_1_encode );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            Py_XDECREF( outline_0_var_o );
            outline_0_var_o = NULL;

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

            Py_XDECREF( outline_0_var_o );
            outline_0_var_o = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_1_encode );
            return NULL;
            outline_exception_1:;
            exception_lineno = 55;
            goto try_except_handler_2;
            outline_result_1:;
            frame_3fa7addc75d1f8828393ba98f122148f->m_frame.f_lineno = 55;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_retval;
                assert( old != NULL );
                var_retval = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( var_retval == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retval" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_retval;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa7addc75d1f8828393ba98f122148f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa7addc75d1f8828393ba98f122148f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa7addc75d1f8828393ba98f122148f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fa7addc75d1f8828393ba98f122148f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fa7addc75d1f8828393ba98f122148f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fa7addc75d1f8828393ba98f122148f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fa7addc75d1f8828393ba98f122148f,
        type_description_1,
        par_c,
        var_retval,
        var_i,
        var_low,
        var_high
    );


    // Release cached frame.
    if ( frame_3fa7addc75d1f8828393ba98f122148f == cache_frame_3fa7addc75d1f8828393ba98f122148f )
    {
        Py_DECREF( frame_3fa7addc75d1f8828393ba98f122148f );
    }
    cache_frame_3fa7addc75d1f8828393ba98f122148f = NULL;

    assertFrameObject( frame_3fa7addc75d1f8828393ba98f122148f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_1_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_low );
    var_low = NULL;

    Py_XDECREF( var_high );
    var_high = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_low );
    var_low = NULL;

    Py_XDECREF( var_high );
    var_high = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_1_encode );
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


static PyObject *impl_httplib2$iri2uri$$$function_2_iri2uri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uri = python_pars[ 0 ];
    PyObject *var_scheme = NULL;
    PyObject *var_authority = NULL;
    PyObject *var_path = NULL;
    PyObject *var_query = NULL;
    PyObject *var_fragment = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2806ecb7095ddf687135ca517021ddaf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    struct Nuitka_FrameObject *frame_063d0d57e377675dfe155202e71febe0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_063d0d57e377675dfe155202e71febe0_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_2806ecb7095ddf687135ca517021ddaf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2806ecb7095ddf687135ca517021ddaf, codeobj_2806ecb7095ddf687135ca517021ddaf, module_httplib2$iri2uri, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2806ecb7095ddf687135ca517021ddaf = cache_frame_2806ecb7095ddf687135ca517021ddaf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2806ecb7095ddf687135ca517021ddaf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2806ecb7095ddf687135ca517021ddaf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_uri );
        tmp_isinstance_inst_1 = par_uri;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_urllib );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urllib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 65;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_uri );
            tmp_args_element_name_1 = par_uri;
            frame_2806ecb7095ddf687135ca517021ddaf->m_frame.f_lineno = 65;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_urlsplit, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;
                type_description_1 = "oooooo";
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
            tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
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


                type_description_1 = "oooooo";
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
            tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
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


                type_description_1 = "oooooo";
                exception_lineno = 65;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
            if ( tmp_assign_source_4 == NULL )
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


                type_description_1 = "oooooo";
                exception_lineno = 65;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_3 == NULL );
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
            if ( tmp_assign_source_5 == NULL )
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


                type_description_1 = "oooooo";
                exception_lineno = 65;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_4 == NULL );
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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


                type_description_1 = "oooooo";
                exception_lineno = 65;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_5 == NULL );
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
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

                        type_description_1 = "oooooo";
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooo";
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

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_5 );
        tmp_tuple_unpack_1__element_5 = NULL;

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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
            assert( var_scheme == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_scheme = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
            assert( var_authority == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_authority = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
            assert( var_path == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_path = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
            assert( var_query == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_query = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_5;
            assert( var_fragment == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_fragment = tmp_assign_source_11;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_5 );
        tmp_tuple_unpack_1__element_5 = NULL;

        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var_authority );
            tmp_called_instance_3 = var_authority;
            frame_2806ecb7095ddf687135ca517021ddaf->m_frame.f_lineno = 66;
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_idna_tuple, 0 ) );

            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_2806ecb7095ddf687135ca517021ddaf->m_frame.f_lineno = 66;
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_authority;
                assert( old != NULL );
                var_authority = tmp_assign_source_12;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_urllib );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urllib" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 70;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parse );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_scheme );
            tmp_tuple_element_1 = var_scheme;
            tmp_args_element_name_2 = PyTuple_New( 5 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_authority );
            tmp_tuple_element_1 = var_authority;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_path );
            tmp_tuple_element_1 = var_path;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_query );
            tmp_tuple_element_1 = var_query;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 3, tmp_tuple_element_1 );
            CHECK_OBJECT( var_fragment );
            tmp_tuple_element_1 = var_fragment;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 4, tmp_tuple_element_1 );
            frame_2806ecb7095ddf687135ca517021ddaf->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_urlunsplit, call_args );
            }

            Py_DECREF( tmp_called_instance_4 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_uri;
                assert( old != NULL );
                par_uri = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_3;
            tmp_source_name_3 = const_str_empty;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
            assert( !(tmp_called_name_1 == NULL) );
            // Tried code:
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( par_uri );
                tmp_iter_arg_2 = par_uri;
                tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_1 = "oooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                tmp_assign_source_16 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_16;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_063d0d57e377675dfe155202e71febe0_2, codeobj_063d0d57e377675dfe155202e71febe0, module_httplib2$iri2uri, sizeof(void *) );
            frame_063d0d57e377675dfe155202e71febe0_2 = cache_frame_063d0d57e377675dfe155202e71febe0_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_063d0d57e377675dfe155202e71febe0_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_063d0d57e377675dfe155202e71febe0_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_17;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_17 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 71;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_18 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_c;
                    outline_0_var_c = tmp_assign_source_18;
                    Py_INCREF( outline_0_var_c );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_encode );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encode );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encode" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                CHECK_OBJECT( outline_0_var_c );
                tmp_args_element_name_4 = outline_0_var_c;
                frame_063d0d57e377675dfe155202e71febe0_2->m_frame.f_lineno = 71;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_2 = "o";
                    goto try_except_handler_5;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_args_element_name_3 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_args_element_name_3 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_2_iri2uri );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
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
            try_except_handler_5:;
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
            RESTORE_FRAME_EXCEPTION( frame_063d0d57e377675dfe155202e71febe0_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_1:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_063d0d57e377675dfe155202e71febe0_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_4;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_063d0d57e377675dfe155202e71febe0_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_063d0d57e377675dfe155202e71febe0_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_063d0d57e377675dfe155202e71febe0_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_063d0d57e377675dfe155202e71febe0_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_063d0d57e377675dfe155202e71febe0_2,
                type_description_2,
                outline_0_var_c
            );


            // Release cached frame.
            if ( frame_063d0d57e377675dfe155202e71febe0_2 == cache_frame_063d0d57e377675dfe155202e71febe0_2 )
            {
                Py_DECREF( frame_063d0d57e377675dfe155202e71febe0_2 );
            }
            cache_frame_063d0d57e377675dfe155202e71febe0_2 = NULL;

            assertFrameObject( frame_063d0d57e377675dfe155202e71febe0_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_2_iri2uri );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            goto outline_result_1;
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

            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_2_iri2uri );
            return NULL;
            outline_exception_1:;
            exception_lineno = 71;
            goto frame_exception_exit_1;
            outline_result_1:;
            frame_2806ecb7095ddf687135ca517021ddaf->m_frame.f_lineno = 71;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_uri;
                assert( old != NULL );
                par_uri = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2806ecb7095ddf687135ca517021ddaf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2806ecb7095ddf687135ca517021ddaf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2806ecb7095ddf687135ca517021ddaf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2806ecb7095ddf687135ca517021ddaf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2806ecb7095ddf687135ca517021ddaf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2806ecb7095ddf687135ca517021ddaf,
        type_description_1,
        par_uri,
        var_scheme,
        var_authority,
        var_path,
        var_query,
        var_fragment
    );


    // Release cached frame.
    if ( frame_2806ecb7095ddf687135ca517021ddaf == cache_frame_2806ecb7095ddf687135ca517021ddaf )
    {
        Py_DECREF( frame_2806ecb7095ddf687135ca517021ddaf );
    }
    cache_frame_2806ecb7095ddf687135ca517021ddaf = NULL;

    assertFrameObject( frame_2806ecb7095ddf687135ca517021ddaf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT( par_uri );
    tmp_return_value = par_uri;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_2_iri2uri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_authority );
    var_authority = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_query );
    var_query = NULL;

    Py_XDECREF( var_fragment );
    var_fragment = NULL;

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

    CHECK_OBJECT( (PyObject *)par_uri );
    Py_DECREF( par_uri );
    par_uri = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_authority );
    var_authority = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_query );
    var_query = NULL;

    Py_XDECREF( var_fragment );
    var_fragment = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( httplib2$iri2uri$$$function_2_iri2uri );
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



static PyObject *MAKE_FUNCTION_httplib2$iri2uri$$$function_1_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httplib2$iri2uri$$$function_1_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3fa7addc75d1f8828393ba98f122148f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_httplib2$iri2uri,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httplib2$iri2uri$$$function_2_iri2uri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httplib2$iri2uri$$$function_2_iri2uri,
        const_str_plain_iri2uri,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2806ecb7095ddf687135ca517021ddaf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_httplib2$iri2uri,
        const_str_digest_571f8905888117917ae2bc3ce7e9a829,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_httplib2$iri2uri =
{
    PyModuleDef_HEAD_INIT,
    "httplib2.iri2uri",
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
MOD_ENTRY_DECL(httplib2$iri2uri)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(httplib2$iri2uri)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_httplib2$iri2uri );
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
    puts("httplib2.iri2uri: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("httplib2.iri2uri: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("httplib2.iri2uri: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inithttplib2$iri2uri" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_httplib2$iri2uri = Py_InitModule4(
        "httplib2.iri2uri",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_httplib2$iri2uri = PyModule_Create( &mdef_httplib2$iri2uri );
#endif

    moduledict_httplib2$iri2uri = MODULE_DICT( module_httplib2$iri2uri );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_httplib2$iri2uri,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_httplib2$iri2uri,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_httplib2$iri2uri,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_httplib2$iri2uri,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_httplib2$iri2uri );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_7bceca1e67472947ef9afb259088fa85, module_httplib2$iri2uri );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e8d8c37be07d6f71a886073aa3c85b29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_71dd8f58cc9e0e42228fe2c6b0d9db59;
        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_691bcb2dbdb55609d35d1cc4b41ec2d7;
        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e8d8c37be07d6f71a886073aa3c85b29 = MAKE_MODULE_FRAME( codeobj_e8d8c37be07d6f71a886073aa3c85b29, module_httplib2$iri2uri );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e8d8c37be07d6f71a886073aa3c85b29 );
    assert( Py_REFCNT( frame_e8d8c37be07d6f71a886073aa3c85b29 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_691bcb2dbdb55609d35d1cc4b41ec2d7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_cd6c3d0590d34dd2f89e0333f1e5e8bf;
        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_digest_12bb0324f53f161a2f7e05d6e066a209;
        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyList_New( 0 );
        UPDATE_STRING_DICT1( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___contributors__, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_digest_076d2a5f973ac73dd30c47d9dc8e6f04;
        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_plain_MIT;
        UPDATE_STRING_DICT0( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
        tmp_globals_name_1 = (PyObject *)moduledict_httplib2$iri2uri;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_e8d8c37be07d6f71a886073aa3c85b29->m_frame.f_lineno = 10;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_urllib, tmp_assign_source_9 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8d8c37be07d6f71a886073aa3c85b29 );
#endif
    popFrameStack();

    assertFrameObject( frame_e8d8c37be07d6f71a886073aa3c85b29 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8d8c37be07d6f71a886073aa3c85b29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8d8c37be07d6f71a886073aa3c85b29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8d8c37be07d6f71a886073aa3c85b29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8d8c37be07d6f71a886073aa3c85b29, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_5e4cd2a58d8d5eee95c7d54624012a44_list );
        UPDATE_STRING_DICT1( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_escape_range, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_httplib2$iri2uri$$$function_1_encode(  );



        UPDATE_STRING_DICT1( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_encode, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_httplib2$iri2uri$$$function_2_iri2uri(  );



        UPDATE_STRING_DICT1( moduledict_httplib2$iri2uri, (Nuitka_StringObject *)const_str_plain_iri2uri, tmp_assign_source_12 );
    }

    return MOD_RETURN_VALUE( module_httplib2$iri2uri );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
