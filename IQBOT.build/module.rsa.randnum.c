/* Generated code for Python module 'rsa.randnum'
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

/* The "_module_rsa$randnum" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$randnum;
PyDictObject *moduledict_rsa$randnum;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_urandom;
static PyObject *const_str_plain_read_random_int;
extern PyObject *const_str_digest_865e7095d477d90f1eead964158b0a6f;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_tries;
extern PyObject *const_str_plain_nbytes;
static PyObject *const_str_plain_randomvalue;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_7b774e5031cf586ccccaacc0eb142666;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_transform;
static PyObject *const_str_digest_523078eb90a80da22798bfb99de8eb84;
extern PyObject *const_str_plain_bytes2int;
static PyObject *const_tuple_str_plain_common_str_plain_transform_tuple;
static PyObject *const_str_plain_randomdata;
extern PyObject *const_str_plain_byte;
static PyObject *const_str_plain_read_random_bits;
extern PyObject *const_str_plain_origin;
extern PyObject *const_int_pos_8;
static PyObject *const_tuple_str_plain_nbits_str_plain_value_tuple;
static PyObject *const_str_digest_3622edd2b205b911644c40daf72f7e9c;
extern PyObject *const_str_plain_nbits;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_rsa;
static PyObject *const_str_digest_43aa329ac4e6b0976464495569d42d07;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple;
static PyObject *const_str_digest_518c6321195a4820b922b274f8b85542;
extern PyObject *const_str_plain_bit_size;
extern PyObject *const_str_plain_read_random_odd_int;
static PyObject *const_str_digest_797a00141199fcbb4e97277a2832c7e0;
static PyObject *const_str_plain_rbits;
static PyObject *const_tuple_str_plain_byte_tuple;
extern PyObject *const_str_plain_common;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_digest_38ae76d41c37a561fb493fd3359762a3;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_randint;
static PyObject *const_tuple_43ffc955d13bf1716a050898326e9459_tuple;
static PyObject *const_str_digest_6b9f1018cf396a41f991d26597353e45;
static PyObject *const_str_plain_maxvalue;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_read_random_int = UNSTREAM_STRING_ASCII( &constant_bin[ 2744515 ], 15, 1 );
    const_str_plain_tries = UNSTREAM_STRING_ASCII( &constant_bin[ 3567 ], 5, 1 );
    const_str_plain_randomvalue = UNSTREAM_STRING_ASCII( &constant_bin[ 2744530 ], 11, 1 );
    const_str_digest_7b774e5031cf586ccccaacc0eb142666 = UNSTREAM_STRING_ASCII( &constant_bin[ 2744541 ], 56, 0 );
    const_str_digest_523078eb90a80da22798bfb99de8eb84 = UNSTREAM_STRING_ASCII( &constant_bin[ 2744597 ], 141, 0 );
    const_tuple_str_plain_common_str_plain_transform_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_str_plain_transform_tuple, 0, const_str_plain_common ); Py_INCREF( const_str_plain_common );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_str_plain_transform_tuple, 1, const_str_plain_transform ); Py_INCREF( const_str_plain_transform );
    const_str_plain_randomdata = UNSTREAM_STRING_ASCII( &constant_bin[ 2744738 ], 10, 1 );
    const_str_plain_read_random_bits = UNSTREAM_STRING_ASCII( &constant_bin[ 2744748 ], 16, 1 );
    const_tuple_str_plain_nbits_str_plain_value_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_value_tuple, 0, const_str_plain_nbits ); Py_INCREF( const_str_plain_nbits );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_value_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_3622edd2b205b911644c40daf72f7e9c = UNSTREAM_STRING_ASCII( &constant_bin[ 2744764 ], 42, 0 );
    const_str_digest_43aa329ac4e6b0976464495569d42d07 = UNSTREAM_STRING_ASCII( &constant_bin[ 2744806 ], 40, 0 );
    const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple = PyTuple_New( 4 );
    const_str_plain_maxvalue = UNSTREAM_STRING_ASCII( &constant_bin[ 2744846 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple, 0, const_str_plain_maxvalue ); Py_INCREF( const_str_plain_maxvalue );
    PyTuple_SET_ITEM( const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple, 1, const_str_plain_bit_size ); Py_INCREF( const_str_plain_bit_size );
    PyTuple_SET_ITEM( const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple, 2, const_str_plain_tries ); Py_INCREF( const_str_plain_tries );
    PyTuple_SET_ITEM( const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple, 0, const_str_plain_nbits ); Py_INCREF( const_str_plain_nbits );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple, 1, const_str_plain_randomdata ); Py_INCREF( const_str_plain_randomdata );
    PyTuple_SET_ITEM( const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_518c6321195a4820b922b274f8b85542 = UNSTREAM_STRING_ASCII( &constant_bin[ 2744854 ], 222, 0 );
    const_str_digest_797a00141199fcbb4e97277a2832c7e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2745076 ], 20, 0 );
    const_str_plain_rbits = UNSTREAM_STRING_ASCII( &constant_bin[ 2745096 ], 5, 1 );
    const_tuple_str_plain_byte_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_tuple, 0, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    const_tuple_43ffc955d13bf1716a050898326e9459_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_43ffc955d13bf1716a050898326e9459_tuple, 0, const_str_plain_nbits ); Py_INCREF( const_str_plain_nbits );
    PyTuple_SET_ITEM( const_tuple_43ffc955d13bf1716a050898326e9459_tuple, 1, const_str_plain_nbytes ); Py_INCREF( const_str_plain_nbytes );
    PyTuple_SET_ITEM( const_tuple_43ffc955d13bf1716a050898326e9459_tuple, 2, const_str_plain_rbits ); Py_INCREF( const_str_plain_rbits );
    PyTuple_SET_ITEM( const_tuple_43ffc955d13bf1716a050898326e9459_tuple, 3, const_str_plain_randomdata ); Py_INCREF( const_str_plain_randomdata );
    PyTuple_SET_ITEM( const_tuple_43ffc955d13bf1716a050898326e9459_tuple, 4, const_str_plain_randomvalue ); Py_INCREF( const_str_plain_randomvalue );
    const_str_digest_6b9f1018cf396a41f991d26597353e45 = UNSTREAM_STRING_ASCII( &constant_bin[ 2745101 ], 104, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_rsa$randnum( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1c0fd616cf77714eb052ac3a3fb60503;
static PyCodeObject *codeobj_9a989e56e40813e423ba26fffab2142a;
static PyCodeObject *codeobj_f66c62272f5395364e68cb4034b6557d;
static PyCodeObject *codeobj_35690747dfae3af658ed2244a2b3d3b9;
static PyCodeObject *codeobj_5b3aa32abff40d252ac9023689105ae4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3622edd2b205b911644c40daf72f7e9c;
    codeobj_1c0fd616cf77714eb052ac3a3fb60503 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_797a00141199fcbb4e97277a2832c7e0, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9a989e56e40813e423ba26fffab2142a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_randint, 75, const_tuple_6d37c8837e3bd9ceec5265c460d80411_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f66c62272f5395364e68cb4034b6557d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_random_bits, 27, const_tuple_43ffc955d13bf1716a050898326e9459_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35690747dfae3af658ed2244a2b3d3b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_random_int, 48, const_tuple_str_plain_nbits_str_plain_randomdata_str_plain_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b3aa32abff40d252ac9023689105ae4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_random_odd_int, 62, const_tuple_str_plain_nbits_str_plain_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_1_read_random_bits(  );


static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_2_read_random_int(  );


static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_3_read_random_odd_int(  );


static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_4_randint(  );


// The module function definitions.
static PyObject *impl_rsa$randnum$$$function_1_read_random_bits( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nbits = python_pars[ 0 ];
    PyObject *var_nbytes = NULL;
    PyObject *var_rbits = NULL;
    PyObject *var_randomdata = NULL;
    PyObject *var_randomvalue = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f66c62272f5395364e68cb4034b6557d;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f66c62272f5395364e68cb4034b6557d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f66c62272f5395364e68cb4034b6557d, codeobj_f66c62272f5395364e68cb4034b6557d, module_rsa$randnum, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f66c62272f5395364e68cb4034b6557d = cache_frame_f66c62272f5395364e68cb4034b6557d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f66c62272f5395364e68cb4034b6557d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f66c62272f5395364e68cb4034b6557d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_nbits );
        tmp_left_name_1 = par_nbits;
        tmp_right_name_1 = const_int_pos_8;
        tmp_iter_arg_1 = BUILTIN_DIVMOD( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
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
            exception_lineno = 34;
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
            exception_lineno = 34;
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
                    exception_lineno = 34;
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
            exception_lineno = 34;
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
        assert( var_nbytes == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_nbytes = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_rbits == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_rbits = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_os );

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

            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_nbytes );
        tmp_args_element_name_1 = var_nbytes;
        frame_f66c62272f5395364e68cb4034b6557d->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_urandom, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_randomdata == NULL );
        var_randomdata = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_rbits );
        tmp_compexpr_left_1 = var_rbits;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_ord_arg_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_os );

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

                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            frame_f66c62272f5395364e68cb4034b6557d->m_frame.f_lineno = 41;
            tmp_ord_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_urandom, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_ord_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = BUILTIN_ORD( tmp_ord_arg_1 );
            Py_DECREF( tmp_ord_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_randomvalue == NULL );
            var_randomvalue = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_randomvalue );
            tmp_left_name_2 = var_randomvalue;
            tmp_left_name_3 = const_int_pos_8;
            CHECK_OBJECT( var_rbits );
            tmp_right_name_3 = var_rbits;
            tmp_right_name_2 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceRshift, &tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_2;
            var_randomvalue = tmp_assign_source_8;

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_byte );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 43;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( var_randomvalue );
            tmp_args_element_name_2 = var_randomvalue;
            frame_f66c62272f5395364e68cb4034b6557d->m_frame.f_lineno = 43;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_randomdata );
            tmp_right_name_4 = var_randomdata;
            tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_randomdata;
                assert( old != NULL );
                var_randomdata = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f66c62272f5395364e68cb4034b6557d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f66c62272f5395364e68cb4034b6557d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f66c62272f5395364e68cb4034b6557d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f66c62272f5395364e68cb4034b6557d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f66c62272f5395364e68cb4034b6557d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f66c62272f5395364e68cb4034b6557d,
        type_description_1,
        par_nbits,
        var_nbytes,
        var_rbits,
        var_randomdata,
        var_randomvalue
    );


    // Release cached frame.
    if ( frame_f66c62272f5395364e68cb4034b6557d == cache_frame_f66c62272f5395364e68cb4034b6557d )
    {
        Py_DECREF( frame_f66c62272f5395364e68cb4034b6557d );
    }
    cache_frame_f66c62272f5395364e68cb4034b6557d = NULL;

    assertFrameObject( frame_f66c62272f5395364e68cb4034b6557d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_randomdata );
    tmp_return_value = var_randomdata;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_1_read_random_bits );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    CHECK_OBJECT( (PyObject *)var_nbytes );
    Py_DECREF( var_nbytes );
    var_nbytes = NULL;

    CHECK_OBJECT( (PyObject *)var_rbits );
    Py_DECREF( var_rbits );
    var_rbits = NULL;

    CHECK_OBJECT( (PyObject *)var_randomdata );
    Py_DECREF( var_randomdata );
    var_randomdata = NULL;

    Py_XDECREF( var_randomvalue );
    var_randomvalue = NULL;

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

    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    Py_XDECREF( var_nbytes );
    var_nbytes = NULL;

    Py_XDECREF( var_rbits );
    var_rbits = NULL;

    Py_XDECREF( var_randomdata );
    var_randomdata = NULL;

    Py_XDECREF( var_randomvalue );
    var_randomvalue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_1_read_random_bits );
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


static PyObject *impl_rsa$randnum$$$function_2_read_random_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nbits = python_pars[ 0 ];
    PyObject *var_randomdata = NULL;
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_35690747dfae3af658ed2244a2b3d3b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_35690747dfae3af658ed2244a2b3d3b9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35690747dfae3af658ed2244a2b3d3b9, codeobj_35690747dfae3af658ed2244a2b3d3b9, module_rsa$randnum, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_35690747dfae3af658ed2244a2b3d3b9 = cache_frame_35690747dfae3af658ed2244a2b3d3b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35690747dfae3af658ed2244a2b3d3b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35690747dfae3af658ed2244a2b3d3b9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_read_random_bits );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_random_bits );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "read_random_bits" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_nbits );
        tmp_args_element_name_1 = par_nbits;
        frame_35690747dfae3af658ed2244a2b3d3b9->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_randomdata == NULL );
        var_randomdata = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_transform );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transform );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "transform" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_randomdata );
        tmp_args_element_name_2 = var_randomdata;
        frame_35690747dfae3af658ed2244a2b3d3b9->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bytes2int, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_value == NULL );
        var_value = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_value );
        tmp_left_name_1 = var_value;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( par_nbits );
        tmp_left_name_3 = par_nbits;
        tmp_right_name_3 = const_int_pos_1;
        tmp_right_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_1;
        var_value = tmp_assign_source_3;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35690747dfae3af658ed2244a2b3d3b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35690747dfae3af658ed2244a2b3d3b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35690747dfae3af658ed2244a2b3d3b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35690747dfae3af658ed2244a2b3d3b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35690747dfae3af658ed2244a2b3d3b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35690747dfae3af658ed2244a2b3d3b9,
        type_description_1,
        par_nbits,
        var_randomdata,
        var_value
    );


    // Release cached frame.
    if ( frame_35690747dfae3af658ed2244a2b3d3b9 == cache_frame_35690747dfae3af658ed2244a2b3d3b9 )
    {
        Py_DECREF( frame_35690747dfae3af658ed2244a2b3d3b9 );
    }
    cache_frame_35690747dfae3af658ed2244a2b3d3b9 = NULL;

    assertFrameObject( frame_35690747dfae3af658ed2244a2b3d3b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_value );
    tmp_return_value = var_value;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_2_read_random_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    CHECK_OBJECT( (PyObject *)var_randomdata );
    Py_DECREF( var_randomdata );
    var_randomdata = NULL;

    CHECK_OBJECT( (PyObject *)var_value );
    Py_DECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( var_randomdata );
    var_randomdata = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_2_read_random_int );
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


static PyObject *impl_rsa$randnum$$$function_3_read_random_odd_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nbits = python_pars[ 0 ];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_5b3aa32abff40d252ac9023689105ae4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5b3aa32abff40d252ac9023689105ae4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5b3aa32abff40d252ac9023689105ae4, codeobj_5b3aa32abff40d252ac9023689105ae4, module_rsa$randnum, sizeof(void *)+sizeof(void *) );
    frame_5b3aa32abff40d252ac9023689105ae4 = cache_frame_5b3aa32abff40d252ac9023689105ae4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5b3aa32abff40d252ac9023689105ae4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5b3aa32abff40d252ac9023689105ae4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_read_random_int );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_random_int );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "read_random_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_nbits );
        tmp_args_element_name_1 = par_nbits;
        frame_5b3aa32abff40d252ac9023689105ae4->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_value == NULL );
        var_value = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_value );
        tmp_left_name_1 = var_value;
        tmp_right_name_1 = const_int_pos_1;
        tmp_return_value = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b3aa32abff40d252ac9023689105ae4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b3aa32abff40d252ac9023689105ae4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5b3aa32abff40d252ac9023689105ae4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5b3aa32abff40d252ac9023689105ae4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5b3aa32abff40d252ac9023689105ae4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5b3aa32abff40d252ac9023689105ae4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b3aa32abff40d252ac9023689105ae4,
        type_description_1,
        par_nbits,
        var_value
    );


    // Release cached frame.
    if ( frame_5b3aa32abff40d252ac9023689105ae4 == cache_frame_5b3aa32abff40d252ac9023689105ae4 )
    {
        Py_DECREF( frame_5b3aa32abff40d252ac9023689105ae4 );
    }
    cache_frame_5b3aa32abff40d252ac9023689105ae4 = NULL;

    assertFrameObject( frame_5b3aa32abff40d252ac9023689105ae4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_3_read_random_odd_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nbits );
    Py_DECREF( par_nbits );
    par_nbits = NULL;

    CHECK_OBJECT( (PyObject *)var_value );
    Py_DECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_3_read_random_odd_int );
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


static PyObject *impl_rsa$randnum$$$function_4_randint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_maxvalue = python_pars[ 0 ];
    PyObject *var_bit_size = NULL;
    PyObject *var_tries = NULL;
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_9a989e56e40813e423ba26fffab2142a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9a989e56e40813e423ba26fffab2142a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a989e56e40813e423ba26fffab2142a, codeobj_9a989e56e40813e423ba26fffab2142a, module_rsa$randnum, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9a989e56e40813e423ba26fffab2142a = cache_frame_9a989e56e40813e423ba26fffab2142a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a989e56e40813e423ba26fffab2142a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a989e56e40813e423ba26fffab2142a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_common );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "common" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_maxvalue );
        tmp_args_element_name_1 = par_maxvalue;
        frame_9a989e56e40813e423ba26fffab2142a->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_bit_size, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_bit_size == NULL );
        var_bit_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_0;
        assert( var_tries == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_tries = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_read_random_int );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_random_int );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "read_random_int" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        if ( var_bit_size == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bit_size" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_bit_size;
        frame_9a989e56e40813e423ba26fffab2142a->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_value );
        tmp_compexpr_left_1 = var_value;
        CHECK_OBJECT( par_maxvalue );
        tmp_compexpr_right_1 = par_maxvalue;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooo";
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
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_tries );
        tmp_left_name_1 = var_tries;
        tmp_right_name_1 = const_int_pos_10;
        tmp_compexpr_left_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( var_tries );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_tries );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            if ( var_bit_size == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bit_size" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 95;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = var_bit_size;
            tmp_right_name_2 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = tmp_left_name_2;
            var_bit_size = tmp_assign_source_4;

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_tries );
        tmp_left_name_3 = var_tries;
        tmp_right_name_3 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_name_3;
        var_tries = tmp_assign_source_5;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a989e56e40813e423ba26fffab2142a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a989e56e40813e423ba26fffab2142a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a989e56e40813e423ba26fffab2142a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a989e56e40813e423ba26fffab2142a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a989e56e40813e423ba26fffab2142a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a989e56e40813e423ba26fffab2142a,
        type_description_1,
        par_maxvalue,
        var_bit_size,
        var_tries,
        var_value
    );


    // Release cached frame.
    if ( frame_9a989e56e40813e423ba26fffab2142a == cache_frame_9a989e56e40813e423ba26fffab2142a )
    {
        Py_DECREF( frame_9a989e56e40813e423ba26fffab2142a );
    }
    cache_frame_9a989e56e40813e423ba26fffab2142a = NULL;

    assertFrameObject( frame_9a989e56e40813e423ba26fffab2142a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_value );
    tmp_return_value = var_value;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_4_randint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_maxvalue );
    Py_DECREF( par_maxvalue );
    par_maxvalue = NULL;

    Py_XDECREF( var_bit_size );
    var_bit_size = NULL;

    CHECK_OBJECT( (PyObject *)var_tries );
    Py_DECREF( var_tries );
    var_tries = NULL;

    CHECK_OBJECT( (PyObject *)var_value );
    Py_DECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_maxvalue );
    Py_DECREF( par_maxvalue );
    par_maxvalue = NULL;

    Py_XDECREF( var_bit_size );
    var_bit_size = NULL;

    Py_XDECREF( var_tries );
    var_tries = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( rsa$randnum$$$function_4_randint );
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



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_1_read_random_bits(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function_1_read_random_bits,
        const_str_plain_read_random_bits,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f66c62272f5395364e68cb4034b6557d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$randnum,
        const_str_digest_523078eb90a80da22798bfb99de8eb84,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_2_read_random_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function_2_read_random_int,
        const_str_plain_read_random_int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35690747dfae3af658ed2244a2b3d3b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$randnum,
        const_str_digest_7b774e5031cf586ccccaacc0eb142666,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_3_read_random_odd_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function_3_read_random_odd_int,
        const_str_plain_read_random_odd_int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b3aa32abff40d252ac9023689105ae4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$randnum,
        const_str_digest_6b9f1018cf396a41f991d26597353e45,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$randnum$$$function_4_randint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$randnum$$$function_4_randint,
        const_str_plain_randint,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9a989e56e40813e423ba26fffab2142a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_rsa$randnum,
        const_str_digest_518c6321195a4820b922b274f8b85542,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_rsa$randnum =
{
    PyModuleDef_HEAD_INIT,
    "rsa.randnum",
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
MOD_ENTRY_DECL(rsa$randnum)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(rsa$randnum)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_rsa$randnum );
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
    puts("rsa.randnum: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.randnum: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("rsa.randnum: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrsa$randnum" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_rsa$randnum = Py_InitModule4(
        "rsa.randnum",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_rsa$randnum = PyModule_Create( &mdef_rsa$randnum );
#endif

    moduledict_rsa$randnum = MODULE_DICT( module_rsa$randnum );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_rsa$randnum,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_rsa$randnum,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$randnum,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_rsa$randnum,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_rsa$randnum );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_38ae76d41c37a561fb493fd3359762a3, module_rsa$randnum );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1c0fd616cf77714eb052ac3a3fb60503;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_43aa329ac4e6b0976464495569d42d07;
        UPDATE_STRING_DICT0( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_3622edd2b205b911644c40daf72f7e9c;
        UPDATE_STRING_DICT0( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1c0fd616cf77714eb052ac3a3fb60503 = MAKE_MODULE_FRAME( codeobj_1c0fd616cf77714eb052ac3a3fb60503, module_rsa$randnum );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1c0fd616cf77714eb052ac3a3fb60503 );
    assert( Py_REFCNT( frame_1c0fd616cf77714eb052ac3a3fb60503 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_3622edd2b205b911644c40daf72f7e9c;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_rsa$randnum;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1c0fd616cf77714eb052ac3a3fb60503->m_frame.f_lineno = 21;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_rsa;
        tmp_globals_name_2 = (PyObject *)moduledict_rsa$randnum;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_common_str_plain_transform_tuple;
        tmp_level_name_2 = const_int_0;
        frame_1c0fd616cf77714eb052ac3a3fb60503->m_frame.f_lineno = 23;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_common );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_common, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_transform );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_transform, tmp_assign_source_7 );
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
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_865e7095d477d90f1eead964158b0a6f;
        tmp_globals_name_3 = (PyObject *)moduledict_rsa$randnum;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_byte_tuple;
        tmp_level_name_3 = const_int_0;
        frame_1c0fd616cf77714eb052ac3a3fb60503->m_frame.f_lineno = 24;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_byte );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_byte, tmp_assign_source_8 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c0fd616cf77714eb052ac3a3fb60503 );
#endif
    popFrameStack();

    assertFrameObject( frame_1c0fd616cf77714eb052ac3a3fb60503 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c0fd616cf77714eb052ac3a3fb60503 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c0fd616cf77714eb052ac3a3fb60503, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c0fd616cf77714eb052ac3a3fb60503->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c0fd616cf77714eb052ac3a3fb60503, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_rsa$randnum$$$function_1_read_random_bits(  );



        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_read_random_bits, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_rsa$randnum$$$function_2_read_random_int(  );



        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_read_random_int, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_rsa$randnum$$$function_3_read_random_odd_int(  );



        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_read_random_odd_int, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_rsa$randnum$$$function_4_randint(  );



        UPDATE_STRING_DICT1( moduledict_rsa$randnum, (Nuitka_StringObject *)const_str_plain_randint, tmp_assign_source_12 );
    }

    return MOD_RETURN_VALUE( module_rsa$randnum );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
